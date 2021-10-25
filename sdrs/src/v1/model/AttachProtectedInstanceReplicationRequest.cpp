

#include "huaweicloud/sdrs/v1/model/AttachProtectedInstanceReplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




AttachProtectedInstanceReplicationRequest::AttachProtectedInstanceReplicationRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachProtectedInstanceReplicationRequest::~AttachProtectedInstanceReplicationRequest() = default;

void AttachProtectedInstanceReplicationRequest::validate()
{
}

web::json::value AttachProtectedInstanceReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AttachProtectedInstanceReplicationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProtectedInstanceAttachReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachProtectedInstanceReplicationRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void AttachProtectedInstanceReplicationRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool AttachProtectedInstanceReplicationRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void AttachProtectedInstanceReplicationRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

ProtectedInstanceAttachReplicationRequestBody AttachProtectedInstanceReplicationRequest::getBody() const
{
    return body_;
}

void AttachProtectedInstanceReplicationRequest::setBody(const ProtectedInstanceAttachReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachProtectedInstanceReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachProtectedInstanceReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


