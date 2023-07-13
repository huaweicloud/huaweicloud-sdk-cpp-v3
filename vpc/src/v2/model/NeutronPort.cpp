

#include "huaweicloud/vpc/v2/model/NeutronPort.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronPort::NeutronPort()
{
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    bindingprofileIsSet_ = false;
    bindingvifDetailsIsSet_ = false;
    bindingvnicType_ = "";
    bindingvnicTypeIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    dnsAssignmentIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    fixedIpsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
    securityGroupsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronPort::~NeutronPort() = default;

void NeutronPort::validate()
{
}

web::json::value NeutronPort::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }
    if(bindingprofileIsSet_) {
        val[utility::conversions::to_string_t("binding:profile")] = ModelBase::toJson(bindingprofile_);
    }
    if(bindingvifDetailsIsSet_) {
        val[utility::conversions::to_string_t("binding:vif_details")] = ModelBase::toJson(bindingvifDetails_);
    }
    if(bindingvnicTypeIsSet_) {
        val[utility::conversions::to_string_t("binding:vnic_type")] = ModelBase::toJson(bindingvnicType_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(dnsAssignmentIsSet_) {
        val[utility::conversions::to_string_t("dns_assignment")] = ModelBase::toJson(dnsAssignment_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(macAddressIsSet_) {
        val[utility::conversions::to_string_t("mac_address")] = ModelBase::toJson(macAddress_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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

    return val;
}

bool NeutronPort::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("binding:profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:profile"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingprofile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binding:vif_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vif_details"));
        if(!fieldValue.is_null())
        {
            BindingVifDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingvifDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binding:vnic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vnic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingvnicType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dns_assignment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_assignment"));
        if(!fieldValue.is_null())
        {
            std::vector<DnsAssignMent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsAssignment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<FixedIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mac_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_security_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_security_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortSecurityEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}

bool NeutronPort::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronPort::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronPort::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronPort::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::vector<AllowedAddressPair>& NeutronPort::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void NeutronPort::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool NeutronPort::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void NeutronPort::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

Object NeutronPort::getBindingprofile() const
{
    return bindingprofile_;
}

void NeutronPort::setBindingprofile(const Object& value)
{
    bindingprofile_ = value;
    bindingprofileIsSet_ = true;
}

bool NeutronPort::bindingprofileIsSet() const
{
    return bindingprofileIsSet_;
}

void NeutronPort::unsetbindingprofile()
{
    bindingprofileIsSet_ = false;
}

BindingVifDetails NeutronPort::getBindingvifDetails() const
{
    return bindingvifDetails_;
}

void NeutronPort::setBindingvifDetails(const BindingVifDetails& value)
{
    bindingvifDetails_ = value;
    bindingvifDetailsIsSet_ = true;
}

bool NeutronPort::bindingvifDetailsIsSet() const
{
    return bindingvifDetailsIsSet_;
}

void NeutronPort::unsetbindingvifDetails()
{
    bindingvifDetailsIsSet_ = false;
}

std::string NeutronPort::getBindingvnicType() const
{
    return bindingvnicType_;
}

void NeutronPort::setBindingvnicType(const std::string& value)
{
    bindingvnicType_ = value;
    bindingvnicTypeIsSet_ = true;
}

bool NeutronPort::bindingvnicTypeIsSet() const
{
    return bindingvnicTypeIsSet_;
}

void NeutronPort::unsetbindingvnicType()
{
    bindingvnicTypeIsSet_ = false;
}

std::string NeutronPort::getDeviceId() const
{
    return deviceId_;
}

void NeutronPort::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool NeutronPort::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void NeutronPort::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string NeutronPort::getDeviceOwner() const
{
    return deviceOwner_;
}

void NeutronPort::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool NeutronPort::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void NeutronPort::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::vector<DnsAssignMent>& NeutronPort::getDnsAssignment()
{
    return dnsAssignment_;
}

void NeutronPort::setDnsAssignment(const std::vector<DnsAssignMent>& value)
{
    dnsAssignment_ = value;
    dnsAssignmentIsSet_ = true;
}

bool NeutronPort::dnsAssignmentIsSet() const
{
    return dnsAssignmentIsSet_;
}

void NeutronPort::unsetdnsAssignment()
{
    dnsAssignmentIsSet_ = false;
}

std::string NeutronPort::getDnsName() const
{
    return dnsName_;
}

void NeutronPort::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool NeutronPort::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void NeutronPort::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& NeutronPort::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void NeutronPort::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool NeutronPort::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void NeutronPort::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::vector<FixedIp>& NeutronPort::getFixedIps()
{
    return fixedIps_;
}

void NeutronPort::setFixedIps(const std::vector<FixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NeutronPort::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NeutronPort::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string NeutronPort::getId() const
{
    return id_;
}

void NeutronPort::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronPort::idIsSet() const
{
    return idIsSet_;
}

void NeutronPort::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronPort::getMacAddress() const
{
    return macAddress_;
}

void NeutronPort::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool NeutronPort::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void NeutronPort::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

std::string NeutronPort::getName() const
{
    return name_;
}

void NeutronPort::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronPort::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronPort::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronPort::getNetworkId() const
{
    return networkId_;
}

void NeutronPort::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronPort::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronPort::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

bool NeutronPort::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronPort::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronPort::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronPort::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

std::vector<std::string>& NeutronPort::getSecurityGroups()
{
    return securityGroups_;
}

void NeutronPort::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NeutronPort::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NeutronPort::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string NeutronPort::getStatus() const
{
    return status_;
}

void NeutronPort::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronPort::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronPort::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NeutronPort::getTenantId() const
{
    return tenantId_;
}

void NeutronPort::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronPort::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronPort::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronPort::getProjectId() const
{
    return projectId_;
}

void NeutronPort::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronPort::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronPort::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronPort::getCreatedAt() const
{
    return createdAt_;
}

void NeutronPort::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronPort::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronPort::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronPort::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronPort::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronPort::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronPort::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


