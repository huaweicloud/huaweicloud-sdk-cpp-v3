

#include "huaweicloud/kms/v2/model/EnableKeyRotationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EnableKeyRotationRequest::EnableKeyRotationRequest()
{
    bodyIsSet_ = false;
}

EnableKeyRotationRequest::~EnableKeyRotationRequest() = default;

void EnableKeyRotationRequest::validate()
{
}

web::json::value EnableKeyRotationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableKeyRotationRequest::fromJson(const web::json::value& val)
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


OperateKeyRequestBody EnableKeyRotationRequest::getBody() const
{
    return body_;
}

void EnableKeyRotationRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableKeyRotationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableKeyRotationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


