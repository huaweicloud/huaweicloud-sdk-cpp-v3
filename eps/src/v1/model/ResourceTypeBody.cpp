

#include "huaweicloud/eps/v1/model/ResourceTypeBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ResourceTypeBody::ResourceTypeBody()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceTypeI18nDisplayName_ = "";
    resourceTypeI18nDisplayNameIsSet_ = false;
    regionsIsSet_ = false;
    global_ = false;
    globalIsSet_ = false;
}

ResourceTypeBody::~ResourceTypeBody() = default;

void ResourceTypeBody::validate()
{
}

web::json::value ResourceTypeBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceTypeI18nDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("resource_type_i18n_display_name")] = ModelBase::toJson(resourceTypeI18nDisplayName_);
    }
    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }
    if(globalIsSet_) {
        val[utility::conversions::to_string_t("global")] = ModelBase::toJson(global_);
    }

    return val;
}
bool ResourceTypeBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type_i18n_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type_i18n_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypeI18nDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobal(refVal);
        }
    }
    return ok;
}


std::string ResourceTypeBody::getResourceType() const
{
    return resourceType_;
}

void ResourceTypeBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceTypeBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceTypeBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ResourceTypeBody::getResourceTypeI18nDisplayName() const
{
    return resourceTypeI18nDisplayName_;
}

void ResourceTypeBody::setResourceTypeI18nDisplayName(const std::string& value)
{
    resourceTypeI18nDisplayName_ = value;
    resourceTypeI18nDisplayNameIsSet_ = true;
}

bool ResourceTypeBody::resourceTypeI18nDisplayNameIsSet() const
{
    return resourceTypeI18nDisplayNameIsSet_;
}

void ResourceTypeBody::unsetresourceTypeI18nDisplayName()
{
    resourceTypeI18nDisplayNameIsSet_ = false;
}

std::vector<std::string>& ResourceTypeBody::getRegions()
{
    return regions_;
}

void ResourceTypeBody::setRegions(const std::vector<std::string>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ResourceTypeBody::regionsIsSet() const
{
    return regionsIsSet_;
}

void ResourceTypeBody::unsetregions()
{
    regionsIsSet_ = false;
}

bool ResourceTypeBody::isGlobal() const
{
    return global_;
}

void ResourceTypeBody::setGlobal(bool value)
{
    global_ = value;
    globalIsSet_ = true;
}

bool ResourceTypeBody::globalIsSet() const
{
    return globalIsSet_;
}

void ResourceTypeBody::unsetglobal()
{
    globalIsSet_ = false;
}

}
}
}
}
}


