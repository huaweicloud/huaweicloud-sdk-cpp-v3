

#include "huaweicloud/vpc/v2/model/NeutronShowRouterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowRouterRequest::NeutronShowRouterRequest()
{
    routerId_ = "";
    routerIdIsSet_ = false;
}

NeutronShowRouterRequest::~NeutronShowRouterRequest() = default;

void NeutronShowRouterRequest::validate()
{
}

web::json::value NeutronShowRouterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIdIsSet_) {
        val[utility::conversions::to_string_t("router_id")] = ModelBase::toJson(routerId_);
    }

    return val;
}

bool NeutronShowRouterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("router_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterId(refVal);
        }
    }
    return ok;
}

std::string NeutronShowRouterRequest::getRouterId() const
{
    return routerId_;
}

void NeutronShowRouterRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronShowRouterRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronShowRouterRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

}
}
}
}
}


