

#include "huaweicloud/drs/v5/model/ShowSubscriptionDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSubscriptionDetailRequest::ShowSubscriptionDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowSubscriptionDetailRequest::~ShowSubscriptionDetailRequest() = default;

void ShowSubscriptionDetailRequest::validate()
{
}

web::json::value ShowSubscriptionDetailRequest::toJson() const
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
bool ShowSubscriptionDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowSubscriptionDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowSubscriptionDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSubscriptionDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSubscriptionDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSubscriptionDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSubscriptionDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSubscriptionDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSubscriptionDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


