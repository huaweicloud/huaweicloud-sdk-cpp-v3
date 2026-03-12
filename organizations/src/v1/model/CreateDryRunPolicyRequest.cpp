

#include "huaweicloud/organizations/v1/model/CreateDryRunPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateDryRunPolicyRequest::CreateDryRunPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDryRunPolicyRequest::~CreateDryRunPolicyRequest() = default;

void CreateDryRunPolicyRequest::validate()
{
}

web::json::value CreateDryRunPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDryRunPolicyRequest::fromJson(const web::json::value& val)
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
            CreateDryRunPolicyReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDryRunPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateDryRunPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateDryRunPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateDryRunPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateDryRunPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDryRunPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDryRunPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDryRunPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateDryRunPolicyReqBody CreateDryRunPolicyRequest::getBody() const
{
    return body_;
}

void CreateDryRunPolicyRequest::setBody(const CreateDryRunPolicyReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDryRunPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDryRunPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


