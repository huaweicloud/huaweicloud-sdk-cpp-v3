

#include "huaweicloud/organizations/v1/model/DetachDryRunPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DetachDryRunPolicyRequest::DetachDryRunPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetachDryRunPolicyRequest::~DetachDryRunPolicyRequest() = default;

void DetachDryRunPolicyRequest::validate()
{
}

web::json::value DetachDryRunPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DetachDryRunPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
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


std::string DetachDryRunPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DetachDryRunPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DetachDryRunPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DetachDryRunPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DetachDryRunPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DetachDryRunPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DetachDryRunPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DetachDryRunPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

PolicyTachReqBody DetachDryRunPolicyRequest::getBody() const
{
    return body_;
}

void DetachDryRunPolicyRequest::setBody(const PolicyTachReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachDryRunPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachDryRunPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


