

#include "huaweicloud/vpc/model/UpdateSubnetOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateSubnetOption::UpdateSubnetOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    dhcpEnable_ = false;
    dhcpEnableIsSet_ = false;
    primaryDns_ = "";
    primaryDnsIsSet_ = false;
    secondaryDns_ = "";
    secondaryDnsIsSet_ = false;
    dnsListIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
}

UpdateSubnetOption::~UpdateSubnetOption() = default;

void UpdateSubnetOption::validate()
{
}

web::json::value UpdateSubnetOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(dhcpEnableIsSet_) {
        val[utility::conversions::to_string_t("dhcp_enable")] = ModelBase::toJson(dhcpEnable_);
    }
    if(primaryDnsIsSet_) {
        val[utility::conversions::to_string_t("primary_dns")] = ModelBase::toJson(primaryDns_);
    }
    if(secondaryDnsIsSet_) {
        val[utility::conversions::to_string_t("secondary_dns")] = ModelBase::toJson(secondaryDns_);
    }
    if(dnsListIsSet_) {
        val[utility::conversions::to_string_t("dnsList")] = ModelBase::toJson(dnsList_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }

    return val;
}

bool UpdateSubnetOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dhcp_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dhcp_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDhcpEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_dns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_dns"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryDns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_dns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_dns"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryDns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dnsList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dnsList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_dhcp_opts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_dhcp_opts"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtraDhcpOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraDhcpOpts(refVal);
        }
    }
    return ok;
}


std::string UpdateSubnetOption::getName() const
{
    return name_;
}

void UpdateSubnetOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSubnetOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSubnetOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateSubnetOption::getDescription() const
{
    return description_;
}

void UpdateSubnetOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateSubnetOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateSubnetOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool UpdateSubnetOption::isIpv6Enable() const
{
    return ipv6Enable_;
}

void UpdateSubnetOption::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool UpdateSubnetOption::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void UpdateSubnetOption::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

bool UpdateSubnetOption::isDhcpEnable() const
{
    return dhcpEnable_;
}

void UpdateSubnetOption::setDhcpEnable(bool value)
{
    dhcpEnable_ = value;
    dhcpEnableIsSet_ = true;
}

bool UpdateSubnetOption::dhcpEnableIsSet() const
{
    return dhcpEnableIsSet_;
}

void UpdateSubnetOption::unsetdhcpEnable()
{
    dhcpEnableIsSet_ = false;
}

std::string UpdateSubnetOption::getPrimaryDns() const
{
    return primaryDns_;
}

void UpdateSubnetOption::setPrimaryDns(const std::string& value)
{
    primaryDns_ = value;
    primaryDnsIsSet_ = true;
}

bool UpdateSubnetOption::primaryDnsIsSet() const
{
    return primaryDnsIsSet_;
}

void UpdateSubnetOption::unsetprimaryDns()
{
    primaryDnsIsSet_ = false;
}

std::string UpdateSubnetOption::getSecondaryDns() const
{
    return secondaryDns_;
}

void UpdateSubnetOption::setSecondaryDns(const std::string& value)
{
    secondaryDns_ = value;
    secondaryDnsIsSet_ = true;
}

bool UpdateSubnetOption::secondaryDnsIsSet() const
{
    return secondaryDnsIsSet_;
}

void UpdateSubnetOption::unsetsecondaryDns()
{
    secondaryDnsIsSet_ = false;
}

std::vector<std::string>& UpdateSubnetOption::getDnsList()
{
    return dnsList_;
}

void UpdateSubnetOption::setDnsList(const std::vector<std::string>& value)
{
    dnsList_ = value;
    dnsListIsSet_ = true;
}

bool UpdateSubnetOption::dnsListIsSet() const
{
    return dnsListIsSet_;
}

void UpdateSubnetOption::unsetdnsList()
{
    dnsListIsSet_ = false;
}

std::vector<ExtraDhcpOption>& UpdateSubnetOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void UpdateSubnetOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool UpdateSubnetOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void UpdateSubnetOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

}
}
}
}
}


