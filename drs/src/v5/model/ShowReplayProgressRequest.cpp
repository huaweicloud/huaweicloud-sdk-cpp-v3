

#include "huaweicloud/drs/v5/model/ShowReplayProgressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayProgressRequest::ShowReplayProgressRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowReplayProgressRequest::~ShowReplayProgressRequest() = default;

void ShowReplayProgressRequest::validate()
{
}

web::json::value ShowReplayProgressRequest::toJson() const
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
bool ShowReplayProgressRequest::fromJson(const web::json::value& val)
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


std::string ShowReplayProgressRequest::getJobId() const
{
    return jobId_;
}

void ShowReplayProgressRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplayProgressRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplayProgressRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplayProgressRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplayProgressRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplayProgressRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplayProgressRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


