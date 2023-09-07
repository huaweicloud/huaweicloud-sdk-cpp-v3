

#include "huaweicloud/drs/v5/model/UpdateStartPositionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateStartPositionRequest::UpdateStartPositionRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStartPositionRequest::~UpdateStartPositionRequest() = default;

void UpdateStartPositionRequest::validate()
{
}

web::json::value UpdateStartPositionRequest::toJson() const
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

bool UpdateStartPositionRequest::fromJson(const web::json::value& val)
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
            ModifyStartPositionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateStartPositionRequest::getJobId() const
{
    return jobId_;
}

void UpdateStartPositionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateStartPositionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateStartPositionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateStartPositionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateStartPositionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateStartPositionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateStartPositionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyStartPositionReq UpdateStartPositionRequest::getBody() const
{
    return body_;
}

void UpdateStartPositionRequest::setBody(const ModifyStartPositionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStartPositionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStartPositionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


