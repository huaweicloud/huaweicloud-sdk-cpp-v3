

#include "huaweicloud/modelarts/v1/model/DeleteWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkflowExecutionRequest::DeleteWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
}

DeleteWorkflowExecutionRequest::~DeleteWorkflowExecutionRequest() = default;

void DeleteWorkflowExecutionRequest::validate()
{
}

web::json::value DeleteWorkflowExecutionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }

    return val;
}
bool DeleteWorkflowExecutionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void DeleteWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DeleteWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DeleteWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string DeleteWorkflowExecutionRequest::getExecutionId() const
{
    return executionId_;
}

void DeleteWorkflowExecutionRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool DeleteWorkflowExecutionRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void DeleteWorkflowExecutionRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


