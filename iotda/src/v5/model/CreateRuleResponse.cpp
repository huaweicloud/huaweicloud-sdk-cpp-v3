

#include "huaweicloud/iotda/v5/model/CreateRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRuleResponse::CreateRuleResponse()
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

CreateRuleResponse::~CreateRuleResponse() = default;

void CreateRuleResponse::validate()
{
}

web::json::value CreateRuleResponse::toJson() const
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
bool CreateRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateRuleResponse::getRuleId() const
{
    return ruleId_;
}

void CreateRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool CreateRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void CreateRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string CreateRuleResponse::getName() const
{
    return name_;
}

void CreateRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRuleResponse::getDescription() const
{
    return description_;
}

void CreateRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ConditionGroup CreateRuleResponse::getConditionGroup() const
{
    return conditionGroup_;
}

void CreateRuleResponse::setConditionGroup(const ConditionGroup& value)
{
    conditionGroup_ = value;
    conditionGroupIsSet_ = true;
}

bool CreateRuleResponse::conditionGroupIsSet() const
{
    return conditionGroupIsSet_;
}

void CreateRuleResponse::unsetconditionGroup()
{
    conditionGroupIsSet_ = false;
}

std::vector<RuleAction>& CreateRuleResponse::getActions()
{
    return actions_;
}

void CreateRuleResponse::setActions(const std::vector<RuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateRuleResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateRuleResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string CreateRuleResponse::getRuleType() const
{
    return ruleType_;
}

void CreateRuleResponse::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool CreateRuleResponse::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void CreateRuleResponse::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string CreateRuleResponse::getStatus() const
{
    return status_;
}

void CreateRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateRuleResponse::getAppId() const
{
    return appId_;
}

void CreateRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<std::string>& CreateRuleResponse::getEdgeNodeIds()
{
    return edgeNodeIds_;
}

void CreateRuleResponse::setEdgeNodeIds(const std::vector<std::string>& value)
{
    edgeNodeIds_ = value;
    edgeNodeIdsIsSet_ = true;
}

bool CreateRuleResponse::edgeNodeIdsIsSet() const
{
    return edgeNodeIdsIsSet_;
}

void CreateRuleResponse::unsetedgeNodeIds()
{
    edgeNodeIdsIsSet_ = false;
}

std::string CreateRuleResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void CreateRuleResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool CreateRuleResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void CreateRuleResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

DeviceSide CreateRuleResponse::getDeviceSide() const
{
    return deviceSide_;
}

void CreateRuleResponse::setDeviceSide(const DeviceSide& value)
{
    deviceSide_ = value;
    deviceSideIsSet_ = true;
}

bool CreateRuleResponse::deviceSideIsSet() const
{
    return deviceSideIsSet_;
}

void CreateRuleResponse::unsetdeviceSide()
{
    deviceSideIsSet_ = false;
}

}
}
}
}
}


