

#include "huaweicloud/dbss/v1/model/CreateAuditScopeRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditScopeRuleRequest::CreateAuditScopeRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAuditScopeRuleRequest::~CreateAuditScopeRuleRequest() = default;

void CreateAuditScopeRuleRequest::validate()
{
}

web::json::value CreateAuditScopeRuleRequest::toJson() const
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
bool CreateAuditScopeRuleRequest::fromJson(const web::json::value& val)
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
            RuleScopeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAuditScopeRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAuditScopeRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAuditScopeRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAuditScopeRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RuleScopeRequest CreateAuditScopeRuleRequest::getBody() const
{
    return body_;
}

void CreateAuditScopeRuleRequest::setBody(const RuleScopeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuditScopeRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuditScopeRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


