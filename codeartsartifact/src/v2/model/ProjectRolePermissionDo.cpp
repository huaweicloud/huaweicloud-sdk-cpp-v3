

#include "huaweicloud/codeartsartifact/v2/model/ProjectRolePermissionDo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ProjectRolePermissionDo::ProjectRolePermissionDo()
{
    id_ = "";
    idIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    devucRoleId_ = "";
    devucRoleIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    isPermissionConfig_ = false;
    isPermissionConfigIsSet_ = false;
    isChangePkgStatus_ = false;
    isChangePkgStatusIsSet_ = false;
    isUpload_ = false;
    isUploadIsSet_ = false;
    isDeleteRestoreTestPkg_ = false;
    isDeleteRestoreTestPkgIsSet_ = false;
    isDeleteRestoreProdPkg_ = false;
    isDeleteRestoreProdPkgIsSet_ = false;
    isEditTestPkg_ = false;
    isEditTestPkgIsSet_ = false;
    isMkdir_ = false;
    isMkdirIsSet_ = false;
    isDownload_ = false;
    isDownloadIsSet_ = false;
    isRestoreAll_ = false;
    isRestoreAllIsSet_ = false;
    isEmpty_ = false;
    isEmptyIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    migrated630_ = 0;
    migrated630IsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    roles_ = "";
    rolesIsSet_ = false;
}

ProjectRolePermissionDo::~ProjectRolePermissionDo() = default;

void ProjectRolePermissionDo::validate()
{
}

