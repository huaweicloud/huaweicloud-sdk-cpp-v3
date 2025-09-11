

#include "huaweicloud/functiongraph/v2/model/FlowExecutionBriefV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FlowExecutionBriefV2::FlowExecutionBriefV2()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTime_ = utility::datetime();
    beginTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    lastUpdateTime_ = utility::datetime();
    lastUpdateTimeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
}

FlowExecutionBriefV2::~FlowExecutionBriefV2() = default;

void FlowExecutionBriefV2::validate()
{
}

web::json::value FlowExecutionBriefV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
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
    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
    }

    return val;
}
bool FlowExecutionBriefV2::fromJson(const web::json::value& val)
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
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
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
    if(val.has_field(utility::conversions::to_string_t("workflow_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrn(refVal);
        }
    }
    return ok;
}


std::string FlowExecutionBriefV2::getWorkflowId() const
{
    return workflowId_;
}

void FlowExecutionBriefV2::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool FlowExecutionBriefV2::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void FlowExecutionBriefV2::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string FlowExecutionBriefV2::getExecutionId() const
{
    return executionId_;
}

void FlowExecutionBriefV2::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool FlowExecutionBriefV2::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void FlowExecutionBriefV2::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string FlowExecutionBriefV2::getStatus() const
{
    return status_;
}

void FlowExecutionBriefV2::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FlowExecutionBriefV2::statusIsSet() const
{
    return statusIsSet_;
}

void FlowExecutionBriefV2::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime FlowExecutionBriefV2::getBeginTime() const
{
    return beginTime_;
}

void FlowExecutionBriefV2::setBeginTime(const utility::datetime& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FlowExecutionBriefV2::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FlowExecutionBriefV2::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

utility::datetime FlowExecutionBriefV2::getEndTime() const
{
    return endTime_;
}

void FlowExecutionBriefV2::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FlowExecutionBriefV2::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FlowExecutionBriefV2::unsetendTime()
{
    endTimeIsSet_ = false;
}

utility::datetime FlowExecutionBriefV2::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void FlowExecutionBriefV2::setLastUpdateTime(const utility::datetime& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool FlowExecutionBriefV2::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void FlowExecutionBriefV2::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string FlowExecutionBriefV2::getCreatedBy() const
{
    return createdBy_;
}

void FlowExecutionBriefV2::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FlowExecutionBriefV2::createdByIsSet() const
{
    return createdByIsSet_;
}

void FlowExecutionBriefV2::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string FlowExecutionBriefV2::getWorkflowUrn() const
{
    return workflowUrn_;
}

void FlowExecutionBriefV2::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool FlowExecutionBriefV2::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void FlowExecutionBriefV2::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

}
}
}
}
}


