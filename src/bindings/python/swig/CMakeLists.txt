include(CMakeDependentOption)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_program(SWIG_EXECUTABLE
        NAMES swig
        PATHS
        c:/swigwin-3.0.10
        c:/swigwin-3.0.9
        c:/swigwin-3.0.8
        c:/swigwin-3.0.7
        c:/swigwin-3.0.6
        c:/swigwin-3.0.5
        c:/swigwin-3.0.4
        c:/swigwin-3.0.3
        c:/swigwin-3.0.2
        c:/swigwin-3.0.1
        c:/swigwin-2.0.12
        c:/swigwin-2.0.11
        c:/swigwin-2.0.10
        c:/swigwin-2.0.9
        c:/swigwin-2.0.8
        c:/swigwin-2.0.7
        c:/swigwin-2.0.6
        c:/swigwin-2.0.5
        c:/swigwin-2.0.4
        c:/swigwin-2.0.3
        c:/swigwin-2.0.2
        c:/swigwin-2.0.1
        c:/swigwin-2.0.0
        /usr/local/bin
        /opt/local/bin
        /usr/bin
        "C:/Program Files (x86)/Swig"
        "C:/Program Files/Swig"
        DOC "The file name of the SWIG executable.")
find_package(SWIG)

## determine local dependencies, so as to re-swig if one of them changed
file(GLOB SWIG_DEPENDENCIES ${CMAKE_CURRENT_SOURCE_DIR}/*.i)

## Swig bindings
add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor_wrap.cpp ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor.py
        COMMAND "${SWIG_EXECUTABLE}"
        ARGS -I${CMAKE_CURRENT_SOURCE_DIR}
        -I${CMAKE_CURRENT_BINARY_DIR}
        -I${CMAKE_SOURCE_DIR}/src
        -DGENERATING_DOCS
        -c++
        -python
        ${SWIG_EXTRA_ARGS}
        -o ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor_wrap.cpp
        libsbmlnetworkeditor.i
        MAIN_DEPENDENCY libsbmlnetworkeditor.i
        DEPENDS CMakeLists.txt
        ${SWIG_DEPENDENCIES}
        COMMENT "Swig Python source")

add_custom_target(binding_python_swig ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor_wrap.cpp)

add_library(binding_python_lib SHARED libsbmlnetworkeditor_wrap.cpp)

target_include_directories(binding_python_lib PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(binding_python_lib
        Python::Python
        sbmlnetworkeditor-static)

add_dependencies(binding_python_lib binding_python_swig)
set_target_properties(binding_python_lib PROPERTIES OUTPUT_NAME "_libsbmlnetworkeditor")

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
            $<TARGET_FILE:binding_python_lib>)
endif()

install(TARGETS binding_python_lib DESTINATION ${PYTHON_PACKAGE_INSTALL_DIR}/libsbmlnetworkeditor 	COMPONENT libsbmlnetworkeditor_python_bindings)

if (PYTHON_INSTALL_IN_PREFIX)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor.py  DESTINATION ${PYTHON_PACKAGE_INSTALL_DIR}/libsbmlnetworkeditor COMPONENT libsbmlnetworkeditor_python_bindings)
endif()

if (PYTHON_INSTALL_WITH_SETUP)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor.py DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor RENAME __init__.py COMPONENT python_extra)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libsbmlnetworkeditor/__init__.py DESTINATION ${PYTHON_PACKAGE_INSTALL_DIR}/libsbmlnetworkeditor COMPONENT libsbmlnetworkeditor_python_bindings)
endif()

