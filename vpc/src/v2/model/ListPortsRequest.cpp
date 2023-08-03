

#include "huaweicloud/vpc/v2/model/ListPortsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListPortsRequest::ListPortsRequest()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
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
    marker_ = "";
    markerIsSet_ = false;
    fixedIpsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enableEfi_ = false;
    enableEfiIsSet_ = false;
}

ListPortsRequest::~ListPortsRequest() = default;

void ListPortsRequest::validate()
{
}

web::json::value ListPortsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
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
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enableEfiIsSet_) {
        val[utility::conversions::to_string_t("enable_efi")] = ModelBase::toJson(enableEfi_);
    }

    return val;
}

bool ListPortsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    return ok;
}

std::string ListPortsRequest::getName() const
{
    return name_;
}

void ListPortsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPortsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListPortsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListPortsRequest::getId() const
{
    return id_;
}

void ListPortsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPortsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListPortsRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListPortsRequest::getLimit() const
{
    return limit_;
}

void ListPortsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPortsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPortsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListPortsRequest::isAdminStateUp() const
{
    return adminStateUp_;
}

void ListPortsRequest::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool ListPortsRequest::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void ListPortsRequest::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string ListPortsRequest::getNetworkId() const
{
    return networkId_;
}

void ListPortsRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ListPortsRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ListPortsRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string ListPortsRequest::getMacAddress() const
{
    return macAddress_;
}

void ListPortsRequest::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool ListPortsRequest::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void ListPortsRequest::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

std::string ListPortsRequest::getDeviceId() const
{
    return deviceId_;
}

void ListPortsRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListPortsRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListPortsRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ListPortsRequest::getDeviceOwner() const
{
    return deviceOwner_;
}

void ListPortsRequest::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool ListPortsRequest::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void ListPortsRequest::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string ListPortsRequest::getStatus() const
{
    return status_;
}

void ListPortsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPortsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListPortsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListPortsRequest::getSecurityGroups()
{
    return securityGroups_;
}

void ListPortsRequest::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ListPortsRequest::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ListPortsRequest::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string ListPortsRequest::getMarker() const
{
    return marker_;
}

void ListPortsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPortsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPortsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& ListPortsRequest::getFixedIps()
{
    return fixedIps_;
}

void ListPortsRequest::setFixedIps(const std::vector<std::string>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool ListPortsRequest::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void ListPortsRequest::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string ListPortsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListPortsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListPortsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListPortsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListPortsRequest::isEnableEfi() const
{
    return enableEfi_;
}

void ListPortsRequest::setEnableEfi(bool value)
{
    enableEfi_ = value;
    enableEfiIsSet_ = true;
}

bool ListPortsRequest::enableEfiIsSet() const
{
    return enableEfiIsSet_;
}

void ListPortsRequest::unsetenableEfi()
{
    enableEfiIsSet_ = false;
}

}
}
}
}
}


