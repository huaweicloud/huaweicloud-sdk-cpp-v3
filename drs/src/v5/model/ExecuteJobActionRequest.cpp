

#include "huaweicloud/drs/v5/model/ExecuteJobActionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExecuteJobActionRequest::ExecuteJobActionRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteJobActionRequest::~ExecuteJobActionRequest() = default;

void ExecuteJobActionRequest::validate()
{
}

web::json::value ExecuteJobActionRequest::toJson() const
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

bool ExecuteJobActionRequest::fromJson(const web::json::value& val)
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
            JobActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ExecuteJobActionRequest::getJobId() const
{
    return jobId_;
}

void ExecuteJobActionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteJobActionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteJobActionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExecuteJobActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteJobActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteJobActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteJobActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

JobActionReq ExecuteJobActionRequest::getBody() const
{
    return body_;
}

void ExecuteJobActionRequest::setBody(const JobActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteJobActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteJobActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


