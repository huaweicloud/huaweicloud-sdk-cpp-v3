

#include "huaweicloud/iotda/v5/model/CreateDeviceProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceProxyResponse::CreateDeviceProxyResponse()
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

CreateDeviceProxyResponse::~CreateDeviceProxyResponse() = default;

void CreateDeviceProxyResponse::validate()
{
}

web::json::value CreateDeviceProxyResponse::toJson() const
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
bool CreateDeviceProxyResponse::fromJson(const web::json::value& val)
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


std::string CreateDeviceProxyResponse::getProxyId() const
{
    return proxyId_;
}

void CreateDeviceProxyResponse::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool CreateDeviceProxyResponse::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void CreateDeviceProxyResponse::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string CreateDeviceProxyResponse::getProxyName() const
{
    return proxyName_;
}

void CreateDeviceProxyResponse::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool CreateDeviceProxyResponse::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void CreateDeviceProxyResponse::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::vector<std::string>& CreateDeviceProxyResponse::getProxyDevices()
{
    return proxyDevices_;
}

void CreateDeviceProxyResponse::setProxyDevices(const std::vector<std::string>& value)
{
    proxyDevices_ = value;
    proxyDevicesIsSet_ = true;
}

bool CreateDeviceProxyResponse::proxyDevicesIsSet() const
{
    return proxyDevicesIsSet_;
}

void CreateDeviceProxyResponse::unsetproxyDevices()
{
    proxyDevicesIsSet_ = false;
}

EffectiveTimeRangeResponseDTO CreateDeviceProxyResponse::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void CreateDeviceProxyResponse::setEffectiveTimeRange(const EffectiveTimeRangeResponseDTO& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool CreateDeviceProxyResponse::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void CreateDeviceProxyResponse::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

std::string CreateDeviceProxyResponse::getAppId() const
{
    return appId_;
}

void CreateDeviceProxyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateDeviceProxyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateDeviceProxyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


