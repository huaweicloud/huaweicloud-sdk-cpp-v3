

#include "huaweicloud/vpc/v2/model/NeutronRemoveRouterInterfaceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRemoveRouterInterfaceResponse::NeutronRemoveRouterInterfaceResponse()
{
    portId_ = "";
    portIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

NeutronRemoveRouterInterfaceResponse::~NeutronRemoveRouterInterfaceResponse() = default;

void NeutronRemoveRouterInterfaceResponse::validate()
{
}

web::json::value NeutronRemoveRouterInterfaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool NeutronRemoveRouterInterfaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string NeutronRemoveRouterInterfaceResponse::getPortId() const
{
    return portId_;
}

void NeutronRemoveRouterInterfaceResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronRemoveRouterInterfaceResponse::unsetportId()
{
    portIdIsSet_ = false;
}

std::string NeutronRemoveRouterInterfaceResponse::getSubnetId() const
{
    return subnetId_;
}

void NeutronRemoveRouterInterfaceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NeutronRemoveRouterInterfaceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string NeutronRemoveRouterInterfaceResponse::getTenantId() const
{
    return tenantId_;
}

void NeutronRemoveRouterInterfaceResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronRemoveRouterInterfaceResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronRemoveRouterInterfaceResponse::getProjectId() const
{
    return projectId_;
}

void NeutronRemoveRouterInterfaceResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronRemoveRouterInterfaceResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string NeutronRemoveRouterInterfaceResponse::getId() const
{
    return id_;
}

void NeutronRemoveRouterInterfaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceResponse::idIsSet() const
{
    return idIsSet_;
}

void NeutronRemoveRouterInterfaceResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


