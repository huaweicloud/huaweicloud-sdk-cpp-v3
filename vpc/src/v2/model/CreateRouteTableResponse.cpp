

#include "huaweicloud/vpc/v2/model/CreateRouteTableResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateRouteTableResponse::CreateRouteTableResponse()
{
    routetableIsSet_ = false;
}

CreateRouteTableResponse::~CreateRouteTableResponse() = default;

void CreateRouteTableResponse::validate()
{
}

web::json::value CreateRouteTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}

bool CreateRouteTableResponse::fromJson(const web::json::value& val)
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


RouteTableResp CreateRouteTableResponse::getRoutetable() const
{
    return routetable_;
}

void CreateRouteTableResponse::setRoutetable(const RouteTableResp& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool CreateRouteTableResponse::routetableIsSet() const
{
    return routetableIsSet_;
}

void CreateRouteTableResponse::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


