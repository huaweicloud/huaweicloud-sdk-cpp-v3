

#include "huaweicloud/aad/v1/model/UpdatePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePolicyRequest::UpdatePolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePolicyRequest::~UpdatePolicyRequest() = default;

void UpdatePolicyRequest::validate()
{
}

web::json::value UpdatePolicyRequest::toJson() const
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
bool UpdatePolicyRequest::fromJson(const web::json::value& val)
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
            UpdatePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdatePolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdatePolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdatePolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdatePolicyRequestBody UpdatePolicyRequest::getBody() const
{
    return body_;
}

void UpdatePolicyRequest::setBody(const UpdatePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


