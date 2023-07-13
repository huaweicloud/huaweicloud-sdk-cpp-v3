

#include "huaweicloud/vpc/v2/model/NeutronUpdateRouterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateRouterRequest::NeutronUpdateRouterRequest()
{
    routerId_ = "";
    routerIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateRouterRequest::~NeutronUpdateRouterRequest() = default;

void NeutronUpdateRouterRequest::validate()
{
}

web::json::value NeutronUpdateRouterRequest::toJson() const
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

bool NeutronUpdateRouterRequest::fromJson(const web::json::value& val)
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
            NeutronUpdateRouterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronUpdateRouterRequest::getRouterId() const
{
    return routerId_;
}

void NeutronUpdateRouterRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronUpdateRouterRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronUpdateRouterRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

NeutronUpdateRouterRequestBody NeutronUpdateRouterRequest::getBody() const
{
    return body_;
}

void NeutronUpdateRouterRequest::setBody(const NeutronUpdateRouterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateRouterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateRouterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


