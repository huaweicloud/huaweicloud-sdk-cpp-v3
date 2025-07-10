

#include "huaweicloud/cdn/v2/model/UpdateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateRuleRequest::UpdateRuleRequest()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    conditionsIsSet_ = false;
    actionsIsSet_ = false;
}

UpdateRuleRequest::~UpdateRuleRequest() = default;

void UpdateRuleRequest::validate()
{
}

web::json::value UpdateRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool UpdateRuleRequest::fromJson(const web::json::value& val)
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


std::string UpdateRuleRequest::getName() const
{
    return name_;
}

void UpdateRuleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRuleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRuleRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRuleRequest::getStatus() const
{
    return status_;
}

void UpdateRuleRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRuleRequest::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRuleRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t UpdateRuleRequest::getPriority() const
{
    return priority_;
}

void UpdateRuleRequest::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool UpdateRuleRequest::priorityIsSet() const
{
    return priorityIsSet_;
}

void UpdateRuleRequest::unsetpriority()
{
    priorityIsSet_ = false;
}

Conditions UpdateRuleRequest::getConditions() const
{
    return conditions_;
}

void UpdateRuleRequest::setConditions(const Conditions& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool UpdateRuleRequest::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void UpdateRuleRequest::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<Actions>& UpdateRuleRequest::getActions()
{
    return actions_;
}

void UpdateRuleRequest::setActions(const std::vector<Actions>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool UpdateRuleRequest::actionsIsSet() const
{
    return actionsIsSet_;
}

void UpdateRuleRequest::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


