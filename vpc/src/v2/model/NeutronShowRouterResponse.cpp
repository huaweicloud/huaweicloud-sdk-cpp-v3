

#include "huaweicloud/vpc/v2/model/NeutronShowRouterResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowRouterResponse::NeutronShowRouterResponse()
{
    routerIsSet_ = false;
}

NeutronShowRouterResponse::~NeutronShowRouterResponse() = default;

void NeutronShowRouterResponse::validate()
{
}

web::json::value NeutronShowRouterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIsSet_) {
        val[utility::conversions::to_string_t("router")] = ModelBase::toJson(router_);
    }

    return val;
}

bool NeutronShowRouterResponse::fromJson(const web::json::value& val)
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

NeutronRouter NeutronShowRouterResponse::getRouter() const
{
    return router_;
}

void NeutronShowRouterResponse::setRouter(const NeutronRouter& value)
{
    router_ = value;
    routerIsSet_ = true;
}

bool NeutronShowRouterResponse::routerIsSet() const
{
    return routerIsSet_;
}

void NeutronShowRouterResponse::unsetrouter()
{
    routerIsSet_ = false;
}

}
}
}
}
}


