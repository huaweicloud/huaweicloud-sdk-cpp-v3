

#include "huaweicloud/vpc/v2/model/NeutronRouter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRouter::NeutronRouter()
{
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    externalGatewayInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    routesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronRouter::~NeutronRouter() = default;

void NeutronRouter::validate()
{
}

web::json::value NeutronRouter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(externalGatewayInfoIsSet_) {
        val[utility::conversions::to_string_t("external_gateway_info")] = ModelBase::toJson(externalGatewayInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool NeutronRouter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_gateway_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_gateway_info"));
        if(!fieldValue.is_null())
        {
            ExternalGatewayInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalGatewayInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes"));
        if(!fieldValue.is_null())
        {
            std::vector<Route> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
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


bool NeutronRouter::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronRouter::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronRouter::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronRouter::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

ExternalGatewayInfo NeutronRouter::getExternalGatewayInfo() const
{
    return externalGatewayInfo_;
}

void NeutronRouter::setExternalGatewayInfo(const ExternalGatewayInfo& value)
{
    externalGatewayInfo_ = value;
    externalGatewayInfoIsSet_ = true;
}

bool NeutronRouter::externalGatewayInfoIsSet() const
{
    return externalGatewayInfoIsSet_;
}

void NeutronRouter::unsetexternalGatewayInfo()
{
    externalGatewayInfoIsSet_ = false;
}

std::string NeutronRouter::getId() const
{
    return id_;
}

void NeutronRouter::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronRouter::idIsSet() const
{
    return idIsSet_;
}

void NeutronRouter::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronRouter::getName() const
{
    return name_;
}

void NeutronRouter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronRouter::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronRouter::unsetname()
{
    nameIsSet_ = false;
}

std::vector<Route>& NeutronRouter::getRoutes()
{
    return routes_;
}

void NeutronRouter::setRoutes(const std::vector<Route>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool NeutronRouter::routesIsSet() const
{
    return routesIsSet_;
}

void NeutronRouter::unsetroutes()
{
    routesIsSet_ = false;
}

std::string NeutronRouter::getStatus() const
{
    return status_;
}

void NeutronRouter::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronRouter::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronRouter::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NeutronRouter::getTenantId() const
{
    return tenantId_;
}

void NeutronRouter::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronRouter::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronRouter::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronRouter::getProjectId() const
{
    return projectId_;
}

void NeutronRouter::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronRouter::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronRouter::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronRouter::getCreatedAt() const
{
    return createdAt_;
}

void NeutronRouter::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronRouter::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronRouter::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronRouter::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronRouter::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronRouter::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronRouter::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


