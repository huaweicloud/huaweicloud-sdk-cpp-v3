

#include "huaweicloud/vpc/v2/model/DelRouteTableRoute.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DelRouteTableRoute::DelRouteTableRoute()
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

DelRouteTableRoute::~DelRouteTableRoute() = default;

void DelRouteTableRoute::validate()
{
}

web::json::value DelRouteTableRoute::toJson() const
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

bool DelRouteTableRoute::fromJson(const web::json::value& val)
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

std::string DelRouteTableRoute::getType() const
{
    return type_;
}

void DelRouteTableRoute::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DelRouteTableRoute::typeIsSet() const
{
    return typeIsSet_;
}

void DelRouteTableRoute::unsettype()
{
    typeIsSet_ = false;
}

std::string DelRouteTableRoute::getDestination() const
{
    return destination_;
}

void DelRouteTableRoute::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool DelRouteTableRoute::destinationIsSet() const
{
    return destinationIsSet_;
}

void DelRouteTableRoute::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string DelRouteTableRoute::getNexthop() const
{
    return nexthop_;
}

void DelRouteTableRoute::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool DelRouteTableRoute::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void DelRouteTableRoute::unsetnexthop()
{
    nexthopIsSet_ = false;
}

std::string DelRouteTableRoute::getDescription() const
{
    return description_;
}

void DelRouteTableRoute::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DelRouteTableRoute::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DelRouteTableRoute::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


