

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultProjectPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultProjectPermissionRequest::ShowDefaultProjectPermissionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowDefaultProjectPermissionRequest::~ShowDefaultProjectPermissionRequest() = default;

void ShowDefaultProjectPermissionRequest::validate()
{
}

web::json::value ShowDefaultProjectPermissionRequest::toJson() const
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
bool ShowDefaultProjectPermissionRequest::fromJson(const web::json::value& val)
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


std::string ShowDefaultProjectPermissionRequest::getProjectId() const
{
    return projectId_;
}

void ShowDefaultProjectPermissionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowDefaultProjectPermissionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowDefaultProjectPermissionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowDefaultProjectPermissionRequest::getJobId() const
{
    return jobId_;
}

void ShowDefaultProjectPermissionRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDefaultProjectPermissionRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDefaultProjectPermissionRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


