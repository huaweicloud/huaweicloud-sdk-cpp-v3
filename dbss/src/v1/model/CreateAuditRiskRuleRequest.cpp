

#include "huaweicloud/dbss/v1/model/CreateAuditRiskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditRiskRuleRequest::CreateAuditRiskRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAuditRiskRuleRequest::~CreateAuditRiskRuleRequest() = default;

void CreateAuditRiskRuleRequest::validate()
{
}

web::json::value CreateAuditRiskRuleRequest::toJson() const
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
bool CreateAuditRiskRuleRequest::fromJson(const web::json::value& val)
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
            RuleAddRiskRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAuditRiskRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAuditRiskRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAuditRiskRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAuditRiskRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RuleAddRiskRuleRequest CreateAuditRiskRuleRequest::getBody() const
{
    return body_;
}

void CreateAuditRiskRuleRequest::setBody(const RuleAddRiskRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuditRiskRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuditRiskRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


