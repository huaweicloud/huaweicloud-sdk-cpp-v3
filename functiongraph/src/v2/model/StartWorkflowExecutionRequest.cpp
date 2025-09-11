

#include "huaweicloud/functiongraph/v2/model/StartWorkflowExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StartWorkflowExecutionRequest::StartWorkflowExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    xCreateTime_ = "";
    xCreateTimeIsSet_ = false;
    xWorkflowRunID_ = "";
    xWorkflowRunIDIsSet_ = false;
    xWorkflowRunMergeFnParameters_ = "";
    xWorkflowRunMergeFnParametersIsSet_ = false;
    bodyIsSet_ = false;
}

StartWorkflowExecutionRequest::~StartWorkflowExecutionRequest() = default;

void StartWorkflowExecutionRequest::validate()
{
}

web::json::value StartWorkflowExecutionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(xCreateTimeIsSet_) {
        val[utility::conversions::to_string_t("X-Create-Time")] = ModelBase::toJson(xCreateTime_);
    }
    if(xWorkflowRunIDIsSet_) {
        val[utility::conversions::to_string_t("X-WorkflowRun-ID")] = ModelBase::toJson(xWorkflowRunID_);
    }
    if(xWorkflowRunMergeFnParametersIsSet_) {
        val[utility::conversions::to_string_t("X-WorkflowRun-MergeFnParameters")] = ModelBase::toJson(xWorkflowRunMergeFnParameters_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartWorkflowExecutionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Create-Time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Create-Time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-WorkflowRun-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-WorkflowRun-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXWorkflowRunID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-WorkflowRun-MergeFnParameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-WorkflowRun-MergeFnParameters"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXWorkflowRunMergeFnParameters(refVal);
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


std::string StartWorkflowExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void StartWorkflowExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StartWorkflowExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StartWorkflowExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string StartWorkflowExecutionRequest::getXCreateTime() const
{
    return xCreateTime_;
}

void StartWorkflowExecutionRequest::setXCreateTime(const std::string& value)
{
    xCreateTime_ = value;
    xCreateTimeIsSet_ = true;
}

bool StartWorkflowExecutionRequest::xCreateTimeIsSet() const
{
    return xCreateTimeIsSet_;
}

void StartWorkflowExecutionRequest::unsetxCreateTime()
{
    xCreateTimeIsSet_ = false;
}

std::string StartWorkflowExecutionRequest::getXWorkflowRunID() const
{
    return xWorkflowRunID_;
}

void StartWorkflowExecutionRequest::setXWorkflowRunID(const std::string& value)
{
    xWorkflowRunID_ = value;
    xWorkflowRunIDIsSet_ = true;
}

bool StartWorkflowExecutionRequest::xWorkflowRunIDIsSet() const
{
    return xWorkflowRunIDIsSet_;
}

void StartWorkflowExecutionRequest::unsetxWorkflowRunID()
{
    xWorkflowRunIDIsSet_ = false;
}

std::string StartWorkflowExecutionRequest::getXWorkflowRunMergeFnParameters() const
{
    return xWorkflowRunMergeFnParameters_;
}

void StartWorkflowExecutionRequest::setXWorkflowRunMergeFnParameters(const std::string& value)
{
    xWorkflowRunMergeFnParameters_ = value;
    xWorkflowRunMergeFnParametersIsSet_ = true;
}

bool StartWorkflowExecutionRequest::xWorkflowRunMergeFnParametersIsSet() const
{
    return xWorkflowRunMergeFnParametersIsSet_;
}

void StartWorkflowExecutionRequest::unsetxWorkflowRunMergeFnParameters()
{
    xWorkflowRunMergeFnParametersIsSet_ = false;
}

FlowExecuteBody StartWorkflowExecutionRequest::getBody() const
{
    return body_;
}

void StartWorkflowExecutionRequest::setBody(const FlowExecuteBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartWorkflowExecutionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartWorkflowExecutionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


