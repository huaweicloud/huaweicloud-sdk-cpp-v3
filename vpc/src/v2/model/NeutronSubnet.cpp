

#include "huaweicloud/vpc/v2/model/NeutronSubnet.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronSubnet::NeutronSubnet()
{
    allocationPoolsIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    dnsNameserversIsSet_ = false;
    enableDhcp_ = false;
    enableDhcpIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    hostRoutesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    ipv6AddressMode_ = "";
    ipv6AddressModeIsSet_ = false;
    ipv6RaMode_ = "";
    ipv6RaModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    subnetpoolId_ = "";
    subnetpoolIdIsSet_ = false;
}

NeutronSubnet::~NeutronSubnet() = default;

void NeutronSubnet::validate()
{
}

web::json::value NeutronSubnet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allocationPoolsIsSet_) {
        val[utility::conversions::to_string_t("allocation_pools")] = ModelBase::toJson(allocationPools_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(dnsNameserversIsSet_) {
        val[utility::conversions::to_string_t("dns_nameservers")] = ModelBase::toJson(dnsNameservers_);
    }
    if(enableDhcpIsSet_) {
        val[utility::conversions::to_string_t("enable_dhcp")] = ModelBase::toJson(enableDhcp_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(hostRoutesIsSet_) {
        val[utility::conversions::to_string_t("host_routes")] = ModelBase::toJson(hostRoutes_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(ipv6AddressModeIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address_mode")] = ModelBase::toJson(ipv6AddressMode_);
    }
    if(ipv6RaModeIsSet_) {
        val[utility::conversions::to_string_t("ipv6_ra_mode")] = ModelBase::toJson(ipv6RaMode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(subnetpoolIdIsSet_) {
        val[utility::conversions::to_string_t("subnetpool_id")] = ModelBase::toJson(subnetpoolId_);
    }

    return val;
}

bool NeutronSubnet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allocation_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocation_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<AllocationPool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocationPools(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dns_nameservers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_nameservers"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsNameservers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gateway_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnetpool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetpool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetpoolId(refVal);
        }
    }
    return ok;
}

std::vector<AllocationPool>& NeutronSubnet::getAllocationPools()
{
    return allocationPools_;
}

void NeutronSubnet::setAllocationPools(const std::vector<AllocationPool>& value)
{
    allocationPools_ = value;
    allocationPoolsIsSet_ = true;
}

bool NeutronSubnet::allocationPoolsIsSet() const
{
    return allocationPoolsIsSet_;
}

void NeutronSubnet::unsetallocationPools()
{
    allocationPoolsIsSet_ = false;
}

std::string NeutronSubnet::getCidr() const
{
    return cidr_;
}

void NeutronSubnet::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NeutronSubnet::cidrIsSet() const
{
    return cidrIsSet_;
}

void NeutronSubnet::unsetcidr()
{
    cidrIsSet_ = false;
}

std::vector<std::string>& NeutronSubnet::getDnsNameservers()
{
    return dnsNameservers_;
}

void NeutronSubnet::setDnsNameservers(const std::vector<std::string>& value)
{
    dnsNameservers_ = value;
    dnsNameserversIsSet_ = true;
}

bool NeutronSubnet::dnsNameserversIsSet() const
{
    return dnsNameserversIsSet_;
}

void NeutronSubnet::unsetdnsNameservers()
{
    dnsNameserversIsSet_ = false;
}

bool NeutronSubnet::isEnableDhcp() const
{
    return enableDhcp_;
}

void NeutronSubnet::setEnableDhcp(bool value)
{
    enableDhcp_ = value;
    enableDhcpIsSet_ = true;
}

bool NeutronSubnet::enableDhcpIsSet() const
{
    return enableDhcpIsSet_;
}

void NeutronSubnet::unsetenableDhcp()
{
    enableDhcpIsSet_ = false;
}

std::string NeutronSubnet::getGatewayIp() const
{
    return gatewayIp_;
}

void NeutronSubnet::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool NeutronSubnet::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void NeutronSubnet::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

std::vector<HostRoute>& NeutronSubnet::getHostRoutes()
{
    return hostRoutes_;
}

void NeutronSubnet::setHostRoutes(const std::vector<HostRoute>& value)
{
    hostRoutes_ = value;
    hostRoutesIsSet_ = true;
}

bool NeutronSubnet::hostRoutesIsSet() const
{
    return hostRoutesIsSet_;
}

void NeutronSubnet::unsethostRoutes()
{
    hostRoutesIsSet_ = false;
}

std::string NeutronSubnet::getId() const
{
    return id_;
}

void NeutronSubnet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronSubnet::idIsSet() const
{
    return idIsSet_;
}

void NeutronSubnet::unsetid()
{
    idIsSet_ = false;
}

int32_t NeutronSubnet::getIpVersion() const
{
    return ipVersion_;
}

void NeutronSubnet::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronSubnet::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronSubnet::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string NeutronSubnet::getIpv6AddressMode() const
{
    return ipv6AddressMode_;
}

void NeutronSubnet::setIpv6AddressMode(const std::string& value)
{
    ipv6AddressMode_ = value;
    ipv6AddressModeIsSet_ = true;
}

bool NeutronSubnet::ipv6AddressModeIsSet() const
{
    return ipv6AddressModeIsSet_;
}

void NeutronSubnet::unsetipv6AddressMode()
{
    ipv6AddressModeIsSet_ = false;
}

std::string NeutronSubnet::getIpv6RaMode() const
{
    return ipv6RaMode_;
}

void NeutronSubnet::setIpv6RaMode(const std::string& value)
{
    ipv6RaMode_ = value;
    ipv6RaModeIsSet_ = true;
}

bool NeutronSubnet::ipv6RaModeIsSet() const
{
    return ipv6RaModeIsSet_;
}

void NeutronSubnet::unsetipv6RaMode()
{
    ipv6RaModeIsSet_ = false;
}

std::string NeutronSubnet::getName() const
{
    return name_;
}

void NeutronSubnet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronSubnet::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronSubnet::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronSubnet::getNetworkId() const
{
    return networkId_;
}

void NeutronSubnet::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronSubnet::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronSubnet::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string NeutronSubnet::getTenantId() const
{
    return tenantId_;
}

void NeutronSubnet::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronSubnet::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronSubnet::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronSubnet::getProjectId() const
{
    return projectId_;
}

void NeutronSubnet::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronSubnet::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronSubnet::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronSubnet::getCreatedAt() const
{
    return createdAt_;
}

void NeutronSubnet::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronSubnet::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronSubnet::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronSubnet::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronSubnet::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronSubnet::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronSubnet::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string NeutronSubnet::getSubnetpoolId() const
{
    return subnetpoolId_;
}

void NeutronSubnet::setSubnetpoolId(const std::string& value)
{
    subnetpoolId_ = value;
    subnetpoolIdIsSet_ = true;
}

bool NeutronSubnet::subnetpoolIdIsSet() const
{
    return subnetpoolIdIsSet_;
}

void NeutronSubnet::unsetsubnetpoolId()
{
    subnetpoolIdIsSet_ = false;
}

}
}
}
}
}


