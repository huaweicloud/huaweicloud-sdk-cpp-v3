

#include "huaweicloud/drs/v5/model/ShowSwitchoverInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSwitchoverInfoRequest::ShowSwitchoverInfoRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowSwitchoverInfoRequest::~ShowSwitchoverInfoRequest() = default;

void ShowSwitchoverInfoRequest::validate()
{
}

web::json::value ShowSwitchoverInfoRequest::toJson() const
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
bool ShowSwitchoverInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowSwitchoverInfoRequest::getJobId() const
{
    return jobId_;
}

void ShowSwitchoverInfoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSwitchoverInfoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSwitchoverInfoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSwitchoverInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSwitchoverInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSwitchoverInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSwitchoverInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


