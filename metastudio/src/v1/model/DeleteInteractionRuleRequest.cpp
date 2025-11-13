

#include "huaweicloud/metastudio/v1/model/DeleteInteractionRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInteractionRuleRequest::DeleteInteractionRuleRequest()
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
}

DeleteInteractionRuleRequest::~DeleteInteractionRuleRequest() = default;

void DeleteInteractionRuleRequest::validate()
{
}

web::json::value DeleteInteractionRuleRequest::toJson() const
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

    return val;
}
bool DeleteInteractionRuleRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteInteractionRuleRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteInteractionRuleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteInteractionRuleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteInteractionRuleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteInteractionRuleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteInteractionRuleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteInteractionRuleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteInteractionRuleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteInteractionRuleRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteInteractionRuleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteInteractionRuleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteInteractionRuleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteInteractionRuleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteInteractionRuleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteInteractionRuleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteInteractionRuleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteInteractionRuleRequest::getGroupId() const
{
    return groupId_;
}

void DeleteInteractionRuleRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteInteractionRuleRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteInteractionRuleRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteInteractionRuleRequest::getRuleId() const
{
    return ruleId_;
}

void DeleteInteractionRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool DeleteInteractionRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void DeleteInteractionRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


