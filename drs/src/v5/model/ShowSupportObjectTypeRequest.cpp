

#include "huaweicloud/drs/v5/model/ShowSupportObjectTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSupportObjectTypeRequest::ShowSupportObjectTypeRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowSupportObjectTypeRequest::~ShowSupportObjectTypeRequest() = default;

void ShowSupportObjectTypeRequest::validate()
{
}

web::json::value ShowSupportObjectTypeRequest::toJson() const
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
bool ShowSupportObjectTypeRequest::fromJson(const web::json::value& val)
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


std::string ShowSupportObjectTypeRequest::getJobId() const
{
    return jobId_;
}

void ShowSupportObjectTypeRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSupportObjectTypeRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSupportObjectTypeRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSupportObjectTypeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSupportObjectTypeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSupportObjectTypeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSupportObjectTypeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


