

#include "huaweicloud/metastudio/v1/model/CreateInteractionRuleGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractionRuleGroupRequest::CreateInteractionRuleGroupRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInteractionRuleGroupRequest::~CreateInteractionRuleGroupRequest() = default;

void CreateInteractionRuleGroupRequest::validate()
{
}

web::json::value CreateInteractionRuleGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInteractionRuleGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            InteractionRuleGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInteractionRuleGroupRequest::getAuthorization() const
{
    return authorization_;
}

void CreateInteractionRuleGroupRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateInteractionRuleGroupRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateInteractionRuleGroupRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateInteractionRuleGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateInteractionRuleGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateInteractionRuleGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateInteractionRuleGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateInteractionRuleGroupRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateInteractionRuleGroupRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateInteractionRuleGroupRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateInteractionRuleGroupRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateInteractionRuleGroupRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateInteractionRuleGroupRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateInteractionRuleGroupRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateInteractionRuleGroupRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

InteractionRuleGroup CreateInteractionRuleGroupRequest::getBody() const
{
    return body_;
}

void CreateInteractionRuleGroupRequest::setBody(const InteractionRuleGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInteractionRuleGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInteractionRuleGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


