

#include "huaweicloud/aad/v1/model/TransferRuleBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




TransferRuleBody::TransferRuleBody()
{
    forwardProtocol_ = "";
    forwardProtocolIsSet_ = false;
    forwardPort_ = 0;
    forwardPortIsSet_ = false;
    sourcePort_ = 0;
    sourcePortIsSet_ = false;
    sourceIp_ = "";
    sourceIpIsSet_ = false;
}

TransferRuleBody::~TransferRuleBody() = default;

void TransferRuleBody::validate()
{
}

web::json::value TransferRuleBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(forwardProtocolIsSet_) {
        val[utility::conversions::to_string_t("forward_protocol")] = ModelBase::toJson(forwardProtocol_);
    }
    if(forwardPortIsSet_) {
        val[utility::conversions::to_string_t("forward_port")] = ModelBase::toJson(forwardPort_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(sourceIpIsSet_) {
        val[utility::conversions::to_string_t("source_ip")] = ModelBase::toJson(sourceIp_);
    }

    return val;
}
bool TransferRuleBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("source_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIp(refVal);
        }
    }
    return ok;
}


std::string TransferRuleBody::getForwardProtocol() const
{
    return forwardProtocol_;
}

void TransferRuleBody::setForwardProtocol(const std::string& value)
{
    forwardProtocol_ = value;
    forwardProtocolIsSet_ = true;
}

bool TransferRuleBody::forwardProtocolIsSet() const
{
    return forwardProtocolIsSet_;
}

void TransferRuleBody::unsetforwardProtocol()
{
    forwardProtocolIsSet_ = false;
}

int32_t TransferRuleBody::getForwardPort() const
{
    return forwardPort_;
}

void TransferRuleBody::setForwardPort(int32_t value)
{
    forwardPort_ = value;
    forwardPortIsSet_ = true;
}

bool TransferRuleBody::forwardPortIsSet() const
{
    return forwardPortIsSet_;
}

void TransferRuleBody::unsetforwardPort()
{
    forwardPortIsSet_ = false;
}

int32_t TransferRuleBody::getSourcePort() const
{
    return sourcePort_;
}

void TransferRuleBody::setSourcePort(int32_t value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool TransferRuleBody::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void TransferRuleBody::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string TransferRuleBody::getSourceIp() const
{
    return sourceIp_;
}

void TransferRuleBody::setSourceIp(const std::string& value)
{
    sourceIp_ = value;
    sourceIpIsSet_ = true;
}

bool TransferRuleBody::sourceIpIsSet() const
{
    return sourceIpIsSet_;
}

void TransferRuleBody::unsetsourceIp()
{
    sourceIpIsSet_ = false;
}

}
}
}
}
}


