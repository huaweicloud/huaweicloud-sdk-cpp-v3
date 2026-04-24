

#include "huaweicloud/drs/v5/model/PauseCompareJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PauseCompareJobsRequest::PauseCompareJobsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

PauseCompareJobsRequest::~PauseCompareJobsRequest() = default;

void PauseCompareJobsRequest::validate()
{
}

web::json::value PauseCompareJobsRequest::toJson() const
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
bool PauseCompareJobsRequest::fromJson(const web::json::value& val)
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


std::string PauseCompareJobsRequest::getJobId() const
{
    return jobId_;
}

void PauseCompareJobsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PauseCompareJobsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PauseCompareJobsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string PauseCompareJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void PauseCompareJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool PauseCompareJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void PauseCompareJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

OperateDataCompareJobReq PauseCompareJobsRequest::getBody() const
{
    return body_;
}

void PauseCompareJobsRequest::setBody(const OperateDataCompareJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PauseCompareJobsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PauseCompareJobsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


