

#include "huaweicloud/vpc/v2/model/CreateVpcRouteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRouteResponse::CreateVpcRouteResponse()
{
    routeIsSet_ = false;
}

CreateVpcRouteResponse::~CreateVpcRouteResponse() = default;

void CreateVpcRouteResponse::validate()
{
}

web::json::value CreateVpcRouteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeIsSet_) {
        val[utility::conversions::to_string_t("route")] = ModelBase::toJson(route_);
    }

    return val;
}

bool CreateVpcRouteResponse::fromJson(const web::json::value& val)
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


VpcRoute CreateVpcRouteResponse::getRoute() const
{
    return route_;
}

void CreateVpcRouteResponse::setRoute(const VpcRoute& value)
{
    route_ = value;
    routeIsSet_ = true;
}

bool CreateVpcRouteResponse::routeIsSet() const
{
    return routeIsSet_;
}

void CreateVpcRouteResponse::unsetroute()
{
    routeIsSet_ = false;
}

}
}
}
}
}


