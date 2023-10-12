

#include "huaweicloud/drs/v5/model/ShowDirtyDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDirtyDataRequest::ShowDirtyDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowDirtyDataRequest::~ShowDirtyDataRequest() = default;

void ShowDirtyDataRequest::validate()
{
}

web::json::value ShowDirtyDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
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
bool ShowDirtyDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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


std::string ShowDirtyDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDirtyDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDirtyDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDirtyDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDirtyDataRequest::getJobId() const
{
    return jobId_;
}

void ShowDirtyDataRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDirtyDataRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDirtyDataRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDirtyDataRequest::getBeginTime() const
{
    return beginTime_;
}

void ShowDirtyDataRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowDirtyDataRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowDirtyDataRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowDirtyDataRequest::getEndTime() const
{
    return endTime_;
}

void ShowDirtyDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDirtyDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDirtyDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowDirtyDataRequest::getOffset() const
{
    return offset_;
}

void ShowDirtyDataRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDirtyDataRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDirtyDataRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowDirtyDataRequest::getLimit() const
{
    return limit_;
}

void ShowDirtyDataRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDirtyDataRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDirtyDataRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


