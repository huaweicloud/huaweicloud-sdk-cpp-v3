

#include "huaweicloud/drs/v5/model/ShowMeteringRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowMeteringRequest::ShowMeteringRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowMeteringRequest::~ShowMeteringRequest() = default;

void ShowMeteringRequest::validate()
{
}

web::json::value ShowMeteringRequest::toJson() const
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
bool ShowMeteringRequest::fromJson(const web::json::value& val)
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


std::string ShowMeteringRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMeteringRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMeteringRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMeteringRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowMeteringRequest::getJobId() const
{
    return jobId_;
}

void ShowMeteringRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowMeteringRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowMeteringRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


