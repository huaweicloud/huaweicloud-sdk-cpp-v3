

#include "huaweicloud/vpc/v2/model/ListRouteTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListRouteTablesResponse::ListRouteTablesResponse()
{
    routetablesIsSet_ = false;
}

ListRouteTablesResponse::~ListRouteTablesResponse() = default;

void ListRouteTablesResponse::validate()
{
}

web::json::value ListRouteTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetablesIsSet_) {
        val[utility::conversions::to_string_t("routetables")] = ModelBase::toJson(routetables_);
    }

    return val;
}
bool ListRouteTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetables"));
        if(!fieldValue.is_null())
        {
            std::vector<RouteTableListResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetables(refVal);
        }
    }
    return ok;
}


std::vector<RouteTableListResp>& ListRouteTablesResponse::getRoutetables()
{
    return routetables_;
}

void ListRouteTablesResponse::setRoutetables(const std::vector<RouteTableListResp>& value)
{
    routetables_ = value;
    routetablesIsSet_ = true;
}

bool ListRouteTablesResponse::routetablesIsSet() const
{
    return routetablesIsSet_;
}

void ListRouteTablesResponse::unsetroutetables()
{
    routetablesIsSet_ = false;
}

}
}
}
}
}


