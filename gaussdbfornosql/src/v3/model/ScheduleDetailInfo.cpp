

#include "huaweicloud/gaussdbfornosql/v3/model/ScheduleDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ScheduleDetailInfo::ScheduleDetailInfo()
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
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ScheduleDetailInfo::~ScheduleDetailInfo() = default;

void ScheduleDetailInfo::validate()
{
}

web::json::value ScheduleDetailInfo::toJson() const
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
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
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
bool ScheduleDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
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


std::string ScheduleDetailInfo::getJobId() const
{
    return jobId_;
}

void ScheduleDetailInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ScheduleDetailInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ScheduleDetailInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ScheduleDetailInfo::getJobName() const
{
    return jobName_;
}

void ScheduleDetailInfo::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ScheduleDetailInfo::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ScheduleDetailInfo::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ScheduleDetailInfo::getJobStatus() const
{
    return jobStatus_;
}

void ScheduleDetailInfo::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ScheduleDetailInfo::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ScheduleDetailInfo::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ScheduleDetailInfo::getInstanceId() const
{
    return instanceId_;
}

void ScheduleDetailInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduleDetailInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduleDetailInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduleDetailInfo::getInstanceName() const
{
    return instanceName_;
}

void ScheduleDetailInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ScheduleDetailInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ScheduleDetailInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ScheduleDetailInfo::getInstanceStatus() const
{
    return instanceStatus_;
}

void ScheduleDetailInfo::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ScheduleDetailInfo::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ScheduleDetailInfo::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ScheduleDetailInfo::getDatastoreType() const
{
    return datastoreType_;
}

void ScheduleDetailInfo::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ScheduleDetailInfo::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ScheduleDetailInfo::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ScheduleDetailInfo::getCreateTime() const
{
    return createTime_;
}

void ScheduleDetailInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ScheduleDetailInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ScheduleDetailInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ScheduleDetailInfo::getStartTime() const
{
    return startTime_;
}

void ScheduleDetailInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleDetailInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleDetailInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduleDetailInfo::getEndTime() const
{
    return endTime_;
}

void ScheduleDetailInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleDetailInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleDetailInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


