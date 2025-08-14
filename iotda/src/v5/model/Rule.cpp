

#include "huaweicloud/iotda/v5/model/Rule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




Rule::Rule()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    conditionGroupIsSet_ = false;
    actionsIsSet_ = false;
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    deviceSideIsSet_ = false;
}

Rule::~Rule() = default;

void Rule::validate()
{
}

web::json::value Rule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(conditionGroupIsSet_) {
        val[utility::conversions::to_string_t("condition_group")] = ModelBase::toJson(conditionGroup_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(deviceSideIsSet_) {
        val[utility::conversions::to_string_t("device_side")] = ModelBase::toJson(deviceSide_);
    }

    return val;
}
bool Rule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_group"));
        if(!fieldValue.is_null())
        {
            ConditionGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_side"));
        if(!fieldValue.is_null())
        {
            DeviceSide refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceSide(refVal);
        }
    }
    return ok;
}


std::string Rule::getName() const
{
    return name_;
}

void Rule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Rule::nameIsSet() const
{
    return nameIsSet_;
}

void Rule::unsetname()
{
    nameIsSet_ = false;
}

std::string Rule::getDescription() const
{
    return description_;
}

void Rule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Rule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Rule::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConditionGroup Rule::getConditionGroup() const
{
    return conditionGroup_;
}

void Rule::setConditionGroup(const ConditionGroup& value)
{
    conditionGroup_ = value;
    conditionGroupIsSet_ = true;
}

bool Rule::conditionGroupIsSet() const
{
    return conditionGroupIsSet_;
}

void Rule::unsetconditionGroup()
{
    conditionGroupIsSet_ = false;
}

std::vector<RuleAction>& Rule::getActions()
{
    return actions_;
}

void Rule::setActions(const std::vector<RuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool Rule::actionsIsSet() const
{
    return actionsIsSet_;
}

void Rule::unsetactions()
{
    actionsIsSet_ = false;
}

std::string Rule::getRuleType() const
{
    return ruleType_;
}

void Rule::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool Rule::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void Rule::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string Rule::getStatus() const
{
    return status_;
}

void Rule::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Rule::statusIsSet() const
{
    return statusIsSet_;
}

void Rule::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Rule::getAppId() const
{
    return appId_;
}

void Rule::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool Rule::appIdIsSet() const
{
    return appIdIsSet_;
}

void Rule::unsetappId()
{
    appIdIsSet_ = false;
}

DeviceSide Rule::getDeviceSide() const
{
    return deviceSide_;
}

void Rule::setDeviceSide(const DeviceSide& value)
{
    deviceSide_ = value;
    deviceSideIsSet_ = true;
}

bool Rule::deviceSideIsSet() const
{
    return deviceSideIsSet_;
}

void Rule::unsetdeviceSide()
{
    deviceSideIsSet_ = false;
}

}
}
}
}
}


