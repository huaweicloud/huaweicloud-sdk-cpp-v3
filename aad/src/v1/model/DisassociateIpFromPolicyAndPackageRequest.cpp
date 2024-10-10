

#include "huaweicloud/aad/v1/model/DisassociateIpFromPolicyAndPackageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DisassociateIpFromPolicyAndPackageRequest::DisassociateIpFromPolicyAndPackageRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateIpFromPolicyAndPackageRequest::~DisassociateIpFromPolicyAndPackageRequest() = default;

void DisassociateIpFromPolicyAndPackageRequest::validate()
{
}

web::json::value DisassociateIpFromPolicyAndPackageRequest::toJson() const
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
bool DisassociateIpFromPolicyAndPackageRequest::fromJson(const web::json::value& val)
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
            IpBindingV3Body refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateIpFromPolicyAndPackageRequest::getPolicyId() const
{
    return policyId_;
}

void DisassociateIpFromPolicyAndPackageRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DisassociateIpFromPolicyAndPackageRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DisassociateIpFromPolicyAndPackageRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

IpBindingV3Body DisassociateIpFromPolicyAndPackageRequest::getBody() const
{
    return body_;
}

void DisassociateIpFromPolicyAndPackageRequest::setBody(const IpBindingV3Body& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateIpFromPolicyAndPackageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateIpFromPolicyAndPackageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


