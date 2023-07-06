

#include "huaweicloud/ecs/v2/model/UpdateServerBlockDeviceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerBlockDeviceReq::UpdateServerBlockDeviceReq()
{
    blockDeviceIsSet_ = false;
}

UpdateServerBlockDeviceReq::~UpdateServerBlockDeviceReq() = default;

void UpdateServerBlockDeviceReq::validate()
{
}

web::json::value UpdateServerBlockDeviceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockDeviceIsSet_) {
        val[utility::conversions::to_string_t("block_device")] = ModelBase::toJson(blockDevice_);
    }

    return val;
}

bool UpdateServerBlockDeviceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("block_device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_device"));
        if(!fieldValue.is_null())
        {
            UpdateServerBlockDeviceOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockDevice(refVal);
        }
    }
    return ok;
}

UpdateServerBlockDeviceOption UpdateServerBlockDeviceReq::getBlockDevice() const
{
    return blockDevice_;
}

void UpdateServerBlockDeviceReq::setBlockDevice(const UpdateServerBlockDeviceOption& value)
{
    blockDevice_ = value;
    blockDeviceIsSet_ = true;
}

bool UpdateServerBlockDeviceReq::blockDeviceIsSet() const
{
    return blockDeviceIsSet_;
}

void UpdateServerBlockDeviceReq::unsetblockDevice()
{
    blockDeviceIsSet_ = false;
}

}
}
}
}
}


