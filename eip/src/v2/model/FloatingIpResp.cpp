

#include "huaweicloud/eip/v2/model/FloatingIpResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




FloatingIpResp::FloatingIpResp()
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
    projectId_ = "";
    projectIdIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    dnsDomain_ = "";
    dnsDomainIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

FloatingIpResp::~FloatingIpResp() = default;

void FloatingIpResp::validate()
{
}

web::json::value FloatingIpResp::toJson() const
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
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(dnsDomainIsSet_) {
        val[utility::conversions::to_string_t("dns_domain")] = ModelBase::toJson(dnsDomain_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool FloatingIpResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}

std::string FloatingIpResp::getFixedIpAddress() const
{
    return fixedIpAddress_;
}

void FloatingIpResp::setFixedIpAddress(const std::string& value)
{
    fixedIpAddress_ = value;
    fixedIpAddressIsSet_ = true;
}

bool FloatingIpResp::fixedIpAddressIsSet() const
{
    return fixedIpAddressIsSet_;
}

void FloatingIpResp::unsetfixedIpAddress()
{
    fixedIpAddressIsSet_ = false;
}

std::string FloatingIpResp::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void FloatingIpResp::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool FloatingIpResp::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void FloatingIpResp::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

std::string FloatingIpResp::getFloatingNetworkId() const
{
    return floatingNetworkId_;
}

void FloatingIpResp::setFloatingNetworkId(const std::string& value)
{
    floatingNetworkId_ = value;
    floatingNetworkIdIsSet_ = true;
}

bool FloatingIpResp::floatingNetworkIdIsSet() const
{
    return floatingNetworkIdIsSet_;
}

void FloatingIpResp::unsetfloatingNetworkId()
{
    floatingNetworkIdIsSet_ = false;
}

std::string FloatingIpResp::getId() const
{
    return id_;
}

void FloatingIpResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FloatingIpResp::idIsSet() const
{
    return idIsSet_;
}

void FloatingIpResp::unsetid()
{
    idIsSet_ = false;
}

std::string FloatingIpResp::getPortId() const
{
    return portId_;
}

void FloatingIpResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool FloatingIpResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void FloatingIpResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string FloatingIpResp::getRouterId() const
{
    return routerId_;
}

void FloatingIpResp::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool FloatingIpResp::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void FloatingIpResp::unsetrouterId()
{
    routerIdIsSet_ = false;
}

std::string FloatingIpResp::getStatus() const
{
    return status_;
}

void FloatingIpResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FloatingIpResp::statusIsSet() const
{
    return statusIsSet_;
}

void FloatingIpResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string FloatingIpResp::getTenantId() const
{
    return tenantId_;
}

void FloatingIpResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool FloatingIpResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void FloatingIpResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string FloatingIpResp::getProjectId() const
{
    return projectId_;
}

void FloatingIpResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool FloatingIpResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void FloatingIpResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string FloatingIpResp::getDnsName() const
{
    return dnsName_;
}

void FloatingIpResp::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool FloatingIpResp::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void FloatingIpResp::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::string FloatingIpResp::getDnsDomain() const
{
    return dnsDomain_;
}

void FloatingIpResp::setDnsDomain(const std::string& value)
{
    dnsDomain_ = value;
    dnsDomainIsSet_ = true;
}

bool FloatingIpResp::dnsDomainIsSet() const
{
    return dnsDomainIsSet_;
}

void FloatingIpResp::unsetdnsDomain()
{
    dnsDomainIsSet_ = false;
}

utility::datetime FloatingIpResp::getCreatedAt() const
{
    return createdAt_;
}

void FloatingIpResp::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool FloatingIpResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void FloatingIpResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime FloatingIpResp::getUpdatedAt() const
{
    return updatedAt_;
}

void FloatingIpResp::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool FloatingIpResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void FloatingIpResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


