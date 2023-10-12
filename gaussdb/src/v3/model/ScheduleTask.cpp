

#include "huaweicloud/gaussdb/v3/model/ScheduleTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScheduleTask::ScheduleTask()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    targetConfigIsSet_ = false;
}

ScheduleTask::~ScheduleTask() = default;

void ScheduleTask::validate()
{
}

web::json::value ScheduleTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
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
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
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
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(targetConfigIsSet_) {
        val[utility::conversions::to_string_t("target_config")] = ModelBase::toJson(targetConfig_);
    }

    return val;
}
bool ScheduleTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_config"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfig(refVal);
        }
    }
    return ok;
}


std::string ScheduleTask::getJobId() const
{
    return jobId_;
}

void ScheduleTask::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ScheduleTask::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ScheduleTask::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ScheduleTask::getInstanceId() const
{
    return instanceId_;
}

void ScheduleTask::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleTask::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleTask::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleTask::getInstanceName() const
{
    return instanceName_;
}

void ScheduleTask::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleTask::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleTask::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduleTask::getInstanceStatus() const
{
    return instanceStatus_;
}

void ScheduleTask::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ScheduleTask::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ScheduleTask::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ScheduleTask::getProjectId() const
{
    return projectId_;
}

void ScheduleTask::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ScheduleTask::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ScheduleTask::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ScheduleTask::getJobName() const
{
    return jobName_;
}

void ScheduleTask::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ScheduleTask::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ScheduleTask::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ScheduleTask::getCreateTime() const
{
    return createTime_;
}

void ScheduleTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduleTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduleTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduleTask::getStartTime() const
{
    return startTime_;
}

void ScheduleTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleTask::getEndTime() const
{
    return endTime_;
}

void ScheduleTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ScheduleTask::getJobStatus() const
{
    return jobStatus_;
}

void ScheduleTask::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ScheduleTask::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ScheduleTask::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ScheduleTask::getDatastoreType() const
{
    return datastoreType_;
}

void ScheduleTask::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ScheduleTask::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ScheduleTask::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

Object ScheduleTask::getTargetConfig() const
{
    return targetConfig_;
}

void ScheduleTask::setTargetConfig(const Object& value)
{
    targetConfig_ = value;
    targetConfigIsSet_ = true;
}

bool ScheduleTask::targetConfigIsSet() const
{
    return targetConfigIsSet_;
}

void ScheduleTask::unsettargetConfig()
{
    targetConfigIsSet_ = false;
}

}
}
}
}
}


