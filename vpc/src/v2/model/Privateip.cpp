

#include "huaweicloud/vpc/v2/model/Privateip.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Privateip::Privateip()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

Privateip::~Privateip() = default;

void Privateip::validate()
{
}

web::json::value Privateip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}

bool Privateip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}

std::string Privateip::getStatus() const
{
    return status_;
}

void Privateip::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Privateip::statusIsSet() const
{
    return statusIsSet_;
}

void Privateip::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Privateip::getId() const
{
    return id_;
}

void Privateip::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Privateip::idIsSet() const
{
    return idIsSet_;
}

void Privateip::unsetid()
{
    idIsSet_ = false;
}

std::string Privateip::getSubnetId() const
{
    return subnetId_;
}

void Privateip::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool Privateip::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void Privateip::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string Privateip::getTenantId() const
{
    return tenantId_;
}

void Privateip::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool Privateip::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void Privateip::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string Privateip::getDeviceOwner() const
{
    return deviceOwner_;
}

void Privateip::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool Privateip::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void Privateip::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string Privateip::getIpAddress() const
{
    return ipAddress_;
}

void Privateip::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool Privateip::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void Privateip::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


