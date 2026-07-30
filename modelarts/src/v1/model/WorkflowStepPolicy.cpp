

#include "huaweicloud/modelarts/v1/model/WorkflowStepPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStepPolicy::WorkflowStepPolicy()
{
    pollIntervalSeconds_ = "";
    pollIntervalSecondsIsSet_ = false;
    maxExecutionMinutes_ = "";
    maxExecutionMinutesIsSet_ = false;
}

WorkflowStepPolicy::~WorkflowStepPolicy() = default;

void WorkflowStepPolicy::validate()
{
}

web::json::value WorkflowStepPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pollIntervalSecondsIsSet_) {
        val[utility::conversions::to_string_t("poll_interval_seconds")] = ModelBase::toJson(pollIntervalSeconds_);
    }
    if(maxExecutionMinutesIsSet_) {
        val[utility::conversions::to_string_t("max_execution_minutes")] = ModelBase::toJson(maxExecutionMinutes_);
    }

    return val;
}
bool WorkflowStepPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("poll_interval_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poll_interval_seconds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPollIntervalSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_execution_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_execution_minutes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxExecutionMinutes(refVal);
        }
    }
    return ok;
}


std::string WorkflowStepPolicy::getPollIntervalSeconds() const
{
    return pollIntervalSeconds_;
}

void WorkflowStepPolicy::setPollIntervalSeconds(const std::string& value)
{
    pollIntervalSeconds_ = value;
    pollIntervalSecondsIsSet_ = true;
}

bool WorkflowStepPolicy::pollIntervalSecondsIsSet() const
{
    return pollIntervalSecondsIsSet_;
}

void WorkflowStepPolicy::unsetpollIntervalSeconds()
{
    pollIntervalSecondsIsSet_ = false;
}

std::string WorkflowStepPolicy::getMaxExecutionMinutes() const
{
    return maxExecutionMinutes_;
}

void WorkflowStepPolicy::setMaxExecutionMinutes(const std::string& value)
{
    maxExecutionMinutes_ = value;
    maxExecutionMinutesIsSet_ = true;
}

bool WorkflowStepPolicy::maxExecutionMinutesIsSet() const
{
    return maxExecutionMinutesIsSet_;
}

void WorkflowStepPolicy::unsetmaxExecutionMinutes()
{
    maxExecutionMinutesIsSet_ = false;
}

}
}
}
}
}


