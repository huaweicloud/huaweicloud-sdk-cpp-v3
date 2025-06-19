

#include "huaweicloud/codeartsbuild/v3/model/BriefRecordItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BriefRecordItems::BriefRecordItems()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
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
    buildDuration_ = 0;
    buildDurationIsSet_ = false;
    pendingDuration_ = 0;
    pendingDurationIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    triggerName_ = "";
    triggerNameIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
}

BriefRecordItems::~BriefRecordItems() = default;

void BriefRecordItems::validate()
{
}

web::json::value BriefRecordItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
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
    if(buildDurationIsSet_) {
        val[utility::conversions::to_string_t("build_duration")] = ModelBase::toJson(buildDuration_);
    }
    if(pendingDurationIsSet_) {
        val[utility::conversions::to_string_t("pending_duration")] = ModelBase::toJson(pendingDuration_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(triggerNameIsSet_) {
        val[utility::conversions::to_string_t("trigger_name")] = ModelBase::toJson(triggerName_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }

    return val;
}
bool BriefRecordItems::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revision"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevision(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    return ok;
}


std::string BriefRecordItems::getId() const
{
    return id_;
}

void BriefRecordItems::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BriefRecordItems::idIsSet() const
{
    return idIsSet_;
}

void BriefRecordItems::unsetid()
{
    idIsSet_ = false;
}

std::string BriefRecordItems::getStatus() const
{
    return status_;
}

void BriefRecordItems::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BriefRecordItems::statusIsSet() const
{
    return statusIsSet_;
}

void BriefRecordItems::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t BriefRecordItems::getDuration() const
{
    return duration_;
}

void BriefRecordItems::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool BriefRecordItems::durationIsSet() const
{
    return durationIsSet_;
}

void BriefRecordItems::unsetduration()
{
    durationIsSet_ = false;
}

std::string BriefRecordItems::getCreateTime() const
{
    return createTime_;
}

void BriefRecordItems::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BriefRecordItems::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BriefRecordItems::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BriefRecordItems::getScheduleTime() const
{
    return scheduleTime_;
}

void BriefRecordItems::setScheduleTime(const std::string& value)
{
    scheduleTime_ = value;
    scheduleTimeIsSet_ = true;
}

bool BriefRecordItems::scheduleTimeIsSet() const
{
    return scheduleTimeIsSet_;
}

void BriefRecordItems::unsetscheduleTime()
{
    scheduleTimeIsSet_ = false;
}

std::string BriefRecordItems::getQueuedTime() const
{
    return queuedTime_;
}

void BriefRecordItems::setQueuedTime(const std::string& value)
{
    queuedTime_ = value;
    queuedTimeIsSet_ = true;
}

bool BriefRecordItems::queuedTimeIsSet() const
{
    return queuedTimeIsSet_;
}

void BriefRecordItems::unsetqueuedTime()
{
    queuedTimeIsSet_ = false;
}

std::string BriefRecordItems::getStartTime() const
{
    return startTime_;
}

void BriefRecordItems::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BriefRecordItems::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BriefRecordItems::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BriefRecordItems::getFinishTime() const
{
    return finishTime_;
}

void BriefRecordItems::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool BriefRecordItems::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void BriefRecordItems::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int32_t BriefRecordItems::getBuildDuration() const
{
    return buildDuration_;
}

void BriefRecordItems::setBuildDuration(int32_t value)
{
    buildDuration_ = value;
    buildDurationIsSet_ = true;
}

bool BriefRecordItems::buildDurationIsSet() const
{
    return buildDurationIsSet_;
}

void BriefRecordItems::unsetbuildDuration()
{
    buildDurationIsSet_ = false;
}

int32_t BriefRecordItems::getPendingDuration() const
{
    return pendingDuration_;
}

void BriefRecordItems::setPendingDuration(int32_t value)
{
    pendingDuration_ = value;
    pendingDurationIsSet_ = true;
}

bool BriefRecordItems::pendingDurationIsSet() const
{
    return pendingDurationIsSet_;
}

void BriefRecordItems::unsetpendingDuration()
{
    pendingDurationIsSet_ = false;
}

std::string BriefRecordItems::getProjectId() const
{
    return projectId_;
}

void BriefRecordItems::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BriefRecordItems::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BriefRecordItems::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t BriefRecordItems::getBuildNo() const
{
    return buildNo_;
}

void BriefRecordItems::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool BriefRecordItems::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void BriefRecordItems::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string BriefRecordItems::getBranch() const
{
    return branch_;
}

void BriefRecordItems::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool BriefRecordItems::branchIsSet() const
{
    return branchIsSet_;
}

void BriefRecordItems::unsetbranch()
{
    branchIsSet_ = false;
}

std::string BriefRecordItems::getRevision() const
{
    return revision_;
}

void BriefRecordItems::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool BriefRecordItems::revisionIsSet() const
{
    return revisionIsSet_;
}

void BriefRecordItems::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string BriefRecordItems::getTriggerName() const
{
    return triggerName_;
}

void BriefRecordItems::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool BriefRecordItems::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void BriefRecordItems::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::string BriefRecordItems::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void BriefRecordItems::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool BriefRecordItems::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void BriefRecordItems::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

}
}
}
}
}


