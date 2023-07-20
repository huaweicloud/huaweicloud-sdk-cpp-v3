

#include "huaweicloud/drs/v5/model/ShowHealthCompareJobListRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowHealthCompareJobListRequest::ShowHealthCompareJobListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowHealthCompareJobListRequest::~ShowHealthCompareJobListRequest() = default;

void ShowHealthCompareJobListRequest::validate()
{
}

web::json::value ShowHealthCompareJobListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ShowHealthCompareJobListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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

std::string ShowHealthCompareJobListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowHealthCompareJobListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowHealthCompareJobListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowHealthCompareJobListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowHealthCompareJobListRequest::getJobId() const
{
    return jobId_;
}

void ShowHealthCompareJobListRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowHealthCompareJobListRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowHealthCompareJobListRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowHealthCompareJobListRequest::getStatus() const
{
    return status_;
}

void ShowHealthCompareJobListRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHealthCompareJobListRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHealthCompareJobListRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowHealthCompareJobListRequest::getOffset() const
{
    return offset_;
}

void ShowHealthCompareJobListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowHealthCompareJobListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowHealthCompareJobListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowHealthCompareJobListRequest::getLimit() const
{
    return limit_;
}

void ShowHealthCompareJobListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowHealthCompareJobListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowHealthCompareJobListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


