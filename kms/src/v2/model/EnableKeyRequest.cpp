

#include "huaweicloud/kms/v2/model/EnableKeyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableKeyRequest::EnableKeyRequest()
{
    bodyIsSet_ = false;
}

EnableKeyRequest::~EnableKeyRequest() = default;

void EnableKeyRequest::validate()
{
}

web::json::value EnableKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool EnableKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

OperateKeyRequestBody EnableKeyRequest::getBody() const
{
    return body_;
}

void EnableKeyRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


