

#include "huaweicloud/kms/v2/model/SignRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




SignRequest::SignRequest()
{
    bodyIsSet_ = false;
}

SignRequest::~SignRequest() = default;

void SignRequest::validate()
{
}

web::json::value SignRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool SignRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SignRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

SignRequestBody SignRequest::getBody() const
{
    return body_;
}

void SignRequest::setBody(const SignRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SignRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SignRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


