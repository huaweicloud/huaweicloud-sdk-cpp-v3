

#include "huaweicloud/iotda/v5/model/AddDeviceProxy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddDeviceProxy::AddDeviceProxy()
{
    proxyName_ = "";
    proxyNameIsSet_ = false;
    proxyDevicesIsSet_ = false;
    effectiveTimeRangeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

AddDeviceProxy::~AddDeviceProxy() = default;

void AddDeviceProxy::validate()
{
}

web::json::value AddDeviceProxy::toJson() const
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
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool AddDeviceProxy::fromJson(const web::json::value& val)
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


std::string AddDeviceProxy::getProxyName() const
{
    return proxyName_;
}

void AddDeviceProxy::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool AddDeviceProxy::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void AddDeviceProxy::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::vector<std::string>& AddDeviceProxy::getProxyDevices()
{
    return proxyDevices_;
}

void AddDeviceProxy::setProxyDevices(const std::vector<std::string>& value)
{
    proxyDevices_ = value;
    proxyDevicesIsSet_ = true;
}

bool AddDeviceProxy::proxyDevicesIsSet() const
{
    return proxyDevicesIsSet_;
}

void AddDeviceProxy::unsetproxyDevices()
{
    proxyDevicesIsSet_ = false;
}

EffectiveTimeRange AddDeviceProxy::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void AddDeviceProxy::setEffectiveTimeRange(const EffectiveTimeRange& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool AddDeviceProxy::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void AddDeviceProxy::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

std::string AddDeviceProxy::getAppId() const
{
    return appId_;
}

void AddDeviceProxy::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddDeviceProxy::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddDeviceProxy::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


