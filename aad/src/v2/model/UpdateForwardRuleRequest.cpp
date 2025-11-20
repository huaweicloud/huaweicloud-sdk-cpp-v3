

#include "huaweicloud/aad/v2/model/UpdateForwardRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateForwardRuleRequest::UpdateForwardRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateForwardRuleRequest::~UpdateForwardRuleRequest() = default;

void UpdateForwardRuleRequest::validate()
{
}

web::json::value UpdateForwardRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateForwardRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateForwardRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateForwardRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateForwardRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateForwardRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateForwardRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateForwardRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateForwardRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateForwardRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateForwardRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateForwardRuleRequest::getIp() const
{
    return ip_;
}

void UpdateForwardRuleRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateForwardRuleRequest::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateForwardRuleRequest::unsetip()
{
    ipIsSet_ = false;
}

UpdateForwardRuleRequestBody UpdateForwardRuleRequest::getBody() const
{
    return body_;
}

void UpdateForwardRuleRequest::setBody(const UpdateForwardRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateForwardRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateForwardRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


