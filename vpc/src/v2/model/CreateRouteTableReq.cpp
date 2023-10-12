

#include "huaweicloud/vpc/v2/model/CreateRouteTableReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateRouteTableReq::CreateRouteTableReq()
{
    name_ = "";
    nameIsSet_ = false;
    routesIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateRouteTableReq::~CreateRouteTableReq() = default;

void CreateRouteTableReq::validate()
{
}

web::json::value CreateRouteTableReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateRouteTableReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<RouteTableRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
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


std::string CreateRouteTableReq::getName() const
{
    return name_;
}

void CreateRouteTableReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRouteTableReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRouteTableReq::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RouteTableRoute>& CreateRouteTableReq::getRoutes()
{
    return routes_;
}

void CreateRouteTableReq::setRoutes(const std::vector<RouteTableRoute>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool CreateRouteTableReq::routesIsSet() const
{
    return routesIsSet_;
}

void CreateRouteTableReq::unsetroutes()
{
    routesIsSet_ = false;
}

std::string CreateRouteTableReq::getVpcId() const
{
    return vpcId_;
}

void CreateRouteTableReq::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateRouteTableReq::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateRouteTableReq::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateRouteTableReq::getDescription() const
{
    return description_;
}

void CreateRouteTableReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRouteTableReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRouteTableReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


