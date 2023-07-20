

#include "huaweicloud/drs/v5/model/ShowActionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowActionsRequest::ShowActionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowActionsRequest::~ShowActionsRequest() = default;

void ShowActionsRequest::validate()
{
}

web::json::value ShowActionsRequest::toJson() const
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

bool ShowActionsRequest::fromJson(const web::json::value& val)
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

std::string ShowActionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowActionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowActionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowActionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowActionsRequest::getJobId() const
{
    return jobId_;
}

void ShowActionsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowActionsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowActionsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


