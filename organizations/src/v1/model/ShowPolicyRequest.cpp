

#include "huaweicloud/organizations/v1/model/ShowPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowPolicyRequest::ShowPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowPolicyRequest::~ShowPolicyRequest() = default;

void ShowPolicyRequest::validate()
{
}

web::json::value ShowPolicyRequest::toJson() const
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

    return val;
}
bool ShowPolicyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ShowPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ShowPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ShowPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


