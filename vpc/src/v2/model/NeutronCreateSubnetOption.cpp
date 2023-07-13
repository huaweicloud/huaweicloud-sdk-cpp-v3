

#include "huaweicloud/vpc/v2/model/NeutronCreateSubnetOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSubnetOption::NeutronCreateSubnetOption()
{
    name_ = "";
    nameIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    allocationPoolsIsSet_ = false;
    dnsNameserversIsSet_ = false;
    hostRoutesIsSet_ = false;
    enableDhcp_ = false;
    enableDhcpIsSet_ = false;
    ipv6AddressMode_ = "";
    ipv6AddressModeIsSet_ = false;
    ipv6RaMode_ = "";
    ipv6RaModeIsSet_ = false;
}

NeutronCreateSubnetOption::~NeutronCreateSubnetOption() = default;

void NeutronCreateSubnetOption::validate()
{
}

web::json::value NeutronCreateSubnetOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(allocationPoolsIsSet_) {
        val[utility::conversions::to_string_t("allocation_pools")] = ModelBase::toJson(allocationPools_);
    }
    if(dnsNameserversIsSet_) {
        val[utility::conversions::to_string_t("dns_nameservers")] = ModelBase::toJson(dnsNameservers_);
    }
    if(hostRoutesIsSet_) {
        val[utility::conversions::to_string_t("host_routes")] = ModelBase::toJson(hostRoutes_);
    }
    if(enableDhcpIsSet_) {
        val[utility::conversions::to_string_t("enable_dhcp")] = ModelBase::toJson(enableDhcp_);
    }
    if(ipv6AddressModeIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address_mode")] = ModelBase::toJson(ipv6AddressMode_);
    }
    if(ipv6RaModeIsSet_) {
        val[utility::conversions::to_string_t("ipv6_ra_mode")] = ModelBase::toJson(ipv6RaMode_);
    }

    return val;
}

bool NeutronCreateSubnetOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allocation_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocation_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<AllocationPool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocationPools(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_nameservers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_nameservers"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsNameservers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_routes"));
        if(!fieldValue.is_null())
        {
            std::vector<HostRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostRoutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dhcp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dhcp"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDhcp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_address_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6AddressMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_ra_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_ra_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6RaMode(refVal);
        }
    }
    return ok;
}

std::string NeutronCreateSubnetOption::getName() const
{
    return name_;
}

void NeutronCreateSubnetOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateSubnetOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateSubnetOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronCreateSubnetOption::getCidr() const
{
    return cidr_;
}

void NeutronCreateSubnetOption::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NeutronCreateSubnetOption::cidrIsSet() const
{
    return cidrIsSet_;
}

void NeutronCreateSubnetOption::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string NeutronCreateSubnetOption::getNetworkId() const
{
    return networkId_;
}

void NeutronCreateSubnetOption::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronCreateSubnetOption::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronCreateSubnetOption::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string NeutronCreateSubnetOption::getGatewayIp() const
{
    return gatewayIp_;
}

void NeutronCreateSubnetOption::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool NeutronCreateSubnetOption::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void NeutronCreateSubnetOption::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

int32_t NeutronCreateSubnetOption::getIpVersion() const
{
    return ipVersion_;
}

void NeutronCreateSubnetOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronCreateSubnetOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronCreateSubnetOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<AllocationPool>& NeutronCreateSubnetOption::getAllocationPools()
{
    return allocationPools_;
}

void NeutronCreateSubnetOption::setAllocationPools(const std::vector<AllocationPool>& value)
{
    allocationPools_ = value;
    allocationPoolsIsSet_ = true;
}

bool NeutronCreateSubnetOption::allocationPoolsIsSet() const
{
    return allocationPoolsIsSet_;
}

void NeutronCreateSubnetOption::unsetallocationPools()
{
    allocationPoolsIsSet_ = false;
}

std::vector<std::string>& NeutronCreateSubnetOption::getDnsNameservers()
{
    return dnsNameservers_;
}

void NeutronCreateSubnetOption::setDnsNameservers(const std::vector<std::string>& value)
{
    dnsNameservers_ = value;
    dnsNameserversIsSet_ = true;
}

bool NeutronCreateSubnetOption::dnsNameserversIsSet() const
{
    return dnsNameserversIsSet_;
}

void NeutronCreateSubnetOption::unsetdnsNameservers()
{
    dnsNameserversIsSet_ = false;
}

std::vector<HostRoute>& NeutronCreateSubnetOption::getHostRoutes()
{
    return hostRoutes_;
}

void NeutronCreateSubnetOption::setHostRoutes(const std::vector<HostRoute>& value)
{
    hostRoutes_ = value;
    hostRoutesIsSet_ = true;
}

bool NeutronCreateSubnetOption::hostRoutesIsSet() const
{
    return hostRoutesIsSet_;
}

void NeutronCreateSubnetOption::unsethostRoutes()
{
    hostRoutesIsSet_ = false;
}

bool NeutronCreateSubnetOption::isEnableDhcp() const
{
    return enableDhcp_;
}

void NeutronCreateSubnetOption::setEnableDhcp(bool value)
{
    enableDhcp_ = value;
    enableDhcpIsSet_ = true;
}

bool NeutronCreateSubnetOption::enableDhcpIsSet() const
{
    return enableDhcpIsSet_;
}

void NeutronCreateSubnetOption::unsetenableDhcp()
{
    enableDhcpIsSet_ = false;
}

std::string NeutronCreateSubnetOption::getIpv6AddressMode() const
{
    return ipv6AddressMode_;
}

void NeutronCreateSubnetOption::setIpv6AddressMode(const std::string& value)
{
    ipv6AddressMode_ = value;
    ipv6AddressModeIsSet_ = true;
}

bool NeutronCreateSubnetOption::ipv6AddressModeIsSet() const
{
    return ipv6AddressModeIsSet_;
}

void NeutronCreateSubnetOption::unsetipv6AddressMode()
{
    ipv6AddressModeIsSet_ = false;
}

std::string NeutronCreateSubnetOption::getIpv6RaMode() const
{
    return ipv6RaMode_;
}

void NeutronCreateSubnetOption::setIpv6RaMode(const std::string& value)
{
    ipv6RaMode_ = value;
    ipv6RaModeIsSet_ = true;
}

bool NeutronCreateSubnetOption::ipv6RaModeIsSet() const
{
    return ipv6RaModeIsSet_;
}

void NeutronCreateSubnetOption::unsetipv6RaMode()
{
    ipv6RaModeIsSet_ = false;
}

}
}
}
}
}


