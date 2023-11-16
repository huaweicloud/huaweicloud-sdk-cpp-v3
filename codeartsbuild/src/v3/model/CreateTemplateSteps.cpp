

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplateSteps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplateSteps::CreateTemplateSteps()
{
    propertiesIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

CreateTemplateSteps::~CreateTemplateSteps() = default;

void CreateTemplateSteps::validate()
{
}

web::json::value CreateTemplateSteps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool CreateTemplateSteps::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& CreateTemplateSteps::getProperties()
{
    return properties_;
}

void CreateTemplateSteps::setProperties(const std::map<std::string, Object>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool CreateTemplateSteps::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void CreateTemplateSteps::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string CreateTemplateSteps::getModuleId() const
{
    return moduleId_;
}

void CreateTemplateSteps::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool CreateTemplateSteps::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void CreateTemplateSteps::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string CreateTemplateSteps::getName() const
{
    return name_;
}

void CreateTemplateSteps::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTemplateSteps::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTemplateSteps::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTemplateSteps::getVersion() const
{
    return version_;
}

void CreateTemplateSteps::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateTemplateSteps::versionIsSet() const
{
    return versionIsSet_;
}

void CreateTemplateSteps::unsetversion()
{
    versionIsSet_ = false;
}

bool CreateTemplateSteps::isEnable() const
{
    return enable_;
}

void CreateTemplateSteps::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CreateTemplateSteps::enableIsSet() const
{
    return enableIsSet_;
}

void CreateTemplateSteps::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


