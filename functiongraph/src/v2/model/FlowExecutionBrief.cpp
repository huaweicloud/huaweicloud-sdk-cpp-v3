

#include "huaweicloud/functiongraph/v2/model/FlowExecutionBrief.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FlowExecutionBrief::FlowExecutionBrief()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
}

FlowExecutionBrief::~FlowExecutionBrief() = default;

void FlowExecutionBrief::validate()
{
}

web::json::value FlowExecutionBrief::toJson() const
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

    return val;
}
bool FlowExecutionBrief::fromJson(const web::json::value& val)
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
    return ok;
}


std::string FlowExecutionBrief::getWorkflowId() const
{
    return workflowId_;
}

void FlowExecutionBrief::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool FlowExecutionBrief::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void FlowExecutionBrief::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string FlowExecutionBrief::getWorkflowUrn() const
{
    return workflowUrn_;
}

void FlowExecutionBrief::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool FlowExecutionBrief::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void FlowExecutionBrief::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string FlowExecutionBrief::getExecutionId() const
{
    return executionId_;
}

void FlowExecutionBrief::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool FlowExecutionBrief::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void FlowExecutionBrief::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string FlowExecutionBrief::getStatus() const
{
    return status_;
}

void FlowExecutionBrief::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FlowExecutionBrief::statusIsSet() const
{
    return statusIsSet_;
}

void FlowExecutionBrief::unsetstatus()
{
    statusIsSet_ = false;
}

std::string FlowExecutionBrief::getBeginTime() const
{
    return beginTime_;
}

void FlowExecutionBrief::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FlowExecutionBrief::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FlowExecutionBrief::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string FlowExecutionBrief::getEndTime() const
{
    return endTime_;
}

void FlowExecutionBrief::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FlowExecutionBrief::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FlowExecutionBrief::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string FlowExecutionBrief::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void FlowExecutionBrief::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool FlowExecutionBrief::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void FlowExecutionBrief::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string FlowExecutionBrief::getCreatedBy() const
{
    return createdBy_;
}

void FlowExecutionBrief::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FlowExecutionBrief::createdByIsSet() const
{
    return createdByIsSet_;
}

void FlowExecutionBrief::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

}
}
}
}
}


