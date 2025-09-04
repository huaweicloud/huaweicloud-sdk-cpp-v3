

#include "huaweicloud/codeartsbuild/v3/model/RolePermissionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RolePermissionsRequestBody::RolePermissionsRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    jobIdsIsSet_ = false;
    projectSwitch_ = false;
    projectSwitchIsSet_ = false;
    permissionsIsSet_ = false;
}

RolePermissionsRequestBody::~RolePermissionsRequestBody() = default;

void RolePermissionsRequestBody::validate()
{
}

web::json::value RolePermissionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }
    if(projectSwitchIsSet_) {
        val[utility::conversions::to_string_t("project_switch")] = ModelBase::toJson(projectSwitch_);
    }
    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }

    return val;
}
bool RolePermissionsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<JobRolePermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    return ok;
}


std::string RolePermissionsRequestBody::getProjectId() const
{
    return projectId_;
}

void RolePermissionsRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RolePermissionsRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RolePermissionsRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& RolePermissionsRequestBody::getJobIds()
{
    return jobIds_;
}

void RolePermissionsRequestBody::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool RolePermissionsRequestBody::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void RolePermissionsRequestBody::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

bool RolePermissionsRequestBody::isProjectSwitch() const
{
    return projectSwitch_;
}

void RolePermissionsRequestBody::setProjectSwitch(bool value)
{
    projectSwitch_ = value;
    projectSwitchIsSet_ = true;
}

bool RolePermissionsRequestBody::projectSwitchIsSet() const
{
    return projectSwitchIsSet_;
}

void RolePermissionsRequestBody::unsetprojectSwitch()
{
    projectSwitchIsSet_ = false;
}

std::vector<JobRolePermission>& RolePermissionsRequestBody::getPermissions()
{
    return permissions_;
}

void RolePermissionsRequestBody::setPermissions(const std::vector<JobRolePermission>& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool RolePermissionsRequestBody::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void RolePermissionsRequestBody::unsetpermissions()
{
    permissionsIsSet_ = false;
}

}
}
}
}
}


