

#include "huaweicloud/modelarts/v1/model/ShowWorkflowStepExecutionMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowStepExecutionMetricsRequest::ShowWorkflowStepExecutionMetricsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    stepExecutionId_ = "";
    stepExecutionIdIsSet_ = false;
}

ShowWorkflowStepExecutionMetricsRequest::~ShowWorkflowStepExecutionMetricsRequest() = default;

void ShowWorkflowStepExecutionMetricsRequest::validate()
{
}

web::json::value ShowWorkflowStepExecutionMetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(stepExecutionIdIsSet_) {
        val[utility::conversions::to_string_t("step_execution_id")] = ModelBase::toJson(stepExecutionId_);
    }

    return val;
}
bool ShowWorkflowStepExecutionMetricsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("step_execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepExecutionId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkflowStepExecutionMetricsRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowStepExecutionMetricsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowStepExecutionMetricsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowStepExecutionMetricsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowStepExecutionMetricsRequest::getExecutionId() const
{
    return executionId_;
}

void ShowWorkflowStepExecutionMetricsRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool ShowWorkflowStepExecutionMetricsRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void ShowWorkflowStepExecutionMetricsRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string ShowWorkflowStepExecutionMetricsRequest::getStepExecutionId() const
{
    return stepExecutionId_;
}

void ShowWorkflowStepExecutionMetricsRequest::setStepExecutionId(const std::string& value)
{
    stepExecutionId_ = value;
    stepExecutionIdIsSet_ = true;
}

bool ShowWorkflowStepExecutionMetricsRequest::stepExecutionIdIsSet() const
{
    return stepExecutionIdIsSet_;
}

void ShowWorkflowStepExecutionMetricsRequest::unsetstepExecutionId()
{
    stepExecutionIdIsSet_ = false;
}

}
}
}
}
}


