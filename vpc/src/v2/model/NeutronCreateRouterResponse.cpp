

#include "huaweicloud/vpc/v2/model/NeutronCreateRouterResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateRouterResponse::NeutronCreateRouterResponse()
{
    routerIsSet_ = false;
}

NeutronCreateRouterResponse::~NeutronCreateRouterResponse() = default;

void NeutronCreateRouterResponse::validate()
{
}

web::json::value NeutronCreateRouterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIsSet_) {
        val[utility::conversions::to_string_t("router")] = ModelBase::toJson(router_);
    }

    return val;
}

bool NeutronCreateRouterResponse::fromJson(const web::json::value& val)
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

NeutronRouter NeutronCreateRouterResponse::getRouter() const
{
    return router_;
}

void NeutronCreateRouterResponse::setRouter(const NeutronRouter& value)
{
    router_ = value;
    routerIsSet_ = true;
}

bool NeutronCreateRouterResponse::routerIsSet() const
{
    return routerIsSet_;
}

void NeutronCreateRouterResponse::unsetrouter()
{
    routerIsSet_ = false;
}

}
}
}
}
}


