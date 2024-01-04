

#include "huaweicloud/vpc/v2/model/Port.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Port::Port()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
    fixedIpsIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    securityGroupsIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    bindingvnicType_ = "";
    bindingvnicTypeIsSet_ = false;
    dnsAssignmentIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    bindingvifDetailsIsSet_ = false;
    bindingprofileIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
    zoneId_ = "";
    zoneIdIsSet_ = false;
    enableEfi_ = false;
    enableEfiIsSet_ = false;
    ipv6BandwidthId_ = "";
    ipv6BandwidthIdIsSet_ = false;
}

Port::~Port() = default;

void Port::validate()
{
}

web::json::value Port::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(macAddressIsSet_) {
        val[utility::conversions::to_string_t("mac_address")] = ModelBase::toJson(macAddress_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(bindingvnicTypeIsSet_) {
        val[utility::conversions::to_string_t("binding:vnic_type")] = ModelBase::toJson(bindingvnicType_);
    }
    if(dnsAssignmentIsSet_) {
        val[utility::conversions::to_string_t("dns_assignment")] = ModelBase::toJson(dnsAssignment_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(bindingvifDetailsIsSet_) {
        val[utility::conversions::to_string_t("binding:vif_details")] = ModelBase::toJson(bindingvifDetails_);
    }
    if(bindingprofileIsSet_) {
        val[utility::conversions::to_string_t("binding:profile")] = ModelBase::toJson(bindingprofile_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }
    if(zoneIdIsSet_) {
        val[utility::conversions::to_string_t("zone_id")] = ModelBase::toJson(zoneId_);
    }
    if(enableEfiIsSet_) {
        val[utility::conversions::to_string_t("enable_efi")] = ModelBase::toJson(enableEfi_);
    }
    if(ipv6BandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("ipv6_bandwidth_id")] = ModelBase::toJson(ipv6BandwidthId_);
    }

    return val;
}
bool Port::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mac_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("binding:vnic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vnic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingvnicType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("binding:vif_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vif_details"));
        if(!fieldValue.is_null())
        {
            BindingVifDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingvifDetails(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_efi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_efi"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEfi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6BandwidthId(refVal);
        }
    }
    return ok;
}


std::string Port::getId() const
{
    return id_;
}

void Port::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Port::idIsSet() const
{
    return idIsSet_;
}

void Port::unsetid()
{
    idIsSet_ = false;
}

std::string Port::getName() const
{
    return name_;
}

void Port::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Port::nameIsSet() const
{
    return nameIsSet_;
}

void Port::unsetname()
{
    nameIsSet_ = false;
}

std::string Port::getNetworkId() const
{
    return networkId_;
}

void Port::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool Port::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void Port::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

bool Port::isAdminStateUp() const
{
    return adminStateUp_;
}

void Port::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool Port::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void Port::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string Port::getMacAddress() const
{
    return macAddress_;
}

void Port::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool Port::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void Port::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

std::vector<FixedIp>& Port::getFixedIps()
{
    return fixedIps_;
}

void Port::setFixedIps(const std::vector<FixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool Port::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void Port::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string Port::getDeviceId() const
{
    return deviceId_;
}

void Port::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool Port::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void Port::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string Port::getDeviceOwner() const
{
    return deviceOwner_;
}

void Port::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool Port::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void Port::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string Port::getTenantId() const
{
    return tenantId_;
}

void Port::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool Port::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void Port::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string Port::getStatus() const
{
    return status_;
}

void Port::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Port::statusIsSet() const
{
    return statusIsSet_;
}

void Port::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& Port::getSecurityGroups()
{
    return securityGroups_;
}

void Port::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool Port::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void Port::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<AllowedAddressPair>& Port::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void Port::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool Port::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void Port::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& Port::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void Port::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool Port::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void Port::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

std::string Port::getBindingvnicType() const
{
    return bindingvnicType_;
}

void Port::setBindingvnicType(const std::string& value)
{
    bindingvnicType_ = value;
    bindingvnicTypeIsSet_ = true;
}

bool Port::bindingvnicTypeIsSet() const
{
    return bindingvnicTypeIsSet_;
}

void Port::unsetbindingvnicType()
{
    bindingvnicTypeIsSet_ = false;
}

std::vector<DnsAssignMent>& Port::getDnsAssignment()
{
    return dnsAssignment_;
}

void Port::setDnsAssignment(const std::vector<DnsAssignMent>& value)
{
    dnsAssignment_ = value;
    dnsAssignmentIsSet_ = true;
}

bool Port::dnsAssignmentIsSet() const
{
    return dnsAssignmentIsSet_;
}

void Port::unsetdnsAssignment()
{
    dnsAssignmentIsSet_ = false;
}

std::string Port::getDnsName() const
{
    return dnsName_;
}

void Port::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool Port::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void Port::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

BindingVifDetails Port::getBindingvifDetails() const
{
    return bindingvifDetails_;
}

void Port::setBindingvifDetails(const BindingVifDetails& value)
{
    bindingvifDetails_ = value;
    bindingvifDetailsIsSet_ = true;
}

bool Port::bindingvifDetailsIsSet() const
{
    return bindingvifDetailsIsSet_;
}

void Port::unsetbindingvifDetails()
{
    bindingvifDetailsIsSet_ = false;
}

Object Port::getBindingprofile() const
{
    return bindingprofile_;
}

void Port::setBindingprofile(const Object& value)
{
    bindingprofile_ = value;
    bindingprofileIsSet_ = true;
}

bool Port::bindingprofileIsSet() const
{
    return bindingprofileIsSet_;
}

void Port::unsetbindingprofile()
{
    bindingprofileIsSet_ = false;
}

std::string Port::getInstanceId() const
{
    return instanceId_;
}

void Port::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Port::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Port::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string Port::getInstanceType() const
{
    return instanceType_;
}

void Port::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool Port::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void Port::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

bool Port::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void Port::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool Port::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void Port::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

std::string Port::getZoneId() const
{
    return zoneId_;
}

void Port::setZoneId(const std::string& value)
{
    zoneId_ = value;
    zoneIdIsSet_ = true;
}

bool Port::zoneIdIsSet() const
{
    return zoneIdIsSet_;
}

void Port::unsetzoneId()
{
    zoneIdIsSet_ = false;
}

bool Port::isEnableEfi() const
{
    return enableEfi_;
}

void Port::setEnableEfi(bool value)
{
    enableEfi_ = value;
    enableEfiIsSet_ = true;
}

bool Port::enableEfiIsSet() const
{
    return enableEfiIsSet_;
}

void Port::unsetenableEfi()
{
    enableEfiIsSet_ = false;
}

std::string Port::getIpv6BandwidthId() const
{
    return ipv6BandwidthId_;
}

void Port::setIpv6BandwidthId(const std::string& value)
{
    ipv6BandwidthId_ = value;
    ipv6BandwidthIdIsSet_ = true;
}

bool Port::ipv6BandwidthIdIsSet() const
{
    return ipv6BandwidthIdIsSet_;
}

void Port::unsetipv6BandwidthId()
{
    ipv6BandwidthIdIsSet_ = false;
}

}
}
}
}
}


