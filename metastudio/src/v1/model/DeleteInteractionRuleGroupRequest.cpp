

#include "huaweicloud/metastudio/v1/model/DeleteInteractionRuleGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInteractionRuleGroupRequest::DeleteInteractionRuleGroupRequest()
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

DeleteInteractionRuleGroupRequest::~DeleteInteractionRuleGroupRequest() = default;

void DeleteInteractionRuleGroupRequest::validate()
{
}

web::json::value DeleteInteractionRuleGroupRequest::toJson() const
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
bool DeleteInteractionRuleGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteInteractionRuleGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteInteractionRuleGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteInteractionRuleGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteInteractionRuleGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteInteractionRuleGroupRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteInteractionRuleGroupRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteInteractionRuleGroupRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteInteractionRuleGroupRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteInteractionRuleGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteInteractionRuleGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteInteractionRuleGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteInteractionRuleGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteInteractionRuleGroupRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteInteractionRuleGroupRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteInteractionRuleGroupRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteInteractionRuleGroupRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteInteractionRuleGroupRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteInteractionRuleGroupRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteInteractionRuleGroupRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteInteractionRuleGroupRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


