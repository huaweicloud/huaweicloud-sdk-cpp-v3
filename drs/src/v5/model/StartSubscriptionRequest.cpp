

#include "huaweicloud/drs/v5/model/StartSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




StartSubscriptionRequest::StartSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

StartSubscriptionRequest::~StartSubscriptionRequest() = default;

void StartSubscriptionRequest::validate()
{
}

web::json::value StartSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StartSubscriptionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StartSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartSubscriptionRequest::getJobId() const
{
    return jobId_;
}

void StartSubscriptionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartSubscriptionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartSubscriptionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


