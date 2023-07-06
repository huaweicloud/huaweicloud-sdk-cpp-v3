

#include "huaweicloud/vpc/v2/model/CreateVpcRouteRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRouteRequestBody::CreateVpcRouteRequestBody()
{
    routeIsSet_ = false;
}

CreateVpcRouteRequestBody::~CreateVpcRouteRequestBody() = default;

void CreateVpcRouteRequestBody::validate()
{
}

web::json::value CreateVpcRouteRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeIsSet_) {
        val[utility::conversions::to_string_t("route")] = ModelBase::toJson(route_);
    }

    return val;
}

bool CreateVpcRouteRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("route"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route"));
        if(!fieldValue.is_null())
        {
            CreateVpcRouteOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoute(refVal);
        }
    }
    return ok;
}

CreateVpcRouteOption CreateVpcRouteRequestBody::getRoute() const
{
    return route_;
}

void CreateVpcRouteRequestBody::setRoute(const CreateVpcRouteOption& value)
{
    route_ = value;
    routeIsSet_ = true;
}

bool CreateVpcRouteRequestBody::routeIsSet() const
{
    return routeIsSet_;
}

void CreateVpcRouteRequestBody::unsetroute()
{
    routeIsSet_ = false;
}

}
}
}
}
}


