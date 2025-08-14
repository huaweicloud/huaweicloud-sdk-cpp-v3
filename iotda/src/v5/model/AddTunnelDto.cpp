

#include "huaweicloud/iotda/v5/model/AddTunnelDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddTunnelDto::AddTunnelDto()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

AddTunnelDto::~AddTunnelDto() = default;

void AddTunnelDto::validate()
{
}

web::json::value AddTunnelDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }

    return val;
}
bool AddTunnelDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AddTunnelDto::getDeviceId() const
{
    return deviceId_;
}

void AddTunnelDto::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool AddTunnelDto::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void AddTunnelDto::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


