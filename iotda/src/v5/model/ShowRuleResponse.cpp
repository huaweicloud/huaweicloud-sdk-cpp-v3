

#include "huaweicloud/iotda/v5/model/ShowRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRuleResponse::ShowRuleResponse()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
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
    edgeNodeIdsIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    deviceSideIsSet_ = false;
}

ShowRuleResponse::~ShowRuleResponse() = default;

void ShowRuleResponse::validate()
{
}

web::json::value ShowRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
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
    if(edgeNodeIdsIsSet_) {
        val[utility::conversions::to_string_t("edge_node_ids")] = ModelBase::toJson(edgeNodeIds_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(deviceSideIsSet_) {
        val[utility::conversions::to_string_t("device_side")] = ModelBase::toJson(deviceSide_);
    }

    return val;
}
bool ShowRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("edge_node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edge_node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEdgeNodeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
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


std::string ShowRuleResponse::getRuleId() const
{
    return ruleId_;
}

void ShowRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ShowRuleResponse::getName() const
{
    return name_;
}

void ShowRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowRuleResponse::getDescription() const
{
    return description_;
}

void ShowRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConditionGroup ShowRuleResponse::getConditionGroup() const
{
    return conditionGroup_;
}

void ShowRuleResponse::setConditionGroup(const ConditionGroup& value)
{
    conditionGroup_ = value;
    conditionGroupIsSet_ = true;
}

bool ShowRuleResponse::conditionGroupIsSet() const
{
    return conditionGroupIsSet_;
}

void ShowRuleResponse::unsetconditionGroup()
{
    conditionGroupIsSet_ = false;
}

std::vector<RuleAction>& ShowRuleResponse::getActions()
{
    return actions_;
}

void ShowRuleResponse::setActions(const std::vector<RuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ShowRuleResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ShowRuleResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string ShowRuleResponse::getRuleType() const
{
    return ruleType_;
}

void ShowRuleResponse::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool ShowRuleResponse::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void ShowRuleResponse::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string ShowRuleResponse::getStatus() const
{
    return status_;
}

void ShowRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowRuleResponse::getAppId() const
{
    return appId_;
}

void ShowRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<std::string>& ShowRuleResponse::getEdgeNodeIds()
{
    return edgeNodeIds_;
}

void ShowRuleResponse::setEdgeNodeIds(const std::vector<std::string>& value)
{
    edgeNodeIds_ = value;
    edgeNodeIdsIsSet_ = true;
}

bool ShowRuleResponse::edgeNodeIdsIsSet() const
{
    return edgeNodeIdsIsSet_;
}

void ShowRuleResponse::unsetedgeNodeIds()
{
    edgeNodeIdsIsSet_ = false;
}

std::string ShowRuleResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ShowRuleResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ShowRuleResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ShowRuleResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

DeviceSide ShowRuleResponse::getDeviceSide() const
{
    return deviceSide_;
}

void ShowRuleResponse::setDeviceSide(const DeviceSide& value)
{
    deviceSide_ = value;
    deviceSideIsSet_ = true;
}

bool ShowRuleResponse::deviceSideIsSet() const
{
    return deviceSideIsSet_;
}

void ShowRuleResponse::unsetdeviceSide()
{
    deviceSideIsSet_ = false;
}

}
}
}
}
}


