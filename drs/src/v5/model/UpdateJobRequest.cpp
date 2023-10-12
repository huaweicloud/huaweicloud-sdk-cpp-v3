

#include "huaweicloud/drs/v5/model/UpdateJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJobRequest::UpdateJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateJobRequest::~UpdateJobRequest() = default;

void UpdateJobRequest::validate()
{
}

web::json::value UpdateJobRequest::toJson() const
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
bool UpdateJobRequest::fromJson(const web::json::value& val)
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
            SingleUpdateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateJobRequest::getJobId() const
{
    return jobId_;
}

void UpdateJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SingleUpdateJobReq UpdateJobRequest::getBody() const
{
    return body_;
}

void UpdateJobRequest::setBody(const SingleUpdateJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


