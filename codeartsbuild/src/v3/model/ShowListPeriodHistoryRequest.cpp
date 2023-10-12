

#include "huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowListPeriodHistoryRequest::ShowListPeriodHistoryRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowListPeriodHistoryRequest::~ShowListPeriodHistoryRequest() = default;

void ShowListPeriodHistoryRequest::validate()
{
}

web::json::value ShowListPeriodHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowListPeriodHistoryRequest::fromJson(const web::json::value& val)
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


std::string ShowListPeriodHistoryRequest::getJobId() const
{
    return jobId_;
}

void ShowListPeriodHistoryRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowListPeriodHistoryRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowListPeriodHistoryRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowListPeriodHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowListPeriodHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowListPeriodHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowListPeriodHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowListPeriodHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowListPeriodHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowListPeriodHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowListPeriodHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowListPeriodHistoryRequest::getStartTime() const
{
    return startTime_;
}

void ShowListPeriodHistoryRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowListPeriodHistoryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowListPeriodHistoryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowListPeriodHistoryRequest::getEndTime() const
{
    return endTime_;
}

void ShowListPeriodHistoryRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowListPeriodHistoryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowListPeriodHistoryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


