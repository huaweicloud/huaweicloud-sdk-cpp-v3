

#include "huaweicloud/kms/v2/model/UpdateKeyDescriptionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyDescriptionRequest::UpdateKeyDescriptionRequest()
{
    bodyIsSet_ = false;
}

UpdateKeyDescriptionRequest::~UpdateKeyDescriptionRequest() = default;

void UpdateKeyDescriptionRequest::validate()
{
}

web::json::value UpdateKeyDescriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateKeyDescriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeyDescriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UpdateKeyDescriptionRequestBody UpdateKeyDescriptionRequest::getBody() const
{
    return body_;
}

void UpdateKeyDescriptionRequest::setBody(const UpdateKeyDescriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeyDescriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeyDescriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


