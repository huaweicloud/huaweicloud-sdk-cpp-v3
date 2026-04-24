

#include "huaweicloud/drs/v5/model/UpdateSubscriptionInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateSubscriptionInfoRequest::UpdateSubscriptionInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSubscriptionInfoRequest::~UpdateSubscriptionInfoRequest() = default;

void UpdateSubscriptionInfoRequest::validate()
{
}

web::json::value UpdateSubscriptionInfoRequest::toJson() const
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
bool UpdateSubscriptionInfoRequest::fromJson(const web::json::value& val)
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
            UpdateSubscriptionInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSubscriptionInfoRequest::getJobId() const
{
    return jobId_;
}

void UpdateSubscriptionInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateSubscriptionInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateSubscriptionInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateSubscriptionInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateSubscriptionInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateSubscriptionInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateSubscriptionInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateSubscriptionInfoReq UpdateSubscriptionInfoRequest::getBody() const
{
    return body_;
}

void UpdateSubscriptionInfoRequest::setBody(const UpdateSubscriptionInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubscriptionInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubscriptionInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


