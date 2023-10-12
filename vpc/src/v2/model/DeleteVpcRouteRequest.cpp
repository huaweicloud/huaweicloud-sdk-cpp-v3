

#include "huaweicloud/vpc/v2/model/DeleteVpcRouteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteVpcRouteRequest::DeleteVpcRouteRequest()
{
    routeId_ = "";
    routeIdIsSet_ = false;
}

DeleteVpcRouteRequest::~DeleteVpcRouteRequest() = default;

void DeleteVpcRouteRequest::validate()
{
}

web::json::value DeleteVpcRouteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeIdIsSet_) {
        val[utility::conversions::to_string_t("route_id")] = ModelBase::toJson(routeId_);
    }

    return val;
}
bool DeleteVpcRouteRequest::fromJson(const web::json::value& val)
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


std::string DeleteVpcRouteRequest::getRouteId() const
{
    return routeId_;
}

void DeleteVpcRouteRequest::setRouteId(const std::string& value)
{
    routeId_ = value;
    routeIdIsSet_ = true;
}

bool DeleteVpcRouteRequest::routeIdIsSet() const
{
    return routeIdIsSet_;
}

void DeleteVpcRouteRequest::unsetrouteId()
{
    routeIdIsSet_ = false;
}

}
}
}
}
}


