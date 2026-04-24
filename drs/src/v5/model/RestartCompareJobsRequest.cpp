

#include "huaweicloud/drs/v5/model/RestartCompareJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




RestartCompareJobsRequest::RestartCompareJobsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestartCompareJobsRequest::~RestartCompareJobsRequest() = default;

void RestartCompareJobsRequest::validate()
{
}

web::json::value RestartCompareJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RestartCompareJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateDataCompareJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestartCompareJobsRequest::getJobId() const
{
    return jobId_;
}

void RestartCompareJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartCompareJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartCompareJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RestartCompareJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartCompareJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartCompareJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartCompareJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

OperateDataCompareJobReq RestartCompareJobsRequest::getBody() const
{
    return body_;
}

void RestartCompareJobsRequest::setBody(const OperateDataCompareJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestartCompareJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestartCompareJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


