

#include "huaweicloud/metastudio/v1/model/ShowInteractionRuleGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInteractionRuleGroupRequest::ShowInteractionRuleGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowInteractionRuleGroupRequest::~ShowInteractionRuleGroupRequest() = default;

void ShowInteractionRuleGroupRequest::validate()
{
}

web::json::value ShowInteractionRuleGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
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

    return val;
}
bool ShowInteractionRuleGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
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
    return ok;
}


std::string ShowInteractionRuleGroupRequest::getGroupId() const
{
    return groupId_;
}

void ShowInteractionRuleGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowInteractionRuleGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowInteractionRuleGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowInteractionRuleGroupRequest::getAuthorization() const
{
    return authorization_;
}

void ShowInteractionRuleGroupRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowInteractionRuleGroupRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowInteractionRuleGroupRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowInteractionRuleGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowInteractionRuleGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowInteractionRuleGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowInteractionRuleGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowInteractionRuleGroupRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowInteractionRuleGroupRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowInteractionRuleGroupRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowInteractionRuleGroupRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowInteractionRuleGroupRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowInteractionRuleGroupRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowInteractionRuleGroupRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowInteractionRuleGroupRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


