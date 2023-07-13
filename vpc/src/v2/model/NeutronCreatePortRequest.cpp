

#include "huaweicloud/vpc/v2/model/NeutronCreatePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreatePortRequest::NeutronCreatePortRequest()
{
    bodyIsSet_ = false;
}

NeutronCreatePortRequest::~NeutronCreatePortRequest() = default;

void NeutronCreatePortRequest::validate()
{
}

web::json::value NeutronCreatePortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreatePortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreatePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

NeutronCreatePortRequestBody NeutronCreatePortRequest::getBody() const
{
    return body_;
}

void NeutronCreatePortRequest::setBody(const NeutronCreatePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreatePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreatePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


