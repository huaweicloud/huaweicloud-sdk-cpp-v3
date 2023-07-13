

#include "huaweicloud/vpc/v2/model/NeutronAddRouterInterfaceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronAddRouterInterfaceRequest::NeutronAddRouterInterfaceRequest()
{
    routerId_ = "";
    routerIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronAddRouterInterfaceRequest::~NeutronAddRouterInterfaceRequest() = default;

void NeutronAddRouterInterfaceRequest::validate()
{
}

web::json::value NeutronAddRouterInterfaceRequest::toJson() const
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

bool NeutronAddRouterInterfaceRequest::fromJson(const web::json::value& val)
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

std::string NeutronAddRouterInterfaceRequest::getRouterId() const
{
    return routerId_;
}

void NeutronAddRouterInterfaceRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronAddRouterInterfaceRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronAddRouterInterfaceRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

RouterInterfaceRequestBody NeutronAddRouterInterfaceRequest::getBody() const
{
    return body_;
}

void NeutronAddRouterInterfaceRequest::setBody(const RouterInterfaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronAddRouterInterfaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronAddRouterInterfaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


