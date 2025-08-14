

#include "huaweicloud/iotda/v5/model/UpdateRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRuleResponse::UpdateRuleResponse()
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

UpdateRuleResponse::~UpdateRuleResponse() = default;

void UpdateRuleResponse::validate()
{
}

web::json::value UpdateRuleResponse::toJson() const
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
bool UpdateRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateRuleResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateRuleResponse::getName() const
{
    return name_;
}

void UpdateRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRuleResponse::getDescription() const
{
    return description_;
}

void UpdateRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConditionGroup UpdateRuleResponse::getConditionGroup() const
{
    return conditionGroup_;
}

void UpdateRuleResponse::setConditionGroup(const ConditionGroup& value)
{
    conditionGroup_ = value;
    conditionGroupIsSet_ = true;
}

bool UpdateRuleResponse::conditionGroupIsSet() const
{
    return conditionGroupIsSet_;
}

void UpdateRuleResponse::unsetconditionGroup()
{
    conditionGroupIsSet_ = false;
}

std::vector<RuleAction>& UpdateRuleResponse::getActions()
{
    return actions_;
}

void UpdateRuleResponse::setActions(const std::vector<RuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool UpdateRuleResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void UpdateRuleResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string UpdateRuleResponse::getRuleType() const
{
    return ruleType_;
}

void UpdateRuleResponse::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool UpdateRuleResponse::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void UpdateRuleResponse::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string UpdateRuleResponse::getStatus() const
{
    return status_;
}

void UpdateRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateRuleResponse::getAppId() const
{
    return appId_;
}

void UpdateRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<std::string>& UpdateRuleResponse::getEdgeNodeIds()
{
    return edgeNodeIds_;
}

void UpdateRuleResponse::setEdgeNodeIds(const std::vector<std::string>& value)
{
    edgeNodeIds_ = value;
    edgeNodeIdsIsSet_ = true;
}

bool UpdateRuleResponse::edgeNodeIdsIsSet() const
{
    return edgeNodeIdsIsSet_;
}

void UpdateRuleResponse::unsetedgeNodeIds()
{
    edgeNodeIdsIsSet_ = false;
}

std::string UpdateRuleResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void UpdateRuleResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool UpdateRuleResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void UpdateRuleResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

DeviceSide UpdateRuleResponse::getDeviceSide() const
{
    return deviceSide_;
}

void UpdateRuleResponse::setDeviceSide(const DeviceSide& value)
{
    deviceSide_ = value;
    deviceSideIsSet_ = true;
}

bool UpdateRuleResponse::deviceSideIsSet() const
{
    return deviceSideIsSet_;
}

void UpdateRuleResponse::unsetdeviceSide()
{
    deviceSideIsSet_ = false;
}

}
}
}
}
}


