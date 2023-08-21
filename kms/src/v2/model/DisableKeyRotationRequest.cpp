

#include "huaweicloud/kms/v2/model/DisableKeyRotationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableKeyRotationRequest::DisableKeyRotationRequest()
{
    bodyIsSet_ = false;
}

DisableKeyRotationRequest::~DisableKeyRotationRequest() = default;

void DisableKeyRotationRequest::validate()
{
}

web::json::value DisableKeyRotationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DisableKeyRotationRequest::fromJson(const web::json::value& val)
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

OperateKeyRequestBody DisableKeyRotationRequest::getBody() const
{
    return body_;
}

void DisableKeyRotationRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableKeyRotationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableKeyRotationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


