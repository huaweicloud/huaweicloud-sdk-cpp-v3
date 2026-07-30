

#include "huaweicloud/modelarts/v1/model/CreateWorkflowStepExecutionsActionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowStepExecutionsActionsRequest::CreateWorkflowStepExecutionsActionsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    stepExecutionId_ = "";
    stepExecutionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowStepExecutionsActionsRequest::~CreateWorkflowStepExecutionsActionsRequest() = default;

void CreateWorkflowStepExecutionsActionsRequest::validate()
{
}

web::json::value CreateWorkflowStepExecutionsActionsRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkflowStepExecutionsActionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StepExecutionAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowStepExecutionsActionsRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowStepExecutionsActionsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowStepExecutionsActionsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowStepExecutionsActionsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateWorkflowStepExecutionsActionsRequest::getExecutionId() const
{
    return executionId_;
}

void CreateWorkflowStepExecutionsActionsRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool CreateWorkflowStepExecutionsActionsRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void CreateWorkflowStepExecutionsActionsRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string CreateWorkflowStepExecutionsActionsRequest::getStepExecutionId() const
{
    return stepExecutionId_;
}

void CreateWorkflowStepExecutionsActionsRequest::setStepExecutionId(const std::string& value)
{
    stepExecutionId_ = value;
    stepExecutionIdIsSet_ = true;
}

bool CreateWorkflowStepExecutionsActionsRequest::stepExecutionIdIsSet() const
{
    return stepExecutionIdIsSet_;
}

void CreateWorkflowStepExecutionsActionsRequest::unsetstepExecutionId()
{
    stepExecutionIdIsSet_ = false;
}

StepExecutionAction CreateWorkflowStepExecutionsActionsRequest::getBody() const
{
    return body_;
}

void CreateWorkflowStepExecutionsActionsRequest::setBody(const StepExecutionAction& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowStepExecutionsActionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowStepExecutionsActionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


