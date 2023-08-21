

#include "huaweicloud/kms/v2/model/UpdateKeyRotationIntervalRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyRotationIntervalRequest::UpdateKeyRotationIntervalRequest()
{
    bodyIsSet_ = false;
}

UpdateKeyRotationIntervalRequest::~UpdateKeyRotationIntervalRequest() = default;

void UpdateKeyRotationIntervalRequest::validate()
{
}

web::json::value UpdateKeyRotationIntervalRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateKeyRotationIntervalRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeyRotationIntervalRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UpdateKeyRotationIntervalRequestBody UpdateKeyRotationIntervalRequest::getBody() const
{
    return body_;
}

void UpdateKeyRotationIntervalRequest::setBody(const UpdateKeyRotationIntervalRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeyRotationIntervalRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeyRotationIntervalRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


