

#include "huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkflowExecutionResponse::ShowWorkflowExecutionResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    headersIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    nodeExecutionDetailsIsSet_ = false;
}

ShowWorkflowExecutionResponse::~ShowWorkflowExecutionResponse() = default;

void ShowWorkflowExecutionResponse::validate()
{
}

web::json::value ShowWorkflowExecutionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(headersIsSet_) {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(headers_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(nodeExecutionDetailsIsSet_) {
        val[utility::conversions::to_string_t("node_execution_details")] = ModelBase::toJson(nodeExecutionDetails_);
    }

    return val;
}
bool ShowWorkflowExecutionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workflow_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headers"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_execution_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_execution_details"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeExecutionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeExecutionDetails(refVal);
        }
    }
    return ok;
}


std::string ShowWorkflowExecutionResponse::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowExecutionResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowExecutionResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getWorkflowUrn() const
{
    return workflowUrn_;
}

void ShowWorkflowExecutionResponse::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void ShowWorkflowExecutionResponse::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getExecutionId() const
{
    return executionId_;
}

void ShowWorkflowExecutionResponse::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void ShowWorkflowExecutionResponse::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getStatus() const
{
    return status_;
}

void ShowWorkflowExecutionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowWorkflowExecutionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowWorkflowExecutionResponse::getHeaders() const
{
    return headers_;
}

void ShowWorkflowExecutionResponse::setHeaders(const Object& value)
{
    headers_ = value;
    headersIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::headersIsSet() const
{
    return headersIsSet_;
}

void ShowWorkflowExecutionResponse::unsetheaders()
{
    headersIsSet_ = false;
}

Object ShowWorkflowExecutionResponse::getInput() const
{
    return input_;
}

void ShowWorkflowExecutionResponse::setInput(const Object& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::inputIsSet() const
{
    return inputIsSet_;
}

void ShowWorkflowExecutionResponse::unsetinput()
{
    inputIsSet_ = false;
}

Object ShowWorkflowExecutionResponse::getOutput() const
{
    return output_;
}

void ShowWorkflowExecutionResponse::setOutput(const Object& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::outputIsSet() const
{
    return outputIsSet_;
}

void ShowWorkflowExecutionResponse::unsetoutput()
{
    outputIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowWorkflowExecutionResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowWorkflowExecutionResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getEndTime() const
{
    return endTime_;
}

void ShowWorkflowExecutionResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowWorkflowExecutionResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ShowWorkflowExecutionResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ShowWorkflowExecutionResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string ShowWorkflowExecutionResponse::getCreatedBy() const
{
    return createdBy_;
}

void ShowWorkflowExecutionResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void ShowWorkflowExecutionResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::vector<NodeExecutionDetail>& ShowWorkflowExecutionResponse::getNodeExecutionDetails()
{
    return nodeExecutionDetails_;
}

void ShowWorkflowExecutionResponse::setNodeExecutionDetails(const std::vector<NodeExecutionDetail>& value)
{
    nodeExecutionDetails_ = value;
    nodeExecutionDetailsIsSet_ = true;
}

bool ShowWorkflowExecutionResponse::nodeExecutionDetailsIsSet() const
{
    return nodeExecutionDetailsIsSet_;
}

void ShowWorkflowExecutionResponse::unsetnodeExecutionDetails()
{
    nodeExecutionDetailsIsSet_ = false;
}

}
}
}
}
}


