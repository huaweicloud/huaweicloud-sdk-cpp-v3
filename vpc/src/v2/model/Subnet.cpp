

#include "huaweicloud/vpc/v2/model/Subnet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Subnet::Subnet()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    cidrV6_ = "";
    cidrV6IsSet_ = false;
    gatewayIpV6_ = "";
    gatewayIpV6IsSet_ = false;
    dhcpEnable_ = false;
    dhcpEnableIsSet_ = false;
    primaryDns_ = "";
    primaryDnsIsSet_ = false;
    secondaryDns_ = "";
    secondaryDnsIsSet_ = false;
    dnsListIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    neutronNetworkId_ = "";
    neutronNetworkIdIsSet_ = false;
    neutronSubnetId_ = "";
    neutronSubnetIdIsSet_ = false;
    neutronSubnetIdV6_ = "";
    neutronSubnetIdV6IsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    enableNetworkAddressUsageMetrics_ = false;
    enableNetworkAddressUsageMetricsIsSet_ = false;
    availableIpAddressCount_ = 0;
    availableIpAddressCountIsSet_ = false;
}

Subnet::~Subnet() = default;

void Subnet::validate()
{
}

web::json::value Subnet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(cidrV6IsSet_) {
        val[utility::conversions::to_string_t("cidr_v6")] = ModelBase::toJson(cidrV6_);
    }
    if(gatewayIpV6IsSet_) {
        val[utility::conversions::to_string_t("gateway_ip_v6")] = ModelBase::toJson(gatewayIpV6_);
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
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(neutronNetworkIdIsSet_) {
        val[utility::conversions::to_string_t("neutron_network_id")] = ModelBase::toJson(neutronNetworkId_);
    }
    if(neutronSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("neutron_subnet_id")] = ModelBase::toJson(neutronSubnetId_);
    }
    if(neutronSubnetIdV6IsSet_) {
        val[utility::conversions::to_string_t("neutron_subnet_id_v6")] = ModelBase::toJson(neutronSubnetIdV6_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(enableNetworkAddressUsageMetricsIsSet_) {
        val[utility::conversions::to_string_t("enable_network_address_usage_metrics")] = ModelBase::toJson(enableNetworkAddressUsageMetrics_);
    }
    if(availableIpAddressCountIsSet_) {
        val[utility::conversions::to_string_t("available_ip_address_count")] = ModelBase::toJson(availableIpAddressCount_);
    }

    return val;
}
bool Subnet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("cidr_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrV6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_ip_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIpV6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("neutron_network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("neutron_network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeutronNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("neutron_subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("neutron_subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeutronSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("neutron_subnet_id_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("neutron_subnet_id_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeutronSubnetIdV6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_network_address_usage_metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_network_address_usage_metrics"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableNetworkAddressUsageMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available_ip_address_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_ip_address_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableIpAddressCount(refVal);
        }
    }
    return ok;
}


std::string Subnet::getId() const
{
    return id_;
}

void Subnet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Subnet::idIsSet() const
{
    return idIsSet_;
}

void Subnet::unsetid()
{
    idIsSet_ = false;
}

std::string Subnet::getName() const
{
    return name_;
}

void Subnet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Subnet::nameIsSet() const
{
    return nameIsSet_;
}

void Subnet::unsetname()
{
    nameIsSet_ = false;
}

std::string Subnet::getDescription() const
{
    return description_;
}

void Subnet::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Subnet::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Subnet::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Subnet::getCidr() const
{
    return cidr_;
}

void Subnet::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool Subnet::cidrIsSet() const
{
    return cidrIsSet_;
}

void Subnet::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string Subnet::getGatewayIp() const
{
    return gatewayIp_;
}

void Subnet::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool Subnet::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void Subnet::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

bool Subnet::isIpv6Enable() const
{
    return ipv6Enable_;
}

void Subnet::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool Subnet::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void Subnet::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

std::string Subnet::getCidrV6() const
{
    return cidrV6_;
}

void Subnet::setCidrV6(const std::string& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool Subnet::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void Subnet::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

std::string Subnet::getGatewayIpV6() const
{
    return gatewayIpV6_;
}

void Subnet::setGatewayIpV6(const std::string& value)
{
    gatewayIpV6_ = value;
    gatewayIpV6IsSet_ = true;
}

bool Subnet::gatewayIpV6IsSet() const
{
    return gatewayIpV6IsSet_;
}

void Subnet::unsetgatewayIpV6()
{
    gatewayIpV6IsSet_ = false;
}

bool Subnet::isDhcpEnable() const
{
    return dhcpEnable_;
}

void Subnet::setDhcpEnable(bool value)
{
    dhcpEnable_ = value;
    dhcpEnableIsSet_ = true;
}

bool Subnet::dhcpEnableIsSet() const
{
    return dhcpEnableIsSet_;
}

void Subnet::unsetdhcpEnable()
{
    dhcpEnableIsSet_ = false;
}

std::string Subnet::getPrimaryDns() const
{
    return primaryDns_;
}

void Subnet::setPrimaryDns(const std::string& value)
{
    primaryDns_ = value;
    primaryDnsIsSet_ = true;
}

bool Subnet::primaryDnsIsSet() const
{
    return primaryDnsIsSet_;
}

void Subnet::unsetprimaryDns()
{
    primaryDnsIsSet_ = false;
}

std::string Subnet::getSecondaryDns() const
{
    return secondaryDns_;
}

void Subnet::setSecondaryDns(const std::string& value)
{
    secondaryDns_ = value;
    secondaryDnsIsSet_ = true;
}

bool Subnet::secondaryDnsIsSet() const
{
    return secondaryDnsIsSet_;
}

void Subnet::unsetsecondaryDns()
{
    secondaryDnsIsSet_ = false;
}

std::vector<std::string>& Subnet::getDnsList()
{
    return dnsList_;
}

void Subnet::setDnsList(const std::vector<std::string>& value)
{
    dnsList_ = value;
    dnsListIsSet_ = true;
}

bool Subnet::dnsListIsSet() const
{
    return dnsListIsSet_;
}

void Subnet::unsetdnsList()
{
    dnsListIsSet_ = false;
}

std::string Subnet::getAvailabilityZone() const
{
    return availabilityZone_;
}

void Subnet::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool Subnet::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void Subnet::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string Subnet::getVpcId() const
{
    return vpcId_;
}

void Subnet::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool Subnet::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void Subnet::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string Subnet::getStatus() const
{
    return status_;
}

void Subnet::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Subnet::statusIsSet() const
{
    return statusIsSet_;
}

void Subnet::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Subnet::getNeutronNetworkId() const
{
    return neutronNetworkId_;
}

void Subnet::setNeutronNetworkId(const std::string& value)
{
    neutronNetworkId_ = value;
    neutronNetworkIdIsSet_ = true;
}

bool Subnet::neutronNetworkIdIsSet() const
{
    return neutronNetworkIdIsSet_;
}

void Subnet::unsetneutronNetworkId()
{
    neutronNetworkIdIsSet_ = false;
}

std::string Subnet::getNeutronSubnetId() const
{
    return neutronSubnetId_;
}

void Subnet::setNeutronSubnetId(const std::string& value)
{
    neutronSubnetId_ = value;
    neutronSubnetIdIsSet_ = true;
}

bool Subnet::neutronSubnetIdIsSet() const
{
    return neutronSubnetIdIsSet_;
}

void Subnet::unsetneutronSubnetId()
{
    neutronSubnetIdIsSet_ = false;
}

std::string Subnet::getNeutronSubnetIdV6() const
{
    return neutronSubnetIdV6_;
}

void Subnet::setNeutronSubnetIdV6(const std::string& value)
{
    neutronSubnetIdV6_ = value;
    neutronSubnetIdV6IsSet_ = true;
}

bool Subnet::neutronSubnetIdV6IsSet() const
{
    return neutronSubnetIdV6IsSet_;
}

void Subnet::unsetneutronSubnetIdV6()
{
    neutronSubnetIdV6IsSet_ = false;
}

std::vector<ExtraDhcpOption>& Subnet::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void Subnet::setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool Subnet::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void Subnet::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::string Subnet::getScope() const
{
    return scope_;
}

void Subnet::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool Subnet::scopeIsSet() const
{
    return scopeIsSet_;
}

void Subnet::unsetscope()
{
    scopeIsSet_ = false;
}

std::string Subnet::getTenantId() const
{
    return tenantId_;
}

void Subnet::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool Subnet::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void Subnet::unsettenantId()
{
    tenantIdIsSet_ = false;
}

utility::datetime Subnet::getCreatedAt() const
{
    return createdAt_;
}

void Subnet::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Subnet::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Subnet::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime Subnet::getUpdatedAt() const
{
    return updatedAt_;
}

void Subnet::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool Subnet::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void Subnet::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool Subnet::isEnableNetworkAddressUsageMetrics() const
{
    return enableNetworkAddressUsageMetrics_;
}

void Subnet::setEnableNetworkAddressUsageMetrics(bool value)
{
    enableNetworkAddressUsageMetrics_ = value;
    enableNetworkAddressUsageMetricsIsSet_ = true;
}

bool Subnet::enableNetworkAddressUsageMetricsIsSet() const
{
    return enableNetworkAddressUsageMetricsIsSet_;
}

void Subnet::unsetenableNetworkAddressUsageMetrics()
{
    enableNetworkAddressUsageMetricsIsSet_ = false;
}

int32_t Subnet::getAvailableIpAddressCount() const
{
    return availableIpAddressCount_;
}

void Subnet::setAvailableIpAddressCount(int32_t value)
{
    availableIpAddressCount_ = value;
    availableIpAddressCountIsSet_ = true;
}

bool Subnet::availableIpAddressCountIsSet() const
{
    return availableIpAddressCountIsSet_;
}

void Subnet::unsetavailableIpAddressCount()
{
    availableIpAddressCountIsSet_ = false;
}

}
}
}
}
}


