

#include "huaweicloud/drs/v3/model/UpdateTuningParamsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateTuningParamsRequest::UpdateTuningParamsRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTuningParamsRequest::~UpdateTuningParamsRequest() = default;

void UpdateTuningParamsRequest::validate()
{
}

web::json::value UpdateTuningParamsRequest::toJson() const
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

bool UpdateTuningParamsRequest::fromJson(const web::json::value& val)
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
            ModifyTuningParamsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateTuningParamsRequest::getJobId() const
{
    return jobId_;
}

void UpdateTuningParamsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateTuningParamsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateTuningParamsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateTuningParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTuningParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTuningParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTuningParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyTuningParamsReq UpdateTuningParamsRequest::getBody() const
{
    return body_;
}

void UpdateTuningParamsRequest::setBody(const ModifyTuningParamsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTuningParamsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTuningParamsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


