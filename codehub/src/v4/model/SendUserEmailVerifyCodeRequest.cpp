

#include "huaweicloud/codehub/v4/model/SendUserEmailVerifyCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SendUserEmailVerifyCodeRequest::SendUserEmailVerifyCodeRequest()
{
    bodyIsSet_ = false;
}

SendUserEmailVerifyCodeRequest::~SendUserEmailVerifyCodeRequest() = default;

void SendUserEmailVerifyCodeRequest::validate()
{
}

web::json::value SendUserEmailVerifyCodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SendUserEmailVerifyCodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyEmailAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyEmailAddressDto SendUserEmailVerifyCodeRequest::getBody() const
{
    return body_;
}

void SendUserEmailVerifyCodeRequest::setBody(const ModifyEmailAddressDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SendUserEmailVerifyCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SendUserEmailVerifyCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


