

#include "huaweicloud/drs/v5/model/StopJobActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




StopJobActionRequest::StopJobActionRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

StopJobActionRequest::~StopJobActionRequest() = default;

void StopJobActionRequest::validate()
{
}

web::json::value StopJobActionRequest::toJson() const
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
bool StopJobActionRequest::fromJson(const web::json::value& val)
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
            StopJobActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopJobActionRequest::getJobId() const
{
    return jobId_;
}

void StopJobActionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopJobActionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopJobActionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string StopJobActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopJobActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopJobActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopJobActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StopJobActionReq StopJobActionRequest::getBody() const
{
    return body_;
}

void StopJobActionRequest::setBody(const StopJobActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopJobActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopJobActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


