

#include "huaweicloud/vpc/v2/model/NeutronAddRouterInterfaceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronAddRouterInterfaceResponse::NeutronAddRouterInterfaceResponse()
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

NeutronAddRouterInterfaceResponse::~NeutronAddRouterInterfaceResponse() = default;

void NeutronAddRouterInterfaceResponse::validate()
{
}

web::json::value NeutronAddRouterInterfaceResponse::toJson() const
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

bool NeutronAddRouterInterfaceResponse::fromJson(const web::json::value& val)
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

std::string NeutronAddRouterInterfaceResponse::getPortId() const
{
    return portId_;
}

void NeutronAddRouterInterfaceResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronAddRouterInterfaceResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronAddRouterInterfaceResponse::unsetportId()
{
    portIdIsSet_ = false;
}

std::string NeutronAddRouterInterfaceResponse::getSubnetId() const
{
    return subnetId_;
}

void NeutronAddRouterInterfaceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NeutronAddRouterInterfaceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NeutronAddRouterInterfaceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string NeutronAddRouterInterfaceResponse::getTenantId() const
{
    return tenantId_;
}

void NeutronAddRouterInterfaceResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronAddRouterInterfaceResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronAddRouterInterfaceResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronAddRouterInterfaceResponse::getProjectId() const
{
    return projectId_;
}

void NeutronAddRouterInterfaceResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronAddRouterInterfaceResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronAddRouterInterfaceResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string NeutronAddRouterInterfaceResponse::getId() const
{
    return id_;
}

void NeutronAddRouterInterfaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronAddRouterInterfaceResponse::idIsSet() const
{
    return idIsSet_;
}

void NeutronAddRouterInterfaceResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


