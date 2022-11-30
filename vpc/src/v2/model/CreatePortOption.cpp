

#include "huaweicloud/vpc/v2/model/CreatePortOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePortOption::CreatePortOption()
{
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    fixedIpsIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    securityGroupsIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

CreatePortOption::~CreatePortOption() = default;

void CreatePortOption::validate()
{
}

web::json::value CreatePortOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool CreatePortOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<FixedIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_address_pairs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_address_pairs"));
        if(!fieldValue.is_null())
        {
            std::vector<AllowedAddressPair> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedAddressPairs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_dhcp_opts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_dhcp_opts"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtraDhcpOpt> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraDhcpOpts(refVal);
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
    return ok;
}


std::string CreatePortOption::getName() const
{
    return name_;
}

void CreatePortOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePortOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePortOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePortOption::getNetworkId() const
{
    return networkId_;
}

void CreatePortOption::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool CreatePortOption::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void CreatePortOption::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::vector<FixedIp>& CreatePortOption::getFixedIps()
{
    return fixedIps_;
}

void CreatePortOption::setFixedIps(const std::vector<FixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool CreatePortOption::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void CreatePortOption::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string CreatePortOption::getDeviceOwner() const
{
    return deviceOwner_;
}

void CreatePortOption::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool CreatePortOption::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void CreatePortOption::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::vector<std::string>& CreatePortOption::getSecurityGroups()
{
    return securityGroups_;
}

void CreatePortOption::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool CreatePortOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void CreatePortOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

bool CreatePortOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void CreatePortOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool CreatePortOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void CreatePortOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::vector<AllowedAddressPair>& CreatePortOption::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void CreatePortOption::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool CreatePortOption::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void CreatePortOption::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& CreatePortOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void CreatePortOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool CreatePortOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void CreatePortOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::string CreatePortOption::getTenantId() const
{
    return tenantId_;
}

void CreatePortOption::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreatePortOption::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreatePortOption::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


