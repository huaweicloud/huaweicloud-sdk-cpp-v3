

#include "huaweicloud/modelarts/v1/model/PluginTemplateSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginTemplateSpec::PluginTemplateSpec()
{
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionsIsSet_ = false;
}

PluginTemplateSpec::~PluginTemplateSpec() = default;

void PluginTemplateSpec::validate()
{
}

web::json::value PluginTemplateSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool PluginTemplateSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, PluginTemplateVersionV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


std::string PluginTemplateSpec::getType() const
{
    return type_;
}

void PluginTemplateSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginTemplateSpec::typeIsSet() const
{
    return typeIsSet_;
}

void PluginTemplateSpec::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginTemplateSpec::getDescription() const
{
    return description_;
}

void PluginTemplateSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginTemplateSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginTemplateSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, PluginTemplateVersionV2>& PluginTemplateSpec::getVersions()
{
    return versions_;
}

void PluginTemplateSpec::setVersions(const std::map<std::string, PluginTemplateVersionV2>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool PluginTemplateSpec::versionsIsSet() const
{
    return versionsIsSet_;
}

void PluginTemplateSpec::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}


