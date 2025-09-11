

#include "huaweicloud/dbss/v1/model/UpdateAuditScopeRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditScopeRuleRequest::UpdateAuditScopeRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditScopeRuleRequest::~UpdateAuditScopeRuleRequest() = default;

void UpdateAuditScopeRuleRequest::validate()
{
}

web::json::value UpdateAuditScopeRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditScopeRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RuleScopeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditScopeRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditScopeRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditScopeRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditScopeRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateAuditScopeRuleRequest::getId() const
{
    return id_;
}

void UpdateAuditScopeRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAuditScopeRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateAuditScopeRuleRequest::unsetid()
{
    idIsSet_ = false;
}

RuleScopeRequest UpdateAuditScopeRuleRequest::getBody() const
{
    return body_;
}

void UpdateAuditScopeRuleRequest::setBody(const RuleScopeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditScopeRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditScopeRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


