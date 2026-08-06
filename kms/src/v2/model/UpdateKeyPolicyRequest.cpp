

#include "huaweicloud/kms/v2/model/UpdateKeyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyPolicyRequest::UpdateKeyPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKeyPolicyRequest::~UpdateKeyPolicyRequest() = default;

void UpdateKeyPolicyRequest::validate()
{
}

web::json::value UpdateKeyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKeyPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeyPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateKeyPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateKeyPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateKeyPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdateKeyPolicyRequestBody UpdateKeyPolicyRequest::getBody() const
{
    return body_;
}

void UpdateKeyPolicyRequest::setBody(const UpdateKeyPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeyPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeyPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


