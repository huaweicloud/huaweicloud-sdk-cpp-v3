

#include "huaweicloud/cce/v3/model/ServiceNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ServiceNetwork::ServiceNetwork()
{
    iPv4CIDR_ = "";
    iPv4CIDRIsSet_ = false;
    iPv6CIDR_ = "";
    iPv6CIDRIsSet_ = false;
}

ServiceNetwork::~ServiceNetwork() = default;

void ServiceNetwork::validate()
{
}

web::json::value ServiceNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iPv4CIDRIsSet_) {
        val[utility::conversions::to_string_t("IPv4CIDR")] = ModelBase::toJson(iPv4CIDR_);
    }
    if(iPv6CIDRIsSet_) {
        val[utility::conversions::to_string_t("IPv6CIDR")] = ModelBase::toJson(iPv6CIDR_);
    }

    return val;
}
bool ServiceNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("IPv4CIDR"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("IPv4CIDR"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIPv4CIDR(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("IPv6CIDR"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("IPv6CIDR"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIPv6CIDR(refVal);
        }
    }
    return ok;
}


std::string ServiceNetwork::getIPv4CIDR() const
{
    return iPv4CIDR_;
}

void ServiceNetwork::setIPv4CIDR(const std::string& value)
{
    iPv4CIDR_ = value;
    iPv4CIDRIsSet_ = true;
}

bool ServiceNetwork::iPv4CIDRIsSet() const
{
    return iPv4CIDRIsSet_;
}

void ServiceNetwork::unsetiPv4CIDR()
{
    iPv4CIDRIsSet_ = false;
}

std::string ServiceNetwork::getIPv6CIDR() const
{
    return iPv6CIDR_;
}

void ServiceNetwork::setIPv6CIDR(const std::string& value)
{
    iPv6CIDR_ = value;
    iPv6CIDRIsSet_ = true;
}

bool ServiceNetwork::iPv6CIDRIsSet() const
{
    return iPv6CIDRIsSet_;
}

void ServiceNetwork::unsetiPv6CIDR()
{
    iPv6CIDRIsSet_ = false;
}

}
}
}
}
}


