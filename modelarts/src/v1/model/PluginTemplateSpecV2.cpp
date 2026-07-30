

#include "huaweicloud/modelarts/v1/model/PluginTemplateSpecV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginTemplateSpecV2::PluginTemplateSpecV2()
{
    optional_ = false;
    optionalIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    logoURL_ = "";
    logoURLIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionsIsSet_ = false;
}

PluginTemplateSpecV2::~PluginTemplateSpecV2() = default;

void PluginTemplateSpecV2::validate()
{
}

web::json::value PluginTemplateSpecV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(optionalIsSet_) {
        val[utility::conversions::to_string_t("optional")] = ModelBase::toJson(optional_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(logoURLIsSet_) {
        val[utility::conversions::to_string_t("logoURL")] = ModelBase::toJson(logoURL_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool PluginTemplateSpecV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("optional"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptional(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("logoURL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logoURL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoURL(refVal);
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
            std::vector<PluginTemplateVersionV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


bool PluginTemplateSpecV2::isOptional() const
{
    return optional_;
}

void PluginTemplateSpecV2::setOptional(bool value)
{
    optional_ = value;
    optionalIsSet_ = true;
}

bool PluginTemplateSpecV2::optionalIsSet() const
{
    return optionalIsSet_;
}

void PluginTemplateSpecV2::unsetoptional()
{
    optionalIsSet_ = false;
}

std::string PluginTemplateSpecV2::getType() const
{
    return type_;
}

void PluginTemplateSpecV2::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginTemplateSpecV2::typeIsSet() const
{
    return typeIsSet_;
}

void PluginTemplateSpecV2::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginTemplateSpecV2::getLogoURL() const
{
    return logoURL_;
}

void PluginTemplateSpecV2::setLogoURL(const std::string& value)
{
    logoURL_ = value;
    logoURLIsSet_ = true;
}

bool PluginTemplateSpecV2::logoURLIsSet() const
{
    return logoURLIsSet_;
}

void PluginTemplateSpecV2::unsetlogoURL()
{
    logoURLIsSet_ = false;
}

std::string PluginTemplateSpecV2::getDescription() const
{
    return description_;
}

void PluginTemplateSpecV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginTemplateSpecV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginTemplateSpecV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<PluginTemplateVersionV2>& PluginTemplateSpecV2::getVersions()
{
    return versions_;
}

void PluginTemplateSpecV2::setVersions(const std::vector<PluginTemplateVersionV2>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool PluginTemplateSpecV2::versionsIsSet() const
{
    return versionsIsSet_;
}

void PluginTemplateSpecV2::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}


