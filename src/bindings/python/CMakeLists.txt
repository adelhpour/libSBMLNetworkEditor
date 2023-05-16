set(CMAKE_INCLUDE_CURRENT_DIR ON)

## find python packages
find_package(Python COMPONENTS Interpreter Development)

## determine local dependencies, so as to re-swig if one of them changed
file(GLOB SWIG_DEPENDENCIES
        ${CMAKE_CURRENT_SOURCE_DIR}/*.i
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cmake
        ${CMAKE_CURRENT_SOURCE_DIR}/../swig/*.i
        ${CMAKE_CURRENT_SOURCE_DIR}/../swig/*.h)

## Swig bindings
add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/libsbml_networkeditor_wrap.cpp
        ${CMAKE_CURRENT_BINARY_DIR}/libsbml_networkeditor.py

        COMMAND "${SWIG_EXECUTABLE}"
        ARGS  -I${CMAKE_CURRENT_SOURCE_DIR}/../swig/
        -I${CMAKE_CURRENT_SOURCE_DIR}
        -I${CMAKE_CURRENT_BINARY_DIR}
        -I${CMAKE_SOURCE_DIR}/src
        -DGENERATING_DOCS
        -c++
        -python
        ${SWIG_EXTRA_ARGS}
        -o ${CMAKE_CURRENT_BINARY_DIR}/libsbml_networkeditor_wrap.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/libsbml_networkeditor.i
        MAIN_DEPENDENCY ${CMAKE_CURRENT_SOURCE_DIR}/libsbml_networkeditor.i
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
        ${SWIG_DEPENDENCIES}
        COMMENT "Swig Python source")

add_custom_target(binding_python_swig ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/libsbml_networkeditor_wrap.cpp)

add_library(binding_python_lib SHARED libsbml_networkeditor_wrap.cpp)

target_include_directories(binding_python_lib PRIVATE
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../swig
        ${GRAPHVIZ_INCLUDEDIR})

target_link_libraries(binding_python_lib
        Python::Python
        sbml_networkeditor-static
        ${GRAPHVIZ_LIBS_FIRSTHAND})

add_dependencies(binding_python_lib binding_python_swig)
set_target_properties(binding_python_lib PROPERTIES OUTPUT_NAME "_libsbml_networkeditor")

if (UNIX)
    set_target_properties (binding_python_lib PROPERTIES PREFIX "")
    set_target_properties (binding_python_lib PROPERTIES SUFFIX ".so")
else()
    if (CYGWIN)
        set_target_properties (binding_python_lib PROPERTIES PREFIX "")
        set_target_properties (binding_python_lib PROPERTIES SUFFIX ".dll")
    else()
        set_target_properties (binding_python_lib PROPERTIES SUFFIX ".pyd")
    endif()
endif()

if (APPLE)
    add_custom_command(TARGET binding_python_lib POST_BUILD
            COMMAND ${CMAKE_INSTALL_NAME_TOOL} -change
            "libsbml.5.dylib" "@rpath/libsbml.5.dylib"
            $<TARGET_FILE:binding_python_lib>
            COMMAND ${CMAKE_INSTALL_NAME_TOOL} -change
            "/usr/local/opt/graphviz/lib/libgvc.6.dylib"
            "@rpath/libgvc.6.dylib" $<TARGET_FILE:binding_python_lib>
            COMMAND ${CMAKE_INSTALL_NAME_TOOL} -change
            "/usr/local/opt/graphviz/lib/libcgraph.6.dylib"
            "@rpath/libcgraph.6.dylib" $<TARGET_FILE:binding_python_lib>
            COMMAND ${CMAKE_INSTALL_NAME_TOOL} -change
            "/usr/local/opt/graphviz/lib/libcdt.5.dylib"
            "@rpath/libcdt.5.dylib" $<TARGET_FILE:binding_python_lib>)
endif()