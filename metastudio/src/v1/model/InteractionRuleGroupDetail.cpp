

#include "huaweicloud/metastudio/v1/model/InteractionRuleGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InteractionRuleGroupDetail::InteractionRuleGroupDetail()
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
}

InteractionRuleGroupDetail::~InteractionRuleGroupDetail() = default;

void InteractionRuleGroupDetail::validate()
{
}

web::json::value InteractionRuleGroupDetail::toJson() const
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

    return val;
}
bool InteractionRuleGroupDetail::fromJson(const web::json::value& val)
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
    return ok;
}


std::string InteractionRuleGroupDetail::getGroupId() const
{
    return groupId_;
}

void InteractionRuleGroupDetail::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool InteractionRuleGroupDetail::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void InteractionRuleGroupDetail::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string InteractionRuleGroupDetail::getGroupName() const
{
    return groupName_;
}

void InteractionRuleGroupDetail::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool InteractionRuleGroupDetail::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void InteractionRuleGroupDetail::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<InteractionRuleDetailInfo>& InteractionRuleGroupDetail::getInteractionRules()
{
    return interactionRules_;
}

void InteractionRuleGroupDetail::setInteractionRules(const std::vector<InteractionRuleDetailInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool InteractionRuleGroupDetail::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void InteractionRuleGroupDetail::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

std::string InteractionRuleGroupDetail::getCreateTime() const
{
    return createTime_;
}

void InteractionRuleGroupDetail::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InteractionRuleGroupDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InteractionRuleGroupDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InteractionRuleGroupDetail::getUpdateTime() const
{
    return updateTime_;
}

void InteractionRuleGroupDetail::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool InteractionRuleGroupDetail::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void InteractionRuleGroupDetail::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


