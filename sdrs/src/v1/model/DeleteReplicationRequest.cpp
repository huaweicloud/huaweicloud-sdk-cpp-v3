

#include "huaweicloud/sdrs/v1/model/DeleteReplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteReplicationRequest::DeleteReplicationRequest()
{
    replicationId_ = "";
    replicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteReplicationRequest::~DeleteReplicationRequest() = default;

void DeleteReplicationRequest::validate()
{
}

web::json::value DeleteReplicationRequest::toJson() const
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

bool DeleteReplicationRequest::fromJson(const web::json::value& val)
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
            DeleteReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteReplicationRequest::getReplicationId() const
{
    return replicationId_;
}

void DeleteReplicationRequest::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool DeleteReplicationRequest::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void DeleteReplicationRequest::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

DeleteReplicationRequestBody DeleteReplicationRequest::getBody() const
{
    return body_;
}

void DeleteReplicationRequest::setBody(const DeleteReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


