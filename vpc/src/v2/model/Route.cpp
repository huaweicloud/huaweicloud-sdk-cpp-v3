

#include "huaweicloud/vpc/v2/model/Route.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




Route::Route()
{
    destination_ = "";
    destinationIsSet_ = false;
    nexthop_ = "";
    nexthopIsSet_ = false;
}

Route::~Route() = default;

void Route::validate()
{
}

web::json::value Route::toJson() const
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
bool Route::fromJson(const web::json::value& val)
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


std::string Route::getDestination() const
{
    return destination_;
}

void Route::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool Route::destinationIsSet() const
{
    return destinationIsSet_;
}

void Route::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string Route::getNexthop() const
{
    return nexthop_;
}

void Route::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool Route::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void Route::unsetnexthop()
{
    nexthopIsSet_ = false;
}

}
}
}
}
}


