

#include "huaweicloud/sdrs/v1/model/UpdateReplicationNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateReplicationNameRequest::UpdateReplicationNameRequest()
{
    replicationId_ = "";
    replicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReplicationNameRequest::~UpdateReplicationNameRequest() = default;

void UpdateReplicationNameRequest::validate()
{
}

web::json::value UpdateReplicationNameRequest::toJson() const
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
bool UpdateReplicationNameRequest::fromJson(const web::json::value& val)
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
            UpdateReplicationNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateReplicationNameRequest::getReplicationId() const
{
    return replicationId_;
}

void UpdateReplicationNameRequest::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool UpdateReplicationNameRequest::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void UpdateReplicationNameRequest::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

UpdateReplicationNameRequestBody UpdateReplicationNameRequest::getBody() const
{
    return body_;
}

void UpdateReplicationNameRequest::setBody(const UpdateReplicationNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReplicationNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReplicationNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