web::json::value ProjectRolePermissionDo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(devucRoleIdIsSet_) {
        val[utility::conversions::to_string_t("devuc_role_id")] = ModelBase::toJson(devucRoleId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isPermissionConfigIsSet_) {
        val[utility::conversions::to_string_t("is_permission_config")] = ModelBase::toJson(isPermissionConfig_);
    }
    if(isChangePkgStatusIsSet_) {
        val[utility::conversions::to_string_t("is_change_pkg_status")] = ModelBase::toJson(isChangePkgStatus_);
    }
    if(isUploadIsSet_) {
        val[utility::conversions::to_string_t("is_upload")] = ModelBase::toJson(isUpload_);
    }
    if(isDeleteRestoreTestPkgIsSet_) {
        val[utility::conversions::to_string_t("is_delete_restore_test_pkg")] = ModelBase::toJson(isDeleteRestoreTestPkg_);
    }
    if(isDeleteRestoreProdPkgIsSet_) {
        val[utility::conversions::to_string_t("is_delete_restore_prod_pkg")] = ModelBase::toJson(isDeleteRestoreProdPkg_);
    }
    if(isEditTestPkgIsSet_) {
        val[utility::conversions::to_string_t("is_edit_test_pkg")] = ModelBase::toJson(isEditTestPkg_);
    }
    if(isMkdirIsSet_) {
        val[utility::conversions::to_string_t("is_mkdir")] = ModelBase::toJson(isMkdir_);
    }
    if(isDownloadIsSet_) {
        val[utility::conversions::to_string_t("is_download")] = ModelBase::toJson(isDownload_);
    }
    if(isRestoreAllIsSet_) {
        val[utility::conversions::to_string_t("is_restore_all")] = ModelBase::toJson(isRestoreAll_);
    }
    if(isEmptyIsSet_) {
        val[utility::conversions::to_string_t("is_empty")] = ModelBase::toJson(isEmpty_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(migrated630IsSet_) {
        val[utility::conversions::to_string_t("migrated_630")] = ModelBase::toJson(migrated630_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool ProjectRolePermissionDo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devuc_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devuc_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevucRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_permission_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_permission_config"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPermissionConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_change_pkg_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_change_pkg_status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsChangePkgStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_upload"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_upload"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUpload(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete_restore_test_pkg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete_restore_test_pkg"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleteRestoreTestPkg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete_restore_prod_pkg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete_restore_prod_pkg"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleteRestoreProdPkg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_edit_test_pkg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_edit_test_pkg"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEditTestPkg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_mkdir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_mkdir"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMkdir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_download"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_download"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDownload(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_restore_all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_restore_all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRestoreAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_empty"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_empty"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEmpty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrated_630"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrated_630"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrated630(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string ProjectRolePermissionDo::getId() const
{
    return id_;
}

void ProjectRolePermissionDo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectRolePermissionDo::idIsSet() const
{
    return idIsSet_;
}

void ProjectRolePermissionDo::unsetid()
{
    idIsSet_ = false;
}

int32_t ProjectRolePermissionDo::getRoleId() const
{
    return roleId_;
}

void ProjectRolePermissionDo::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ProjectRolePermissionDo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ProjectRolePermissionDo::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ProjectRolePermissionDo::getDevucRoleId() const
{
    return devucRoleId_;
}

void ProjectRolePermissionDo::setDevucRoleId(const std::string& value)
{
    devucRoleId_ = value;
    devucRoleIdIsSet_ = true;
}

bool ProjectRolePermissionDo::devucRoleIdIsSet() const
{
    return devucRoleIdIsSet_;
}

void ProjectRolePermissionDo::unsetdevucRoleId()
{
    devucRoleIdIsSet_ = false;
}

std::string ProjectRolePermissionDo::getProjectId() const
{
    return projectId_;
}

void ProjectRolePermissionDo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectRolePermissionDo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectRolePermissionDo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsPermissionConfig() const
{
    return isPermissionConfig_;
}

void ProjectRolePermissionDo::setIsPermissionConfig(bool value)
{
    isPermissionConfig_ = value;
    isPermissionConfigIsSet_ = true;
}

bool ProjectRolePermissionDo::isPermissionConfigIsSet() const
{
    return isPermissionConfigIsSet_;
}

void ProjectRolePermissionDo::unsetisPermissionConfig()
{
    isPermissionConfigIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsChangePkgStatus() const
{
    return isChangePkgStatus_;
}

void ProjectRolePermissionDo::setIsChangePkgStatus(bool value)
{
    isChangePkgStatus_ = value;
    isChangePkgStatusIsSet_ = true;
}

bool ProjectRolePermissionDo::isChangePkgStatusIsSet() const
{
    return isChangePkgStatusIsSet_;
}

void ProjectRolePermissionDo::unsetisChangePkgStatus()
{
    isChangePkgStatusIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsUpload() const
{
    return isUpload_;
}

void ProjectRolePermissionDo::setIsUpload(bool value)
{
    isUpload_ = value;
    isUploadIsSet_ = true;
}

bool ProjectRolePermissionDo::isUploadIsSet() const
{
    return isUploadIsSet_;
}

void ProjectRolePermissionDo::unsetisUpload()
{
    isUploadIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsDeleteRestoreTestPkg() const
{
    return isDeleteRestoreTestPkg_;
}

void ProjectRolePermissionDo::setIsDeleteRestoreTestPkg(bool value)
{
    isDeleteRestoreTestPkg_ = value;
    isDeleteRestoreTestPkgIsSet_ = true;
}

bool ProjectRolePermissionDo::isDeleteRestoreTestPkgIsSet() const
{
    return isDeleteRestoreTestPkgIsSet_;
}

void ProjectRolePermissionDo::unsetisDeleteRestoreTestPkg()
{
    isDeleteRestoreTestPkgIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsDeleteRestoreProdPkg() const
{
    return isDeleteRestoreProdPkg_;
}

void ProjectRolePermissionDo::setIsDeleteRestoreProdPkg(bool value)
{
    isDeleteRestoreProdPkg_ = value;
    isDeleteRestoreProdPkgIsSet_ = true;
}

bool ProjectRolePermissionDo::isDeleteRestoreProdPkgIsSet() const
{
    return isDeleteRestoreProdPkgIsSet_;
}

void ProjectRolePermissionDo::unsetisDeleteRestoreProdPkg()
{
    isDeleteRestoreProdPkgIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsEditTestPkg() const
{
    return isEditTestPkg_;
}

void ProjectRolePermissionDo::setIsEditTestPkg(bool value)
{
    isEditTestPkg_ = value;
    isEditTestPkgIsSet_ = true;
}

bool ProjectRolePermissionDo::isEditTestPkgIsSet() const
{
    return isEditTestPkgIsSet_;
}

void ProjectRolePermissionDo::unsetisEditTestPkg()
{
    isEditTestPkgIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsMkdir() const
{
    return isMkdir_;
}

void ProjectRolePermissionDo::setIsMkdir(bool value)
{
    isMkdir_ = value;
    isMkdirIsSet_ = true;
}

bool ProjectRolePermissionDo::isMkdirIsSet() const
{
    return isMkdirIsSet_;
}

void ProjectRolePermissionDo::unsetisMkdir()
{
    isMkdirIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsDownload() const
{
    return isDownload_;
}

void ProjectRolePermissionDo::setIsDownload(bool value)
{
    isDownload_ = value;
    isDownloadIsSet_ = true;
}

bool ProjectRolePermissionDo::isDownloadIsSet() const
{
    return isDownloadIsSet_;
}

void ProjectRolePermissionDo::unsetisDownload()
{
    isDownloadIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsRestoreAll() const
{
    return isRestoreAll_;
}

void ProjectRolePermissionDo::setIsRestoreAll(bool value)
{
    isRestoreAll_ = value;
    isRestoreAllIsSet_ = true;
}

bool ProjectRolePermissionDo::isRestoreAllIsSet() const
{
    return isRestoreAllIsSet_;
}

void ProjectRolePermissionDo::unsetisRestoreAll()
{
    isRestoreAllIsSet_ = false;
}

bool ProjectRolePermissionDo::isIsEmpty() const
{
    return isEmpty_;
}

void ProjectRolePermissionDo::setIsEmpty(bool value)
{
    isEmpty_ = value;
    isEmptyIsSet_ = true;
}

bool ProjectRolePermissionDo::isEmptyIsSet() const
{
    return isEmptyIsSet_;
}

void ProjectRolePermissionDo::unsetisEmpty()
{
    isEmptyIsSet_ = false;
}

int64_t ProjectRolePermissionDo::getCreateTime() const
{
    return createTime_;
}

void ProjectRolePermissionDo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProjectRolePermissionDo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProjectRolePermissionDo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ProjectRolePermissionDo::getUpdateTime() const
{
    return updateTime_;
}

void ProjectRolePermissionDo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProjectRolePermissionDo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProjectRolePermissionDo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t ProjectRolePermissionDo::getMigrated630() const
{
    return migrated630_;
}

void ProjectRolePermissionDo::setMigrated630(int32_t value)
{
    migrated630_ = value;
    migrated630IsSet_ = true;
}

bool ProjectRolePermissionDo::migrated630IsSet() const
{
    return migrated630IsSet_;
}

void ProjectRolePermissionDo::unsetmigrated630()
{
    migrated630IsSet_ = false;
}

std::string ProjectRolePermissionDo::getRegion() const
{
    return region_;
}

void ProjectRolePermissionDo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProjectRolePermissionDo::regionIsSet() const
{
    return regionIsSet_;
}

void ProjectRolePermissionDo::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProjectRolePermissionDo::getUserId() const
{
    return userId_;
}

void ProjectRolePermissionDo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ProjectRolePermissionDo::userIdIsSet() const
{
    return userIdIsSet_;
}

void ProjectRolePermissionDo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ProjectRolePermissionDo::getRoles() const
{
    return roles_;
}

void ProjectRolePermissionDo::setRoles(const std::string& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ProjectRolePermissionDo::rolesIsSet() const
{
    return rolesIsSet_;
}

void ProjectRolePermissionDo::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


