

#include "huaweicloud/rds/v3/model/ShowDnsNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDnsNameResponse::ShowDnsNameResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    dnsType_ = "";
    dnsTypeIsSet_ = false;
    ipv6Address_ = "";
    ipv6AddressIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDnsNameResponse::~ShowDnsNameResponse() = default;

void ShowDnsNameResponse::validate()
{
}

web::json::value ShowDnsNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(dnsTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_type")] = ModelBase::toJson(dnsType_);
    }
    if(ipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address")] = ModelBase::toJson(ipv6Address_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool ShowDnsNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dns_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string ShowDnsNameResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowDnsNameResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDnsNameResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDnsNameResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDnsNameResponse::getDnsName() const
{
    return dnsName_;
}

void ShowDnsNameResponse::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool ShowDnsNameResponse::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void ShowDnsNameResponse::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::string ShowDnsNameResponse::getDnsType() const
{
    return dnsType_;
}

void ShowDnsNameResponse::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool ShowDnsNameResponse::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void ShowDnsNameResponse::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

std::string ShowDnsNameResponse::getIpv6Address() const
{
    return ipv6Address_;
}

void ShowDnsNameResponse::setIpv6Address(const std::string& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool ShowDnsNameResponse::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void ShowDnsNameResponse::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

std::string ShowDnsNameResponse::getStatus() const
{
    return status_;
}

void ShowDnsNameResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDnsNameResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDnsNameResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


