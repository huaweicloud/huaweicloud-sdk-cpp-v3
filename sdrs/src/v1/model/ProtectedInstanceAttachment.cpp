

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceAttachment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceAttachment::ProtectedInstanceAttachment()
{
    replication_ = "";
    replicationIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
}

ProtectedInstanceAttachment::~ProtectedInstanceAttachment() = default;

void ProtectedInstanceAttachment::validate()
{
}

web::json::value ProtectedInstanceAttachment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }

    return val;
}

bool ProtectedInstanceAttachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
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

std::string ProtectedInstanceAttachment::getReplication() const
{
    return replication_;
}

void ProtectedInstanceAttachment::setReplication(const std::string& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool ProtectedInstanceAttachment::replicationIsSet() const
{
    return replicationIsSet_;
}

void ProtectedInstanceAttachment::unsetreplication()
{
    replicationIsSet_ = false;
}

std::string ProtectedInstanceAttachment::getDevice() const
{
    return device_;
}

void ProtectedInstanceAttachment::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ProtectedInstanceAttachment::deviceIsSet() const
{
    return deviceIsSet_;
}

void ProtectedInstanceAttachment::unsetdevice()
{
    deviceIsSet_ = false;
}

}
}
}
}
}


