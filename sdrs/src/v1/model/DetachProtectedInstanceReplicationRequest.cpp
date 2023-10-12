

#include "huaweicloud/sdrs/v1/model/DetachProtectedInstanceReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DetachProtectedInstanceReplicationRequest::DetachProtectedInstanceReplicationRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    replicationId_ = "";
    replicationIdIsSet_ = false;
}

DetachProtectedInstanceReplicationRequest::~DetachProtectedInstanceReplicationRequest() = default;

void DetachProtectedInstanceReplicationRequest::validate()
{
}

web::json::value DetachProtectedInstanceReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(replicationIdIsSet_) {
        val[utility::conversions::to_string_t("replication_id")] = ModelBase::toJson(replicationId_);
    }

    return val;
}
bool DetachProtectedInstanceReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationId(refVal);
        }
    }
    return ok;
}


std::string DetachProtectedInstanceReplicationRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void DetachProtectedInstanceReplicationRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool DetachProtectedInstanceReplicationRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void DetachProtectedInstanceReplicationRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

std::string DetachProtectedInstanceReplicationRequest::getReplicationId() const
{
    return replicationId_;
}

void DetachProtectedInstanceReplicationRequest::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool DetachProtectedInstanceReplicationRequest::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void DetachProtectedInstanceReplicationRequest::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

}
}
}
}
}


