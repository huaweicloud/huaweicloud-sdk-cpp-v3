

#include "huaweicloud/codeartsbuild/v3/model/ShowProjectJobPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowProjectJobPermissionRequest::ShowProjectJobPermissionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowProjectJobPermissionRequest::~ShowProjectJobPermissionRequest() = default;

void ShowProjectJobPermissionRequest::validate()
{
}

web::json::value ShowProjectJobPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowProjectJobPermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


std::string ShowProjectJobPermissionRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectJobPermissionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectJobPermissionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectJobPermissionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowProjectJobPermissionRequest::getJobId() const
{
    return jobId_;
}

void ShowProjectJobPermissionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowProjectJobPermissionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowProjectJobPermissionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


