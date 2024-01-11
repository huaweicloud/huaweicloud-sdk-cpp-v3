

#include "huaweicloud/drs/v5/model/UpdateJobConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJobConfigurationsRequest::UpdateJobConfigurationsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateJobConfigurationsRequest::~UpdateJobConfigurationsRequest() = default;

void UpdateJobConfigurationsRequest::validate()
{
}

web::json::value UpdateJobConfigurationsRequest::toJson() const
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
bool UpdateJobConfigurationsRequest::fromJson(const web::json::value& val)
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
            ModifyParameterReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateJobConfigurationsRequest::getJobId() const
{
    return jobId_;
}

void UpdateJobConfigurationsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateJobConfigurationsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateJobConfigurationsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateJobConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateJobConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateJobConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateJobConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyParameterReq UpdateJobConfigurationsRequest::getBody() const
{
    return body_;
}

void UpdateJobConfigurationsRequest::setBody(const ModifyParameterReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateJobConfigurationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateJobConfigurationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


