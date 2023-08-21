

#include "huaweicloud/kms/v2/model/DecryptDatakeyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyRequest::DecryptDatakeyRequest()
{
    bodyIsSet_ = false;
}

DecryptDatakeyRequest::~DecryptDatakeyRequest() = default;

void DecryptDatakeyRequest::validate()
{
}

web::json::value DecryptDatakeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DecryptDatakeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DecryptDatakeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

DecryptDatakeyRequestBody DecryptDatakeyRequest::getBody() const
{
    return body_;
}

void DecryptDatakeyRequest::setBody(const DecryptDatakeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DecryptDatakeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DecryptDatakeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


