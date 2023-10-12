

#include "huaweicloud/eip/v2/model/PostAndPutFloatingIpResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




PostAndPutFloatingIpResp::PostAndPutFloatingIpResp()
{
    fixedIpAddress_ = "";
    fixedIpAddressIsSet_ = false;
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    floatingNetworkId_ = "";
    floatingNetworkIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    routerId_ = "";
    routerIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    dnsDomain_ = "";
    dnsDomainIsSet_ = false;
}

PostAndPutFloatingIpResp::~PostAndPutFloatingIpResp() = default;

void PostAndPutFloatingIpResp::validate()
{
}

web::json::value PostAndPutFloatingIpResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fixedIpAddressIsSet_) {
        val[utility::conversions::to_string_t("fixed_ip_address")] = ModelBase::toJson(fixedIpAddress_);
    }
    if(floatingIpAddressIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_address")] = ModelBase::toJson(floatingIpAddress_);
    }
    if(floatingNetworkIdIsSet_) {
        val[utility::conversions::to_string_t("floating_network_id")] = ModelBase::toJson(floatingNetworkId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(routerIdIsSet_) {
        val[utility::conversions::to_string_t("router_id")] = ModelBase::toJson(routerId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(dnsDomainIsSet_) {
        val[utility::conversions::to_string_t("dns_domain")] = ModelBase::toJson(dnsDomain_);
    }

    return val;
}
bool PostAndPutFloatingIpResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fixed_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floating_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floating_network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingNetworkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("router_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dns_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsDomain(refVal);
        }
    }
    return ok;
}


std::string PostAndPutFloatingIpResp::getFixedIpAddress() const
{
    return fixedIpAddress_;
}

void PostAndPutFloatingIpResp::setFixedIpAddress(const std::string& value)
{
    fixedIpAddress_ = value;
    fixedIpAddressIsSet_ = true;
}

bool PostAndPutFloatingIpResp::fixedIpAddressIsSet() const
{
    return fixedIpAddressIsSet_;
}

void PostAndPutFloatingIpResp::unsetfixedIpAddress()
{
    fixedIpAddressIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void PostAndPutFloatingIpResp::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool PostAndPutFloatingIpResp::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void PostAndPutFloatingIpResp::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getFloatingNetworkId() const
{
    return floatingNetworkId_;
}

void PostAndPutFloatingIpResp::setFloatingNetworkId(const std::string& value)
{
    floatingNetworkId_ = value;
    floatingNetworkIdIsSet_ = true;
}

bool PostAndPutFloatingIpResp::floatingNetworkIdIsSet() const
{
    return floatingNetworkIdIsSet_;
}

void PostAndPutFloatingIpResp::unsetfloatingNetworkId()
{
    floatingNetworkIdIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getId() const
{
    return id_;
}

void PostAndPutFloatingIpResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostAndPutFloatingIpResp::idIsSet() const
{
    return idIsSet_;
}

void PostAndPutFloatingIpResp::unsetid()
{
    idIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getPortId() const
{
    return portId_;
}

void PostAndPutFloatingIpResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool PostAndPutFloatingIpResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void PostAndPutFloatingIpResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getRouterId() const
{
    return routerId_;
}

void PostAndPutFloatingIpResp::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool PostAndPutFloatingIpResp::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void PostAndPutFloatingIpResp::unsetrouterId()
{
    routerIdIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getStatus() const
{
    return status_;
}

void PostAndPutFloatingIpResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PostAndPutFloatingIpResp::statusIsSet() const
{
    return statusIsSet_;
}

void PostAndPutFloatingIpResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getTenantId() const
{
    return tenantId_;
}

void PostAndPutFloatingIpResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool PostAndPutFloatingIpResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void PostAndPutFloatingIpResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getDnsName() const
{
    return dnsName_;
}

void PostAndPutFloatingIpResp::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool PostAndPutFloatingIpResp::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void PostAndPutFloatingIpResp::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::string PostAndPutFloatingIpResp::getDnsDomain() const
{
    return dnsDomain_;
}

void PostAndPutFloatingIpResp::setDnsDomain(const std::string& value)
{
    dnsDomain_ = value;
    dnsDomainIsSet_ = true;
}

bool PostAndPutFloatingIpResp::dnsDomainIsSet() const
{
    return dnsDomainIsSet_;
}

void PostAndPutFloatingIpResp::unsetdnsDomain()
{
    dnsDomainIsSet_ = false;
}

}
}
}
}
}


