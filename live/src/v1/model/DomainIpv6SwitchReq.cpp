

#include "huaweicloud/live/v1/model/DomainIpv6SwitchReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DomainIpv6SwitchReq::DomainIpv6SwitchReq()
{
    domain_ = "";
    domainIsSet_ = false;
    isIpv6_ = false;
    isIpv6IsSet_ = false;
}

DomainIpv6SwitchReq::~DomainIpv6SwitchReq() = default;

void DomainIpv6SwitchReq::validate()
{
}

web::json::value DomainIpv6SwitchReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(isIpv6IsSet_) {
        val[utility::conversions::to_string_t("is_ipv6")] = ModelBase::toJson(isIpv6_);
    }

    return val;
}

bool DomainIpv6SwitchReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIpv6(refVal);
        }
    }
    return ok;
}

std::string DomainIpv6SwitchReq::getDomain() const
{
    return domain_;
}

void DomainIpv6SwitchReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DomainIpv6SwitchReq::domainIsSet() const
{
    return domainIsSet_;
}

void DomainIpv6SwitchReq::unsetdomain()
{
    domainIsSet_ = false;
}

bool DomainIpv6SwitchReq::isIsIpv6() const
{
    return isIpv6_;
}

void DomainIpv6SwitchReq::setIsIpv6(bool value)
{
    isIpv6_ = value;
    isIpv6IsSet_ = true;
}

bool DomainIpv6SwitchReq::isIpv6IsSet() const
{
    return isIpv6IsSet_;
}

void DomainIpv6SwitchReq::unsetisIpv6()
{
    isIpv6IsSet_ = false;
}

}
}
}
}
}


