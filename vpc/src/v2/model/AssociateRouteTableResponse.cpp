

#include "huaweicloud/vpc/v2/model/AssociateRouteTableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AssociateRouteTableResponse::AssociateRouteTableResponse()
{
    routetableIsSet_ = false;
}

AssociateRouteTableResponse::~AssociateRouteTableResponse() = default;

void AssociateRouteTableResponse::validate()
{
}

web::json::value AssociateRouteTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}
bool AssociateRouteTableResponse::fromJson(const web::json::value& val)
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


RouteTableResp AssociateRouteTableResponse::getRoutetable() const
{
    return routetable_;
}

void AssociateRouteTableResponse::setRoutetable(const RouteTableResp& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool AssociateRouteTableResponse::routetableIsSet() const
{
    return routetableIsSet_;
}

void AssociateRouteTableResponse::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


