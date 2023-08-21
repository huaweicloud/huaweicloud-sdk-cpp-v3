

#include "huaweicloud/kms/v2/model/EncryptDatakeyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDatakeyRequest::EncryptDatakeyRequest()
{
    bodyIsSet_ = false;
}

EncryptDatakeyRequest::~EncryptDatakeyRequest() = default;

void EncryptDatakeyRequest::validate()
{
}

web::json::value EncryptDatakeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool EncryptDatakeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EncryptDatakeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

EncryptDatakeyRequestBody EncryptDatakeyRequest::getBody() const
{
    return body_;
}

void EncryptDatakeyRequest::setBody(const EncryptDatakeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EncryptDatakeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EncryptDatakeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


