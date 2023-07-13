

#include "huaweicloud/vpc/v2/model/NeutronCreateRouterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateRouterRequest::NeutronCreateRouterRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateRouterRequest::~NeutronCreateRouterRequest() = default;

void NeutronCreateRouterRequest::validate()
{
}

web::json::value NeutronCreateRouterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreateRouterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateRouterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

NeutronCreateRouterRequestBody NeutronCreateRouterRequest::getBody() const
{
    return body_;
}

void NeutronCreateRouterRequest::setBody(const NeutronCreateRouterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateRouterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateRouterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


