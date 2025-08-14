

#include "huaweicloud/iotda/v5/model/ShowDeviceShadowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceShadowResponse::ShowDeviceShadowResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    shadowIsSet_ = false;
}

ShowDeviceShadowResponse::~ShowDeviceShadowResponse() = default;

void ShowDeviceShadowResponse::validate()
{
}

web::json::value ShowDeviceShadowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(shadowIsSet_) {
        val[utility::conversions::to_string_t("shadow")] = ModelBase::toJson(shadow_);
    }

    return val;
}
bool ShowDeviceShadowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shadow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shadow"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceShadowData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShadow(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceShadowResponse::getDeviceId() const
{
    return deviceId_;
}

void ShowDeviceShadowResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowDeviceShadowResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowDeviceShadowResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::vector<DeviceShadowData>& ShowDeviceShadowResponse::getShadow()
{
    return shadow_;
}

void ShowDeviceShadowResponse::setShadow(const std::vector<DeviceShadowData>& value)
{
    shadow_ = value;
    shadowIsSet_ = true;
}

bool ShowDeviceShadowResponse::shadowIsSet() const
{
    return shadowIsSet_;
}

void ShowDeviceShadowResponse::unsetshadow()
{
    shadowIsSet_ = false;
}

}
}
}
}
}


