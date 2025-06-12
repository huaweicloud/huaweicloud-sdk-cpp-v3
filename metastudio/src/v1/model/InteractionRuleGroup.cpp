

#include "huaweicloud/metastudio/v1/model/InteractionRuleGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InteractionRuleGroup::InteractionRuleGroup()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    interactionRulesIsSet_ = false;
}

InteractionRuleGroup::~InteractionRuleGroup() = default;

void InteractionRuleGroup::validate()
{
}

web::json::value InteractionRuleGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(interactionRulesIsSet_) {
        val[utility::conversions::to_string_t("interaction_rules")] = ModelBase::toJson(interactionRules_);
    }

    return val;
}
bool InteractionRuleGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<InteractionRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRules(refVal);
        }
    }
    return ok;
}


std::string InteractionRuleGroup::getGroupName() const
{
    return groupName_;
}

void InteractionRuleGroup::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool InteractionRuleGroup::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void InteractionRuleGroup::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<InteractionRuleInfo>& InteractionRuleGroup::getInteractionRules()
{
    return interactionRules_;
}

void InteractionRuleGroup::setInteractionRules(const std::vector<InteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool InteractionRuleGroup::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void InteractionRuleGroup::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

}
}
}
}
}


