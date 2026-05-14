

#include "huaweicloud/kms/v2/model/DeriveSharedSecretRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeriveSharedSecretRequest::DeriveSharedSecretRequest()
{
    bodyIsSet_ = false;
}

DeriveSharedSecretRequest::~DeriveSharedSecretRequest() = default;

void DeriveSharedSecretRequest::validate()
{
}

web::json::value DeriveSharedSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeriveSharedSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeriveSharedSecretRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeriveSharedSecretRequestBody DeriveSharedSecretRequest::getBody() const
{
    return body_;
}

void DeriveSharedSecretRequest::setBody(const DeriveSharedSecretRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeriveSharedSecretRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeriveSharedSecretRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


