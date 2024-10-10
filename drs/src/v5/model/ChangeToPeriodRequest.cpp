

#include "huaweicloud/drs/v5/model/ChangeToPeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChangeToPeriodRequest::ChangeToPeriodRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeToPeriodRequest::~ChangeToPeriodRequest() = default;

void ChangeToPeriodRequest::validate()
{
}

web::json::value ChangeToPeriodRequest::toJson() const
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
bool ChangeToPeriodRequest::fromJson(const web::json::value& val)
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
            ToPeriodReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeToPeriodRequest::getJobId() const
{
    return jobId_;
}

void ChangeToPeriodRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeToPeriodRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeToPeriodRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ChangeToPeriodRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeToPeriodRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeToPeriodRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeToPeriodRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ToPeriodReq ChangeToPeriodRequest::getBody() const
{
    return body_;
}

void ChangeToPeriodRequest::setBody(const ToPeriodReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeToPeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeToPeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


