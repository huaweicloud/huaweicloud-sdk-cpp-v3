

#include "huaweicloud/modelarts/v1/model/WorkflowSchedulePolicies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowSchedulePolicies::WorkflowSchedulePolicies()
{
    onFailure_ = "";
    onFailureIsSet_ = false;
    onRunning_ = "";
    onRunningIsSet_ = false;
}

WorkflowSchedulePolicies::~WorkflowSchedulePolicies() = default;

void WorkflowSchedulePolicies::validate()
{
}

web::json::value WorkflowSchedulePolicies::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onFailureIsSet_) {
        val[utility::conversions::to_string_t("on_failure")] = ModelBase::toJson(onFailure_);
    }
    if(onRunningIsSet_) {
        val[utility::conversions::to_string_t("on_running")] = ModelBase::toJson(onRunning_);
    }

    return val;
}
bool WorkflowSchedulePolicies::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("on_failure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_failure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnFailure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("on_running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_running"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnRunning(refVal);
        }
    }
    return ok;
}


std::string WorkflowSchedulePolicies::getOnFailure() const
{
    return onFailure_;
}

void WorkflowSchedulePolicies::setOnFailure(const std::string& value)
{
    onFailure_ = value;
    onFailureIsSet_ = true;
}

bool WorkflowSchedulePolicies::onFailureIsSet() const
{
    return onFailureIsSet_;
}

void WorkflowSchedulePolicies::unsetonFailure()
{
    onFailureIsSet_ = false;
}

std::string WorkflowSchedulePolicies::getOnRunning() const
{
    return onRunning_;
}

void WorkflowSchedulePolicies::setOnRunning(const std::string& value)
{
    onRunning_ = value;
    onRunningIsSet_ = true;
}

bool WorkflowSchedulePolicies::onRunningIsSet() const
{
    return onRunningIsSet_;
}

void WorkflowSchedulePolicies::unsetonRunning()
{
    onRunningIsSet_ = false;
}

}
}
}
}
}


