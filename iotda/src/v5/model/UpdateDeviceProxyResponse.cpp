

#include "huaweicloud/iotda/v5/model/UpdateDeviceProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceProxyResponse::UpdateDeviceProxyResponse()
{
    proxyId_ = "";
    proxyIdIsSet_ = false;
    proxyName_ = "";
    proxyNameIsSet_ = false;
    proxyDevicesIsSet_ = false;
    effectiveTimeRangeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

UpdateDeviceProxyResponse::~UpdateDeviceProxyResponse() = default;

void UpdateDeviceProxyResponse::validate()
{
}

web::json::value UpdateDeviceProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(proxyDevicesIsSet_) {
        val[utility::conversions::to_string_t("proxy_devices")] = ModelBase::toJson(proxyDevices_);
    }
    if(effectiveTimeRangeIsSet_) {
        val[utility::conversions::to_string_t("effective_time_range")] = ModelBase::toJson(effectiveTimeRange_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool UpdateDeviceProxyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_devices"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyDevices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_time_range"));
        if(!fieldValue.is_null())
        {
            EffectiveTimeRangeResponseDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveTimeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceProxyResponse::getProxyId() const
{
    return proxyId_;
}

void UpdateDeviceProxyResponse::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateDeviceProxyResponse::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateDeviceProxyResponse::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string UpdateDeviceProxyResponse::getProxyName() const
{
    return proxyName_;
}

void UpdateDeviceProxyResponse::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool UpdateDeviceProxyResponse::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void UpdateDeviceProxyResponse::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::vector<std::string>& UpdateDeviceProxyResponse::getProxyDevices()
{
    return proxyDevices_;
}

void UpdateDeviceProxyResponse::setProxyDevices(const std::vector<std::string>& value)
{
    proxyDevices_ = value;
    proxyDevicesIsSet_ = true;
}

bool UpdateDeviceProxyResponse::proxyDevicesIsSet() const
{
    return proxyDevicesIsSet_;
}

void UpdateDeviceProxyResponse::unsetproxyDevices()
{
    proxyDevicesIsSet_ = false;
}

EffectiveTimeRangeResponseDTO UpdateDeviceProxyResponse::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void UpdateDeviceProxyResponse::setEffectiveTimeRange(const EffectiveTimeRangeResponseDTO& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool UpdateDeviceProxyResponse::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void UpdateDeviceProxyResponse::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

std::string UpdateDeviceProxyResponse::getAppId() const
{
    return appId_;
}

void UpdateDeviceProxyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateDeviceProxyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateDeviceProxyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


