

#include "huaweicloud/iotda/v5/model/NetAddress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




NetAddress::NetAddress()
{
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
}

NetAddress::~NetAddress() = default;

void NetAddress::validate()
{
}

web::json::value NetAddress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool NetAddress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


std::string NetAddress::getIp() const
{
    return ip_;
}

void NetAddress::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool NetAddress::ipIsSet() const
{
    return ipIsSet_;
}

void NetAddress::unsetip()
{
    ipIsSet_ = false;
}

int32_t NetAddress::getPort() const
{
    return port_;
}

void NetAddress::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NetAddress::portIsSet() const
{
    return portIsSet_;
}

void NetAddress::unsetport()
{
    portIsSet_ = false;
}

std::string NetAddress::getDomain() const
{
    return domain_;
}

void NetAddress::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool NetAddress::domainIsSet() const
{
    return domainIsSet_;
}

void NetAddress::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


