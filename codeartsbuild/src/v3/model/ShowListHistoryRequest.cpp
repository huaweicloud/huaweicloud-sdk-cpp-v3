

#include "huaweicloud/codeartsbuild/v3/model/ShowListHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowListHistoryRequest::ShowListHistoryRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowListHistoryRequest::~ShowListHistoryRequest() = default;

void ShowListHistoryRequest::validate()
{
}

web::json::value ShowListHistoryRequest::toJson() const
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
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}
bool ShowListHistoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}


std::string ShowListHistoryRequest::getJobId() const
{
    return jobId_;
}

void ShowListHistoryRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowListHistoryRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowListHistoryRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowListHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowListHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowListHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowListHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowListHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowListHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowListHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowListHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowListHistoryRequest::getInterval() const
{
    return interval_;
}

void ShowListHistoryRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowListHistoryRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowListHistoryRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


