

#include "huaweicloud/iotda/v5/model/ShowDeviceProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceProxyResponse::ShowDeviceProxyResponse()
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

ShowDeviceProxyResponse::~ShowDeviceProxyResponse() = default;

void ShowDeviceProxyResponse::validate()
{
}

web::json::value ShowDeviceProxyResponse::toJson() const
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
bool ShowDeviceProxyResponse::fromJson(const web::json::value& val)
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


std::string ShowDeviceProxyResponse::getProxyId() const
{
    return proxyId_;
}

void ShowDeviceProxyResponse::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowDeviceProxyResponse::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowDeviceProxyResponse::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ShowDeviceProxyResponse::getProxyName() const
{
    return proxyName_;
}

void ShowDeviceProxyResponse::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool ShowDeviceProxyResponse::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void ShowDeviceProxyResponse::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::vector<std::string>& ShowDeviceProxyResponse::getProxyDevices()
{
    return proxyDevices_;
}

void ShowDeviceProxyResponse::setProxyDevices(const std::vector<std::string>& value)
{
    proxyDevices_ = value;
    proxyDevicesIsSet_ = true;
}

bool ShowDeviceProxyResponse::proxyDevicesIsSet() const
{
    return proxyDevicesIsSet_;
}

void ShowDeviceProxyResponse::unsetproxyDevices()
{
    proxyDevicesIsSet_ = false;
}

EffectiveTimeRangeResponseDTO ShowDeviceProxyResponse::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void ShowDeviceProxyResponse::setEffectiveTimeRange(const EffectiveTimeRangeResponseDTO& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool ShowDeviceProxyResponse::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void ShowDeviceProxyResponse::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

std::string ShowDeviceProxyResponse::getAppId() const
{
    return appId_;
}

void ShowDeviceProxyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowDeviceProxyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowDeviceProxyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


