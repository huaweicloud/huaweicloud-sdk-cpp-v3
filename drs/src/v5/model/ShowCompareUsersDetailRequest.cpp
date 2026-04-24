

#include "huaweicloud/drs/v5/model/ShowCompareUsersDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowCompareUsersDetailRequest::ShowCompareUsersDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ShowCompareUsersDetailRequest::~ShowCompareUsersDetailRequest() = default;

void ShowCompareUsersDetailRequest::validate()
{
}

web::json::value ShowCompareUsersDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowCompareUsersDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
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
    return ok;
}


std::string ShowCompareUsersDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowCompareUsersDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowCompareUsersDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowCompareUsersDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowCompareUsersDetailRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ShowCompareUsersDetailRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ShowCompareUsersDetailRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ShowCompareUsersDetailRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ShowCompareUsersDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowCompareUsersDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowCompareUsersDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowCompareUsersDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowCompareUsersDetailRequest::getOffset() const
{
    return offset_;
}

void ShowCompareUsersDetailRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowCompareUsersDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowCompareUsersDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowCompareUsersDetailRequest::getLimit() const
{
    return limit_;
}

void ShowCompareUsersDetailRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowCompareUsersDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowCompareUsersDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


