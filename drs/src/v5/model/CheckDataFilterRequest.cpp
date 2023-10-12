

#include "huaweicloud/drs/v5/model/CheckDataFilterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CheckDataFilterRequest::CheckDataFilterRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckDataFilterRequest::~CheckDataFilterRequest() = default;

void CheckDataFilterRequest::validate()
{
}

web::json::value CheckDataFilterRequest::toJson() const
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
bool CheckDataFilterRequest::fromJson(const web::json::value& val)
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
            DataProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckDataFilterRequest::getJobId() const
{
    return jobId_;
}

void CheckDataFilterRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CheckDataFilterRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CheckDataFilterRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CheckDataFilterRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckDataFilterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckDataFilterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckDataFilterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DataProcessReq CheckDataFilterRequest::getBody() const
{
    return body_;
}

void CheckDataFilterRequest::setBody(const DataProcessReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDataFilterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDataFilterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


