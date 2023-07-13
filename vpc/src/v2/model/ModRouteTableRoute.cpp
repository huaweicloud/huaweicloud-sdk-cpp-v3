

#include "huaweicloud/vpc/v2/model/ModRouteTableRoute.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ModRouteTableRoute::ModRouteTableRoute()
{
    type_ = "";
    typeIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    nexthop_ = "";
    nexthopIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ModRouteTableRoute::~ModRouteTableRoute() = default;

void ModRouteTableRoute::validate()
{
}

web::json::value ModRouteTableRoute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(nexthopIsSet_) {
        val[utility::conversions::to_string_t("nexthop")] = ModelBase::toJson(nexthop_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ModRouteTableRoute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nexthop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nexthop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNexthop(refVal);
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

std::string ModRouteTableRoute::getType() const
{
    return type_;
}

void ModRouteTableRoute::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ModRouteTableRoute::typeIsSet() const
{
    return typeIsSet_;
}

void ModRouteTableRoute::unsettype()
{
    typeIsSet_ = false;
}

std::string ModRouteTableRoute::getDestination() const
{
    return destination_;
}

void ModRouteTableRoute::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool ModRouteTableRoute::destinationIsSet() const
{
    return destinationIsSet_;
}

void ModRouteTableRoute::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string ModRouteTableRoute::getNexthop() const
{
    return nexthop_;
}

void ModRouteTableRoute::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool ModRouteTableRoute::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void ModRouteTableRoute::unsetnexthop()
{
    nexthopIsSet_ = false;
}

std::string ModRouteTableRoute::getDescription() const
{
    return description_;
}

void ModRouteTableRoute::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModRouteTableRoute::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModRouteTableRoute::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


