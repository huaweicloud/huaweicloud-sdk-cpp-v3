

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdatePermissionLevelRequestBody::BatchUpdatePermissionLevelRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    permissionLevel_ = "";
    permissionLevelIsSet_ = false;
    applicationIdsIsSet_ = false;
}

BatchUpdatePermissionLevelRequestBody::~BatchUpdatePermissionLevelRequestBody() = default;

void BatchUpdatePermissionLevelRequestBody::validate()
{
}

web::json::value BatchUpdatePermissionLevelRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(permissionLevelIsSet_) {
        val[utility::conversions::to_string_t("permission_level")] = ModelBase::toJson(permissionLevel_);
    }
    if(applicationIdsIsSet_) {
        val[utility::conversions::to_string_t("application_ids")] = ModelBase::toJson(applicationIds_);
    }

    return val;
}
bool BatchUpdatePermissionLevelRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationIds(refVal);
        }
    }
    return ok;
}


std::string BatchUpdatePermissionLevelRequestBody::getProjectId() const
{
    return projectId_;
}

void BatchUpdatePermissionLevelRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdatePermissionLevelRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdatePermissionLevelRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BatchUpdatePermissionLevelRequestBody::getPermissionLevel() const
{
    return permissionLevel_;
}

void BatchUpdatePermissionLevelRequestBody::setPermissionLevel(const std::string& value)
{
    permissionLevel_ = value;
    permissionLevelIsSet_ = true;
}

bool BatchUpdatePermissionLevelRequestBody::permissionLevelIsSet() const
{
    return permissionLevelIsSet_;
}

void BatchUpdatePermissionLevelRequestBody::unsetpermissionLevel()
{
    permissionLevelIsSet_ = false;
}

std::vector<std::string>& BatchUpdatePermissionLevelRequestBody::getApplicationIds()
{
    return applicationIds_;
}

void BatchUpdatePermissionLevelRequestBody::setApplicationIds(const std::vector<std::string>& value)
{
    applicationIds_ = value;
    applicationIdsIsSet_ = true;
}

bool BatchUpdatePermissionLevelRequestBody::applicationIdsIsSet() const
{
    return applicationIdsIsSet_;
}

void BatchUpdatePermissionLevelRequestBody::unsetapplicationIds()
{
    applicationIdsIsSet_ = false;
}

}
}
}
}
}


