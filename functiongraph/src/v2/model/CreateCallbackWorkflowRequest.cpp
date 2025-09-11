

#include "huaweicloud/functiongraph/v2/model/CreateCallbackWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateCallbackWorkflowRequest::CreateCallbackWorkflowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    xWorkflowRunId_ = "";
    xWorkflowRunIdIsSet_ = false;
    xWorkflowStateId_ = "";
    xWorkflowStateIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCallbackWorkflowRequest::~CreateCallbackWorkflowRequest() = default;

void CreateCallbackWorkflowRequest::validate()
{
}

web::json::value CreateCallbackWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(xWorkflowRunIdIsSet_) {
        val[utility::conversions::to_string_t("X-Workflow-Run-Id")] = ModelBase::toJson(xWorkflowRunId_);
    }
    if(xWorkflowStateIdIsSet_) {
        val[utility::conversions::to_string_t("X-Workflow-State-Id")] = ModelBase::toJson(xWorkflowStateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCallbackWorkflowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Workflow-Run-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Workflow-Run-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXWorkflowRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Workflow-State-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Workflow-State-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXWorkflowStateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CallbackWorkflowRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCallbackWorkflowRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateCallbackWorkflowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateCallbackWorkflowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateCallbackWorkflowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateCallbackWorkflowRequest::getXWorkflowRunId() const
{
    return xWorkflowRunId_;
}

void CreateCallbackWorkflowRequest::setXWorkflowRunId(const std::string& value)
{
    xWorkflowRunId_ = value;
    xWorkflowRunIdIsSet_ = true;
}

bool CreateCallbackWorkflowRequest::xWorkflowRunIdIsSet() const
{
    return xWorkflowRunIdIsSet_;
}

void CreateCallbackWorkflowRequest::unsetxWorkflowRunId()
{
    xWorkflowRunIdIsSet_ = false;
}

std::string CreateCallbackWorkflowRequest::getXWorkflowStateId() const
{
    return xWorkflowStateId_;
}

void CreateCallbackWorkflowRequest::setXWorkflowStateId(const std::string& value)
{
    xWorkflowStateId_ = value;
    xWorkflowStateIdIsSet_ = true;
}

bool CreateCallbackWorkflowRequest::xWorkflowStateIdIsSet() const
{
    return xWorkflowStateIdIsSet_;
}

void CreateCallbackWorkflowRequest::unsetxWorkflowStateId()
{
    xWorkflowStateIdIsSet_ = false;
}

CallbackWorkflowRequestBody CreateCallbackWorkflowRequest::getBody() const
{
    return body_;
}

void CreateCallbackWorkflowRequest::setBody(const CallbackWorkflowRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCallbackWorkflowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCallbackWorkflowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


