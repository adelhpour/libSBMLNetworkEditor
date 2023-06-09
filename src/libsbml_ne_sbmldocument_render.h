#ifndef __LIBSBML_NE_UTIL_RENDER_H_
#define __LIBSBML_NE_UTIL_RENDER_H_

#include "libsbml_ne_common.h"

#ifndef SWIG
#include "sbml/SBMLTypes.h"
#include "sbml/packages/layout/common/LayoutExtensionTypes.h"
#include "sbml/packages/render/common/RenderExtensionTypes.h"
#endif

namespace LIBSBML_NETWORKEDITOR_CPP_NAMESPACE {

/// @brief Get the List of global render Information of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return a pointer to the ListOfRenderInformationBase object of the SBML document.
LIBSBML_NETWORKEDITOR_EXTERN ListOfGlobalRenderInformation* getListOfGlobalRenderInformation(SBMLDocument* document);

/// @brief Returns the number of items in the ListOfGlobalRenderInformation of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return the number of items in the ListOfGlobalRenderInformation of the SBML document, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getNumGlobalRenderInformation(SBMLDocument* document);

/// @brief Returns a pointer to the GlobalRenderInformation with the given index in the ListOfGlobalRenderInformation of the SBML document.
/// @param renderIndex the index number of the GlobalRenderInformation to return.
/// @return the @c the nth GlobalRenderInformation in the ListOfGlobalRenderInformation of the SBML document or NULL if
/// no such GlobalRenderInformation exists or the document is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN GlobalRenderInformation* getGlobalRenderInformation(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Add GlobalRenderInformation to list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param globalRenderInformation a pointer to the GlobalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addGlobalRenderInformation(SBMLDocument* document, GlobalRenderInformation* globalRenderInformation);

/// @brief Create a GlobalRenderInformation object and add it to list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return a pointer to the created GlobalRenderInformation object.
LIBSBML_NETWORKEDITOR_EXTERN GlobalRenderInformation* createGlobalRenderInformation(SBMLDocument* document);

/// @brief Remove all the global render information objects from the list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int removeAllGlobalRenderInformation(SBMLDocument* document);

/// @brief Set all the necessary features for the global render information object.
/// @param document a pointer to the SBMLDocument object.
/// @param globalRenderInformation a pointer to the GlobalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setDefaultGlobalRenderInformationFeatures(SBMLDocument* document, GlobalRenderInformation* globalRenderInformation);

/// @brief Get the List of local render Information of the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return a pointer to the ListOfGlobalInformationBase object of this Layout object.
LIBSBML_NETWORKEDITOR_EXTERN ListOfLocalRenderInformation* getListOfLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Returns the number of items in the ListOfGlobalRenderInformation of the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return the number of items in the ListOfGlobalRenderInformation of this Layout object, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getNumLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Returns a pointer to the LocalRenderInformation object with the given index in the ListOfLocalRenderInformation of
/// the layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param renderIndex the index number of the GlobalRenderInformation to return.
/// @return the @c the LocalRenderInformation with the given index in the ListOfLocalRenderInformation of this Layout object or NULL if
/// no such LocalRenderInformation exists or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN LocalRenderInformation* getLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0, unsigned int renderIndex = 0);

/// @brief Add LocalRenderInformation to the list of local renders of the first Layout of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addLocalRenderInformation(SBMLDocument* document, LocalRenderInformation* localRenderInformation);

/// @brief Add LocalRenderInformation to list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex, LocalRenderInformation* localRenderInformation);

/// @brief Create a LocalRenderInformation object and add it to list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return a pointer to the created LocalRenderInformation object.
LIBSBML_NETWORKEDITOR_EXTERN LocalRenderInformation* createLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Remove all the local render information objects from the list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int removeAllLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Set all the necessary features for the local render information object in the first Layout object of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setDefaultLocalRenderInformationFeatures(SBMLDocument* document, LocalRenderInformation* localRenderInformation);

/// @brief Set all the necessary features for the local render information object in the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setDefaultLocalRenderInformationFeatures(SBMLDocument* document, unsigned int layoutIndex, LocalRenderInformation* localRenderInformation);

/// @brief Create a GlobalRenderInformation object and add it to list of global renders of the SBML document, and
/// Create a LocalRenderInformation object, add it to list of local renders of the Layout of the SBML document, and
/// set all the necessary features for them.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int createDefaultRenderInformation(SBMLDocument* document);

/// @brief Create a GlobalRenderInformation object, add it to list of global renders of the SBML document, and
/// set all the necessary features for it.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int createDefaultGlobalRenderInformation(SBMLDocument* document);

/// @brief Create a LocalRenderInformation object, add it to list of local renders of the Layout of the SBML document, and
/// set all the necessary features for it.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int createDefaultLocalRenderInformation(SBMLDocument* document);

/// @brief Predicates returning @c true if the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return @c true if the "backgroundColor" attribute of this GlobalRenderInformation object is set, @c false if either the "backgroundColor"
/// attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetBackgroundColor(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the value of the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return the "backgroundColor" attribute of this RenderInformationBase object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getBackgroundColor(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Sets the value of the "backgroundColor" attribute of the first GlobalRenderInformation object.
/// @param document a pointer to the SBMLDocument object.
/// @param backgroundColor a string value to use as the value of the "backgroundColor" attribute of this RenderInformationBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setBackgroundColor(SBMLDocument* document, const std::string& backgroundColor);

/// @brief Sets the value of the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @param backgroundColor a string value to use as the value of the "backgroundColor" attribute of this RenderInformationBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setBackgroundColor(SBMLDocument* document, unsigned int renderIndex, const std::string& backgroundColor);

/// @brief Returns the number of ColorDefinitions of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @return the number of ColorDefinitions of this RenderInformationBase object, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getNumColorDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns a ColorDefinition from all RenderInformationBase objects of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the @c ColorDefinition in the ListOfColorDefinitions within this RenderInformationBase with the given sid or @c NULL if no such ColorDefinition exists.
LIBSBML_NETWORKEDITOR_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, const std::string& sid);

