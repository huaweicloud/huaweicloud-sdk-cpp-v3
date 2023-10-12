

#include "huaweicloud/drs/v5/model/JobActions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobActions::JobActions()
{
    availableActionsIsSet_ = false;
    unavailableActionsIsSet_ = false;
    currentAction_ = "";
    currentActionIsSet_ = false;
}

JobActions::~JobActions() = default;

void JobActions::validate()
{
}

web::json::value JobActions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availableActionsIsSet_) {
        val[utility::conversions::to_string_t("available_actions")] = ModelBase::toJson(availableActions_);
    }
    if(unavailableActionsIsSet_) {
        val[utility::conversions::to_string_t("unavailable_actions")] = ModelBase::toJson(unavailableActions_);
    }
    if(currentActionIsSet_) {
        val[utility::conversions::to_string_t("current_action")] = ModelBase::toJson(currentAction_);
    }

    return val;
}
bool JobActions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("available_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unavailable_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unavailable_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnavailableActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentAction(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& JobActions::getAvailableActions()
{
    return availableActions_;
}

void JobActions::setAvailableActions(const std::vector<std::string>& value)
{
    availableActions_ = value;
    availableActionsIsSet_ = true;
}

bool JobActions::availableActionsIsSet() const
{
    return availableActionsIsSet_;
}

void JobActions::unsetavailableActions()
{
    availableActionsIsSet_ = false;
}

std::vector<std::string>& JobActions::getUnavailableActions()
{
    return unavailableActions_;
}

void JobActions::setUnavailableActions(const std::vector<std::string>& value)
{
    unavailableActions_ = value;
    unavailableActionsIsSet_ = true;
}

bool JobActions::unavailableActionsIsSet() const
{
    return unavailableActionsIsSet_;
}

void JobActions::unsetunavailableActions()
{
    unavailableActionsIsSet_ = false;
}

std::string JobActions::getCurrentAction() const
{
    return currentAction_;
}

void JobActions::setCurrentAction(const std::string& value)
{
    currentAction_ = value;
    currentActionIsSet_ = true;
}

bool JobActions::currentActionIsSet() const
{
    return currentActionIsSet_;
}

void JobActions::unsetcurrentAction()
{
    currentActionIsSet_ = false;
}

}
}
}
}
}


