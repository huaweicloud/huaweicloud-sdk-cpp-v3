

#include "huaweicloud/vpc/v2/model/ShowRouteTableResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowRouteTableResponse::ShowRouteTableResponse()
{
    routetableIsSet_ = false;
}

ShowRouteTableResponse::~ShowRouteTableResponse() = default;

void ShowRouteTableResponse::validate()
{
}

web::json::value ShowRouteTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}

bool ShowRouteTableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable"));
        if(!fieldValue.is_null())
        {
            RouteTableResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetable(refVal);
        }
    }
    return ok;
}


RouteTableResp ShowRouteTableResponse::getRoutetable() const
{
    return routetable_;
}

void ShowRouteTableResponse::setRoutetable(const RouteTableResp& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool ShowRouteTableResponse::routetableIsSet() const
{
    return routetableIsSet_;
}

void ShowRouteTableResponse::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


