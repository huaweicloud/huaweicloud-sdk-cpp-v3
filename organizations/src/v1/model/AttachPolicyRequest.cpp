

#include "huaweicloud/organizations/v1/model/AttachPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




AttachPolicyRequest::AttachPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachPolicyRequest::~AttachPolicyRequest() = default;

void AttachPolicyRequest::validate()
{
}

web::json::value AttachPolicyRequest::toJson() const
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
bool AttachPolicyRequest::fromJson(const web::json::value& val)
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
            PolicyTachReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void AttachPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AttachPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AttachPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

PolicyTachReqBody AttachPolicyRequest::getBody() const
{
    return body_;
}

void AttachPolicyRequest::setBody(const PolicyTachReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


