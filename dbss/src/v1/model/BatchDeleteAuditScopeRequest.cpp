

#include "huaweicloud/dbss/v1/model/BatchDeleteAuditScopeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchDeleteAuditScopeRequest::BatchDeleteAuditScopeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteAuditScopeRequest::~BatchDeleteAuditScopeRequest() = default;

void BatchDeleteAuditScopeRequest::validate()
{
}

web::json::value BatchDeleteAuditScopeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteAuditScopeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuditScopeRequestNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteAuditScopeRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchDeleteAuditScopeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchDeleteAuditScopeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchDeleteAuditScopeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditScopeRequestNew BatchDeleteAuditScopeRequest::getBody() const
{
    return body_;
}

void BatchDeleteAuditScopeRequest::setBody(const AuditScopeRequestNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteAuditScopeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteAuditScopeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


