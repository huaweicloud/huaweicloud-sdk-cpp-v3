

#include "huaweicloud/functiongraph/v2/model/StopWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StopWorkFlowRequest::StopWorkFlowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
}

StopWorkFlowRequest::~StopWorkFlowRequest() = default;

void StopWorkFlowRequest::validate()
{
}

web::json::value StopWorkFlowRequest::toJson() const
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
bool StopWorkFlowRequest::fromJson(const web::json::value& val)
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


std::string StopWorkFlowRequest::getWorkflowId() const
{
    return workflowId_;
}

void StopWorkFlowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StopWorkFlowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StopWorkFlowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string StopWorkFlowRequest::getExecutionId() const
{
    return executionId_;
}

void StopWorkFlowRequest::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool StopWorkFlowRequest::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void StopWorkFlowRequest::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

}
}
}
}
}


