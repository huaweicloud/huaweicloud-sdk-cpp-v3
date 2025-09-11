

#include "huaweicloud/functiongraph/v2/model/RetryWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




RetryWorkFlowRequest::RetryWorkFlowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
}

RetryWorkFlowRequest::~RetryWorkFlowRequest() = default;

void RetryWorkFlowRequest::validate()
{
}

web::json::value RetryWorkFlowRequest::toJson() const
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
bool RetryWorkFlowRequest::fromJson(const web::json::value& val)
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


std::string RetryWorkFlowRequest::getWorkflowId() const
{
    return workflowId_;
}

void RetryWorkFlowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool RetryWorkFlowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void RetryWorkFlowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string RetryWorkFlowRequest::getExecutionId() const
{
    return executionId_;
}

void RetryWorkFlowRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool RetryWorkFlowRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void RetryWorkFlowRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


