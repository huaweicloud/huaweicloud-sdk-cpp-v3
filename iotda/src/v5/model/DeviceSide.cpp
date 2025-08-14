

#include "huaweicloud/iotda/v5/model/DeviceSide.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceSide::DeviceSide()
{
    deviceIdsIsSet_ = false;
}

DeviceSide::~DeviceSide() = default;

void DeviceSide::validate()
{
}

web::json::value DeviceSide::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdsIsSet_) {
        val[utility::conversions::to_string_t("device_ids")] = ModelBase::toJson(deviceIds_);
    }

    return val;
}
bool DeviceSide::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeviceSide::getDeviceIds()
{
    return deviceIds_;
}

void DeviceSide::setDeviceIds(const std::vector<std::string>& value)
{
    deviceIds_ = value;
    deviceIdsIsSet_ = true;
}

bool DeviceSide::deviceIdsIsSet() const
{
    return deviceIdsIsSet_;
}

void DeviceSide::unsetdeviceIds()
{
    deviceIdsIsSet_ = false;
}

}
}
}
}
}


