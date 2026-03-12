

#include "huaweicloud/organizations/v1/model/UpdateDryRunPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateDryRunPolicyRequest::UpdateDryRunPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDryRunPolicyRequest::~UpdateDryRunPolicyRequest() = default;

void UpdateDryRunPolicyRequest::validate()
{
}

web::json::value UpdateDryRunPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDryRunPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePolicyReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDryRunPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateDryRunPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateDryRunPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateDryRunPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateDryRunPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void UpdateDryRunPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateDryRunPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateDryRunPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string UpdateDryRunPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateDryRunPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateDryRunPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateDryRunPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdatePolicyReqBody UpdateDryRunPolicyRequest::getBody() const
{
    return body_;
}

void UpdateDryRunPolicyRequest::setBody(const UpdatePolicyReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDryRunPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDryRunPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


