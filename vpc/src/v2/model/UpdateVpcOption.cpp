

#include "huaweicloud/vpc/v2/model/UpdateVpcOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcOption::UpdateVpcOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    routesIsSet_ = false;
}

UpdateVpcOption::~UpdateVpcOption() = default;

void UpdateVpcOption::validate()
{
}

web::json::value UpdateVpcOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }

    return val;
}

bool UpdateVpcOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
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
    return ok;
}

std::string UpdateVpcOption::getName() const
{
    return name_;
}

void UpdateVpcOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateVpcOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateVpcOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateVpcOption::getDescription() const
{
    return description_;
}

void UpdateVpcOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVpcOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVpcOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateVpcOption::getCidr() const
{
    return cidr_;
}

void UpdateVpcOption::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool UpdateVpcOption::cidrIsSet() const
{
    return cidrIsSet_;
}

void UpdateVpcOption::unsetcidr()
{
    cidrIsSet_ = false;
}

std::vector<Route>& UpdateVpcOption::getRoutes()
{
    return routes_;
}

void UpdateVpcOption::setRoutes(const std::vector<Route>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool UpdateVpcOption::routesIsSet() const
{
    return routesIsSet_;
}

void UpdateVpcOption::unsetroutes()
{
    routesIsSet_ = false;
}

}
}
}
}
}


