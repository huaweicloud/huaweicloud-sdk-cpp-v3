

#include "huaweicloud/codeartsbuild/v3/model/BuildStageRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildStageRecord::BuildStageRecord()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    logStatus_ = "";
    logStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    scheduleTime_ = "";
    scheduleTimeIsSet_ = false;
    queuedTime_ = "";
    queuedTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    buildDuration_ = 0;
    buildDurationIsSet_ = false;
    pendingDuration_ = 0;
    pendingDurationIsSet_ = false;
    buildRecordId_ = "";
    buildRecordIdIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    executionStageName_ = "";
    executionStageNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    nodeId_ = 0;
    nodeIdIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
}

BuildStageRecord::~BuildStageRecord() = default;

void BuildStageRecord::validate()
{
}

web::json::value BuildStageRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(logStatusIsSet_) {
        val[utility::conversions::to_string_t("log_status")] = ModelBase::toJson(logStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(scheduleTimeIsSet_) {
        val[utility::conversions::to_string_t("schedule_time")] = ModelBase::toJson(scheduleTime_);
    }
    if(queuedTimeIsSet_) {
        val[utility::conversions::to_string_t("queued_time")] = ModelBase::toJson(queuedTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(buildDurationIsSet_) {
        val[utility::conversions::to_string_t("build_duration")] = ModelBase::toJson(buildDuration_);
    }
    if(pendingDurationIsSet_) {
        val[utility::conversions::to_string_t("pending_duration")] = ModelBase::toJson(pendingDuration_);
    }
    if(buildRecordIdIsSet_) {
        val[utility::conversions::to_string_t("build_record_id")] = ModelBase::toJson(buildRecordId_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(executionStageNameIsSet_) {
        val[utility::conversions::to_string_t("execution_stage_name")] = ModelBase::toJson(executionStageName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool BuildStageRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queued_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queued_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueuedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pending_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pending_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildRecordId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_stage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_stage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionStageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string BuildStageRecord::getId() const
{
    return id_;
}

void BuildStageRecord::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BuildStageRecord::idIsSet() const
{
    return idIsSet_;
}

void BuildStageRecord::unsetid()
{
    idIsSet_ = false;
}

std::string BuildStageRecord::getStatus() const
{
    return status_;
}

void BuildStageRecord::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BuildStageRecord::statusIsSet() const
{
    return statusIsSet_;
}

void BuildStageRecord::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t BuildStageRecord::getStatusCode() const
{
    return statusCode_;
}

void BuildStageRecord::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool BuildStageRecord::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void BuildStageRecord::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string BuildStageRecord::getLogStatus() const
{
    return logStatus_;
}

void BuildStageRecord::setLogStatus(const std::string& value)
{
    logStatus_ = value;
    logStatusIsSet_ = true;
}

bool BuildStageRecord::logStatusIsSet() const
{
    return logStatusIsSet_;
}

void BuildStageRecord::unsetlogStatus()
{
    logStatusIsSet_ = false;
}

std::string BuildStageRecord::getCreateTime() const
{
    return createTime_;
}

void BuildStageRecord::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BuildStageRecord::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BuildStageRecord::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BuildStageRecord::getScheduleTime() const
{
    return scheduleTime_;
}

void BuildStageRecord::setScheduleTime(const std::string& value)
{
    scheduleTime_ = value;
    scheduleTimeIsSet_ = true;
}

bool BuildStageRecord::scheduleTimeIsSet() const
{
    return scheduleTimeIsSet_;
}

void BuildStageRecord::unsetscheduleTime()
{
    scheduleTimeIsSet_ = false;
}

std::string BuildStageRecord::getQueuedTime() const
{
    return queuedTime_;
}

void BuildStageRecord::setQueuedTime(const std::string& value)
{
    queuedTime_ = value;
    queuedTimeIsSet_ = true;
}

bool BuildStageRecord::queuedTimeIsSet() const
{
    return queuedTimeIsSet_;
}

void BuildStageRecord::unsetqueuedTime()
{
    queuedTimeIsSet_ = false;
}

std::string BuildStageRecord::getStartTime() const
{
    return startTime_;
}

void BuildStageRecord::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BuildStageRecord::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BuildStageRecord::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BuildStageRecord::getFinishTime() const
{
    return finishTime_;
}

void BuildStageRecord::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool BuildStageRecord::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void BuildStageRecord::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int32_t BuildStageRecord::getDuration() const
{
    return duration_;
}

void BuildStageRecord::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool BuildStageRecord::durationIsSet() const
{
    return durationIsSet_;
}

void BuildStageRecord::unsetduration()
{
    durationIsSet_ = false;
}

int32_t BuildStageRecord::getBuildDuration() const
{
    return buildDuration_;
}

void BuildStageRecord::setBuildDuration(int32_t value)
{
    buildDuration_ = value;
    buildDurationIsSet_ = true;
}

bool BuildStageRecord::buildDurationIsSet() const
{
    return buildDurationIsSet_;
}

void BuildStageRecord::unsetbuildDuration()
{
    buildDurationIsSet_ = false;
}

int32_t BuildStageRecord::getPendingDuration() const
{
    return pendingDuration_;
}

void BuildStageRecord::setPendingDuration(int32_t value)
{
    pendingDuration_ = value;
    pendingDurationIsSet_ = true;
}

bool BuildStageRecord::pendingDurationIsSet() const
{
    return pendingDurationIsSet_;
}

void BuildStageRecord::unsetpendingDuration()
{
    pendingDurationIsSet_ = false;
}

std::string BuildStageRecord::getBuildRecordId() const
{
    return buildRecordId_;
}

void BuildStageRecord::setBuildRecordId(const std::string& value)
{
    buildRecordId_ = value;
    buildRecordIdIsSet_ = true;
}

bool BuildStageRecord::buildRecordIdIsSet() const
{
    return buildRecordIdIsSet_;
}

void BuildStageRecord::unsetbuildRecordId()
{
    buildRecordIdIsSet_ = false;
}

std::string BuildStageRecord::getExecutionId() const
{
    return executionId_;
}

void BuildStageRecord::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool BuildStageRecord::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void BuildStageRecord::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string BuildStageRecord::getExecutionStageName() const
{
    return executionStageName_;
}

void BuildStageRecord::setExecutionStageName(const std::string& value)
{
    executionStageName_ = value;
    executionStageNameIsSet_ = true;
}

bool BuildStageRecord::executionStageNameIsSet() const
{
    return executionStageNameIsSet_;
}

void BuildStageRecord::unsetexecutionStageName()
{
    executionStageNameIsSet_ = false;
}

std::string BuildStageRecord::getDisplayName() const
{
    return displayName_;
}

void BuildStageRecord::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool BuildStageRecord::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void BuildStageRecord::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

int32_t BuildStageRecord::getNodeId() const
{
    return nodeId_;
}

void BuildStageRecord::setNodeId(int32_t value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool BuildStageRecord::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void BuildStageRecord::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t BuildStageRecord::getSequence() const
{
    return sequence_;
}

void BuildStageRecord::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool BuildStageRecord::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void BuildStageRecord::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


