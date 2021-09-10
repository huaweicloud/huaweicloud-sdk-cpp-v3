

#include "huaweicloud/vpc/v2/model/RouteTableResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RouteTableResp::RouteTableResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    default_ = false;
    defaultIsSet_ = false;
    routesIsSet_ = false;
    subnetsIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RouteTableResp::~RouteTableResp() = default;

void RouteTableResp::validate()
{
}

web::json::value RouteTableResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool RouteTableResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes"));
        if(!fieldValue.is_null())
        {
            std::vector<RouteTableRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<SubnetList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string RouteTableResp::getId() const
{
    return id_;
}

void RouteTableResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RouteTableResp::idIsSet() const
{
    return idIsSet_;
}

void RouteTableResp::unsetid()
{
    idIsSet_ = false;
}

std::string RouteTableResp::getName() const
{
    return name_;
}

void RouteTableResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RouteTableResp::nameIsSet() const
{
    return nameIsSet_;
}

void RouteTableResp::unsetname()
{
    nameIsSet_ = false;
}

bool RouteTableResp::isDefault() const
{
    return default_;
}

void RouteTableResp::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool RouteTableResp::defaultIsSet() const
{
    return defaultIsSet_;
}

void RouteTableResp::unsetdefault()
{
    defaultIsSet_ = false;
}

std::vector<RouteTableRoute>& RouteTableResp::getRoutes()
{
    return routes_;
}

void RouteTableResp::setRoutes(const std::vector<RouteTableRoute>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool RouteTableResp::routesIsSet() const
{
    return routesIsSet_;
}

void RouteTableResp::unsetroutes()
{
    routesIsSet_ = false;
}

std::vector<SubnetList>& RouteTableResp::getSubnets()
{
    return subnets_;
}

void RouteTableResp::setSubnets(const std::vector<SubnetList>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool RouteTableResp::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void RouteTableResp::unsetsubnets()
{
    subnetsIsSet_ = false;
}

std::string RouteTableResp::getTenantId() const
{
    return tenantId_;
}

void RouteTableResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool RouteTableResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void RouteTableResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string RouteTableResp::getVpcId() const
{
    return vpcId_;
}

void RouteTableResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool RouteTableResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void RouteTableResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string RouteTableResp::getDescription() const
{
    return description_;
}

void RouteTableResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RouteTableResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RouteTableResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


