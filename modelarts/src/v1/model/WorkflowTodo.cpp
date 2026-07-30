

#include "huaweicloud/modelarts/v1/model/WorkflowTodo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowTodo::WorkflowTodo()
{
    time_ = "";
    timeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    stepName_ = "";
    stepNameIsSet_ = false;
    stepTitle_ = "";
    stepTitleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

WorkflowTodo::~WorkflowTodo() = default;

void WorkflowTodo::validate()
{
}

web::json::value WorkflowTodo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(stepNameIsSet_) {
        val[utility::conversions::to_string_t("step_name")] = ModelBase::toJson(stepName_);
    }
    if(stepTitleIsSet_) {
        val[utility::conversions::to_string_t("step_title")] = ModelBase::toJson(stepTitle_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool WorkflowTodo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepTitle(refVal);
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
    return ok;
}


std::string WorkflowTodo::getTime() const
{
    return time_;
}

void WorkflowTodo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool WorkflowTodo::timeIsSet() const
{
    return timeIsSet_;
}

void WorkflowTodo::unsettime()
{
    timeIsSet_ = false;
}

int32_t WorkflowTodo::getDuration() const
{
    return duration_;
}

void WorkflowTodo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool WorkflowTodo::durationIsSet() const
{
    return durationIsSet_;
}

void WorkflowTodo::unsetduration()
{
    durationIsSet_ = false;
}

std::string WorkflowTodo::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowTodo::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowTodo::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowTodo::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string WorkflowTodo::getWorkflowName() const
{
    return workflowName_;
}

void WorkflowTodo::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool WorkflowTodo::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void WorkflowTodo::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

std::string WorkflowTodo::getExecutionId() const
{
    return executionId_;
}

void WorkflowTodo::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool WorkflowTodo::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void WorkflowTodo::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string WorkflowTodo::getStepName() const
{
    return stepName_;
}

void WorkflowTodo::setStepName(const std::string& value)
{
    stepName_ = value;
    stepNameIsSet_ = true;
}

bool WorkflowTodo::stepNameIsSet() const
{
    return stepNameIsSet_;
}

void WorkflowTodo::unsetstepName()
{
    stepNameIsSet_ = false;
}

std::string WorkflowTodo::getStepTitle() const
{
    return stepTitle_;
}

void WorkflowTodo::setStepTitle(const std::string& value)
{
    stepTitle_ = value;
    stepTitleIsSet_ = true;
}

bool WorkflowTodo::stepTitleIsSet() const
{
    return stepTitleIsSet_;
}

void WorkflowTodo::unsetstepTitle()
{
    stepTitleIsSet_ = false;
}

std::string WorkflowTodo::getStatus() const
{
    return status_;
}

void WorkflowTodo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkflowTodo::statusIsSet() const
{
    return statusIsSet_;
}

void WorkflowTodo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


