

#include "huaweicloud/iotda/v5/model/UpdateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRuleRequest::UpdateRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRuleRequest::~UpdateRuleRequest() = default;

void UpdateRuleRequest::validate()
{
}

web::json::value UpdateRuleRequest::toJson() const
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
bool UpdateRuleRequest::fromJson(const web::json::value& val)
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
            Rule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

Rule UpdateRuleRequest::getBody() const
{
    return body_;
}

void UpdateRuleRequest::setBody(const Rule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


