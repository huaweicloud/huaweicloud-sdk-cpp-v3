

#include "huaweicloud/metastudio/v1/model/InteractionRuleGroupSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InteractionRuleGroupSummary::InteractionRuleGroupSummary()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

InteractionRuleGroupSummary::~InteractionRuleGroupSummary() = default;

void InteractionRuleGroupSummary::validate()
{
}

web::json::value InteractionRuleGroupSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool InteractionRuleGroupSummary::fromJson(const web::json::value& val)
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


std::string InteractionRuleGroupSummary::getGroupId() const
{
    return groupId_;
}

void InteractionRuleGroupSummary::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool InteractionRuleGroupSummary::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void InteractionRuleGroupSummary::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string InteractionRuleGroupSummary::getGroupName() const
{
    return groupName_;
}

void InteractionRuleGroupSummary::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool InteractionRuleGroupSummary::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void InteractionRuleGroupSummary::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string InteractionRuleGroupSummary::getCreateTime() const
{
    return createTime_;
}

void InteractionRuleGroupSummary::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InteractionRuleGroupSummary::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InteractionRuleGroupSummary::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InteractionRuleGroupSummary::getUpdateTime() const
{
    return updateTime_;
}

void InteractionRuleGroupSummary::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool InteractionRuleGroupSummary::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void InteractionRuleGroupSummary::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


