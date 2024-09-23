

#include "huaweicloud/organizations/v1/model/DetachPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DetachPolicyRequest::DetachPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetachPolicyRequest::~DetachPolicyRequest() = default;

void DetachPolicyRequest::validate()
{
}

web::json::value DetachPolicyRequest::toJson() const
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
bool DetachPolicyRequest::fromJson(const web::json::value& val)
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


std::string DetachPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DetachPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DetachPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DetachPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DetachPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void DetachPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DetachPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DetachPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

PolicyTachReqBody DetachPolicyRequest::getBody() const
{
    return body_;
}

void DetachPolicyRequest::setBody(const PolicyTachReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


