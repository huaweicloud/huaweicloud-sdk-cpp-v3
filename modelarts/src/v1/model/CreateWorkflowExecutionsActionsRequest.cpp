

#include "huaweicloud/modelarts/v1/model/CreateWorkflowExecutionsActionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowExecutionsActionsRequest::CreateWorkflowExecutionsActionsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowExecutionsActionsRequest::~CreateWorkflowExecutionsActionsRequest() = default;

void CreateWorkflowExecutionsActionsRequest::validate()
{
}

web::json::value CreateWorkflowExecutionsActionsRequest::toJson() const
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
bool CreateWorkflowExecutionsActionsRequest::fromJson(const web::json::value& val)
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
            ExecutionAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowExecutionsActionsRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowExecutionsActionsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowExecutionsActionsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowExecutionsActionsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateWorkflowExecutionsActionsRequest::getExecutionId() const
{
    return executionId_;
}

void CreateWorkflowExecutionsActionsRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool CreateWorkflowExecutionsActionsRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void CreateWorkflowExecutionsActionsRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

ExecutionAction CreateWorkflowExecutionsActionsRequest::getBody() const
{
    return body_;
}

void CreateWorkflowExecutionsActionsRequest::setBody(const ExecutionAction& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowExecutionsActionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowExecutionsActionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


