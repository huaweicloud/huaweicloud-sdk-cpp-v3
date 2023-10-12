

#include "huaweicloud/sdrs/v1/model/ReplicationAttachment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ReplicationAttachment::ReplicationAttachment()
{
    protectedInstance_ = "";
    protectedInstanceIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
}

ReplicationAttachment::~ReplicationAttachment() = default;

void ReplicationAttachment::validate()
{
}

web::json::value ReplicationAttachment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }

    return val;
}
bool ReplicationAttachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    return ok;
}


std::string ReplicationAttachment::getProtectedInstance() const
{
    return protectedInstance_;
}

void ReplicationAttachment::setProtectedInstance(const std::string& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool ReplicationAttachment::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void ReplicationAttachment::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

std::string ReplicationAttachment::getDevice() const
{
    return device_;
}

void ReplicationAttachment::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ReplicationAttachment::deviceIsSet() const
{
    return deviceIsSet_;
}

void ReplicationAttachment::unsetdevice()
{
    deviceIsSet_ = false;
}

}
}
}
}
}


