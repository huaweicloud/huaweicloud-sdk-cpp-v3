

#include "huaweicloud/drs/v5/model/ShowComparePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowComparePolicyRequest::ShowComparePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowComparePolicyRequest::~ShowComparePolicyRequest() = default;

void ShowComparePolicyRequest::validate()
{
}

web::json::value ShowComparePolicyRequest::toJson() const
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
bool ShowComparePolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowComparePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowComparePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowComparePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowComparePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowComparePolicyRequest::getJobId() const
{
    return jobId_;
}

void ShowComparePolicyRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowComparePolicyRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowComparePolicyRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


