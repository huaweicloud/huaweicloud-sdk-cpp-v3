

#include "huaweicloud/vpc/v2/model/NeutronUpdateSubnetOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSubnetOption::NeutronUpdateSubnetOption()
{
    dnsNameserversIsSet_ = false;
    enableDhcp_ = false;
    enableDhcpIsSet_ = false;
    hostRoutesIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    allocationPoolsIsSet_ = false;
}

NeutronUpdateSubnetOption::~NeutronUpdateSubnetOption() = default;

void NeutronUpdateSubnetOption::validate()
{
}

web::json::value NeutronUpdateSubnetOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsNameserversIsSet_) {
        val[utility::conversions::to_string_t("dns_nameservers")] = ModelBase::toJson(dnsNameservers_);
    }
    if(enableDhcpIsSet_) {
        val[utility::conversions::to_string_t("enable_dhcp")] = ModelBase::toJson(enableDhcp_);
    }
    if(hostRoutesIsSet_) {
        val[utility::conversions::to_string_t("host_routes")] = ModelBase::toJson(hostRoutes_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(allocationPoolsIsSet_) {
        val[utility::conversions::to_string_t("allocation_pools")] = ModelBase::toJson(allocationPools_);
    }

    return val;
}
bool NeutronUpdateSubnetOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("host_routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_routes"));
        if(!fieldValue.is_null())
        {
            std::vector<HostRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostRoutes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allocation_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocation_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<AllocationPool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocationPools(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& NeutronUpdateSubnetOption::getDnsNameservers()
{
    return dnsNameservers_;
}

void NeutronUpdateSubnetOption::setDnsNameservers(const std::vector<std::string>& value)
{
    dnsNameservers_ = value;
    dnsNameserversIsSet_ = true;
}

bool NeutronUpdateSubnetOption::dnsNameserversIsSet() const
{
    return dnsNameserversIsSet_;
}

void NeutronUpdateSubnetOption::unsetdnsNameservers()
{
    dnsNameserversIsSet_ = false;
}

bool NeutronUpdateSubnetOption::isEnableDhcp() const
{
    return enableDhcp_;
}

void NeutronUpdateSubnetOption::setEnableDhcp(bool value)
{
    enableDhcp_ = value;
    enableDhcpIsSet_ = true;
}

bool NeutronUpdateSubnetOption::enableDhcpIsSet() const
{
    return enableDhcpIsSet_;
}

void NeutronUpdateSubnetOption::unsetenableDhcp()
{
    enableDhcpIsSet_ = false;
}

std::vector<HostRoute>& NeutronUpdateSubnetOption::getHostRoutes()
{
    return hostRoutes_;
}

void NeutronUpdateSubnetOption::setHostRoutes(const std::vector<HostRoute>& value)
{
    hostRoutes_ = value;
    hostRoutesIsSet_ = true;
}

bool NeutronUpdateSubnetOption::hostRoutesIsSet() const
{
    return hostRoutesIsSet_;
}

void NeutronUpdateSubnetOption::unsethostRoutes()
{
    hostRoutesIsSet_ = false;
}

std::string NeutronUpdateSubnetOption::getName() const
{
    return name_;
}

void NeutronUpdateSubnetOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateSubnetOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateSubnetOption::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AllocationPool>& NeutronUpdateSubnetOption::getAllocationPools()
{
    return allocationPools_;
}

void NeutronUpdateSubnetOption::setAllocationPools(const std::vector<AllocationPool>& value)
{
    allocationPools_ = value;
    allocationPoolsIsSet_ = true;
}

bool NeutronUpdateSubnetOption::allocationPoolsIsSet() const
{
    return allocationPoolsIsSet_;
}

void NeutronUpdateSubnetOption::unsetallocationPools()
{
    allocationPoolsIsSet_ = false;
}

}
}
}
}
}


