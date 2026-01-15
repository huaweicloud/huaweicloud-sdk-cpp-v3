

#include "huaweicloud/drs/v5/model/ModifyColumnInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyColumnInfosRequest::ModifyColumnInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyColumnInfosRequest::~ModifyColumnInfosRequest() = default;

void ModifyColumnInfosRequest::validate()
{
}

web::json::value ModifyColumnInfosRequest::toJson() const
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
bool ModifyColumnInfosRequest::fromJson(const web::json::value& val)
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
            ModifyColumnInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyColumnInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyColumnInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyColumnInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyColumnInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyColumnInfosRequest::getJobId() const
{
    return jobId_;
}

void ModifyColumnInfosRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyColumnInfosRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyColumnInfosRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

ModifyColumnInfoReq ModifyColumnInfosRequest::getBody() const
{
    return body_;
}

void ModifyColumnInfosRequest::setBody(const ModifyColumnInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyColumnInfosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyColumnInfosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