/// @brief Returns a ColorDefinition from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the @c ColorDefinition in the ListOfColorDefinitions within this RenderInformationBase with the given sid or @c NULL if no such ColorDefinition exists.
LIBSBML_NETWORKEDITOR_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the ColorDefinition with the given index of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param colorIndex the index value of the ColorDefinition to return.
/// @return the @c ColorDefinition with the given index, or NULL if ColorDefinition does not exist or the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int colorIndex = 0);

/// @brief Predicates returning @c true if the "value" attribute of the ColorDefinition with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return @c true if the "value" attribute of this ColorDefinition object is set, @c false if either the "value"
/// attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetValue(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "value" attribute of the ColorDefinition with the given identifier
/// in the RenderInformationBase with the given index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return @c true if the "value" attribute of this ColorDefinition object is set, @c false if either the "value"
/// attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "value" attribute of the ColorDefinition with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the "value" attribute of the ColorDefinition object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getValue(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "value" attribute of the ColorDefinition with the given identifier in the RenderInformationBase with the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the "value" attribute of the ColorDefinition object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "value" attribute of the ColorDefinition with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @param value a string value to use as the value of the "value" attribute of this ColorDefinition object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setValue(SBMLDocument* document, const std::string& sid, const std::string& value);

/// @brief Sets the value of the "value" attribute of the ColorDefinition with the given identifier in the RenderInformationBase with the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @param value a string value to use as the value of the "value" attribute of this ColorDefinition object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& value);

/// @brief Returns the number of GradientDefinitions of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @return the number of GradientDefinitions of this RenderInformationBase object, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getNumGradientDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns a GradientBase from all the RenderInformationBase objects of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the @c GradientBase in the ListOfGradientDefinitions within all RenderInformationBase objects with the given sid or @c NULL if no such GradientBase exists.
LIBSBML_NETWORKEDITOR_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, const std::string& sid);

/// @brief Returns a GradientBase from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the @c GradientBase in the ListOfGradientDefinitions within this RenderInformationBase with the given sid or @c NULL if no such GradientBase exists.
LIBSBML_NETWORKEDITOR_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the GradientBase with the given index of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param gradientIndex the index value of the GradientBase to return.
/// @return the @c GradientBase with the given index, or NULL if GradientBase does not exist or the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int gradientIndex = 0);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in all RenderInformationBase objects of SBML document is of type LinearGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type LinearGradient, false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isLinearGradient(SBMLDocument* document, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in the RenderInformationBase object with the given index of the SBML document is of type LinearGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type LinearGradient, false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isLinearGradient(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in all RenderInformationBase objects of SBML document with the given identifier is of type RadialGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type RadialGradient, false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isRadialGradient(SBMLDocument* document, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in the RenderInformationBase object with the given index of SBML document is of type RadialGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type RadialGradient, false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isRadialGradient(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Predicates returning @c true if the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "spreadMethod" attribute of this GradientBase object is set, @c false if either the "spreadMethod"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetSpreadMethod(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "spreadMethod" attribute of this GradientBase object is set, @c false if either the "spreadMethod"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "spreadMethod" attribute of the GradientBase object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getSpreadMethod(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "spreadMethod" attribute of the GradientBase object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param spreadMethod a string value to use as the value of the "spreadMethod" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setSpreadMethod(SBMLDocument* document, const std::string& sid, const std::string& spreadMethod);

