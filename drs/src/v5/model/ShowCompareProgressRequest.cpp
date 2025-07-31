

#include "huaweicloud/drs/v5/model/ShowCompareProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowCompareProgressRequest::ShowCompareProgressRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
}

ShowCompareProgressRequest::~ShowCompareProgressRequest() = default;

void ShowCompareProgressRequest::validate()
{
}

web::json::value ShowCompareProgressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }

    return val;
}
bool ShowCompareProgressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
        }
    }
    return ok;
}


std::string ShowCompareProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowCompareProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowCompareProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowCompareProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowCompareProgressRequest::getJobId() const
{
    return jobId_;
}

void ShowCompareProgressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowCompareProgressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowCompareProgressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowCompareProgressRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ShowCompareProgressRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ShowCompareProgressRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ShowCompareProgressRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

}
}
}
}
}


