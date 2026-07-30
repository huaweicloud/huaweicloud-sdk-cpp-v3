

#include "huaweicloud/cdn/v2/model/FullUpdateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




FullUpdateRuleRequest::FullUpdateRuleRequest()
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

FullUpdateRuleRequest::~FullUpdateRuleRequest() = default;

void FullUpdateRuleRequest::validate()
{
}

web::json::value FullUpdateRuleRequest::toJson() const
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
bool FullUpdateRuleRequest::fromJson(const web::json::value& val)
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


std::string FullUpdateRuleRequest::getRuleId() const
{
    return ruleId_;
}

void FullUpdateRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool FullUpdateRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void FullUpdateRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string FullUpdateRuleRequest::getName() const
{
    return name_;
}

void FullUpdateRuleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FullUpdateRuleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void FullUpdateRuleRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string FullUpdateRuleRequest::getStatus() const
{
    return status_;
}

void FullUpdateRuleRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FullUpdateRuleRequest::statusIsSet() const
{
    return statusIsSet_;
}

void FullUpdateRuleRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t FullUpdateRuleRequest::getPriority() const
{
    return priority_;
}

void FullUpdateRuleRequest::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool FullUpdateRuleRequest::priorityIsSet() const
{
    return priorityIsSet_;
}

void FullUpdateRuleRequest::unsetpriority()
{
    priorityIsSet_ = false;
}

Conditions FullUpdateRuleRequest::getConditions() const
{
    return conditions_;
}

void FullUpdateRuleRequest::setConditions(const Conditions& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool FullUpdateRuleRequest::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void FullUpdateRuleRequest::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<Actions>& FullUpdateRuleRequest::getActions()
{
    return actions_;
}

void FullUpdateRuleRequest::setActions(const std::vector<Actions>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool FullUpdateRuleRequest::actionsIsSet() const
{
    return actionsIsSet_;
}

void FullUpdateRuleRequest::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


