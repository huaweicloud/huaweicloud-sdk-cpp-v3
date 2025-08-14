

#include "huaweicloud/iotda/v5/model/RuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RuleResponse::RuleResponse()
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

RuleResponse::~RuleResponse() = default;

void RuleResponse::validate()
{
}

web::json::value RuleResponse::toJson() const
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
bool RuleResponse::fromJson(const web::json::value& val)
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


std::string RuleResponse::getRuleId() const
{
    return ruleId_;
}

void RuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string RuleResponse::getName() const
{
    return name_;
}

void RuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void RuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleResponse::getDescription() const
{
    return description_;
}

void RuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConditionGroup RuleResponse::getConditionGroup() const
{
    return conditionGroup_;
}

void RuleResponse::setConditionGroup(const ConditionGroup& value)
{
    conditionGroup_ = value;
    conditionGroupIsSet_ = true;
}

bool RuleResponse::conditionGroupIsSet() const
{
    return conditionGroupIsSet_;
}

void RuleResponse::unsetconditionGroup()
{
    conditionGroupIsSet_ = false;
}

std::vector<RuleAction>& RuleResponse::getActions()
{
    return actions_;
}

void RuleResponse::setActions(const std::vector<RuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool RuleResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void RuleResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string RuleResponse::getRuleType() const
{
    return ruleType_;
}

void RuleResponse::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool RuleResponse::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void RuleResponse::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string RuleResponse::getStatus() const
{
    return status_;
}

void RuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RuleResponse::getAppId() const
{
    return appId_;
}

void RuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool RuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void RuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<std::string>& RuleResponse::getEdgeNodeIds()
{
    return edgeNodeIds_;
}

void RuleResponse::setEdgeNodeIds(const std::vector<std::string>& value)
{
    edgeNodeIds_ = value;
    edgeNodeIdsIsSet_ = true;
}

bool RuleResponse::edgeNodeIdsIsSet() const
{
    return edgeNodeIdsIsSet_;
}

void RuleResponse::unsetedgeNodeIds()
{
    edgeNodeIdsIsSet_ = false;
}

std::string RuleResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void RuleResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool RuleResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void RuleResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

DeviceSide RuleResponse::getDeviceSide() const
{
    return deviceSide_;
}

void RuleResponse::setDeviceSide(const DeviceSide& value)
{
    deviceSide_ = value;
    deviceSideIsSet_ = true;
}

bool RuleResponse::deviceSideIsSet() const
{
    return deviceSideIsSet_;
}

void RuleResponse::unsetdeviceSide()
{
    deviceSideIsSet_ = false;
}

}
}
}
}
}


