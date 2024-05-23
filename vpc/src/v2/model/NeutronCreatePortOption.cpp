

#include "huaweicloud/vpc/v2/model/NeutronCreatePortOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreatePortOption::NeutronCreatePortOption()
{
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    fixedIpsIsSet_ = false;
    securityGroupsIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    bindingProfileIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
    bindingVnicType_ = "";
    bindingVnicTypeIsSet_ = false;
}

NeutronCreatePortOption::~NeutronCreatePortOption() = default;

void NeutronCreatePortOption::validate()
{
}

web::json::value NeutronCreatePortOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(bindingProfileIsSet_) {
        val[utility::conversions::to_string_t("binding:profile")] = ModelBase::toJson(bindingProfile_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }
    if(bindingVnicTypeIsSet_) {
        val[utility::conversions::to_string_t("binding:vnic_type")] = ModelBase::toJson(bindingVnicType_);
    }

    return val;
}
bool NeutronCreatePortOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("binding:profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:profile"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_security_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_security_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortSecurityEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binding:vnic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vnic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingVnicType(refVal);
        }
    }
    return ok;
}


std::string NeutronCreatePortOption::getName() const
{
    return name_;
}

void NeutronCreatePortOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreatePortOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreatePortOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronCreatePortOption::getNetworkId() const
{
    return networkId_;
}

void NeutronCreatePortOption::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronCreatePortOption::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronCreatePortOption::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

bool NeutronCreatePortOption::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronCreatePortOption::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronCreatePortOption::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronCreatePortOption::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::vector<FixedIp>& NeutronCreatePortOption::getFixedIps()
{
    return fixedIps_;
}

void NeutronCreatePortOption::setFixedIps(const std::vector<FixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NeutronCreatePortOption::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NeutronCreatePortOption::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::vector<std::string>& NeutronCreatePortOption::getSecurityGroups()
{
    return securityGroups_;
}

void NeutronCreatePortOption::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NeutronCreatePortOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NeutronCreatePortOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string NeutronCreatePortOption::getDeviceOwner() const
{
    return deviceOwner_;
}

void NeutronCreatePortOption::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool NeutronCreatePortOption::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void NeutronCreatePortOption::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::vector<AllowedAddressPair>& NeutronCreatePortOption::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void NeutronCreatePortOption::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool NeutronCreatePortOption::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void NeutronCreatePortOption::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& NeutronCreatePortOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void NeutronCreatePortOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool NeutronCreatePortOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void NeutronCreatePortOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::map<std::string, Object>& NeutronCreatePortOption::getBindingProfile()
{
    return bindingProfile_;
}

void NeutronCreatePortOption::setBindingProfile(const std::map<std::string, Object>& value)
{
    bindingProfile_ = value;
    bindingProfileIsSet_ = true;
}

bool NeutronCreatePortOption::bindingProfileIsSet() const
{
    return bindingProfileIsSet_;
}

void NeutronCreatePortOption::unsetbindingProfile()
{
    bindingProfileIsSet_ = false;
}

bool NeutronCreatePortOption::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronCreatePortOption::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronCreatePortOption::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronCreatePortOption::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

std::string NeutronCreatePortOption::getBindingVnicType() const
{
    return bindingVnicType_;
}

void NeutronCreatePortOption::setBindingVnicType(const std::string& value)
{
    bindingVnicType_ = value;
    bindingVnicTypeIsSet_ = true;
}

bool NeutronCreatePortOption::bindingVnicTypeIsSet() const
{
    return bindingVnicTypeIsSet_;
}

void NeutronCreatePortOption::unsetbindingVnicType()
{
    bindingVnicTypeIsSet_ = false;
}

}
}
}
}
}


