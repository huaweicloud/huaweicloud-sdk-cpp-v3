

#include "huaweicloud/vpc/v2/model/ShowVpcRouteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcRouteResponse::ShowVpcRouteResponse()
{
    routeIsSet_ = false;
}

ShowVpcRouteResponse::~ShowVpcRouteResponse() = default;

void ShowVpcRouteResponse::validate()
{
}

web::json::value ShowVpcRouteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeIsSet_) {
        val[utility::conversions::to_string_t("route")] = ModelBase::toJson(route_);
    }

    return val;
}

bool ShowVpcRouteResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("route"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route"));
        if(!fieldValue.is_null())
        {
            VpcRoute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoute(refVal);
        }
    }
    return ok;
}


VpcRoute ShowVpcRouteResponse::getRoute() const
{
    return route_;
}

void ShowVpcRouteResponse::setRoute(const VpcRoute& value)
{
    route_ = value;
    routeIsSet_ = true;
}

bool ShowVpcRouteResponse::routeIsSet() const
{
    return routeIsSet_;
}

void ShowVpcRouteResponse::unsetroute()
{
    routeIsSet_ = false;
}

}
}
}
}
}


