

#include "huaweicloud/ecs/v2/model/ChangeServerNetworkInterfaceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerNetworkInterfaceRequestBody::ChangeServerNetworkInterfaceRequestBody()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Address_ = "";
    ipv6AddressIsSet_ = false;
}

ChangeServerNetworkInterfaceRequestBody::~ChangeServerNetworkInterfaceRequestBody() = default;

void ChangeServerNetworkInterfaceRequestBody::validate()
{
}

web::json::value ChangeServerNetworkInterfaceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ChangeServerNetworkInterfaceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ChangeServerNetworkInterfaceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void ChangeServerNetworkInterfaceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ChangeServerNetworkInterfaceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceRequestBody::getIpAddress() const
{
    return ipAddress_;
}

void ChangeServerNetworkInterfaceRequestBody::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequestBody::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ChangeServerNetworkInterfaceRequestBody::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceRequestBody::getIpv6Address() const
{
    return ipv6Address_;
}

void ChangeServerNetworkInterfaceRequestBody::setIpv6Address(const std::string& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequestBody::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void ChangeServerNetworkInterfaceRequestBody::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

}
}
}
}
}


