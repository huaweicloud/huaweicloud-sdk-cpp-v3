

#include "huaweicloud/dds/v3/model/SetRecyclePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetRecyclePolicyRequest::SetRecyclePolicyRequest()
{
    bodyIsSet_ = false;
}

SetRecyclePolicyRequest::~SetRecyclePolicyRequest() = default;

void SetRecyclePolicyRequest::validate()
{
}

web::json::value SetRecyclePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetRecyclePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecyclePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RecyclePolicyRequestBody SetRecyclePolicyRequest::getBody() const
{
    return body_;
}

void SetRecyclePolicyRequest::setBody(const RecyclePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRecyclePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRecyclePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


