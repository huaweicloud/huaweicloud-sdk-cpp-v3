

#include "huaweicloud/vpc/model/ShowVpcRouteRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcRouteRequest::ShowVpcRouteRequest()
{
    routeId_ = "";
    routeIdIsSet_ = false;
}

ShowVpcRouteRequest::~ShowVpcRouteRequest() = default;

void ShowVpcRouteRequest::validate()
{
}

web::json::value ShowVpcRouteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeIdIsSet_) {
        val[utility::conversions::to_string_t("route_id")] = ModelBase::toJson(routeId_);
    }

    return val;
}

bool ShowVpcRouteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("route_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouteId(refVal);
        }
    }
    return ok;
}


std::string ShowVpcRouteRequest::getRouteId() const
{
    return routeId_;
}

void ShowVpcRouteRequest::setRouteId(const std::string& value)
{
    routeId_ = value;
    routeIdIsSet_ = true;
}

bool ShowVpcRouteRequest::routeIdIsSet() const
{
    return routeIdIsSet_;
}

void ShowVpcRouteRequest::unsetrouteId()
{
    routeIdIsSet_ = false;
}

}
}
}
}
}


