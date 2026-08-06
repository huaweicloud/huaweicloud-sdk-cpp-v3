

#include "huaweicloud/kms/v2/model/DecryptDatakeyCapsuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyCapsuleRequest::DecryptDatakeyCapsuleRequest()
{
    bodyIsSet_ = false;
}

DecryptDatakeyCapsuleRequest::~DecryptDatakeyCapsuleRequest() = default;

void DecryptDatakeyCapsuleRequest::validate()
{
}

web::json::value DecryptDatakeyCapsuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DecryptDatakeyCapsuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DecryptDatakeyCapsuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DecryptDatakeyCapsuleRequestBody DecryptDatakeyCapsuleRequest::getBody() const
{
    return body_;
}

void DecryptDatakeyCapsuleRequest::setBody(const DecryptDatakeyCapsuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DecryptDatakeyCapsuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


