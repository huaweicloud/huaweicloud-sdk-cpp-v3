

#include "huaweicloud/modelarts/v1/model/ShowWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowExecutionRequest::ShowWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
}

ShowWorkflowExecutionRequest::~ShowWorkflowExecutionRequest() = default;

void ShowWorkflowExecutionRequest::validate()
{
}

web::json::value ShowWorkflowExecutionRequest::toJson() const
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
bool ShowWorkflowExecutionRequest::fromJson(const web::json::value& val)
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


std::string ShowWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowExecutionRequest::getExecutionId() const
{
    return executionId_;
}

void ShowWorkflowExecutionRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool ShowWorkflowExecutionRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void ShowWorkflowExecutionRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


