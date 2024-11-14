

#include "huaweicloud/dds/v3/model/ListScheduledTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListScheduledTasksRequest::ListScheduledTasksRequest()
{
    jobName_ = "";
    jobNameIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduledTasksRequest::~ListScheduledTasksRequest() = default;

void ListScheduledTasksRequest::validate()
{
}

web::json::value ListScheduledTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListScheduledTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListScheduledTasksRequest::getJobName() const
{
    return jobName_;
}

void ListScheduledTasksRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListScheduledTasksRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListScheduledTasksRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListScheduledTasksRequest::getJobStatus() const
{
    return jobStatus_;
}

void ListScheduledTasksRequest::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ListScheduledTasksRequest::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ListScheduledTasksRequest::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ListScheduledTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListScheduledTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduledTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduledTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListScheduledTasksRequest::getStartTime() const
{
    return startTime_;
}

void ListScheduledTasksRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListScheduledTasksRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListScheduledTasksRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListScheduledTasksRequest::getEndTime() const
{
    return endTime_;
}

void ListScheduledTasksRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListScheduledTasksRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListScheduledTasksRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListScheduledTasksRequest::getOffset() const
{
    return offset_;
}

void ListScheduledTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduledTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduledTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduledTasksRequest::getLimit() const
{
    return limit_;
}

void ListScheduledTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduledTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduledTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


