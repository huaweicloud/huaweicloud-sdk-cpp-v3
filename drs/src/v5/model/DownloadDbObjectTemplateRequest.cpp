

#include "huaweicloud/drs/v5/model/DownloadDbObjectTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DownloadDbObjectTemplateRequest::DownloadDbObjectTemplateRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DownloadDbObjectTemplateRequest::~DownloadDbObjectTemplateRequest() = default;

void DownloadDbObjectTemplateRequest::validate()
{
}

web::json::value DownloadDbObjectTemplateRequest::toJson() const
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

bool DownloadDbObjectTemplateRequest::fromJson(const web::json::value& val)
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

std::string DownloadDbObjectTemplateRequest::getJobId() const
{
    return jobId_;
}

void DownloadDbObjectTemplateRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DownloadDbObjectTemplateRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DownloadDbObjectTemplateRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DownloadDbObjectTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadDbObjectTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadDbObjectTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadDbObjectTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


