

#include "huaweicloud/vpc/v2/model/DnsAssignMent.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DnsAssignMent::DnsAssignMent()
{
    hostname_ = "";
    hostnameIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    fqdn_ = "";
    fqdnIsSet_ = false;
}

DnsAssignMent::~DnsAssignMent() = default;

void DnsAssignMent::validate()
{
}

web::json::value DnsAssignMent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostnameIsSet_) {
        val[utility::conversions::to_string_t("hostname")] = ModelBase::toJson(hostname_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(fqdnIsSet_) {
        val[utility::conversions::to_string_t("fqdn")] = ModelBase::toJson(fqdn_);
    }

    return val;
}

bool DnsAssignMent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fqdn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fqdn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFqdn(refVal);
        }
    }
    return ok;
}

std::string DnsAssignMent::getHostname() const
{
    return hostname_;
}

void DnsAssignMent::setHostname(const std::string& value)
{
    hostname_ = value;
    hostnameIsSet_ = true;
}

bool DnsAssignMent::hostnameIsSet() const
{
    return hostnameIsSet_;
}

void DnsAssignMent::unsethostname()
{
    hostnameIsSet_ = false;
}

std::string DnsAssignMent::getIpAddress() const
{
    return ipAddress_;
}

void DnsAssignMent::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool DnsAssignMent::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void DnsAssignMent::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string DnsAssignMent::getFqdn() const
{
    return fqdn_;
}

void DnsAssignMent::setFqdn(const std::string& value)
{
    fqdn_ = value;
    fqdnIsSet_ = true;
}

bool DnsAssignMent::fqdnIsSet() const
{
    return fqdnIsSet_;
}

void DnsAssignMent::unsetfqdn()
{
    fqdnIsSet_ = false;
}

}
}
}
}
}


