

#include "huaweicloud/iotdm/v5/model/AccessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




AccessInfo::AccessInfo()
{
    type_ = "";
    typeIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    nonTlsPort_ = 0;
    nonTlsPortIsSet_ = false;
    websocketPort_ = 0;
    websocketPortIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    privateAddressesIsSet_ = false;
    publicAddressIsSet_ = false;
    ipv6AddressIsSet_ = false;
    ipWhitelistIsSet_ = false;
}

AccessInfo::~AccessInfo() = default;

void AccessInfo::validate()
{
}

web::json::value AccessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(nonTlsPortIsSet_) {
        val[utility::conversions::to_string_t("non_tls_port")] = ModelBase::toJson(nonTlsPort_);
    }
    if(websocketPortIsSet_) {
        val[utility::conversions::to_string_t("websocket_port")] = ModelBase::toJson(websocketPort_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(privateAddressesIsSet_) {
        val[utility::conversions::to_string_t("private_addresses")] = ModelBase::toJson(privateAddresses_);
    }
    if(publicAddressIsSet_) {
        val[utility::conversions::to_string_t("public_address")] = ModelBase::toJson(publicAddress_);
    }
    if(ipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address")] = ModelBase::toJson(ipv6Address_);
    }
    if(ipWhitelistIsSet_) {
        val[utility::conversions::to_string_t("ip_whitelist")] = ModelBase::toJson(ipWhitelist_);
    }

    return val;
}
bool AccessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_tls_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_tls_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonTlsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("websocket_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("websocket_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsocketPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_whitelist"));
        if(!fieldValue.is_null())
        {
            IPWhiteList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpWhitelist(refVal);
        }
    }
    return ok;
}


std::string AccessInfo::getType() const
{
    return type_;
}

void AccessInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AccessInfo::typeIsSet() const
{
    return typeIsSet_;
}

void AccessInfo::unsettype()
{
    typeIsSet_ = false;
}

int32_t AccessInfo::getPort() const
{
    return port_;
}

void AccessInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool AccessInfo::portIsSet() const
{
    return portIsSet_;
}

void AccessInfo::unsetport()
{
    portIsSet_ = false;
}

int32_t AccessInfo::getNonTlsPort() const
{
    return nonTlsPort_;
}

void AccessInfo::setNonTlsPort(int32_t value)
{
    nonTlsPort_ = value;
    nonTlsPortIsSet_ = true;
}

bool AccessInfo::nonTlsPortIsSet() const
{
    return nonTlsPortIsSet_;
}

void AccessInfo::unsetnonTlsPort()
{
    nonTlsPortIsSet_ = false;
}

int32_t AccessInfo::getWebsocketPort() const
{
    return websocketPort_;
}

void AccessInfo::setWebsocketPort(int32_t value)
{
    websocketPort_ = value;
    websocketPortIsSet_ = true;
}

bool AccessInfo::websocketPortIsSet() const
{
    return websocketPortIsSet_;
}

void AccessInfo::unsetwebsocketPort()
{
    websocketPortIsSet_ = false;
}

std::string AccessInfo::getDomainName() const
{
    return domainName_;
}

void AccessInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool AccessInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void AccessInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::vector<std::string>& AccessInfo::getPrivateAddresses()
{
    return privateAddresses_;
}

void AccessInfo::setPrivateAddresses(const std::vector<std::string>& value)
{
    privateAddresses_ = value;
    privateAddressesIsSet_ = true;
}

bool AccessInfo::privateAddressesIsSet() const
{
    return privateAddressesIsSet_;
}

void AccessInfo::unsetprivateAddresses()
{
    privateAddressesIsSet_ = false;
}

std::vector<std::string>& AccessInfo::getPublicAddress()
{
    return publicAddress_;
}

void AccessInfo::setPublicAddress(const std::vector<std::string>& value)
{
    publicAddress_ = value;
    publicAddressIsSet_ = true;
}

bool AccessInfo::publicAddressIsSet() const
{
    return publicAddressIsSet_;
}

void AccessInfo::unsetpublicAddress()
{
    publicAddressIsSet_ = false;
}

std::vector<std::string>& AccessInfo::getIpv6Address()
{
    return ipv6Address_;
}

void AccessInfo::setIpv6Address(const std::vector<std::string>& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool AccessInfo::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void AccessInfo::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

IPWhiteList AccessInfo::getIpWhitelist() const
{
    return ipWhitelist_;
}

void AccessInfo::setIpWhitelist(const IPWhiteList& value)
{
    ipWhitelist_ = value;
    ipWhitelistIsSet_ = true;
}

bool AccessInfo::ipWhitelistIsSet() const
{
    return ipWhitelistIsSet_;
}

void AccessInfo::unsetipWhitelist()
{
    ipWhitelistIsSet_ = false;
}

}
}
}
}
}