/// @brief Sets the value of the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param spreadMethod a string value to use as the value of the "spreadMethod" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& spreadMethod);

/// @brief Returns Get the number of GradientStop objects in the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the number of GradientStop objects in this GradientBase, or 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumGradientStops(SBMLDocument* document, const std::string& sid);

/// @brief Returns Get the number of GradientStop objects in the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the number of GradientStop objects in this GradientBase, or 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumGradientStops(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the GradientStop object with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop to retrieve.
/// @return the GradientStop at the given index of the GradientBase object, or NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN GradientStop* getGradientStop(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the GradientStop object with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop to retrieve.
/// @return the GradientStop at the given index of the GradientBase object, or NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN GradientStop* getGradientStop(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "offset" attribute of the GradientStop with the given index of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return @c true if the "offset" attribute of the GradientStop with the given index of this GradientBase object is set, @c false if
/// either the "offset" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetOffset(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "offset" attribute of the GradientStop with the given index of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return @c true if the "offset" attribute of the GradientStop with the given index of this GradientBase object is set, @c false if
/// either the "offset" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object, or @c RelAbsVector() if the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getOffset(SBMLDocument* document, const std::string& sid , unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object, or @c RelAbsVector() if the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid , unsigned int gradientStopIndex = 0);

/// @brief Sets the value of the "offset" attribute of the first GradientStop of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the first GradientStop of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setOffset(SBMLDocument* document, const std::string& sid, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the first GradientStop of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the first GradientStop of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setOffset(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex, const RelAbsVector& offset);

/// @brief Predicates returning @c true if the "stop-color" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "stop-color" attribute of nth GradientStop of this GradientBase object is set, @c false if either the "stop-color"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "stop-color" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "stop-color" attribute of nth GradientStop of this GradientBase object is set, @c false if either the "stop-color"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "stop-color" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "stop-color" attribute of the GradientStop with the given index of this GradientStop object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "stop-color" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "stop-color" attribute of the GradientStop with the given index of this GradientStop object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Sets the value of the "stop-color" attribute of the first GradientStop of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the first GradientStop of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStopColor(SBMLDocument* document, const std::string& sid, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the first GradientStop of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the first GradientStop of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the GradientStop with the given index of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the GradientStop with the given index of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the GradientStop with the given index of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the GradientStop with the given index of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex, const std::string& stopColor);

/// @brief Predicates returning @c true if the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x1" attribute of this GradientBase object is set, @c false if either the "x1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientX1(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x1" attribute of this GradientBase object is set, @c false if either the "x1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientX1(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a RelAbsVector to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientX1(SBMLDocument* document, const std::string& sid, const RelAbsVector& x1);

/// @brief Sets the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a RelAbsVector to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& x1);

/// @brief Predicates returning @c true if the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x2" attribute of this GradientBase object is set, @c false if either the "x2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientX2(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x2" attribute of this GradientBase object is set, @c false if either the "x2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientX2(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a RelAbsVector to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientX2(SBMLDocument* document, const std::string& sid, const RelAbsVector& x2);

/// @brief Sets the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a RelAbsVector to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& x2);

/// @brief Predicates returning @c true if the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y1" attribute of this GradientBase object is set, @c false if either the "y1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientY1(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y1" attribute of this GradientBase object is set, @c false if either the "y1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientY1(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a RelAbsVector to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientY1(SBMLDocument* document, const std::string& sid, const RelAbsVector& y1);

/// @brief Sets the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a RelAbsVector to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& y1);

/// @brief Predicates returning @c true if the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y2" attribute of this GradientBase object is set, @c false if either the "y2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientY2(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y2" attribute of this GradientBase object is set, @c false if either the "y2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientY2(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a RelAbsVector to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientY2(SBMLDocument* document, const std::string& sid, const RelAbsVector& y2);

/// @brief Sets the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a RelAbsVector to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& y2);

