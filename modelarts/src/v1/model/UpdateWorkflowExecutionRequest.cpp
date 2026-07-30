

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowExecutionRequest::UpdateWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkflowExecutionRequest::~UpdateWorkflowExecutionRequest() = default;

void UpdateWorkflowExecutionRequest::validate()
{
}

web::json::value UpdateWorkflowExecutionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWorkflowExecutionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowExecution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string UpdateWorkflowExecutionRequest::getExecutionId() const
{
    return executionId_;
}

void UpdateWorkflowExecutionRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool UpdateWorkflowExecutionRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void UpdateWorkflowExecutionRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

WorkflowExecution UpdateWorkflowExecutionRequest::getBody() const
{
    return body_;
}

void UpdateWorkflowExecutionRequest::setBody(const WorkflowExecution& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkflowExecutionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkflowExecutionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


