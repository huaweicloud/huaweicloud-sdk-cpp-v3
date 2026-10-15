

#include "huaweicloud/drs/v5/model/ShowReplayExecuteRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayExecuteRecordRequest::ShowReplayExecuteRecordRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowReplayExecuteRecordRequest::~ShowReplayExecuteRecordRequest() = default;

void ShowReplayExecuteRecordRequest::validate()
{
}

web::json::value ShowReplayExecuteRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
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
bool ShowReplayExecuteRecordRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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


std::string ShowReplayExecuteRecordRequest::getJobId() const
{
    return jobId_;
}

void ShowReplayExecuteRecordRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplayExecuteRecordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplayExecuteRecordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int64_t ShowReplayExecuteRecordRequest::getStartTime() const
{
    return startTime_;
}

void ShowReplayExecuteRecordRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowReplayExecuteRecordRequest::getEndTime() const
{
    return endTime_;
}

void ShowReplayExecuteRecordRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowReplayExecuteRecordRequest::getOffset() const
{
    return offset_;
}

void ShowReplayExecuteRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowReplayExecuteRecordRequest::getLimit() const
{
    return limit_;
}

void ShowReplayExecuteRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowReplayExecuteRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowReplayExecuteRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


