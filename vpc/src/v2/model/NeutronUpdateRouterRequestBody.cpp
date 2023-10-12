

#include "huaweicloud/vpc/v2/model/NeutronUpdateRouterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateRouterRequestBody::NeutronUpdateRouterRequestBody()
{
    routerIsSet_ = false;
}

NeutronUpdateRouterRequestBody::~NeutronUpdateRouterRequestBody() = default;

void NeutronUpdateRouterRequestBody::validate()
{
}

web::json::value NeutronUpdateRouterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIsSet_) {
        val[utility::conversions::to_string_t("router")] = ModelBase::toJson(router_);
    }

    return val;
}
bool NeutronUpdateRouterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("router"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateRouterOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouter(refVal);
        }
    }
    return ok;
}


NeutronUpdateRouterOption NeutronUpdateRouterRequestBody::getRouter() const
{
    return router_;
}

void NeutronUpdateRouterRequestBody::setRouter(const NeutronUpdateRouterOption& value)
{
    router_ = value;
    routerIsSet_ = true;
}

bool NeutronUpdateRouterRequestBody::routerIsSet() const
{
    return routerIsSet_;
}

void NeutronUpdateRouterRequestBody::unsetrouter()
{
    routerIsSet_ = false;
}

}
}
}
}
}


