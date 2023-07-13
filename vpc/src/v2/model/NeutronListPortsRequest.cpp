

#include "huaweicloud/vpc/v2/model/NeutronListPortsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListPortsRequest::NeutronListPortsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    securityGroupsIsSet_ = false;
    fixedIpsIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListPortsRequest::~NeutronListPortsRequest() = default;

void NeutronListPortsRequest::validate()
{
}

web::json::value NeutronListPortsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(macAddressIsSet_) {
        val[utility::conversions::to_string_t("mac_address")] = ModelBase::toJson(macAddress_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NeutronListPortsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
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

int32_t NeutronListPortsRequest::getLimit() const
{
    return limit_;
}

void NeutronListPortsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListPortsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListPortsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListPortsRequest::getMarker() const
{
    return marker_;
}

void NeutronListPortsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListPortsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListPortsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListPortsRequest::getId() const
{
    return id_;
}

void NeutronListPortsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListPortsRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListPortsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListPortsRequest::getName() const
{
    return name_;
}

void NeutronListPortsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListPortsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListPortsRequest::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronListPortsRequest::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronListPortsRequest::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronListPortsRequest::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronListPortsRequest::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string NeutronListPortsRequest::getNetworkId() const
{
    return networkId_;
}

void NeutronListPortsRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronListPortsRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronListPortsRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string NeutronListPortsRequest::getMacAddress() const
{
    return macAddress_;
}

void NeutronListPortsRequest::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool NeutronListPortsRequest::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void NeutronListPortsRequest::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

std::string NeutronListPortsRequest::getDeviceId() const
{
    return deviceId_;
}

void NeutronListPortsRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool NeutronListPortsRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void NeutronListPortsRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string NeutronListPortsRequest::getDeviceOwner() const
{
    return deviceOwner_;
}

void NeutronListPortsRequest::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool NeutronListPortsRequest::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void NeutronListPortsRequest::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string NeutronListPortsRequest::getStatus() const
{
    return status_;
}

void NeutronListPortsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronListPortsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronListPortsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& NeutronListPortsRequest::getSecurityGroups()
{
    return securityGroups_;
}

void NeutronListPortsRequest::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NeutronListPortsRequest::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NeutronListPortsRequest::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<std::string>& NeutronListPortsRequest::getFixedIps()
{
    return fixedIps_;
}

void NeutronListPortsRequest::setFixedIps(const std::vector<std::string>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NeutronListPortsRequest::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NeutronListPortsRequest::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string NeutronListPortsRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListPortsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListPortsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListPortsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


