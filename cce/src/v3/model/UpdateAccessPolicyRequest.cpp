

#include "huaweicloud/cce/v3/model/UpdateAccessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAccessPolicyRequest::UpdateAccessPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAccessPolicyRequest::~UpdateAccessPolicyRequest() = default;

void UpdateAccessPolicyRequest::validate()
{
}

web::json::value UpdateAccessPolicyRequest::toJson() const
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
bool UpdateAccessPolicyRequest::fromJson(const web::json::value& val)
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
            AccessPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAccessPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateAccessPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateAccessPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateAccessPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

AccessPolicy UpdateAccessPolicyRequest::getBody() const
{
    return body_;
}

void UpdateAccessPolicyRequest::setBody(const AccessPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAccessPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAccessPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


