

#include "huaweicloud/organizations/v1/model/UpdatePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdatePolicyRequest::UpdatePolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePolicyRequest::~UpdatePolicyRequest() = default;

void UpdatePolicyRequest::validate()
{
}

web::json::value UpdatePolicyRequest::toJson() const
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
bool UpdatePolicyRequest::fromJson(const web::json::value& val)
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


std::string UpdatePolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdatePolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdatePolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdatePolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
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

std::string UpdatePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdatePolicyReqBody UpdatePolicyRequest::getBody() const
{
    return body_;
}

void UpdatePolicyRequest::setBody(const UpdatePolicyReqBody& value)
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


