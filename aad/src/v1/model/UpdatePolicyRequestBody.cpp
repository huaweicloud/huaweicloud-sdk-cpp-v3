

#include "huaweicloud/aad/v1/model/UpdatePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePolicyRequestBody::UpdatePolicyRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    udp_ = "";
    udpIsSet_ = false;
    tcp_ = "";
    tcpIsSet_ = false;
    icmp_ = "";
    icmpIsSet_ = false;
    other_ = "";
    otherIsSet_ = false;
    icmpTrafficLimiting_ = 0L;
    icmpTrafficLimitingIsSet_ = false;
    udpTrafficLimiting_ = 0L;
    udpTrafficLimitingIsSet_ = false;
    udpFragmentRateLimiting_ = 0L;
    udpFragmentRateLimitingIsSet_ = false;
    otherTrafficLimiting_ = 0L;
    otherTrafficLimitingIsSet_ = false;
    tcpTrafficLimiting_ = 0L;
    tcpTrafficLimitingIsSet_ = false;
    tcpFragmentRateLimiting_ = 0L;
    tcpFragmentRateLimitingIsSet_ = false;
}

UpdatePolicyRequestBody::~UpdatePolicyRequestBody() = default;

void UpdatePolicyRequestBody::validate()
{
}

web::json::value UpdatePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(udpIsSet_) {
        val[utility::conversions::to_string_t("udp")] = ModelBase::toJson(udp_);
    }
    if(tcpIsSet_) {
        val[utility::conversions::to_string_t("tcp")] = ModelBase::toJson(tcp_);
    }
    if(icmpIsSet_) {
        val[utility::conversions::to_string_t("icmp")] = ModelBase::toJson(icmp_);
    }
    if(otherIsSet_) {
        val[utility::conversions::to_string_t("other")] = ModelBase::toJson(other_);
    }
    if(icmpTrafficLimitingIsSet_) {
        val[utility::conversions::to_string_t("icmp_traffic_limiting")] = ModelBase::toJson(icmpTrafficLimiting_);
    }
    if(udpTrafficLimitingIsSet_) {
        val[utility::conversions::to_string_t("udp_traffic_limiting")] = ModelBase::toJson(udpTrafficLimiting_);
    }
    if(udpFragmentRateLimitingIsSet_) {
        val[utility::conversions::to_string_t("udp_fragment_rate_limiting")] = ModelBase::toJson(udpFragmentRateLimiting_);
    }
    if(otherTrafficLimitingIsSet_) {
        val[utility::conversions::to_string_t("other_traffic_limiting")] = ModelBase::toJson(otherTrafficLimiting_);
    }
    if(tcpTrafficLimitingIsSet_) {
        val[utility::conversions::to_string_t("tcp_traffic_limiting")] = ModelBase::toJson(tcpTrafficLimiting_);
    }
    if(tcpFragmentRateLimitingIsSet_) {
        val[utility::conversions::to_string_t("tcp_fragment_rate_limiting")] = ModelBase::toJson(tcpFragmentRateLimiting_);
    }

    return val;
}
bool UpdatePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("udp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("udp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUdp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tcp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tcp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTcp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icmp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icmp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcmp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOther(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icmp_traffic_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icmp_traffic_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcmpTrafficLimiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("udp_traffic_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("udp_traffic_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUdpTrafficLimiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("udp_fragment_rate_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("udp_fragment_rate_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUdpFragmentRateLimiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_traffic_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_traffic_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTrafficLimiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tcp_traffic_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tcp_traffic_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTcpTrafficLimiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tcp_fragment_rate_limiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tcp_fragment_rate_limiting"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTcpFragmentRateLimiting(refVal);
        }
    }
    return ok;
}


std::string UpdatePolicyRequestBody::getName() const
{
    return name_;
}

void UpdatePolicyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePolicyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePolicyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdatePolicyRequestBody::getThreshold() const
{
    return threshold_;
}

void UpdatePolicyRequestBody::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool UpdatePolicyRequestBody::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void UpdatePolicyRequestBody::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getDescription() const
{
    return description_;
}

void UpdatePolicyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdatePolicyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdatePolicyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getUdp() const
{
    return udp_;
}

void UpdatePolicyRequestBody::setUdp(const std::string& value)
{
    udp_ = value;
    udpIsSet_ = true;
}

bool UpdatePolicyRequestBody::udpIsSet() const
{
    return udpIsSet_;
}

void UpdatePolicyRequestBody::unsetudp()
{
    udpIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getTcp() const
{
    return tcp_;
}

void UpdatePolicyRequestBody::setTcp(const std::string& value)
{
    tcp_ = value;
    tcpIsSet_ = true;
}

bool UpdatePolicyRequestBody::tcpIsSet() const
{
    return tcpIsSet_;
}

void UpdatePolicyRequestBody::unsettcp()
{
    tcpIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getIcmp() const
{
    return icmp_;
}

void UpdatePolicyRequestBody::setIcmp(const std::string& value)
{
    icmp_ = value;
    icmpIsSet_ = true;
}

bool UpdatePolicyRequestBody::icmpIsSet() const
{
    return icmpIsSet_;
}

void UpdatePolicyRequestBody::unseticmp()
{
    icmpIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getOther() const
{
    return other_;
}

void UpdatePolicyRequestBody::setOther(const std::string& value)
{
    other_ = value;
    otherIsSet_ = true;
}

bool UpdatePolicyRequestBody::otherIsSet() const
{
    return otherIsSet_;
}

void UpdatePolicyRequestBody::unsetother()
{
    otherIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getIcmpTrafficLimiting() const
{
    return icmpTrafficLimiting_;
}

void UpdatePolicyRequestBody::setIcmpTrafficLimiting(int64_t value)
{
    icmpTrafficLimiting_ = value;
    icmpTrafficLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::icmpTrafficLimitingIsSet() const
{
    return icmpTrafficLimitingIsSet_;
}

void UpdatePolicyRequestBody::unseticmpTrafficLimiting()
{
    icmpTrafficLimitingIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getUdpTrafficLimiting() const
{
    return udpTrafficLimiting_;
}

void UpdatePolicyRequestBody::setUdpTrafficLimiting(int64_t value)
{
    udpTrafficLimiting_ = value;
    udpTrafficLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::udpTrafficLimitingIsSet() const
{
    return udpTrafficLimitingIsSet_;
}

void UpdatePolicyRequestBody::unsetudpTrafficLimiting()
{
    udpTrafficLimitingIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getUdpFragmentRateLimiting() const
{
    return udpFragmentRateLimiting_;
}

void UpdatePolicyRequestBody::setUdpFragmentRateLimiting(int64_t value)
{
    udpFragmentRateLimiting_ = value;
    udpFragmentRateLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::udpFragmentRateLimitingIsSet() const
{
    return udpFragmentRateLimitingIsSet_;
}

void UpdatePolicyRequestBody::unsetudpFragmentRateLimiting()
{
    udpFragmentRateLimitingIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getOtherTrafficLimiting() const
{
    return otherTrafficLimiting_;
}

void UpdatePolicyRequestBody::setOtherTrafficLimiting(int64_t value)
{
    otherTrafficLimiting_ = value;
    otherTrafficLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::otherTrafficLimitingIsSet() const
{
    return otherTrafficLimitingIsSet_;
}

void UpdatePolicyRequestBody::unsetotherTrafficLimiting()
{
    otherTrafficLimitingIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getTcpTrafficLimiting() const
{
    return tcpTrafficLimiting_;
}

void UpdatePolicyRequestBody::setTcpTrafficLimiting(int64_t value)
{
    tcpTrafficLimiting_ = value;
    tcpTrafficLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::tcpTrafficLimitingIsSet() const
{
    return tcpTrafficLimitingIsSet_;
}

void UpdatePolicyRequestBody::unsettcpTrafficLimiting()
{
    tcpTrafficLimitingIsSet_ = false;
}

int64_t UpdatePolicyRequestBody::getTcpFragmentRateLimiting() const
{
    return tcpFragmentRateLimiting_;
}

void UpdatePolicyRequestBody::setTcpFragmentRateLimiting(int64_t value)
{
    tcpFragmentRateLimiting_ = value;
    tcpFragmentRateLimitingIsSet_ = true;
}

bool UpdatePolicyRequestBody::tcpFragmentRateLimitingIsSet() const
{
    return tcpFragmentRateLimitingIsSet_;
}

void UpdatePolicyRequestBody::unsettcpFragmentRateLimiting()
{
    tcpFragmentRateLimitingIsSet_ = false;
}

}
}
}
}
}


