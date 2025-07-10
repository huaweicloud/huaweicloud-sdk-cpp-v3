

#include "huaweicloud/ecs/v2/model/NetworkInterfaces.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NetworkInterfaces::NetworkInterfaces()
{
    portId_ = "";
    portIdIsSet_ = false;
    primary_ = false;
    primaryIsSet_ = false;
    ipAddressesIsSet_ = false;
    ipv6AddressesIsSet_ = false;
    associationIsSet_ = false;
}

NetworkInterfaces::~NetworkInterfaces() = default;

void NetworkInterfaces::validate()
{
}

web::json::value NetworkInterfaces::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(primaryIsSet_) {
        val[utility::conversions::to_string_t("primary")] = ModelBase::toJson(primary_);
    }
    if(ipAddressesIsSet_) {
        val[utility::conversions::to_string_t("ip_addresses")] = ModelBase::toJson(ipAddresses_);
    }
    if(ipv6AddressesIsSet_) {
        val[utility::conversions::to_string_t("ipv6_addresses")] = ModelBase::toJson(ipv6Addresses_);
    }
    if(associationIsSet_) {
        val[utility::conversions::to_string_t("association")] = ModelBase::toJson(association_);
    }

    return val;
}
bool NetworkInterfaces::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Addresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("association"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association"));
        if(!fieldValue.is_null())
        {
            Association refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociation(refVal);
        }
    }
    return ok;
}


std::string NetworkInterfaces::getPortId() const
{
    return portId_;
}

void NetworkInterfaces::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NetworkInterfaces::portIdIsSet() const
{
    return portIdIsSet_;
}

void NetworkInterfaces::unsetportId()
{
    portIdIsSet_ = false;
}

bool NetworkInterfaces::isPrimary() const
{
    return primary_;
}

void NetworkInterfaces::setPrimary(bool value)
{
    primary_ = value;
    primaryIsSet_ = true;
}

bool NetworkInterfaces::primaryIsSet() const
{
    return primaryIsSet_;
}

void NetworkInterfaces::unsetprimary()
{
    primaryIsSet_ = false;
}

std::vector<std::string>& NetworkInterfaces::getIpAddresses()
{
    return ipAddresses_;
}

void NetworkInterfaces::setIpAddresses(const std::vector<std::string>& value)
{
    ipAddresses_ = value;
    ipAddressesIsSet_ = true;
}

bool NetworkInterfaces::ipAddressesIsSet() const
{
    return ipAddressesIsSet_;
}

void NetworkInterfaces::unsetipAddresses()
{
    ipAddressesIsSet_ = false;
}

std::vector<std::string>& NetworkInterfaces::getIpv6Addresses()
{
    return ipv6Addresses_;
}

void NetworkInterfaces::setIpv6Addresses(const std::vector<std::string>& value)
{
    ipv6Addresses_ = value;
    ipv6AddressesIsSet_ = true;
}

bool NetworkInterfaces::ipv6AddressesIsSet() const
{
    return ipv6AddressesIsSet_;
}

void NetworkInterfaces::unsetipv6Addresses()
{
    ipv6AddressesIsSet_ = false;
}

Association NetworkInterfaces::getAssociation() const
{
    return association_;
}

void NetworkInterfaces::setAssociation(const Association& value)
{
    association_ = value;
    associationIsSet_ = true;
}

bool NetworkInterfaces::associationIsSet() const
{
    return associationIsSet_;
}

void NetworkInterfaces::unsetassociation()
{
    associationIsSet_ = false;
}

}
}
}
}
}


