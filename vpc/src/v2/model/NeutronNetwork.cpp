

#include "huaweicloud/vpc/v2/model/NeutronNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronNetwork::NeutronNetwork()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subnetsIsSet_ = false;
    routerExternal_ = false;
    routerExternalIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    shared_ = false;
    sharedIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    providerNetworkType_ = "";
    providerNetworkTypeIsSet_ = false;
    availabilityZoneHintsIsSet_ = false;
    availabilityZonesIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
    dnsDomain_ = "";
    dnsDomainIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronNetwork::~NeutronNetwork() = default;

void NeutronNetwork::validate()
{
}

web::json::value NeutronNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }
    if(routerExternalIsSet_) {
        val[utility::conversions::to_string_t("router:external")] = ModelBase::toJson(routerExternal_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(sharedIsSet_) {
        val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(shared_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(providerNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("provider:network_type")] = ModelBase::toJson(providerNetworkType_);
    }
    if(availabilityZoneHintsIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_hints")] = ModelBase::toJson(availabilityZoneHints_);
    }
    if(availabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("availability_zones")] = ModelBase::toJson(availabilityZones_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }
    if(dnsDomainIsSet_) {
        val[utility::conversions::to_string_t("dns_domain")] = ModelBase::toJson(dnsDomain_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool NeutronNetwork::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("router:external"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router:external"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterExternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShared(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider:network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider:network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_hints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneHints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zones"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZones(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_security_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_security_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortSecurityEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


std::string NeutronNetwork::getId() const
{
    return id_;
}

void NeutronNetwork::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronNetwork::idIsSet() const
{
    return idIsSet_;
}

void NeutronNetwork::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronNetwork::getStatus() const
{
    return status_;
}

void NeutronNetwork::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronNetwork::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronNetwork::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NeutronNetwork::getName() const
{
    return name_;
}

void NeutronNetwork::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronNetwork::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronNetwork::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronNetwork::getSubnets()
{
    return subnets_;
}

void NeutronNetwork::setSubnets(const std::vector<std::string>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool NeutronNetwork::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void NeutronNetwork::unsetsubnets()
{
    subnetsIsSet_ = false;
}

bool NeutronNetwork::isRouterExternal() const
{
    return routerExternal_;
}

void NeutronNetwork::setRouterExternal(bool value)
{
    routerExternal_ = value;
    routerExternalIsSet_ = true;
}

bool NeutronNetwork::routerExternalIsSet() const
{
    return routerExternalIsSet_;
}

void NeutronNetwork::unsetrouterExternal()
{
    routerExternalIsSet_ = false;
}

bool NeutronNetwork::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronNetwork::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronNetwork::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronNetwork::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

bool NeutronNetwork::isShared() const
{
    return shared_;
}

void NeutronNetwork::setShared(bool value)
{
    shared_ = value;
    sharedIsSet_ = true;
}

bool NeutronNetwork::sharedIsSet() const
{
    return sharedIsSet_;
}

void NeutronNetwork::unsetshared()
{
    sharedIsSet_ = false;
}

std::string NeutronNetwork::getTenantId() const
{
    return tenantId_;
}

void NeutronNetwork::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronNetwork::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronNetwork::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronNetwork::getProviderNetworkType() const
{
    return providerNetworkType_;
}

void NeutronNetwork::setProviderNetworkType(const std::string& value)
{
    providerNetworkType_ = value;
    providerNetworkTypeIsSet_ = true;
}

bool NeutronNetwork::providerNetworkTypeIsSet() const
{
    return providerNetworkTypeIsSet_;
}

void NeutronNetwork::unsetproviderNetworkType()
{
    providerNetworkTypeIsSet_ = false;
}

std::vector<std::string>& NeutronNetwork::getAvailabilityZoneHints()
{
    return availabilityZoneHints_;
}

void NeutronNetwork::setAvailabilityZoneHints(const std::vector<std::string>& value)
{
    availabilityZoneHints_ = value;
    availabilityZoneHintsIsSet_ = true;
}

bool NeutronNetwork::availabilityZoneHintsIsSet() const
{
    return availabilityZoneHintsIsSet_;
}

void NeutronNetwork::unsetavailabilityZoneHints()
{
    availabilityZoneHintsIsSet_ = false;
}

std::vector<std::string>& NeutronNetwork::getAvailabilityZones()
{
    return availabilityZones_;
}

void NeutronNetwork::setAvailabilityZones(const std::vector<std::string>& value)
{
    availabilityZones_ = value;
    availabilityZonesIsSet_ = true;
}

bool NeutronNetwork::availabilityZonesIsSet() const
{
    return availabilityZonesIsSet_;
}

void NeutronNetwork::unsetavailabilityZones()
{
    availabilityZonesIsSet_ = false;
}

bool NeutronNetwork::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronNetwork::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronNetwork::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronNetwork::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

std::string NeutronNetwork::getDnsDomain() const
{
    return dnsDomain_;
}

void NeutronNetwork::setDnsDomain(const std::string& value)
{
    dnsDomain_ = value;
    dnsDomainIsSet_ = true;
}

bool NeutronNetwork::dnsDomainIsSet() const
{
    return dnsDomainIsSet_;
}

void NeutronNetwork::unsetdnsDomain()
{
    dnsDomainIsSet_ = false;
}

std::string NeutronNetwork::getProjectId() const
{
    return projectId_;
}

void NeutronNetwork::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronNetwork::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronNetwork::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronNetwork::getCreatedAt() const
{
    return createdAt_;
}

void NeutronNetwork::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronNetwork::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronNetwork::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronNetwork::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronNetwork::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronNetwork::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronNetwork::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


