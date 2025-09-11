

#include "huaweicloud/dbss/v1/model/UpdateAuditSqlRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditSqlRuleRequest::UpdateAuditSqlRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditSqlRuleRequest::~UpdateAuditSqlRuleRequest() = default;

void UpdateAuditSqlRuleRequest::validate()
{
}

web::json::value UpdateAuditSqlRuleRequest::toJson() const
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
bool UpdateAuditSqlRuleRequest::fromJson(const web::json::value& val)
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
            RuleAddSqlRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditSqlRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditSqlRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditSqlRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditSqlRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateAuditSqlRuleRequest::getId() const
{
    return id_;
}

void UpdateAuditSqlRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAuditSqlRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateAuditSqlRuleRequest::unsetid()
{
    idIsSet_ = false;
}

RuleAddSqlRequest UpdateAuditSqlRuleRequest::getBody() const
{
    return body_;
}

void UpdateAuditSqlRuleRequest::setBody(const RuleAddSqlRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditSqlRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditSqlRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


