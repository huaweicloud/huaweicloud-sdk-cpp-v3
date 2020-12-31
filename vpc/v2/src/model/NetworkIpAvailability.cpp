

#include "huaweicloud/vpc/model/NetworkIpAvailability.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NetworkIpAvailability::NetworkIpAvailability()
{
    networkId_ = "";
    networkIdIsSet_ = false;
    networkName_ = "";
    networkNameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    totalIps_ = 0;
    totalIpsIsSet_ = false;
    usedIps_ = 0;
    usedIpsIsSet_ = false;
    subnetIpAvailabilityIsSet_ = false;
}

NetworkIpAvailability::~NetworkIpAvailability() = default;

void NetworkIpAvailability::validate()
{
}

web::json::value NetworkIpAvailability::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(networkNameIsSet_) {
        val[utility::conversions::to_string_t("network_name")] = ModelBase::toJson(networkName_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(totalIpsIsSet_) {
        val[utility::conversions::to_string_t("total_ips")] = ModelBase::toJson(totalIps_);
    }
    if(usedIpsIsSet_) {
        val[utility::conversions::to_string_t("used_ips")] = ModelBase::toJson(usedIps_);
    }
    if(subnetIpAvailabilityIsSet_) {
        val[utility::conversions::to_string_t("subnet_ip_availability")] = ModelBase::toJson(subnetIpAvailability_);
    }

    return val;
}

bool NetworkIpAvailability::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_ips"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_ips"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_ip_availability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_ip_availability"));
        if(!fieldValue.is_null())
        {
            std::vector<SubnetIpAvailability> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetIpAvailability(refVal);
        }
    }
    return ok;
}


std::string NetworkIpAvailability::getNetworkId() const
{
    return networkId_;
}

void NetworkIpAvailability::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NetworkIpAvailability::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NetworkIpAvailability::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string NetworkIpAvailability::getNetworkName() const
{
    return networkName_;
}

void NetworkIpAvailability::setNetworkName(const std::string& value)
{
    networkName_ = value;
    networkNameIsSet_ = true;
}

bool NetworkIpAvailability::networkNameIsSet() const
{
    return networkNameIsSet_;
}

void NetworkIpAvailability::unsetnetworkName()
{
    networkNameIsSet_ = false;
}

std::string NetworkIpAvailability::getTenantId() const
{
    return tenantId_;
}

void NetworkIpAvailability::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NetworkIpAvailability::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NetworkIpAvailability::unsettenantId()
{
    tenantIdIsSet_ = false;
}

int32_t NetworkIpAvailability::getTotalIps() const
{
    return totalIps_;
}

void NetworkIpAvailability::setTotalIps(int32_t value)
{
    totalIps_ = value;
    totalIpsIsSet_ = true;
}

bool NetworkIpAvailability::totalIpsIsSet() const
{
    return totalIpsIsSet_;
}

void NetworkIpAvailability::unsettotalIps()
{
    totalIpsIsSet_ = false;
}

int32_t NetworkIpAvailability::getUsedIps() const
{
    return usedIps_;
}

void NetworkIpAvailability::setUsedIps(int32_t value)
{
    usedIps_ = value;
    usedIpsIsSet_ = true;
}

bool NetworkIpAvailability::usedIpsIsSet() const
{
    return usedIpsIsSet_;
}

void NetworkIpAvailability::unsetusedIps()
{
    usedIpsIsSet_ = false;
}

std::vector<SubnetIpAvailability>& NetworkIpAvailability::getSubnetIpAvailability()
{
    return subnetIpAvailability_;
}

void NetworkIpAvailability::setSubnetIpAvailability(const std::vector<SubnetIpAvailability>& value)
{
    subnetIpAvailability_ = value;
    subnetIpAvailabilityIsSet_ = true;
}

bool NetworkIpAvailability::subnetIpAvailabilityIsSet() const
{
    return subnetIpAvailabilityIsSet_;
}

void NetworkIpAvailability::unsetsubnetIpAvailability()
{
    subnetIpAvailabilityIsSet_ = false;
}

}
}
}
}
}


