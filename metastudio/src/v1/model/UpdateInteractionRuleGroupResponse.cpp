

#include "huaweicloud/metastudio/v1/model/UpdateInteractionRuleGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInteractionRuleGroupResponse::UpdateInteractionRuleGroupResponse()
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

UpdateInteractionRuleGroupResponse::~UpdateInteractionRuleGroupResponse() = default;

void UpdateInteractionRuleGroupResponse::validate()
{
}

web::json::value UpdateInteractionRuleGroupResponse::toJson() const
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
bool UpdateInteractionRuleGroupResponse::fromJson(const web::json::value& val)
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


std::string UpdateInteractionRuleGroupResponse::getGroupId() const
{
    return groupId_;
}

void UpdateInteractionRuleGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateInteractionRuleGroupResponse::getGroupName() const
{
    return groupName_;
}

void UpdateInteractionRuleGroupResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<InteractionRuleDetailInfo>& UpdateInteractionRuleGroupResponse::getInteractionRules()
{
    return interactionRules_;
}

void UpdateInteractionRuleGroupResponse::setInteractionRules(const std::vector<InteractionRuleDetailInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

std::string UpdateInteractionRuleGroupResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateInteractionRuleGroupResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateInteractionRuleGroupResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateInteractionRuleGroupResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateInteractionRuleGroupResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateInteractionRuleGroupResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateInteractionRuleGroupResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateInteractionRuleGroupResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


