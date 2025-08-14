

#include "huaweicloud/iotda/v5/model/UpdateDeviceProxy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceProxy::UpdateDeviceProxy()
{
    proxyName_ = "";
    proxyNameIsSet_ = false;
    proxyDevicesIsSet_ = false;
    effectiveTimeRangeIsSet_ = false;
}

UpdateDeviceProxy::~UpdateDeviceProxy() = default;

void UpdateDeviceProxy::validate()
{
}

web::json::value UpdateDeviceProxy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(proxyDevicesIsSet_) {
        val[utility::conversions::to_string_t("proxy_devices")] = ModelBase::toJson(proxyDevices_);
    }
    if(effectiveTimeRangeIsSet_) {
        val[utility::conversions::to_string_t("effective_time_range")] = ModelBase::toJson(effectiveTimeRange_);
    }

    return val;
}
bool UpdateDeviceProxy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            EffectiveTimeRange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveTimeRange(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceProxy::getProxyName() const
{
    return proxyName_;
}

void UpdateDeviceProxy::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool UpdateDeviceProxy::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void UpdateDeviceProxy::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::vector<std::string>& UpdateDeviceProxy::getProxyDevices()
{
    return proxyDevices_;
}

void UpdateDeviceProxy::setProxyDevices(const std::vector<std::string>& value)
{
    proxyDevices_ = value;
    proxyDevicesIsSet_ = true;
}

bool UpdateDeviceProxy::proxyDevicesIsSet() const
{
    return proxyDevicesIsSet_;
}

void UpdateDeviceProxy::unsetproxyDevices()
{
    proxyDevicesIsSet_ = false;
}

EffectiveTimeRange UpdateDeviceProxy::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void UpdateDeviceProxy::setEffectiveTimeRange(const EffectiveTimeRange& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool UpdateDeviceProxy::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void UpdateDeviceProxy::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

}
}
}
}
}


