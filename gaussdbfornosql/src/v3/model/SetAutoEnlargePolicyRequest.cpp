

#include "huaweicloud/gaussdbfornosql/v3/model/SetAutoEnlargePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetAutoEnlargePolicyRequest::SetAutoEnlargePolicyRequest()
{
    bodyIsSet_ = false;
}

SetAutoEnlargePolicyRequest::~SetAutoEnlargePolicyRequest() = default;

void SetAutoEnlargePolicyRequest::validate()
{
}

web::json::value SetAutoEnlargePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAutoEnlargePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetAutoPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetAutoPolicyRequestBody SetAutoEnlargePolicyRequest::getBody() const
{
    return body_;
}

void SetAutoEnlargePolicyRequest::setBody(const SetAutoPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoEnlargePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoEnlargePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


