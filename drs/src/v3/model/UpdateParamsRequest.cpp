

#include "huaweicloud/drs/v3/model/UpdateParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateParamsRequest::UpdateParamsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateParamsRequest::~UpdateParamsRequest() = default;

void UpdateParamsRequest::validate()
{
}

web::json::value UpdateParamsRequest::toJson() const
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
bool UpdateParamsRequest::fromJson(const web::json::value& val)
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
            ModifyTargetParamsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateParamsRequest::getJobId() const
{
    return jobId_;
}

void UpdateParamsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateParamsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateParamsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyTargetParamsReq UpdateParamsRequest::getBody() const
{
    return body_;
}

void UpdateParamsRequest::setBody(const ModifyTargetParamsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateParamsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateParamsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


