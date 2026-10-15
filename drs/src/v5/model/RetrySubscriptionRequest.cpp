

#include "huaweicloud/drs/v5/model/RetrySubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




RetrySubscriptionRequest::RetrySubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

RetrySubscriptionRequest::~RetrySubscriptionRequest() = default;

void RetrySubscriptionRequest::validate()
{
}

web::json::value RetrySubscriptionRequest::toJson() const
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
bool RetrySubscriptionRequest::fromJson(const web::json::value& val)
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


std::string RetrySubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void RetrySubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RetrySubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RetrySubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RetrySubscriptionRequest::getJobId() const
{
    return jobId_;
}

void RetrySubscriptionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RetrySubscriptionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RetrySubscriptionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


