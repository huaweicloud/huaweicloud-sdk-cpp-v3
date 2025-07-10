

#include "huaweicloud/cdn/v2/model/CreateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateRuleRequest::CreateRuleRequest()
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

CreateRuleRequest::~CreateRuleRequest() = default;

void CreateRuleRequest::validate()
{
}

web::json::value CreateRuleRequest::toJson() const
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
bool CreateRuleRequest::fromJson(const web::json::value& val)
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


std::string CreateRuleRequest::getName() const
{
    return name_;
}

void CreateRuleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRuleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRuleRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRuleRequest::getStatus() const
{
    return status_;
}

void CreateRuleRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRuleRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRuleRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t CreateRuleRequest::getPriority() const
{
    return priority_;
}

void CreateRuleRequest::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CreateRuleRequest::priorityIsSet() const
{
    return priorityIsSet_;
}

void CreateRuleRequest::unsetpriority()
{
    priorityIsSet_ = false;
}

Conditions CreateRuleRequest::getConditions() const
{
    return conditions_;
}

void CreateRuleRequest::setConditions(const Conditions& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool CreateRuleRequest::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void CreateRuleRequest::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<Actions>& CreateRuleRequest::getActions()
{
    return actions_;
}

void CreateRuleRequest::setActions(const std::vector<Actions>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateRuleRequest::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateRuleRequest::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


