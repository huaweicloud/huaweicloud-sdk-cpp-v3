

#include "huaweicloud/vpc/v2/model/NeutronRemoveRouterInterfaceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronRemoveRouterInterfaceRequest::NeutronRemoveRouterInterfaceRequest()
{
    routerId_ = "";
    routerIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronRemoveRouterInterfaceRequest::~NeutronRemoveRouterInterfaceRequest() = default;

void NeutronRemoveRouterInterfaceRequest::validate()
{
}

web::json::value NeutronRemoveRouterInterfaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIdIsSet_) {
        val[utility::conversions::to_string_t("router_id")] = ModelBase::toJson(routerId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronRemoveRouterInterfaceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RouterInterfaceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronRemoveRouterInterfaceRequest::getRouterId() const
{
    return routerId_;
}

void NeutronRemoveRouterInterfaceRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronRemoveRouterInterfaceRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

RouterInterfaceRequestBody NeutronRemoveRouterInterfaceRequest::getBody() const
{
    return body_;
}

void NeutronRemoveRouterInterfaceRequest::setBody(const RouterInterfaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronRemoveRouterInterfaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronRemoveRouterInterfaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


