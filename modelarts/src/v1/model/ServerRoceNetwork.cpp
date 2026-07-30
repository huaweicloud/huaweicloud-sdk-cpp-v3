

#include "huaweicloud/modelarts/v1/model/ServerRoceNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerRoceNetwork::ServerRoceNetwork()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    subnets_ = "";
    subnetsIsSet_ = false;
    providerNetworkType_ = "";
    providerNetworkTypeIsSet_ = false;
    providerPhysicalNetwork_ = "";
    providerPhysicalNetworkIsSet_ = false;
}

ServerRoceNetwork::~ServerRoceNetwork() = default;

void ServerRoceNetwork::validate()
{
}

web::json::value ServerRoceNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }
    if(providerNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("provider:network_type")] = ModelBase::toJson(providerNetworkType_);
    }
    if(providerPhysicalNetworkIsSet_) {
        val[utility::conversions::to_string_t("provider:physical_network")] = ModelBase::toJson(providerPhysicalNetwork_);
    }

    return val;
}
bool ServerRoceNetwork::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider:physical_network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider:physical_network"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderPhysicalNetwork(refVal);
        }
    }
    return ok;
}


std::string ServerRoceNetwork::getId() const
{
    return id_;
}

void ServerRoceNetwork::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerRoceNetwork::idIsSet() const
{
    return idIsSet_;
}

void ServerRoceNetwork::unsetid()
{
    idIsSet_ = false;
}

std::string ServerRoceNetwork::getName() const
{
    return name_;
}

void ServerRoceNetwork::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerRoceNetwork::nameIsSet() const
{
    return nameIsSet_;
}

void ServerRoceNetwork::unsetname()
{
    nameIsSet_ = false;
}

std::string ServerRoceNetwork::getProjectId() const
{
    return projectId_;
}

void ServerRoceNetwork::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ServerRoceNetwork::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ServerRoceNetwork::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ServerRoceNetwork::getStatus() const
{
    return status_;
}

void ServerRoceNetwork::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServerRoceNetwork::statusIsSet() const
{
    return statusIsSet_;
}

void ServerRoceNetwork::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ServerRoceNetwork::getTenantId() const
{
    return tenantId_;
}

void ServerRoceNetwork::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ServerRoceNetwork::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ServerRoceNetwork::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ServerRoceNetwork::getSubnets() const
{
    return subnets_;
}

void ServerRoceNetwork::setSubnets(const std::string& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool ServerRoceNetwork::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void ServerRoceNetwork::unsetsubnets()
{
    subnetsIsSet_ = false;
}

std::string ServerRoceNetwork::getProviderNetworkType() const
{
    return providerNetworkType_;
}

void ServerRoceNetwork::setProviderNetworkType(const std::string& value)
{
    providerNetworkType_ = value;
    providerNetworkTypeIsSet_ = true;
}

bool ServerRoceNetwork::providerNetworkTypeIsSet() const
{
    return providerNetworkTypeIsSet_;
}

void ServerRoceNetwork::unsetproviderNetworkType()
{
    providerNetworkTypeIsSet_ = false;
}

std::string ServerRoceNetwork::getProviderPhysicalNetwork() const
{
    return providerPhysicalNetwork_;
}

void ServerRoceNetwork::setProviderPhysicalNetwork(const std::string& value)
{
    providerPhysicalNetwork_ = value;
    providerPhysicalNetworkIsSet_ = true;
}

bool ServerRoceNetwork::providerPhysicalNetworkIsSet() const
{
    return providerPhysicalNetworkIsSet_;
}

void ServerRoceNetwork::unsetproviderPhysicalNetwork()
{
    providerPhysicalNetworkIsSet_ = false;
}

}
}
}
}
}


