

#include "huaweicloud/sdrs/v1/model/ExpandReplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ExpandReplicationRequest::ExpandReplicationRequest()
{
    replicationId_ = "";
    replicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandReplicationRequest::~ExpandReplicationRequest() = default;

void ExpandReplicationRequest::validate()
{
}

web::json::value ExpandReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIdIsSet_) {
        val[utility::conversions::to_string_t("replication_id")] = ModelBase::toJson(replicationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ExpandReplicationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExtendReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExpandReplicationRequest::getReplicationId() const
{
    return replicationId_;
}

void ExpandReplicationRequest::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool ExpandReplicationRequest::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void ExpandReplicationRequest::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

ExtendReplicationRequestBody ExpandReplicationRequest::getBody() const
{
    return body_;
}

void ExpandReplicationRequest::setBody(const ExtendReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


