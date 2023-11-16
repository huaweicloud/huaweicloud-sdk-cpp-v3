

#include "huaweicloud/aad/v1/model/UpdateInstanceIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateInstanceIpRuleRequest::UpdateInstanceIpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceIpRuleRequest::~UpdateInstanceIpRuleRequest() = default;

void UpdateInstanceIpRuleRequest::validate()
{
}

web::json::value UpdateInstanceIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInstanceIpRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
            TransferRuleBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceIpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceIpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceIpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceIpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateInstanceIpRuleRequest::getIp() const
{
    return ip_;
}

void UpdateInstanceIpRuleRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateInstanceIpRuleRequest::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateInstanceIpRuleRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string UpdateInstanceIpRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateInstanceIpRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateInstanceIpRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateInstanceIpRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

TransferRuleBody UpdateInstanceIpRuleRequest::getBody() const
{
    return body_;
}

void UpdateInstanceIpRuleRequest::setBody(const TransferRuleBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceIpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceIpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