/// @brief Predicates returning @c true if the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cx" attribute of this GradientBase object is set, @c false if either the "cx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientCx(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cx" attribute of this GradientBase object is set, @c false if either the "cx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientCx(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientCx(SBMLDocument* document, const std::string& sid, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& cx);

/// @brief Predicates returning @c true if the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cy" attribute of this GradientBase object is set, @c false if either the "cy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientCy(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cy" attribute of this GradientBase object is set, @c false if either the "cy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientCy(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientCy(SBMLDocument* document, const std::string& sid, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& cy);

/// @brief Predicates returning @c true if the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fx" attribute of this GradientBase object is set, @c false if either the "fx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientFx(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fx" attribute of this GradientBase object is set, @c false if either the "fx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientFx(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a RelAbsVector to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientFx(SBMLDocument* document, const std::string& sid, const RelAbsVector& fx);

/// @brief Sets the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a RelAbsVector to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& fx);

/// @brief Predicates returning @c true if the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fy" attribute of this GradientBase object is set, @c false if either the "fy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientFy(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fy" attribute of this GradientBase object is set, @c false if either the "fy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientFy(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a RelAbsVector to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientFy(SBMLDocument* document, const std::string& sid, const RelAbsVector& fy);

/// @brief Sets the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a RelAbsVector to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& fy);

