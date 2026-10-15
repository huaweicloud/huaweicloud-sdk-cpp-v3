

#include "huaweicloud/drs/v5/model/ResetSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ResetSubscriptionRequest::ResetSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResetSubscriptionRequest::~ResetSubscriptionRequest() = default;

void ResetSubscriptionRequest::validate()
{
}

web::json::value ResetSubscriptionRequest::toJson() const
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
bool ResetSubscriptionRequest::fromJson(const web::json::value& val)
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


std::string ResetSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetSubscriptionRequest::getJobId() const
{
    return jobId_;
}

void ResetSubscriptionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResetSubscriptionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResetSubscriptionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


