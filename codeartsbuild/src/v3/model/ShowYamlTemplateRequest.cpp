

#include "huaweicloud/codeartsbuild/v3/model/ShowYamlTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowYamlTemplateRequest::ShowYamlTemplateRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    defaultHost_ = "";
    defaultHostIsSet_ = false;
}

ShowYamlTemplateRequest::~ShowYamlTemplateRequest() = default;

void ShowYamlTemplateRequest::validate()
{
}

web::json::value ShowYamlTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(defaultHostIsSet_) {
        val[utility::conversions::to_string_t("default_host")] = ModelBase::toJson(defaultHost_);
    }

    return val;
}
bool ShowYamlTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultHost(refVal);
        }
    }
    return ok;
}


std::string ShowYamlTemplateRequest::getJobId() const
{
    return jobId_;
}

void ShowYamlTemplateRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowYamlTemplateRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowYamlTemplateRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowYamlTemplateRequest::getDefaultHost() const
{
    return defaultHost_;
}

void ShowYamlTemplateRequest::setDefaultHost(const std::string& value)
{
    defaultHost_ = value;
    defaultHostIsSet_ = true;
}

bool ShowYamlTemplateRequest::defaultHostIsSet() const
{
    return defaultHostIsSet_;
}

void ShowYamlTemplateRequest::unsetdefaultHost()
{
    defaultHostIsSet_ = false;
}

}
}
}
}
}


