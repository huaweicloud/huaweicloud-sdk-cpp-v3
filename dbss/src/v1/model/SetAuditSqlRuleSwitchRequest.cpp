

#include "huaweicloud/dbss/v1/model/SetAuditSqlRuleSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditSqlRuleSwitchRequest::SetAuditSqlRuleSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAuditSqlRuleSwitchRequest::~SetAuditSqlRuleSwitchRequest() = default;

void SetAuditSqlRuleSwitchRequest::validate()
{
}

web::json::value SetAuditSqlRuleSwitchRequest::toJson() const
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
bool SetAuditSqlRuleSwitchRequest::fromJson(const web::json::value& val)
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
            RuleSqlIdRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAuditSqlRuleSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditSqlRuleSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditSqlRuleSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditSqlRuleSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RuleSqlIdRequest SetAuditSqlRuleSwitchRequest::getBody() const
{
    return body_;
}

void SetAuditSqlRuleSwitchRequest::setBody(const RuleSqlIdRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAuditSqlRuleSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAuditSqlRuleSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


