

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdateApplicationPermissionsRequestBody::BatchUpdateApplicationPermissionsRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    applicationIdsIsSet_ = false;
    rolesIsSet_ = false;
}

BatchUpdateApplicationPermissionsRequestBody::~BatchUpdateApplicationPermissionsRequestBody() = default;

void BatchUpdateApplicationPermissionsRequestBody::validate()
{
}

web::json::value BatchUpdateApplicationPermissionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(applicationIdsIsSet_) {
        val[utility::conversions::to_string_t("application_ids")] = ModelBase::toJson(applicationIds_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool BatchUpdateApplicationPermissionsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<AppPermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateApplicationPermissionsRequestBody::getProjectId() const
{
    return projectId_;
}

void BatchUpdateApplicationPermissionsRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateApplicationPermissionsRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateApplicationPermissionsRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& BatchUpdateApplicationPermissionsRequestBody::getApplicationIds()
{
    return applicationIds_;
}

void BatchUpdateApplicationPermissionsRequestBody::setApplicationIds(const std::vector<std::string>& value)
{
    applicationIds_ = value;
    applicationIdsIsSet_ = true;
}

bool BatchUpdateApplicationPermissionsRequestBody::applicationIdsIsSet() const
{
    return applicationIdsIsSet_;
}

void BatchUpdateApplicationPermissionsRequestBody::unsetapplicationIds()
{
    applicationIdsIsSet_ = false;
}

std::vector<AppPermission>& BatchUpdateApplicationPermissionsRequestBody::getRoles()
{
    return roles_;
}

void BatchUpdateApplicationPermissionsRequestBody::setRoles(const std::vector<AppPermission>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool BatchUpdateApplicationPermissionsRequestBody::rolesIsSet() const
{
    return rolesIsSet_;
}

void BatchUpdateApplicationPermissionsRequestBody::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