/// @brief Predicates returning @c true if the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "r" attribute of this GradientBase object is set, @c false if either the "r" attribute is not set
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientR(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "r" attribute of this GradientBase object is set, @c false if either the "r" attribute is not set
LIBSBML_NETWORKEDITOR_EXTERN bool isSetRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientR(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a RelAbsVector to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientR(SBMLDocument* document, const std::string& sid, const RelAbsVector& r);

/// @brief Sets the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a RelAbsVector to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& r);

/// @brief Returns the number of LineEndings of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @return the number of LineEndings of this RenderInformationBase object, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getNumLineEndings(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns a LineEnding from all the RenderInformationBase objects of the SBML document based on its identifier.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the @c LineEnding in the ListOfLineEndings within this RenderInformationBase with the given sid or @c NULL if no such LineEnding exists.
LIBSBML_NETWORKEDITOR_EXTERN LineEnding* getLineEnding(SBMLDocument* document, const std::string& sid);

/// @brief Returns a LineEnding from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the @c LineEnding in the ListOfLineEndings within this RenderInformationBase with the given sid or @c NULL if no such LineEnding exists.
LIBSBML_NETWORKEDITOR_EXTERN LineEnding* getLineEnding(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the LineEnding with the given index of the RenderInformationBase object with given index of the SBML document the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param lineEndingIndex the index value of the LineEnding to return.
/// @return the @c LineEnding with the given index, or NULL if LineEnding does not exist or the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN LineEnding* getLineEnding(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int lineEndingIndex = 0);

/// @brief Predicates returning @c true if the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the first RenderInformationBase object of the SBML document is set.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "enableRotationalMapping" attribute of this LineEnding object is set, @c false if either the "enableRotationalMapping" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetEnableRotationalMapping(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "enableRotationalMapping" attribute of this LineEnding object is set, @c false if either the "enableRotationalMapping" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the "enableRotationalMapping" attribute of the LineEnding object, or @c false if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN bool getEnableRotationalMapping(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the "enableRotationalMapping" attribute of the LineEnding object, or @c false if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN bool getEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the first RenderInformationBase object of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param enableRotationalMapping a boolean to use as the value of the "enableRotationalMapping" attribute of this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setEnableRotationalMapping(SBMLDocument* document, const std::string& sid, bool enableRotationalMapping);

/// @brief Sets the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param enableRotationalMapping a boolean to use as the value of the "enableRotationalMapping" attribute of this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, bool enableRotationalMapping);

/// Returns the bounding box for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the bounding box for the LineEnding object, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN BoundingBox* getBoundingBoxOfLineEnding(SBMLDocument* document, const std::string& sid);

/// Returns the bounding box for the LineEnding with the given identifier in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the bounding box for the LineEnding object, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN BoundingBox* getBoundingBoxOfLineEnding(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Returns the value of the "group" element of the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "group" element of this LineEnding as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroupOfLineEnding(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "group" element of the LineEnding with the given identifier in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "group" element of this LineEnding as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroupOfLineEnding(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyle(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyle(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleById(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleById(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param id the id attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleById(SBMLDocument* document, const std::string& id);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id the id attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleById(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByRole(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByRole(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param role the role attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByRole(SBMLDocument* document, const std::string& role);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param role the role attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByRole(SBMLDocument* document, unsigned int renderIndex, const std::string& role);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByType(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByType(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param type the type attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByType(SBMLDocument* document, const std::string& type);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param type the type attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN Style* getStyleByType(SBMLDocument* document, unsigned int renderIndex, const std::string& type);

/// Returns the value of the "group" element of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the value of the "group" element of the Style for this GraphicalObjet as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, GraphicalObject* graphicalObject);

/// Returns the value of the "group" element of the Style for this GraphicalObject in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the value of the "group" element of the Style for this GraphicalObjet as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// Returns the value of the "group" element of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, const std::string& attribute);

/// Returns the value of the "group" element of the Style that matches this attribute (id, role, type) of a GraphicalObject in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBML_NETWORKEDITOR_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeColor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStrokeColor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& stroke);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeColor(SBMLDocument* document, const std::string& attribute, const std::string& stroke);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeWidth(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c 0.0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const double getStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject, or @c 0.0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const double getStrokeWidth(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, const double& strokeWidth);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeWidth(SBMLDocument* document, const std::string& attribute, const double& strokeWidth);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStrokeDashArray(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, or an empty vector if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::vector<unsigned int> getStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or an empty vector if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::vector<unsigned int> getStrokeDashArray(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeDashArray a vector to use as the value  of the "stroke-dasharray" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject, const std::vector<unsigned int>& strokeDashArray);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeDashArray a vector to use as the value  of the "stroke-dasharray" attribute of the the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStrokeDashArray(SBMLDocument* document, const std::string& attribute, const std::vector<unsigned int>& strokeDashArray);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumStrokeDashes(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumStrokeDashes(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeDashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int strokeDashIndex = 0);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeDashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or @c 0 if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int strokeDashIndex = 0);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN unsigned int setStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeDashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN unsigned int setStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int strokeDashIndex, unsigned int dash);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN unsigned int setStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeDashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN unsigned int setStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int strokeDashIndex, unsigned int dash);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontColor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontColor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontColor);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontColor(SBMLDocument* document, const std::string& attribute, const std::string& fontColor);

/// @brief Predicates returning @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-family"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-family"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontFamily(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontFamily(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontFamily);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontFamily(SBMLDocument* document, const std::string& attribute, const std::string& fontFamily);

/// @brief Predicates returning @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-size"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontSize(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-size"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontSize(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c RelAbsVector() if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getFontSize(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getFontSize(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontSize(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontSize a RelAbsVector to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontSize(SBMLDocument* document, const std::string& attribute, const RelAbsVector& fontSize);

/// @brief Predicates returning @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-weight"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-weight"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontWeight(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontWeight(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontWeight);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontWeight(SBMLDocument* document, const std::string& attribute, const std::string& fontWeight);

/// @brief Predicates returning @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-style"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-style"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFontStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFontStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontStyle);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFontStyle(SBMLDocument* document, const std::string& attribute, const std::string& fontStyle);

/// @brief Predicates returning @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "text-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "text-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetTextAnchor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getTextAnchor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& textAnchor);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setTextAnchor(SBMLDocument* document, const std::string& attribute, const std::string& textAnchor);

/// @brief Predicates returning @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "vtext-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "vtext-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetVTextAnchor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getVTextAnchor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& vtextAnchor);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setVTextAnchor(SBMLDocument* document, const std::string& attribute, const std::string& vtextAnchor);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFillColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFillColor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "fill" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "fill" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFillColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "fill" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFillColor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFillColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fillColor);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFillColor(SBMLDocument* document, const std::string& attribute, const std::string& fillColor);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFillRule(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetFillRule(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFillRule(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getFillRule(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFillRule(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fillRule);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setFillRule(SBMLDocument* document, const std::string& attribute, const std::string& fillRule);

/// @brief Predicates returning @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "startHead"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStartHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "startHead"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetStartHead(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStartHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getStartHead(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param startHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStartHead(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& startHead);

/// @brief Sets the value of the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param startHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setStartHead(SBMLDocument* document, const std::string& attribute, const std::string& startHead);

/// @brief Predicates returning @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "endHead"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetEndHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "endHead"
/// attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetEndHead(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getEndHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN const std::string getEndHead(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param endHead a string value to use as the value of the "endHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setEndHead(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& endHead);

/// @brief Sets the value of the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param endHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setEndHead(SBMLDocument* document, const std::string& attribute, const std::string& endHead);

/// @brief Returns number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumGeometricShapes(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns number of Transformation2D objects in the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN unsigned int getNumGeometricShapes(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the Transformation2D at the given index the RenderGroup of the Style for this GraphicalObject object, @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN Transformation2D* getGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN Transformation2D* getGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Add a geometric shape to the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& shape);

/// @brief Add a geometric shape to the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param shape a string value indicating the shape of the geometric shape to be added.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addGeometricShape(SBMLDocument* document, const std::string& attribute, const std::string& shape);

/// @brief Remove a geometric shape from the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to remove.
/// @return a pointer to the nth Transformation2D of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN Transformation2D* removeGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Remove a geometric shape from the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to remove.
/// @return a pointer to the nth Transformation2D of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBML_NETWORKEDITOR_EXTERN Transformation2D* removeGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle, @c false if
/// it is not of type Rectangle or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isRectangle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle, @c false if
/// it is not of type Rectangle or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isRectangle(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse, @c false if
/// it is not of type Ellipse or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isEllipse(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse, @c false if
/// it is not of type Ellipse or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isEllipse(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon, @c false if
/// it is not of type Polygon or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isPolygon(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon, @c false if
/// it is not of type Polygon or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isPolygon(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve, @c false if
/// it is not of type RenderCurve or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isRenderCurve(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve, @c false if
/// it is not of type RenderCurve or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isRenderCurve(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image, @c false if
/// it is not of type Image or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isImage(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image, @c false if
/// it is not of type Image or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isImage(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text, @c false if
/// it is not of type Text or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isText(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text, @c false if
/// it is not of type Text or is or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isText(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "x" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "x" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "x" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "x" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "x" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "x" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Predicates returning @c true if the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "y" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "y" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Predicates returning @c true if the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "width" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "width" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Predicates returning @c true if the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "height" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "height" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "height" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Predicates returning @c true if the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ratio" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ratio" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ratio" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ratio" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const double getGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ratio" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ratio" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const double getGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ratio" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& ratio);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Predicates returning @c true if the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cx" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cx" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& cx);


/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& cx);

/// @brief Predicates returning @c true if the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cy" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cy" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& cy);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Returns the number of elements of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the number of elements of the Transformation2D object at the given index of the RenderGroup of this Style for this GraphicalObject, or @c 0 if
/// either Transformation2D object does not exists, does not have any elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getGeometricShapeNumElements(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the number of elements of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the number of elements of the Transformation2D object at the given index of the RenderGroup of this Style for this GraphicalObject, or @c 0 if
/// either Transformation2D object does not exists, does not have any elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const unsigned int getGeometricShapeNumElements(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Returns the value of the "y" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Returns the value of the "x" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Returns the value of the "y" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Returns the value of the "x" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Returns the value of the "y" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const RelAbsVector getGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Add a render point to the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addRenderPointToGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Add a render point to the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addRenderPointToGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Add a render cubic bezier to the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addRenderCubicBezierToGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Add a render cubic bezier to the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int addRenderCubicBezierToGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Remove an element from the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param index an unsigned int representing the index of the element to be removed.
/// @return a pointer to the RenderPoint at the given index of this Transformation2D object, or @c NULL if
/////// either Transformation2D object does not exists, does not have any elements, it has less than index elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN RenderPoint* removeElementFromGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Remove an element from the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param index an unsigned int representing the index of the element to be removed.
/// @return a pointer to the RenderPoint at the given index of this Transformation2D object, or @c NULL if
/////// either Transformation2D object does not exists, does not have any elements, it has less than index elements, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN RenderPoint* removeElementFromGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier, @c false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isRenderCubicBezier(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type RenderCubicBezier.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier, @c false otherwise
LIBSBML_NETWORKEDITOR_EXTERN bool isRenderCubicBezier(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "href" attribute is not set or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject = 0, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "href" attribute is not set or the object is @c NULL .
LIBSBML_NETWORKEDITOR_EXTERN bool isSetGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "href" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "href" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const std::string getGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "href" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "href" attribute, it is not set, or the object is @c NULL.
LIBSBML_NETWORKEDITOR_EXTERN const std::string getGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "href" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& href);

/// @brief Sets the value of the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const std::string& href);

/// @brief Sets the value of the "href" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHref(SBMLDocument* document, const std::string& attribute, const std::string& href);

/// @brief Sets the value of the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBML_NETWORKEDITOR_EXTERN int setGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const std::string& href);

}

#endif