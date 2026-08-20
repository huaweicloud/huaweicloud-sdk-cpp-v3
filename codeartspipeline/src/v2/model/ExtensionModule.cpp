

#include "huaweicloud/codeartspipeline/v2/model/ExtensionModule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionModule::ExtensionModule()
{
    baseUrl_ = "";
    baseUrlIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
    publisher_ = "";
    publisherIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    tagsIsSet_ = false;
    urlRelative_ = "";
    urlRelativeIsSet_ = false;
    propertiesListIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    categoriesIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    productLine_ = "";
    productLineIsSet_ = false;
}

ExtensionModule::~ExtensionModule() = default;

void ExtensionModule::validate()
{
}

web::json::value ExtensionModule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseUrlIsSet_) {
        val[utility::conversions::to_string_t("base_url")] = ModelBase::toJson(baseUrl_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(publisherIsSet_) {
        val[utility::conversions::to_string_t("publisher")] = ModelBase::toJson(publisher_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(urlRelativeIsSet_) {
        val[utility::conversions::to_string_t("url_relative")] = ModelBase::toJson(urlRelative_);
    }
    if(propertiesListIsSet_) {
        val[utility::conversions::to_string_t("properties_list")] = ModelBase::toJson(propertiesList_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(productLineIsSet_) {
        val[utility::conversions::to_string_t("product_line")] = ModelBase::toJson(productLine_);
    }

    return val;
}
bool ExtensionModule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            ExtensionModuleProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisher(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url_relative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url_relative"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrlRelative(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertiesList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductLine(refVal);
        }
    }
    return ok;
}


std::string ExtensionModule::getBaseUrl() const
{
    return baseUrl_;
}

void ExtensionModule::setBaseUrl(const std::string& value)
{
    baseUrl_ = value;
    baseUrlIsSet_ = true;
}

bool ExtensionModule::baseUrlIsSet() const
{
    return baseUrlIsSet_;
}

void ExtensionModule::unsetbaseUrl()
{
    baseUrlIsSet_ = false;
}

std::string ExtensionModule::getDescription() const
{
    return description_;
}

void ExtensionModule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExtensionModule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExtensionModule::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ExtensionModule::getId() const
{
    return id_;
}

void ExtensionModule::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExtensionModule::idIsSet() const
{
    return idIsSet_;
}

void ExtensionModule::unsetid()
{
    idIsSet_ = false;
}

std::string ExtensionModule::getLocation() const
{
    return location_;
}

void ExtensionModule::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ExtensionModule::locationIsSet() const
{
    return locationIsSet_;
}

void ExtensionModule::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ExtensionModule::getModuleId() const
{
    return moduleId_;
}

void ExtensionModule::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ExtensionModule::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ExtensionModule::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string ExtensionModule::getName() const
{
    return name_;
}

void ExtensionModule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtensionModule::nameIsSet() const
{
    return nameIsSet_;
}

void ExtensionModule::unsetname()
{
    nameIsSet_ = false;
}

ExtensionModuleProperties ExtensionModule::getProperties() const
{
    return properties_;
}

void ExtensionModule::setProperties(const ExtensionModuleProperties& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ExtensionModule::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ExtensionModule::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string ExtensionModule::getPublisher() const
{
    return publisher_;
}

void ExtensionModule::setPublisher(const std::string& value)
{
    publisher_ = value;
    publisherIsSet_ = true;
}

bool ExtensionModule::publisherIsSet() const
{
    return publisherIsSet_;
}

void ExtensionModule::unsetpublisher()
{
    publisherIsSet_ = false;
}

std::string ExtensionModule::getType() const
{
    return type_;
}

void ExtensionModule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExtensionModule::typeIsSet() const
{
    return typeIsSet_;
}

void ExtensionModule::unsettype()
{
    typeIsSet_ = false;
}

std::string ExtensionModule::getVersion() const
{
    return version_;
}

void ExtensionModule::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ExtensionModule::versionIsSet() const
{
    return versionIsSet_;
}

void ExtensionModule::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& ExtensionModule::getTags()
{
    return tags_;
}

void ExtensionModule::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ExtensionModule::tagsIsSet() const
{
    return tagsIsSet_;
}

void ExtensionModule::unsettags()
{
    tagsIsSet_ = false;
}

std::string ExtensionModule::getUrlRelative() const
{
    return urlRelative_;
}

void ExtensionModule::setUrlRelative(const std::string& value)
{
    urlRelative_ = value;
    urlRelativeIsSet_ = true;
}

bool ExtensionModule::urlRelativeIsSet() const
{
    return urlRelativeIsSet_;
}

void ExtensionModule::unseturlRelative()
{
    urlRelativeIsSet_ = false;
}

std::vector<Object>& ExtensionModule::getPropertiesList()
{
    return propertiesList_;
}

void ExtensionModule::setPropertiesList(const std::vector<Object>& value)
{
    propertiesList_ = value;
    propertiesListIsSet_ = true;
}

bool ExtensionModule::propertiesListIsSet() const
{
    return propertiesListIsSet_;
}

void ExtensionModule::unsetpropertiesList()
{
    propertiesListIsSet_ = false;
}

std::string ExtensionModule::getManifestVersion() const
{
    return manifestVersion_;
}

void ExtensionModule::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ExtensionModule::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ExtensionModule::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::vector<std::string>& ExtensionModule::getCategories()
{
    return categories_;
}

void ExtensionModule::setCategories(const std::vector<std::string>& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool ExtensionModule::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void ExtensionModule::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::string ExtensionModule::getTarget() const
{
    return target_;
}

void ExtensionModule::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool ExtensionModule::targetIsSet() const
{
    return targetIsSet_;
}

void ExtensionModule::unsettarget()
{
    targetIsSet_ = false;
}

std::string ExtensionModule::getProductLine() const
{
    return productLine_;
}

void ExtensionModule::setProductLine(const std::string& value)
{
    productLine_ = value;
    productLineIsSet_ = true;
}

bool ExtensionModule::productLineIsSet() const
{
    return productLineIsSet_;
}

void ExtensionModule::unsetproductLine()
{
    productLineIsSet_ = false;
}

}
}
}
}
}


