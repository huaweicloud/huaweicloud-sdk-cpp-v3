

#include "huaweicloud/dds/v3/model/ScheduledTasksRsp_schedules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ScheduledTasksRsp_schedules::ScheduledTasksRsp_schedules()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ScheduledTasksRsp_schedules::~ScheduledTasksRsp_schedules() = default;

void ScheduledTasksRsp_schedules::validate()
{
}

web::json::value ScheduledTasksRsp_schedules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ScheduledTasksRsp_schedules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    return ok;
}


std::string ScheduledTasksRsp_schedules::getJobId() const
{
    return jobId_;
}

void ScheduledTasksRsp_schedules::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ScheduledTasksRsp_schedules::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getJobName() const
{
    return jobName_;
}

void ScheduledTasksRsp_schedules::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ScheduledTasksRsp_schedules::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getJobStatus() const
{
    return jobStatus_;
}

void ScheduledTasksRsp_schedules::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ScheduledTasksRsp_schedules::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getInstanceId() const
{
    return instanceId_;
}

void ScheduledTasksRsp_schedules::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduledTasksRsp_schedules::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getInstanceName() const
{
    return instanceName_;
}

void ScheduledTasksRsp_schedules::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduledTasksRsp_schedules::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getInstanceStatus() const
{
    return instanceStatus_;
}

void ScheduledTasksRsp_schedules::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ScheduledTasksRsp_schedules::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getCreateTime() const
{
    return createTime_;
}

void ScheduledTasksRsp_schedules::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduledTasksRsp_schedules::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getStartTime() const
{
    return startTime_;
}

void ScheduledTasksRsp_schedules::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduledTasksRsp_schedules::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduledTasksRsp_schedules::getEndTime() const
{
    return endTime_;
}

void ScheduledTasksRsp_schedules::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduledTasksRsp_schedules::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduledTasksRsp_schedules::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


