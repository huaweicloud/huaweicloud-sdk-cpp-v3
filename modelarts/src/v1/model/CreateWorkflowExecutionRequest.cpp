

#include "huaweicloud/modelarts/v1/model/CreateWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowExecutionRequest::CreateWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowExecutionRequest::~CreateWorkflowExecutionRequest() = default;

void CreateWorkflowExecutionRequest::validate()
{
}

web::json::value CreateWorkflowExecutionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkflowExecutionRequest::fromJson(const web::json::value& val)
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


std::string CreateWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowExecution CreateWorkflowExecutionRequest::getBody() const
{
    return body_;
}

void CreateWorkflowExecutionRequest::setBody(const WorkflowExecution& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowExecutionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowExecutionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


