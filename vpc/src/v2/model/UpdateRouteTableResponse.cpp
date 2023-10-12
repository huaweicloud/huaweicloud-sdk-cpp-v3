

#include "huaweicloud/vpc/v2/model/UpdateRouteTableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateRouteTableResponse::UpdateRouteTableResponse()
{
    routetableIsSet_ = false;
}

UpdateRouteTableResponse::~UpdateRouteTableResponse() = default;

void UpdateRouteTableResponse::validate()
{
}

web::json::value UpdateRouteTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}
bool UpdateRouteTableResponse::fromJson(const web::json::value& val)
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


RouteTableResp UpdateRouteTableResponse::getRoutetable() const
{
    return routetable_;
}

void UpdateRouteTableResponse::setRoutetable(const RouteTableResp& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool UpdateRouteTableResponse::routetableIsSet() const
{
    return routetableIsSet_;
}

void UpdateRouteTableResponse::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


