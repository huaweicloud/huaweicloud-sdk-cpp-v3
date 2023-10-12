

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceAttachReplicationRequestParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceAttachReplicationRequestParams::ProtectedInstanceAttachReplicationRequestParams()
{
    replicationId_ = "";
    replicationIdIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
}

ProtectedInstanceAttachReplicationRequestParams::~ProtectedInstanceAttachReplicationRequestParams() = default;

void ProtectedInstanceAttachReplicationRequestParams::validate()
{
}

web::json::value ProtectedInstanceAttachReplicationRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIdIsSet_) {
        val[utility::conversions::to_string_t("replication_id")] = ModelBase::toJson(replicationId_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }

    return val;
}
bool ProtectedInstanceAttachReplicationRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationId(refVal);
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


std::string ProtectedInstanceAttachReplicationRequestParams::getReplicationId() const
{
    return replicationId_;
}

void ProtectedInstanceAttachReplicationRequestParams::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool ProtectedInstanceAttachReplicationRequestParams::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void ProtectedInstanceAttachReplicationRequestParams::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

std::string ProtectedInstanceAttachReplicationRequestParams::getDevice() const
{
    return device_;
}

void ProtectedInstanceAttachReplicationRequestParams::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ProtectedInstanceAttachReplicationRequestParams::deviceIsSet() const
{
    return deviceIsSet_;
}

void ProtectedInstanceAttachReplicationRequestParams::unsetdevice()
{
    deviceIsSet_ = false;
}

}
}
}
}
}


