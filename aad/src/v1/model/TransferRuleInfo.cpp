

#include "huaweicloud/aad/v1/model/TransferRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




TransferRuleInfo::TransferRuleInfo()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    forwardProtocol_ = "";
    forwardProtocolIsSet_ = false;
    forwardPort_ = 0;
    forwardPortIsSet_ = false;
    sourcePort_ = 0;
    sourcePortIsSet_ = false;
    lbMethod_ = "";
    lbMethodIsSet_ = false;
    sourceIp_ = "";
    sourceIpIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

TransferRuleInfo::~TransferRuleInfo() = default;

void TransferRuleInfo::validate()
{
}

web::json::value TransferRuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(forwardProtocolIsSet_) {
        val[utility::conversions::to_string_t("forward_protocol")] = ModelBase::toJson(forwardProtocol_);
    }
    if(forwardPortIsSet_) {
        val[utility::conversions::to_string_t("forward_port")] = ModelBase::toJson(forwardPort_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(lbMethodIsSet_) {
        val[utility::conversions::to_string_t("lb_method")] = ModelBase::toJson(lbMethod_);
    }
    if(sourceIpIsSet_) {
        val[utility::conversions::to_string_t("source_ip")] = ModelBase::toJson(sourceIp_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool TransferRuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forward_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forward_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forward_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forward_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lb_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lb_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLbMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string TransferRuleInfo::getRuleId() const
{
    return ruleId_;
}

void TransferRuleInfo::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool TransferRuleInfo::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void TransferRuleInfo::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string TransferRuleInfo::getForwardProtocol() const
{
    return forwardProtocol_;
}

void TransferRuleInfo::setForwardProtocol(const std::string& value)
{
    forwardProtocol_ = value;
    forwardProtocolIsSet_ = true;
}

bool TransferRuleInfo::forwardProtocolIsSet() const
{
    return forwardProtocolIsSet_;
}

void TransferRuleInfo::unsetforwardProtocol()
{
    forwardProtocolIsSet_ = false;
}

int32_t TransferRuleInfo::getForwardPort() const
{
    return forwardPort_;
}

void TransferRuleInfo::setForwardPort(int32_t value)
{
    forwardPort_ = value;
    forwardPortIsSet_ = true;
}

bool TransferRuleInfo::forwardPortIsSet() const
{
    return forwardPortIsSet_;
}

void TransferRuleInfo::unsetforwardPort()
{
    forwardPortIsSet_ = false;
}

int32_t TransferRuleInfo::getSourcePort() const
{
    return sourcePort_;
}

void TransferRuleInfo::setSourcePort(int32_t value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool TransferRuleInfo::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void TransferRuleInfo::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string TransferRuleInfo::getLbMethod() const
{
    return lbMethod_;
}

void TransferRuleInfo::setLbMethod(const std::string& value)
{
    lbMethod_ = value;
    lbMethodIsSet_ = true;
}

bool TransferRuleInfo::lbMethodIsSet() const
{
    return lbMethodIsSet_;
}

void TransferRuleInfo::unsetlbMethod()
{
    lbMethodIsSet_ = false;
}

std::string TransferRuleInfo::getSourceIp() const
{
    return sourceIp_;
}

void TransferRuleInfo::setSourceIp(const std::string& value)
{
    sourceIp_ = value;
    sourceIpIsSet_ = true;
}

bool TransferRuleInfo::sourceIpIsSet() const
{
    return sourceIpIsSet_;
}

void TransferRuleInfo::unsetsourceIp()
{
    sourceIpIsSet_ = false;
}

int32_t TransferRuleInfo::getStatus() const
{
    return status_;
}

void TransferRuleInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TransferRuleInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TransferRuleInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


