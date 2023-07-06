

#include "huaweicloud/drs/v3/model/JobActionResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




JobActionResp::JobActionResp()
{
    availableActionsIsSet_ = false;
    unavailableActionsIsSet_ = false;
    currentAction_ = "";
    currentActionIsSet_ = false;
}

JobActionResp::~JobActionResp() = default;

void JobActionResp::validate()
{
}

web::json::value JobActionResp::toJson() const
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

bool JobActionResp::fromJson(const web::json::value& val)
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

std::vector<std::string>& JobActionResp::getAvailableActions()
{
    return availableActions_;
}

void JobActionResp::setAvailableActions(const std::vector<std::string>& value)
{
    availableActions_ = value;
    availableActionsIsSet_ = true;
}

bool JobActionResp::availableActionsIsSet() const
{
    return availableActionsIsSet_;
}

void JobActionResp::unsetavailableActions()
{
    availableActionsIsSet_ = false;
}

std::vector<std::string>& JobActionResp::getUnavailableActions()
{
    return unavailableActions_;
}

void JobActionResp::setUnavailableActions(const std::vector<std::string>& value)
{
    unavailableActions_ = value;
    unavailableActionsIsSet_ = true;
}

bool JobActionResp::unavailableActionsIsSet() const
{
    return unavailableActionsIsSet_;
}

void JobActionResp::unsetunavailableActions()
{
    unavailableActionsIsSet_ = false;
}

std::string JobActionResp::getCurrentAction() const
{
    return currentAction_;
}

void JobActionResp::setCurrentAction(const std::string& value)
{
    currentAction_ = value;
    currentActionIsSet_ = true;
}

bool JobActionResp::currentActionIsSet() const
{
    return currentActionIsSet_;
}

void JobActionResp::unsetcurrentAction()
{
    currentActionIsSet_ = false;
}

}
}
}
}
}


