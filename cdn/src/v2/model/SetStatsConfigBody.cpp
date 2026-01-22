

#include "huaweicloud/cdn/v2/model/SetStatsConfigBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SetStatsConfigBody::SetStatsConfigBody()
{
    configType_ = 0;
    configTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    configInfoIsSet_ = false;
}

SetStatsConfigBody::~SetStatsConfigBody() = default;

void SetStatsConfigBody::validate()
{
}

web::json::value SetStatsConfigBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("config_type")] = ModelBase::toJson(configType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(configInfoIsSet_) {
        val[utility::conversions::to_string_t("config_info")] = ModelBase::toJson(configInfo_);
    }

    return val;
}
bool SetStatsConfigBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigInfo(refVal);
        }
    }
    return ok;
}


int32_t SetStatsConfigBody::getConfigType() const
{
    return configType_;
}

void SetStatsConfigBody::setConfigType(int32_t value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool SetStatsConfigBody::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void SetStatsConfigBody::unsetconfigType()
{
    configTypeIsSet_ = false;
}

std::string SetStatsConfigBody::getResourceType() const
{
    return resourceType_;
}

void SetStatsConfigBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool SetStatsConfigBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void SetStatsConfigBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string SetStatsConfigBody::getResourceName() const
{
    return resourceName_;
}

void SetStatsConfigBody::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool SetStatsConfigBody::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void SetStatsConfigBody::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

Object SetStatsConfigBody::getConfigInfo() const
{
    return configInfo_;
}

void SetStatsConfigBody::setConfigInfo(const Object& value)
{
    configInfo_ = value;
    configInfoIsSet_ = true;
}

bool SetStatsConfigBody::configInfoIsSet() const
{
    return configInfoIsSet_;
}

void SetStatsConfigBody::unsetconfigInfo()
{
    configInfoIsSet_ = false;
}

}
}
}
}
}


