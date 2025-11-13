

#include "huaweicloud/metastudio/v1/model/ShowInteractionRuleGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInteractionRuleGroupResponse::ShowInteractionRuleGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    interactionRulesIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowInteractionRuleGroupResponse::~ShowInteractionRuleGroupResponse() = default;

void ShowInteractionRuleGroupResponse::validate()
{
}

web::json::value ShowInteractionRuleGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(interactionRulesIsSet_) {
        val[utility::conversions::to_string_t("interaction_rules")] = ModelBase::toJson(interactionRules_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowInteractionRuleGroupResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<InteractionRuleDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowInteractionRuleGroupResponse::getGroupId() const
{
    return groupId_;
}

void ShowInteractionRuleGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowInteractionRuleGroupResponse::getGroupName() const
{
    return groupName_;
}

void ShowInteractionRuleGroupResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<InteractionRuleDetailInfo>& ShowInteractionRuleGroupResponse::getInteractionRules()
{
    return interactionRules_;
}

void ShowInteractionRuleGroupResponse::setInteractionRules(const std::vector<InteractionRuleDetailInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

std::string ShowInteractionRuleGroupResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInteractionRuleGroupResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInteractionRuleGroupResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowInteractionRuleGroupResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowInteractionRuleGroupResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowInteractionRuleGroupResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowInteractionRuleGroupResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowInteractionRuleGroupResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


