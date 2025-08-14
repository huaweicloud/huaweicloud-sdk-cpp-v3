

#include "huaweicloud/iotda/v5/model/UpdateDeviceShadowDesiredDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceShadowDesiredDataResponse::UpdateDeviceShadowDesiredDataResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    shadowIsSet_ = false;
}

UpdateDeviceShadowDesiredDataResponse::~UpdateDeviceShadowDesiredDataResponse() = default;

void UpdateDeviceShadowDesiredDataResponse::validate()
{
}

web::json::value UpdateDeviceShadowDesiredDataResponse::toJson() const
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
bool UpdateDeviceShadowDesiredDataResponse::fromJson(const web::json::value& val)
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


std::string UpdateDeviceShadowDesiredDataResponse::getDeviceId() const
{
    return deviceId_;
}

void UpdateDeviceShadowDesiredDataResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateDeviceShadowDesiredDataResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateDeviceShadowDesiredDataResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::vector<DeviceShadowData>& UpdateDeviceShadowDesiredDataResponse::getShadow()
{
    return shadow_;
}

void UpdateDeviceShadowDesiredDataResponse::setShadow(const std::vector<DeviceShadowData>& value)
{
    shadow_ = value;
    shadowIsSet_ = true;
}

bool UpdateDeviceShadowDesiredDataResponse::shadowIsSet() const
{
    return shadowIsSet_;
}

void UpdateDeviceShadowDesiredDataResponse::unsetshadow()
{
    shadowIsSet_ = false;
}

}
}
}
}
}


