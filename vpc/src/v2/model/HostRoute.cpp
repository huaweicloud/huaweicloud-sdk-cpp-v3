

#include "huaweicloud/vpc/v2/model/HostRoute.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




HostRoute::HostRoute()
{
    destination_ = "";
    destinationIsSet_ = false;
    nexthop_ = "";
    nexthopIsSet_ = false;
}

HostRoute::~HostRoute() = default;

void HostRoute::validate()
{
}

web::json::value HostRoute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(nexthopIsSet_) {
        val[utility::conversions::to_string_t("nexthop")] = ModelBase::toJson(nexthop_);
    }

    return val;
}

bool HostRoute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

std::string HostRoute::getDestination() const
{
    return destination_;
}

void HostRoute::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool HostRoute::destinationIsSet() const
{
    return destinationIsSet_;
}

void HostRoute::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string HostRoute::getNexthop() const
{
    return nexthop_;
}

void HostRoute::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool HostRoute::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void HostRoute::unsetnexthop()
{
    nexthopIsSet_ = false;
}

}
}
}
}
}


