

#include "huaweicloud/drs/v3/model/DeleteCompareJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DeleteCompareJobRequest::DeleteCompareJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
}

DeleteCompareJobRequest::~DeleteCompareJobRequest() = default;

void DeleteCompareJobRequest::validate()
{
}

web::json::value DeleteCompareJobRequest::toJson() const
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
bool DeleteCompareJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteCompareJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteCompareJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteCompareJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteCompareJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteCompareJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteCompareJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteCompareJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteCompareJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteCompareJobRequest::getCompareJobId() const
{
    return compareJobId_;
}

void DeleteCompareJobRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool DeleteCompareJobRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void DeleteCompareJobRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

}
}
}
}
}


