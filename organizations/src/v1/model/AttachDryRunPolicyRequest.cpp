

#include "huaweicloud/organizations/v1/model/AttachDryRunPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




AttachDryRunPolicyRequest::AttachDryRunPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachDryRunPolicyRequest::~AttachDryRunPolicyRequest() = default;

void AttachDryRunPolicyRequest::validate()
{
}

web::json::value AttachDryRunPolicyRequest::toJson() const
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
bool AttachDryRunPolicyRequest::fromJson(const web::json::value& val)
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


std::string AttachDryRunPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void AttachDryRunPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool AttachDryRunPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void AttachDryRunPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string AttachDryRunPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void AttachDryRunPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AttachDryRunPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AttachDryRunPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

PolicyTachReqBody AttachDryRunPolicyRequest::getBody() const
{
    return body_;
}

void AttachDryRunPolicyRequest::setBody(const PolicyTachReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachDryRunPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachDryRunPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


