

#include "huaweicloud/codeartsbuild/v3/model/ProjectPermissionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ProjectPermissionRequestBody::ProjectPermissionRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectSwitch_ = false;
    projectSwitchIsSet_ = false;
}

ProjectPermissionRequestBody::~ProjectPermissionRequestBody() = default;

void ProjectPermissionRequestBody::validate()
{
}

web::json::value ProjectPermissionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectSwitchIsSet_) {
        val[utility::conversions::to_string_t("project_switch")] = ModelBase::toJson(projectSwitch_);
    }

    return val;
}
bool ProjectPermissionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectSwitch(refVal);
        }
    }
    return ok;
}


std::string ProjectPermissionRequestBody::getJobId() const
{
    return jobId_;
}

void ProjectPermissionRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ProjectPermissionRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ProjectPermissionRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ProjectPermissionRequestBody::getProjectId() const
{
    return projectId_;
}

void ProjectPermissionRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectPermissionRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectPermissionRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ProjectPermissionRequestBody::isProjectSwitch() const
{
    return projectSwitch_;
}

void ProjectPermissionRequestBody::setProjectSwitch(bool value)
{
    projectSwitch_ = value;
    projectSwitchIsSet_ = true;
}

bool ProjectPermissionRequestBody::projectSwitchIsSet() const
{
    return projectSwitchIsSet_;
}

void ProjectPermissionRequestBody::unsetprojectSwitch()
{
    projectSwitchIsSet_ = false;
}

}
}
}
}
}


