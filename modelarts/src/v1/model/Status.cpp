

#include "huaweicloud/modelarts/v1/model/Status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Status::Status()
{
    phase_ = "";
    phaseIsSet_ = false;
    secondaryPhase_ = "";
    secondaryPhaseIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    nodeCountMetricsIsSet_ = false;
    tasksIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    taskStatusesIsSet_ = false;
    runningRecordsIsSet_ = false;
    retentionTime_ = 0;
    retentionTimeIsSet_ = false;
    taskIpsIsSet_ = false;
}

Status::~Status() = default;

void Status::validate()
{
}

web::json::value Status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(secondaryPhaseIsSet_) {
        val[utility::conversions::to_string_t("secondary_phase")] = ModelBase::toJson(secondaryPhase_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(nodeCountMetricsIsSet_) {
        val[utility::conversions::to_string_t("node_count_metrics")] = ModelBase::toJson(nodeCountMetrics_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(taskStatusesIsSet_) {
        val[utility::conversions::to_string_t("task_statuses")] = ModelBase::toJson(taskStatuses_);
    }
    if(runningRecordsIsSet_) {
        val[utility::conversions::to_string_t("running_records")] = ModelBase::toJson(runningRecords_);
    }
    if(retentionTimeIsSet_) {
        val[utility::conversions::to_string_t("retention_time")] = ModelBase::toJson(retentionTime_);
    }
    if(taskIpsIsSet_) {
        val[utility::conversions::to_string_t("task_ips")] = ModelBase::toJson(taskIps_);
    }

    return val;
}
bool Status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_count_metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_count_metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCountMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_statuses"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskStatuses> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_records"));
        if(!fieldValue.is_null())
        {
            std::vector<RunningRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskIP> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIps(refVal);
        }
    }
    return ok;
}


std::string Status::getPhase() const
{
    return phase_;
}

void Status::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool Status::phaseIsSet() const
{
    return phaseIsSet_;
}

void Status::unsetphase()
{
    phaseIsSet_ = false;
}

std::string Status::getSecondaryPhase() const
{
    return secondaryPhase_;
}

void Status::setSecondaryPhase(const std::string& value)
{
    secondaryPhase_ = value;
    secondaryPhaseIsSet_ = true;
}

bool Status::secondaryPhaseIsSet() const
{
    return secondaryPhaseIsSet_;
}

void Status::unsetsecondaryPhase()
{
    secondaryPhaseIsSet_ = false;
}

int64_t Status::getDuration() const
{
    return duration_;
}

void Status::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool Status::durationIsSet() const
{
    return durationIsSet_;
}

void Status::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<std::vector<int32_t>>& Status::getNodeCountMetrics()
{
    return nodeCountMetrics_;
}

void Status::setNodeCountMetrics(const std::vector<std::vector<int32_t>>& value)
{
    nodeCountMetrics_ = value;
    nodeCountMetricsIsSet_ = true;
}

bool Status::nodeCountMetricsIsSet() const
{
    return nodeCountMetricsIsSet_;
}

void Status::unsetnodeCountMetrics()
{
    nodeCountMetricsIsSet_ = false;
}

std::vector<std::string>& Status::getTasks()
{
    return tasks_;
}

void Status::setTasks(const std::vector<std::string>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool Status::tasksIsSet() const
{
    return tasksIsSet_;
}

void Status::unsettasks()
{
    tasksIsSet_ = false;
}

int64_t Status::getStartTime() const
{
    return startTime_;
}

void Status::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Status::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Status::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::vector<TaskStatuses>& Status::getTaskStatuses()
{
    return taskStatuses_;
}

void Status::setTaskStatuses(const std::vector<TaskStatuses>& value)
{
    taskStatuses_ = value;
    taskStatusesIsSet_ = true;
}

bool Status::taskStatusesIsSet() const
{
    return taskStatusesIsSet_;
}

void Status::unsettaskStatuses()
{
    taskStatusesIsSet_ = false;
}

std::vector<RunningRecord>& Status::getRunningRecords()
{
    return runningRecords_;
}

void Status::setRunningRecords(const std::vector<RunningRecord>& value)
{
    runningRecords_ = value;
    runningRecordsIsSet_ = true;
}

bool Status::runningRecordsIsSet() const
{
    return runningRecordsIsSet_;
}

void Status::unsetrunningRecords()
{
    runningRecordsIsSet_ = false;
}

int32_t Status::getRetentionTime() const
{
    return retentionTime_;
}

void Status::setRetentionTime(int32_t value)
{
    retentionTime_ = value;
    retentionTimeIsSet_ = true;
}

bool Status::retentionTimeIsSet() const
{
    return retentionTimeIsSet_;
}

void Status::unsetretentionTime()
{
    retentionTimeIsSet_ = false;
}

std::vector<TaskIP>& Status::getTaskIps()
{
    return taskIps_;
}

void Status::setTaskIps(const std::vector<TaskIP>& value)
{
    taskIps_ = value;
    taskIpsIsSet_ = true;
}

bool Status::taskIpsIsSet() const
{
    return taskIpsIsSet_;
}

void Status::unsettaskIps()
{
    taskIpsIsSet_ = false;
}

}
}
}
}
}


