

#include "huaweicloud/rds/v3/model/ShowDomainNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDomainNameResponse::ShowDomainNameResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    dnsType_ = "";
    dnsTypeIsSet_ = false;
    ipv4Address_ = "";
    ipv4AddressIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDomainNameResponse::~ShowDomainNameResponse() = default;

void ShowDomainNameResponse::validate()
{
}

web::json::value ShowDomainNameResponse::toJson() const
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
    if(ipv4AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv4_address")] = ModelBase::toJson(ipv4Address_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool ShowDomainNameResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ipv4_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv4_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv4Address(refVal);
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

std::string ShowDomainNameResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowDomainNameResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDomainNameResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDomainNameResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDomainNameResponse::getDnsName() const
{
    return dnsName_;
}

void ShowDomainNameResponse::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool ShowDomainNameResponse::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void ShowDomainNameResponse::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::string ShowDomainNameResponse::getDnsType() const
{
    return dnsType_;
}

void ShowDomainNameResponse::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool ShowDomainNameResponse::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void ShowDomainNameResponse::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

std::string ShowDomainNameResponse::getIpv4Address() const
{
    return ipv4Address_;
}

void ShowDomainNameResponse::setIpv4Address(const std::string& value)
{
    ipv4Address_ = value;
    ipv4AddressIsSet_ = true;
}

bool ShowDomainNameResponse::ipv4AddressIsSet() const
{
    return ipv4AddressIsSet_;
}

void ShowDomainNameResponse::unsetipv4Address()
{
    ipv4AddressIsSet_ = false;
}

std::string ShowDomainNameResponse::getStatus() const
{
    return status_;
}

void ShowDomainNameResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDomainNameResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDomainNameResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


