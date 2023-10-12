

#include "huaweicloud/vpc/v2/model/NeutronCreateRouterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateRouterRequestBody::NeutronCreateRouterRequestBody()
{
    routerIsSet_ = false;
}

NeutronCreateRouterRequestBody::~NeutronCreateRouterRequestBody() = default;

void NeutronCreateRouterRequestBody::validate()
{
}

web::json::value NeutronCreateRouterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIsSet_) {
        val[utility::conversions::to_string_t("router")] = ModelBase::toJson(router_);
    }

    return val;
}
bool NeutronCreateRouterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("router"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router"));
        if(!fieldValue.is_null())
        {
            NeutronCreateRouterOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouter(refVal);
        }
    }
    return ok;
}


NeutronCreateRouterOption NeutronCreateRouterRequestBody::getRouter() const
{
    return router_;
}

void NeutronCreateRouterRequestBody::setRouter(const NeutronCreateRouterOption& value)
{
    router_ = value;
    routerIsSet_ = true;
}

bool NeutronCreateRouterRequestBody::routerIsSet() const
{
    return routerIsSet_;
}

void NeutronCreateRouterRequestBody::unsetrouter()
{
    routerIsSet_ = false;
}

}
}
}
}
}


