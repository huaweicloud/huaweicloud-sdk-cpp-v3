

#include "huaweicloud/aad/v1/model/DisassociateIpFromPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DisassociateIpFromPolicyRequest::DisassociateIpFromPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateIpFromPolicyRequest::~DisassociateIpFromPolicyRequest() = default;

void DisassociateIpFromPolicyRequest::validate()
{
}

web::json::value DisassociateIpFromPolicyRequest::toJson() const
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
bool DisassociateIpFromPolicyRequest::fromJson(const web::json::value& val)
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
            IpBindingBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateIpFromPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DisassociateIpFromPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DisassociateIpFromPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DisassociateIpFromPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

IpBindingBody DisassociateIpFromPolicyRequest::getBody() const
{
    return body_;
}

void DisassociateIpFromPolicyRequest::setBody(const IpBindingBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateIpFromPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateIpFromPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


