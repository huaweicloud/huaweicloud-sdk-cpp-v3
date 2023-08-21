

#include "huaweicloud/kms/v2/model/ValidateSignatureRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ValidateSignatureRequest::ValidateSignatureRequest()
{
    bodyIsSet_ = false;
}

ValidateSignatureRequest::~ValidateSignatureRequest() = default;

void ValidateSignatureRequest::validate()
{
}

web::json::value ValidateSignatureRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ValidateSignatureRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VerifyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

VerifyRequestBody ValidateSignatureRequest::getBody() const
{
    return body_;
}

void ValidateSignatureRequest::setBody(const VerifyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateSignatureRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateSignatureRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


