

#include "huaweicloud/dbss/v1/model/CreateAuditSqlRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditSqlRuleRequest::CreateAuditSqlRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAuditSqlRuleRequest::~CreateAuditSqlRuleRequest() = default;

void CreateAuditSqlRuleRequest::validate()
{
}

web::json::value CreateAuditSqlRuleRequest::toJson() const
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
bool CreateAuditSqlRuleRequest::fromJson(const web::json::value& val)
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
            RuleAddSqlRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAuditSqlRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAuditSqlRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAuditSqlRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAuditSqlRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RuleAddSqlRequest CreateAuditSqlRuleRequest::getBody() const
{
    return body_;
}

void CreateAuditSqlRuleRequest::setBody(const RuleAddSqlRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuditSqlRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuditSqlRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


