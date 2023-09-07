

#include "huaweicloud/drs/v5/model/ShowIncrementComponentsDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowIncrementComponentsDetailRequest::ShowIncrementComponentsDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowIncrementComponentsDetailRequest::~ShowIncrementComponentsDetailRequest() = default;

void ShowIncrementComponentsDetailRequest::validate()
{
}

web::json::value ShowIncrementComponentsDetailRequest::toJson() const
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

bool ShowIncrementComponentsDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowIncrementComponentsDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowIncrementComponentsDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowIncrementComponentsDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowIncrementComponentsDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowIncrementComponentsDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowIncrementComponentsDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowIncrementComponentsDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowIncrementComponentsDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


