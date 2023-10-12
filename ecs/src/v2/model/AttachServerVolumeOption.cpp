

#include "huaweicloud/ecs/v2/model/AttachServerVolumeOption.h"
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
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    hwpassthrough_ = "";
    hwpassthroughIsSet_ = false;
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
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(hwpassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwpassthrough_);
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
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:passthrough"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:passthrough"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwpassthrough(refVal);
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

std::string AttachServerVolumeOption::getVolumeType() const
{
    return volumeType_;
}

void AttachServerVolumeOption::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool AttachServerVolumeOption::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void AttachServerVolumeOption::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t AttachServerVolumeOption::getCount() const
{
    return count_;
}

void AttachServerVolumeOption::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AttachServerVolumeOption::countIsSet() const
{
    return countIsSet_;
}

void AttachServerVolumeOption::unsetcount()
{
    countIsSet_ = false;
}

std::string AttachServerVolumeOption::getHwpassthrough() const
{
    return hwpassthrough_;
}

void AttachServerVolumeOption::setHwpassthrough(const std::string& value)
{
    hwpassthrough_ = value;
    hwpassthroughIsSet_ = true;
}

bool AttachServerVolumeOption::hwpassthroughIsSet() const
{
    return hwpassthroughIsSet_;
}

void AttachServerVolumeOption::unsethwpassthrough()
{
    hwpassthroughIsSet_ = false;
}

}
}
}
}
}


