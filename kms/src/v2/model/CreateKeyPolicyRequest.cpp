

#include "huaweicloud/kms/v2/model/CreateKeyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyPolicyRequest::CreateKeyPolicyRequest()
{
    bodyIsSet_ = false;
}

CreateKeyPolicyRequest::~CreateKeyPolicyRequest() = default;

void CreateKeyPolicyRequest::validate()
{
}

web::json::value CreateKeyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateKeyPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateKeyPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateKeyPolicyRequestBody CreateKeyPolicyRequest::getBody() const
{
    return body_;
}

void CreateKeyPolicyRequest::setBody(const CreateKeyPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKeyPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKeyPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


