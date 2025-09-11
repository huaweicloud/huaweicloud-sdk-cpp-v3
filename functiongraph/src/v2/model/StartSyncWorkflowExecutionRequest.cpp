

#include "huaweicloud/functiongraph/v2/model/StartSyncWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StartSyncWorkflowExecutionRequest::StartSyncWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartSyncWorkflowExecutionRequest::~StartSyncWorkflowExecutionRequest() = default;

void StartSyncWorkflowExecutionRequest::validate()
{
}

web::json::value StartSyncWorkflowExecutionRequest::toJson() const
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
bool StartSyncWorkflowExecutionRequest::fromJson(const web::json::value& val)
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
            FlowExecuteBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartSyncWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void StartSyncWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StartSyncWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StartSyncWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

FlowExecuteBody StartSyncWorkflowExecutionRequest::getBody() const
{
    return body_;
}

void StartSyncWorkflowExecutionRequest::setBody(const FlowExecuteBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartSyncWorkflowExecutionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartSyncWorkflowExecutionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


