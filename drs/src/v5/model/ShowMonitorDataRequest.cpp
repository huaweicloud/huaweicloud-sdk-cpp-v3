

#include "huaweicloud/drs/v5/model/ShowMonitorDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowMonitorDataRequest::ShowMonitorDataRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowMonitorDataRequest::~ShowMonitorDataRequest() = default;

void ShowMonitorDataRequest::validate()
{
}

web::json::value ShowMonitorDataRequest::toJson() const
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
bool ShowMonitorDataRequest::fromJson(const web::json::value& val)
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


std::string ShowMonitorDataRequest::getJobId() const
{
    return jobId_;
}

void ShowMonitorDataRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowMonitorDataRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowMonitorDataRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowMonitorDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMonitorDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMonitorDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMonitorDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


