

#include "huaweicloud/vpc/v2/model/CreateSubnetOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetOption::CreateSubnetOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    dhcpEnable_ = false;
    dhcpEnableIsSet_ = false;
    primaryDns_ = "";
    primaryDnsIsSet_ = false;
    secondaryDns_ = "";
    secondaryDnsIsSet_ = false;
    dnsListIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    tagsIsSet_ = false;
}

CreateSubnetOption::~CreateSubnetOption() = default;

void CreateSubnetOption::validate()
{
}

web::json::value CreateSubnetOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
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
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateSubnetOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateSubnetOption::getName() const
{
    return name_;
}

void CreateSubnetOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSubnetOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSubnetOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSubnetOption::getDescription() const
{
    return description_;
}

void CreateSubnetOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSubnetOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSubnetOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSubnetOption::getCidr() const
{
    return cidr_;
}

void CreateSubnetOption::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool CreateSubnetOption::cidrIsSet() const
{
    return cidrIsSet_;
}

void CreateSubnetOption::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string CreateSubnetOption::getVpcId() const
{
    return vpcId_;
}

void CreateSubnetOption::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateSubnetOption::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateSubnetOption::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateSubnetOption::getGatewayIp() const
{
    return gatewayIp_;
}

void CreateSubnetOption::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool CreateSubnetOption::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void CreateSubnetOption::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

bool CreateSubnetOption::isIpv6Enable() const
{
    return ipv6Enable_;
}

void CreateSubnetOption::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool CreateSubnetOption::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void CreateSubnetOption::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

bool CreateSubnetOption::isDhcpEnable() const
{
    return dhcpEnable_;
}

void CreateSubnetOption::setDhcpEnable(bool value)
{
    dhcpEnable_ = value;
    dhcpEnableIsSet_ = true;
}

bool CreateSubnetOption::dhcpEnableIsSet() const
{
    return dhcpEnableIsSet_;
}

void CreateSubnetOption::unsetdhcpEnable()
{
    dhcpEnableIsSet_ = false;
}

std::string CreateSubnetOption::getPrimaryDns() const
{
    return primaryDns_;
}

void CreateSubnetOption::setPrimaryDns(const std::string& value)
{
    primaryDns_ = value;
    primaryDnsIsSet_ = true;
}

bool CreateSubnetOption::primaryDnsIsSet() const
{
    return primaryDnsIsSet_;
}

void CreateSubnetOption::unsetprimaryDns()
{
    primaryDnsIsSet_ = false;
}

std::string CreateSubnetOption::getSecondaryDns() const
{
    return secondaryDns_;
}

void CreateSubnetOption::setSecondaryDns(const std::string& value)
{
    secondaryDns_ = value;
    secondaryDnsIsSet_ = true;
}

bool CreateSubnetOption::secondaryDnsIsSet() const
{
    return secondaryDnsIsSet_;
}

void CreateSubnetOption::unsetsecondaryDns()
{
    secondaryDnsIsSet_ = false;
}

std::vector<std::string>& CreateSubnetOption::getDnsList()
{
    return dnsList_;
}

void CreateSubnetOption::setDnsList(const std::vector<std::string>& value)
{
    dnsList_ = value;
    dnsListIsSet_ = true;
}

bool CreateSubnetOption::dnsListIsSet() const
{
    return dnsListIsSet_;
}

void CreateSubnetOption::unsetdnsList()
{
    dnsListIsSet_ = false;
}

std::string CreateSubnetOption::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateSubnetOption::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateSubnetOption::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateSubnetOption::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::vector<ExtraDhcpOption>& CreateSubnetOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void CreateSubnetOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool CreateSubnetOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void CreateSubnetOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::vector<std::string>& CreateSubnetOption::getTags()
{
    return tags_;
}

void CreateSubnetOption::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateSubnetOption::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateSubnetOption::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


