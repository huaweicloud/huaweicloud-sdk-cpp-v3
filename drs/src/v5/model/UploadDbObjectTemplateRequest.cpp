

#include "huaweicloud/drs/v5/model/UploadDbObjectTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadDbObjectTemplateRequest::UploadDbObjectTemplateRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UploadDbObjectTemplateRequest::~UploadDbObjectTemplateRequest() = default;

void UploadDbObjectTemplateRequest::validate()
{
}

web::json::value UploadDbObjectTemplateRequest::toJson() const
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

bool UploadDbObjectTemplateRequest::fromJson(const web::json::value& val)
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
            UploadDbObjectTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UploadDbObjectTemplateRequest::getJobId() const
{
    return jobId_;
}

void UploadDbObjectTemplateRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UploadDbObjectTemplateRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UploadDbObjectTemplateRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UploadDbObjectTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void UploadDbObjectTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UploadDbObjectTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UploadDbObjectTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UploadDbObjectTemplateRequestBody UploadDbObjectTemplateRequest::getBody() const
{
    return body_;
}

void UploadDbObjectTemplateRequest::setBody(const UploadDbObjectTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadDbObjectTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadDbObjectTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


