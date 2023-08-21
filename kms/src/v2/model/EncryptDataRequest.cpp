

#include "huaweicloud/kms/v2/model/EncryptDataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDataRequest::EncryptDataRequest()
{
    bodyIsSet_ = false;
}

EncryptDataRequest::~EncryptDataRequest() = default;

void EncryptDataRequest::validate()
{
}

web::json::value EncryptDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool EncryptDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EncryptDataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

EncryptDataRequestBody EncryptDataRequest::getBody() const
{
    return body_;
}

void EncryptDataRequest::setBody(const EncryptDataRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EncryptDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EncryptDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


