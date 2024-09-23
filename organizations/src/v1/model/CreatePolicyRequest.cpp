

#include "huaweicloud/organizations/v1/model/CreatePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreatePolicyRequest::CreatePolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePolicyRequest::~CreatePolicyRequest() = default;

void CreatePolicyRequest::validate()
{
}

web::json::value CreatePolicyRequest::toJson() const
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
bool CreatePolicyRequest::fromJson(const web::json::value& val)
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
            CreatePolicyReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreatePolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreatePolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreatePolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreatePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreatePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreatePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreatePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreatePolicyReqBody CreatePolicyRequest::getBody() const
{
    return body_;
}

void CreatePolicyRequest::setBody(const CreatePolicyReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


