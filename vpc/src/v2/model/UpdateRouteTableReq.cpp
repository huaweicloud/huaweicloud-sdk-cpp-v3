

#include "huaweicloud/vpc/v2/model/UpdateRouteTableReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateRouteTableReq::UpdateRouteTableReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    routesIsSet_ = false;
}

UpdateRouteTableReq::~UpdateRouteTableReq() = default;

void UpdateRouteTableReq::validate()
{
}

web::json::value UpdateRouteTableReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }

    return val;
}

bool UpdateRouteTableReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes"));
        if(!fieldValue.is_null())
        {
            RouteTableRouteAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
        }
    }
    return ok;
}


std::string UpdateRouteTableReq::getName() const
{
    return name_;
}

void UpdateRouteTableReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRouteTableReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRouteTableReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRouteTableReq::getDescription() const
{
    return description_;
}

void UpdateRouteTableReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRouteTableReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRouteTableReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

RouteTableRouteAction UpdateRouteTableReq::getRoutes() const
{
    return routes_;
}

void UpdateRouteTableReq::setRoutes(const RouteTableRouteAction& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool UpdateRouteTableReq::routesIsSet() const
{
    return routesIsSet_;
}

void UpdateRouteTableReq::unsetroutes()
{
    routesIsSet_ = false;
}

}
}
}
}
}


