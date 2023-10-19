

#include "huaweicloud/cfw/v1/model/DomainInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DomainInfo::DomainInfo()
{
    domainAddressId_ = "";
    domainAddressIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dnsIpsIsSet_ = false;
}

DomainInfo::~DomainInfo() = default;

void DomainInfo::validate()
{
}

web::json::value DomainInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainAddressIdIsSet_) {
        val[utility::conversions::to_string_t("domain_address_id")] = ModelBase::toJson(domainAddressId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dnsIpsIsSet_) {
        val[utility::conversions::to_string_t("dns_ips")] = ModelBase::toJson(dnsIps_);
    }

    return val;
}
bool DomainInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_address_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_address_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAddressId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dns_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsIps(refVal);
        }
    }
    return ok;
}


std::string DomainInfo::getDomainAddressId() const
{
    return domainAddressId_;
}

void DomainInfo::setDomainAddressId(const std::string& value)
{
    domainAddressId_ = value;
    domainAddressIdIsSet_ = true;
}

bool DomainInfo::domainAddressIdIsSet() const
{
    return domainAddressIdIsSet_;
}

void DomainInfo::unsetdomainAddressId()
{
    domainAddressIdIsSet_ = false;
}

std::string DomainInfo::getDomainName() const
{
    return domainName_;
}

void DomainInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainInfo::getDescription() const
{
    return description_;
}

void DomainInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DomainInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DomainInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& DomainInfo::getDnsIps()
{
    return dnsIps_;
}

void DomainInfo::setDnsIps(const std::vector<std::string>& value)
{
    dnsIps_ = value;
    dnsIpsIsSet_ = true;
}

bool DomainInfo::dnsIpsIsSet() const
{
    return dnsIpsIsSet_;
}

void DomainInfo::unsetdnsIps()
{
    dnsIpsIsSet_ = false;
}

}
}
}
}
}


