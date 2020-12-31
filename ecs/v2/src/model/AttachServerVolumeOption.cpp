

#include "huaweicloud/ecs/model/AttachServerVolumeOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AttachServerVolumeOption::AttachServerVolumeOption()
{
    device_ = "";
    deviceIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

AttachServerVolumeOption::~AttachServerVolumeOption() = default;

void AttachServerVolumeOption::validate()
{
}

web::json::value AttachServerVolumeOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volumeId")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool AttachServerVolumeOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string AttachServerVolumeOption::getDevice() const
{
    return device_;
}

void AttachServerVolumeOption::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool AttachServerVolumeOption::deviceIsSet() const
{
    return deviceIsSet_;
}

void AttachServerVolumeOption::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string AttachServerVolumeOption::getVolumeId() const
{
    return volumeId_;
}

void AttachServerVolumeOption::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool AttachServerVolumeOption::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void AttachServerVolumeOption::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


