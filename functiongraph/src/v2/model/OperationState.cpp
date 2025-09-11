

#include "huaweicloud/functiongraph/v2/model/OperationState.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




OperationState::OperationState()
{
    actionMode_ = "";
    actionModeIsSet_ = false;
    actionsIsSet_ = false;
    onErrorsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    end_ = false;
    endIsSet_ = false;
    transition_ = "";
    transitionIsSet_ = false;
    stateDataFilterIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
}

OperationState::~OperationState() = default;

void OperationState::validate()
{
}

web::json::value OperationState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionModeIsSet_) {
        val[utility::conversions::to_string_t("action_mode")] = ModelBase::toJson(actionMode_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(onErrorsIsSet_) {
        val[utility::conversions::to_string_t("on_errors")] = ModelBase::toJson(onErrors_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(transitionIsSet_) {
        val[utility::conversions::to_string_t("transition")] = ModelBase::toJson(transition_);
    }
    if(stateDataFilterIsSet_) {
        val[utility::conversions::to_string_t("state_data_filter")] = ModelBase::toJson(stateDataFilter_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool OperationState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<Action> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("on_errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_errors"));
        if(!fieldValue.is_null())
        {
            std::vector<OnError> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnErrors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state_data_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_data_filter"));
        if(!fieldValue.is_null())
        {
            StateDataFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateDataFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string OperationState::getActionMode() const
{
    return actionMode_;
}

void OperationState::setActionMode(const std::string& value)
{
    actionMode_ = value;
    actionModeIsSet_ = true;
}

bool OperationState::actionModeIsSet() const
{
    return actionModeIsSet_;
}

void OperationState::unsetactionMode()
{
    actionModeIsSet_ = false;
}

std::vector<Action>& OperationState::getActions()
{
    return actions_;
}

void OperationState::setActions(const std::vector<Action>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool OperationState::actionsIsSet() const
{
    return actionsIsSet_;
}

void OperationState::unsetactions()
{
    actionsIsSet_ = false;
}

std::vector<OnError>& OperationState::getOnErrors()
{
    return onErrors_;
}

void OperationState::setOnErrors(const std::vector<OnError>& value)
{
    onErrors_ = value;
    onErrorsIsSet_ = true;
}

bool OperationState::onErrorsIsSet() const
{
    return onErrorsIsSet_;
}

void OperationState::unsetonErrors()
{
    onErrorsIsSet_ = false;
}

std::string OperationState::getId() const
{
    return id_;
}

void OperationState::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperationState::idIsSet() const
{
    return idIsSet_;
}

void OperationState::unsetid()
{
    idIsSet_ = false;
}

std::string OperationState::getName() const
{
    return name_;
}

void OperationState::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OperationState::nameIsSet() const
{
    return nameIsSet_;
}

void OperationState::unsetname()
{
    nameIsSet_ = false;
}

std::string OperationState::getType() const
{
    return type_;
}

void OperationState::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OperationState::typeIsSet() const
{
    return typeIsSet_;
}

void OperationState::unsettype()
{
    typeIsSet_ = false;
}

bool OperationState::isEnd() const
{
    return end_;
}

void OperationState::setEnd(bool value)
{
    end_ = value;
    endIsSet_ = true;
}

bool OperationState::endIsSet() const
{
    return endIsSet_;
}

void OperationState::unsetend()
{
    endIsSet_ = false;
}

std::string OperationState::getTransition() const
{
    return transition_;
}

void OperationState::setTransition(const std::string& value)
{
    transition_ = value;
    transitionIsSet_ = true;
}

bool OperationState::transitionIsSet() const
{
    return transitionIsSet_;
}

void OperationState::unsettransition()
{
    transitionIsSet_ = false;
}

StateDataFilter OperationState::getStateDataFilter() const
{
    return stateDataFilter_;
}

void OperationState::setStateDataFilter(const StateDataFilter& value)
{
    stateDataFilter_ = value;
    stateDataFilterIsSet_ = true;
}

bool OperationState::stateDataFilterIsSet() const
{
    return stateDataFilterIsSet_;
}

void OperationState::unsetstateDataFilter()
{
    stateDataFilterIsSet_ = false;
}

int64_t OperationState::getDuration() const
{
    return duration_;
}

void OperationState::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OperationState::durationIsSet() const
{
    return durationIsSet_;
}

void OperationState::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


