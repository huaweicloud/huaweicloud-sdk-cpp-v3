

#include "huaweicloud/gaussdb/v3/model/ListScheduleJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListScheduleJobsRequest::ListScheduleJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListScheduleJobsRequest::~ListScheduleJobsRequest() = default;

void ListScheduleJobsRequest::validate()
{
}

web::json::value ListScheduleJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListScheduleJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListScheduleJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListScheduleJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListScheduleJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListScheduleJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListScheduleJobsRequest::getOffset() const
{
    return offset_;
}

void ListScheduleJobsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListScheduleJobsRequest::getLimit() const
{
    return limit_;
}

void ListScheduleJobsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListScheduleJobsRequest::getStatus() const
{
    return status_;
}

void ListScheduleJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListScheduleJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListScheduleJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListScheduleJobsRequest::getStartTime() const
{
    return startTime_;
}

void ListScheduleJobsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListScheduleJobsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListScheduleJobsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListScheduleJobsRequest::getEndTime() const
{
    return endTime_;
}

void ListScheduleJobsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListScheduleJobsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListScheduleJobsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListScheduleJobsRequest::getJobId() const
{
    return jobId_;
}

void ListScheduleJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListScheduleJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListScheduleJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListScheduleJobsRequest::getJobName() const
{
    return jobName_;
}

void ListScheduleJobsRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListScheduleJobsRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListScheduleJobsRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListScheduleJobsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListScheduleJobsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduleJobsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduleJobsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


