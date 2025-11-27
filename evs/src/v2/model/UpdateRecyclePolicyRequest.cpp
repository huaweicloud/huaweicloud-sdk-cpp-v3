

#include "huaweicloud/evs/v2/model/UpdateRecyclePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateRecyclePolicyRequest::UpdateRecyclePolicyRequest()
{
    bodyIsSet_ = false;
}

UpdateRecyclePolicyRequest::~UpdateRecyclePolicyRequest() = default;

void UpdateRecyclePolicyRequest::validate()
{
}

web::json::value UpdateRecyclePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecyclePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyRecycleBinPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyRecycleBinPolicyRequestBody UpdateRecyclePolicyRequest::getBody() const
{
    return body_;
}

void UpdateRecyclePolicyRequest::setBody(const ModifyRecycleBinPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecyclePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecyclePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


