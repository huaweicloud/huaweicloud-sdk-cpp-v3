

#include "huaweicloud/ecs/v2/model/ChangeServerNetworkInterfaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerNetworkInterfaceResponse::ChangeServerNetworkInterfaceResponse()
{
    id_ = "";
    idIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Address_ = "";
    ipv6AddressIsSet_ = false;
}

ChangeServerNetworkInterfaceResponse::~ChangeServerNetworkInterfaceResponse() = default;

void ChangeServerNetworkInterfaceResponse::validate()
{
}

web::json::value ChangeServerNetworkInterfaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(ipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address")] = ModelBase::toJson(ipv6Address_);
    }

    return val;
}
bool ChangeServerNetworkInterfaceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Address(refVal);
        }
    }
    return ok;
}


std::string ChangeServerNetworkInterfaceResponse::getId() const
{
    return id_;
}

void ChangeServerNetworkInterfaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeServerNetworkInterfaceResponse::idIsSet() const
{
    return idIsSet_;
}

void ChangeServerNetworkInterfaceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceResponse::getSubnetId() const
{
    return subnetId_;
}

void ChangeServerNetworkInterfaceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ChangeServerNetworkInterfaceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ChangeServerNetworkInterfaceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceResponse::getIpAddress() const
{
    return ipAddress_;
}

void ChangeServerNetworkInterfaceResponse::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ChangeServerNetworkInterfaceResponse::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ChangeServerNetworkInterfaceResponse::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceResponse::getIpv6Address() const
{
    return ipv6Address_;
}

void ChangeServerNetworkInterfaceResponse::setIpv6Address(const std::string& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool ChangeServerNetworkInterfaceResponse::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void ChangeServerNetworkInterfaceResponse::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

}
}
}
}
}


