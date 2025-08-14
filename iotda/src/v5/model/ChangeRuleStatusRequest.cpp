

#include "huaweicloud/iotda/v5/model/ChangeRuleStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ChangeRuleStatusRequest::ChangeRuleStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeRuleStatusRequest::~ChangeRuleStatusRequest() = default;

void ChangeRuleStatusRequest::validate()
{
}

web::json::value ChangeRuleStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeRuleStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RuleStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeRuleStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeRuleStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeRuleStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeRuleStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ChangeRuleStatusRequest::getRuleId() const
{
    return ruleId_;
}

void ChangeRuleStatusRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ChangeRuleStatusRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ChangeRuleStatusRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

RuleStatus ChangeRuleStatusRequest::getBody() const
{
    return body_;
}

void ChangeRuleStatusRequest::setBody(const RuleStatus& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeRuleStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeRuleStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


