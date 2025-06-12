

#include "huaweicloud/metastudio/v1/model/UpdateInteractionRuleGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInteractionRuleGroupRequest::UpdateInteractionRuleGroupRequest()
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
    bodyIsSet_ = false;
}

UpdateInteractionRuleGroupRequest::~UpdateInteractionRuleGroupRequest() = default;

void UpdateInteractionRuleGroupRequest::validate()
{
}

web::json::value UpdateInteractionRuleGroupRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInteractionRuleGroupRequest::fromJson(const web::json::value& val)
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


std::string UpdateInteractionRuleGroupRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateInteractionRuleGroupRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateInteractionRuleGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateInteractionRuleGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateInteractionRuleGroupRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateInteractionRuleGroupRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateInteractionRuleGroupRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateInteractionRuleGroupRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateInteractionRuleGroupRequest::getGroupId() const
{
    return groupId_;
}

void UpdateInteractionRuleGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

InteractionRuleGroup UpdateInteractionRuleGroupRequest::getBody() const
{
    return body_;
}

void UpdateInteractionRuleGroupRequest::setBody(const InteractionRuleGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInteractionRuleGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInteractionRuleGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


