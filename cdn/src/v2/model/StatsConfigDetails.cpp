

#include "huaweicloud/cdn/v2/model/StatsConfigDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




StatsConfigDetails::StatsConfigDetails()
{
    configType_ = 0;
    configTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    configInfoIsSet_ = false;
    expiredTime_ = 0L;
    expiredTimeIsSet_ = false;
}

StatsConfigDetails::~StatsConfigDetails() = default;

void StatsConfigDetails::validate()
{
}

web::json::value StatsConfigDetails::toJson() const
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
    if(expiredTimeIsSet_) {
        val[utility::conversions::to_string_t("expired_time")] = ModelBase::toJson(expiredTime_);
    }

    return val;
}
bool StatsConfigDetails::fromJson(const web::json::value& val)
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
            ConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredTime(refVal);
        }
    }
    return ok;
}


int32_t StatsConfigDetails::getConfigType() const
{
    return configType_;
}

void StatsConfigDetails::setConfigType(int32_t value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool StatsConfigDetails::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void StatsConfigDetails::unsetconfigType()
{
    configTypeIsSet_ = false;
}

std::string StatsConfigDetails::getResourceType() const
{
    return resourceType_;
}

void StatsConfigDetails::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool StatsConfigDetails::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void StatsConfigDetails::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string StatsConfigDetails::getResourceName() const
{
    return resourceName_;
}

void StatsConfigDetails::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool StatsConfigDetails::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void StatsConfigDetails::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

ConfigInfo StatsConfigDetails::getConfigInfo() const
{
    return configInfo_;
}

void StatsConfigDetails::setConfigInfo(const ConfigInfo& value)
{
    configInfo_ = value;
    configInfoIsSet_ = true;
}

bool StatsConfigDetails::configInfoIsSet() const
{
    return configInfoIsSet_;
}

void StatsConfigDetails::unsetconfigInfo()
{
    configInfoIsSet_ = false;
}

int64_t StatsConfigDetails::getExpiredTime() const
{
    return expiredTime_;
}

void StatsConfigDetails::setExpiredTime(int64_t value)
{
    expiredTime_ = value;
    expiredTimeIsSet_ = true;
}

bool StatsConfigDetails::expiredTimeIsSet() const
{
    return expiredTimeIsSet_;
}

void StatsConfigDetails::unsetexpiredTime()
{
    expiredTimeIsSet_ = false;
}

}
}
}
}
}


