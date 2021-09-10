

#include "huaweicloud/vpc/v2/model/DisassociateRouteTableResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DisassociateRouteTableResponse::DisassociateRouteTableResponse()
{
    routetableIsSet_ = false;
}

DisassociateRouteTableResponse::~DisassociateRouteTableResponse() = default;

void DisassociateRouteTableResponse::validate()
{
}

web::json::value DisassociateRouteTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}

bool DisassociateRouteTableResponse::fromJson(const web::json::value& val)
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


RouteTableResp DisassociateRouteTableResponse::getRoutetable() const
{
    return routetable_;
}

void DisassociateRouteTableResponse::setRoutetable(const RouteTableResp& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool DisassociateRouteTableResponse::routetableIsSet() const
{
    return routetableIsSet_;
}

void DisassociateRouteTableResponse::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


