

#include "huaweicloud/drs/v5/model/DeleteSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteSubscriptionRequest::DeleteSubscriptionRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteSubscriptionRequest::~DeleteSubscriptionRequest() = default;

void DeleteSubscriptionRequest::validate()
{
}

web::json::value DeleteSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool DeleteSubscriptionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteSubscriptionRequest::getJobId() const
{
    return jobId_;
}

void DeleteSubscriptionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSubscriptionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSubscriptionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


