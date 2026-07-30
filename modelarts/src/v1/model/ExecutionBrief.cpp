

#include "huaweicloud/modelarts/v1/model/ExecutionBrief.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ExecutionBrief::ExecutionBrief()
{
    executionId_ = "";
    executionIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    runningStepsIsSet_ = false;
    currentStepsIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
}

ExecutionBrief::~ExecutionBrief() = default;

void ExecutionBrief::validate()
{
}

web::json::value ExecutionBrief::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(runningStepsIsSet_) {
        val[utility::conversions::to_string_t("running_steps")] = ModelBase::toJson(runningSteps_);
    }
    if(currentStepsIsSet_) {
        val[utility::conversions::to_string_t("current_steps")] = ModelBase::toJson(currentSteps_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool ExecutionBrief::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("running_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentSteps(refVal);
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


std::string ExecutionBrief::getExecutionId() const
{
    return executionId_;
}

void ExecutionBrief::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool ExecutionBrief::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void ExecutionBrief::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string ExecutionBrief::getCreatedAt() const
{
    return createdAt_;
}

void ExecutionBrief::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ExecutionBrief::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ExecutionBrief::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ExecutionBrief::getStatus() const
{
    return status_;
}

void ExecutionBrief::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExecutionBrief::statusIsSet() const
{
    return statusIsSet_;
}

void ExecutionBrief::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ExecutionBrief::getRunningSteps()
{
    return runningSteps_;
}

void ExecutionBrief::setRunningSteps(const std::vector<std::string>& value)
{
    runningSteps_ = value;
    runningStepsIsSet_ = true;
}

bool ExecutionBrief::runningStepsIsSet() const
{
    return runningStepsIsSet_;
}

void ExecutionBrief::unsetrunningSteps()
{
    runningStepsIsSet_ = false;
}

std::vector<std::string>& ExecutionBrief::getCurrentSteps()
{
    return currentSteps_;
}

void ExecutionBrief::setCurrentSteps(const std::vector<std::string>& value)
{
    currentSteps_ = value;
    currentStepsIsSet_ = true;
}

bool ExecutionBrief::currentStepsIsSet() const
{
    return currentStepsIsSet_;
}

void ExecutionBrief::unsetcurrentSteps()
{
    currentStepsIsSet_ = false;
}

int64_t ExecutionBrief::getDuration() const
{
    return duration_;
}

void ExecutionBrief::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ExecutionBrief::durationIsSet() const
{
    return durationIsSet_;
}

void ExecutionBrief::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


