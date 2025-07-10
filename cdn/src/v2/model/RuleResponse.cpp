

#include "huaweicloud/cdn/v2/model/RuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RuleResponse::RuleResponse()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    conditionsIsSet_ = false;
    actionsIsSet_ = false;
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            Conditions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<Actions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
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

int32_t RuleResponse::getPriority() const
{
    return priority_;
}

void RuleResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool RuleResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void RuleResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

Conditions RuleResponse::getConditions() const
{
    return conditions_;
}

void RuleResponse::setConditions(const Conditions& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool RuleResponse::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void RuleResponse::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<Actions>& RuleResponse::getActions()
{
    return actions_;
}

void RuleResponse::setActions(const std::vector<Actions>& value)
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

}
}
}
}
}


