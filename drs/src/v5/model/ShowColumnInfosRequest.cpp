

#include "huaweicloud/drs/v5/model/ShowColumnInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowColumnInfosRequest::ShowColumnInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowColumnInfosRequest::~ShowColumnInfosRequest() = default;

void ShowColumnInfosRequest::validate()
{
}

web::json::value ShowColumnInfosRequest::toJson() const
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
bool ShowColumnInfosRequest::fromJson(const web::json::value& val)
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
            ShowColumnInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowColumnInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowColumnInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowColumnInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowColumnInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowColumnInfosRequest::getJobId() const
{
    return jobId_;
}

void ShowColumnInfosRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowColumnInfosRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowColumnInfosRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

ShowColumnInfoReq ShowColumnInfosRequest::getBody() const
{
    return body_;
}

void ShowColumnInfosRequest::setBody(const ShowColumnInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowColumnInfosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowColumnInfosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


