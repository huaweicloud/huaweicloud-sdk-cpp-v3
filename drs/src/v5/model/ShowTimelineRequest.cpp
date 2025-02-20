

#include "huaweicloud/drs/v5/model/ShowTimelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowTimelineRequest::ShowTimelineRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowTimelineRequest::~ShowTimelineRequest() = default;

void ShowTimelineRequest::validate()
{
}

web::json::value ShowTimelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowTimelineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ShowTimelineRequest::getJobId() const
{
    return jobId_;
}

void ShowTimelineRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTimelineRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTimelineRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTimelineRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTimelineRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTimelineRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTimelineRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowTimelineRequest::getLimit() const
{
    return limit_;
}

void ShowTimelineRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTimelineRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTimelineRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowTimelineRequest::getOffset() const
{
    return offset_;
}

void ShowTimelineRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTimelineRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTimelineRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


