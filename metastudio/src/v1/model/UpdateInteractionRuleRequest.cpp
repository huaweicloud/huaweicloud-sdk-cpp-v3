

#include "huaweicloud/metastudio/v1/model/UpdateInteractionRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInteractionRuleRequest::UpdateInteractionRuleRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInteractionRuleRequest::~UpdateInteractionRuleRequest() = default;

void UpdateInteractionRuleRequest::validate()
{
}

web::json::value UpdateInteractionRuleRequest::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInteractionRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInteractionRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInteractionRuleRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateInteractionRuleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateInteractionRuleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateInteractionRuleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateInteractionRuleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateInteractionRuleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateInteractionRuleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateInteractionRuleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateInteractionRuleRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateInteractionRuleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateInteractionRuleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateInteractionRuleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateInteractionRuleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateInteractionRuleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateInteractionRuleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateInteractionRuleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateInteractionRuleRequest::getGroupId() const
{
    return groupId_;
}

void UpdateInteractionRuleRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateInteractionRuleRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateInteractionRuleRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateInteractionRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateInteractionRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateInteractionRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateInteractionRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

CreateInteractionRuleReq UpdateInteractionRuleRequest::getBody() const
{
    return body_;
}

void UpdateInteractionRuleRequest::setBody(const CreateInteractionRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInteractionRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInteractionRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


