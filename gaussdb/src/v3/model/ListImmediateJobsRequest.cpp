

#include "huaweicloud/gaussdb/v3/model/ListImmediateJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListImmediateJobsRequest::ListImmediateJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListImmediateJobsRequest::~ListImmediateJobsRequest() = default;

void ListImmediateJobsRequest::validate()
{
}

web::json::value ListImmediateJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListImmediateJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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


std::string ListImmediateJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListImmediateJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListImmediateJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListImmediateJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListImmediateJobsRequest::getStatus() const
{
    return status_;
}

void ListImmediateJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListImmediateJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListImmediateJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListImmediateJobsRequest::getJobName() const
{
    return jobName_;
}

void ListImmediateJobsRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListImmediateJobsRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListImmediateJobsRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListImmediateJobsRequest::getJobId() const
{
    return jobId_;
}

void ListImmediateJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListImmediateJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListImmediateJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListImmediateJobsRequest::getOffset() const
{
    return offset_;
}

void ListImmediateJobsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListImmediateJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListImmediateJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListImmediateJobsRequest::getLimit() const
{
    return limit_;
}

void ListImmediateJobsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImmediateJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListImmediateJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListImmediateJobsRequest::getStartTime() const
{
    return startTime_;
}

void ListImmediateJobsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListImmediateJobsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListImmediateJobsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListImmediateJobsRequest::getEndTime() const
{
    return endTime_;
}

void ListImmediateJobsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListImmediateJobsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListImmediateJobsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


