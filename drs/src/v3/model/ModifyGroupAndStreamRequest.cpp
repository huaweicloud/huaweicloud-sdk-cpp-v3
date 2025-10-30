

#include "huaweicloud/drs/v3/model/ModifyGroupAndStreamRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyGroupAndStreamRequest::ModifyGroupAndStreamRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyGroupAndStreamRequest::~ModifyGroupAndStreamRequest() = default;

void ModifyGroupAndStreamRequest::validate()
{
}

web::json::value ModifyGroupAndStreamRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyGroupAndStreamRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LtsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyGroupAndStreamRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyGroupAndStreamRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyGroupAndStreamRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyGroupAndStreamRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyGroupAndStreamRequest::getJobId() const
{
    return jobId_;
}

void ModifyGroupAndStreamRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyGroupAndStreamRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyGroupAndStreamRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

LtsInfo ModifyGroupAndStreamRequest::getBody() const
{
    return body_;
}

void ModifyGroupAndStreamRequest::setBody(const LtsInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyGroupAndStreamRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyGroupAndStreamRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


