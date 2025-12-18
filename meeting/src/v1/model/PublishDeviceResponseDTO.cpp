

#include "huaweicloud/meeting/v1/model/PublishDeviceResponseDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PublishDeviceResponseDTO::PublishDeviceResponseDTO()
{
    deviceUserId_ = "";
    deviceUserIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
}

PublishDeviceResponseDTO::~PublishDeviceResponseDTO() = default;

void PublishDeviceResponseDTO::validate()
{
}

web::json::value PublishDeviceResponseDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceUserIdIsSet_) {
        val[utility::conversions::to_string_t("deviceUserId")] = ModelBase::toJson(deviceUserId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("deviceName")] = ModelBase::toJson(deviceName_);
    }

    return val;
}
bool PublishDeviceResponseDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deviceUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    return ok;
}


std::string PublishDeviceResponseDTO::getDeviceUserId() const
{
    return deviceUserId_;
}

void PublishDeviceResponseDTO::setDeviceUserId(const std::string& value)
{
    deviceUserId_ = value;
    deviceUserIdIsSet_ = true;
}

bool PublishDeviceResponseDTO::deviceUserIdIsSet() const
{
    return deviceUserIdIsSet_;
}

void PublishDeviceResponseDTO::unsetdeviceUserId()
{
    deviceUserIdIsSet_ = false;
}

std::string PublishDeviceResponseDTO::getDeviceName() const
{
    return deviceName_;
}

void PublishDeviceResponseDTO::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool PublishDeviceResponseDTO::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void PublishDeviceResponseDTO::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

}
}
}
}
}


