

#include "huaweicloud/iotda/v5/model/UpdateRoutingRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingRuleRequest::UpdateRoutingRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRoutingRuleRequest::~UpdateRoutingRuleRequest() = default;

void UpdateRoutingRuleRequest::validate()
{
}

web::json::value UpdateRoutingRuleRequest::toJson() const
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
bool UpdateRoutingRuleRequest::fromJson(const web::json::value& val)
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
            UpdateRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRoutingRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRoutingRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRoutingRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRoutingRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateRoutingRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateRoutingRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRoutingRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRoutingRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

UpdateRuleReq UpdateRoutingRuleRequest::getBody() const
{
    return body_;
}

void UpdateRoutingRuleRequest::setBody(const UpdateRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRoutingRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRoutingRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


