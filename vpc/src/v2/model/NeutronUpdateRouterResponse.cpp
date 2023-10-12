

#include "huaweicloud/vpc/v2/model/NeutronUpdateRouterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateRouterResponse::NeutronUpdateRouterResponse()
{
    routerIsSet_ = false;
}

NeutronUpdateRouterResponse::~NeutronUpdateRouterResponse() = default;

void NeutronUpdateRouterResponse::validate()
{
}

web::json::value NeutronUpdateRouterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIsSet_) {
        val[utility::conversions::to_string_t("router")] = ModelBase::toJson(router_);
    }

    return val;
}
bool NeutronUpdateRouterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("router"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router"));
        if(!fieldValue.is_null())
        {
            NeutronRouter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouter(refVal);
        }
    }
    return ok;
}


NeutronRouter NeutronUpdateRouterResponse::getRouter() const
{
    return router_;
}

void NeutronUpdateRouterResponse::setRouter(const NeutronRouter& value)
{
    router_ = value;
    routerIsSet_ = true;
}

bool NeutronUpdateRouterResponse::routerIsSet() const
{
    return routerIsSet_;
}

void NeutronUpdateRouterResponse::unsetrouter()
{
    routerIsSet_ = false;
}

}
}
}
}
}


