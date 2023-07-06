

#include "huaweicloud/drs/v3/model/UpdateUserReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateUserReq::UpdateUserReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    listIsSet_ = false;
    userRolesIsSet_ = false;
    isSetPassword_ = false;
    isSetPasswordIsSet_ = false;
    isMigrateUser_ = false;
    isMigrateUserIsSet_ = false;
    isSyncObjectPrivilege_ = false;
    isSyncObjectPrivilegeIsSet_ = false;
}

UpdateUserReq::~UpdateUserReq() = default;

void UpdateUserReq::validate()
{
}

web::json::value UpdateUserReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(userRolesIsSet_) {
        val[utility::conversions::to_string_t("user_roles")] = ModelBase::toJson(userRoles_);
    }
    if(isSetPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_set_password")] = ModelBase::toJson(isSetPassword_);
    }
    if(isMigrateUserIsSet_) {
        val[utility::conversions::to_string_t("is_migrate_user")] = ModelBase::toJson(isMigrateUser_);
    }
    if(isSyncObjectPrivilegeIsSet_) {
        val[utility::conversions::to_string_t("is_sync_object_privilege")] = ModelBase::toJson(isSyncObjectPrivilege_);
    }

    return val;
}

bool UpdateUserReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserAccountVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_roles"));
        if(!fieldValue.is_null())
        {
            std::vector<UserRoleVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_set_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_set_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_migrate_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_migrate_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMigrateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sync_object_privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sync_object_privilege"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSyncObjectPrivilege(refVal);
        }
    }
    return ok;
}

std::string UpdateUserReq::getJobId() const
{
    return jobId_;
}

void UpdateUserReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateUserReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateUserReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateUserReq::getPassword() const
{
    return password_;
}

void UpdateUserReq::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UpdateUserReq::passwordIsSet() const
{
    return passwordIsSet_;
}

void UpdateUserReq::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<UserAccountVO>& UpdateUserReq::getList()
{
    return list_;
}

void UpdateUserReq::setList(const std::vector<UserAccountVO>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool UpdateUserReq::listIsSet() const
{
    return listIsSet_;
}

void UpdateUserReq::unsetlist()
{
    listIsSet_ = false;
}

std::vector<UserRoleVO>& UpdateUserReq::getUserRoles()
{
    return userRoles_;
}

void UpdateUserReq::setUserRoles(const std::vector<UserRoleVO>& value)
{
    userRoles_ = value;
    userRolesIsSet_ = true;
}

bool UpdateUserReq::userRolesIsSet() const
{
    return userRolesIsSet_;
}

void UpdateUserReq::unsetuserRoles()
{
    userRolesIsSet_ = false;
}

bool UpdateUserReq::isIsSetPassword() const
{
    return isSetPassword_;
}

void UpdateUserReq::setIsSetPassword(bool value)
{
    isSetPassword_ = value;
    isSetPasswordIsSet_ = true;
}

bool UpdateUserReq::isSetPasswordIsSet() const
{
    return isSetPasswordIsSet_;
}

void UpdateUserReq::unsetisSetPassword()
{
    isSetPasswordIsSet_ = false;
}

bool UpdateUserReq::isIsMigrateUser() const
{
    return isMigrateUser_;
}

void UpdateUserReq::setIsMigrateUser(bool value)
{
    isMigrateUser_ = value;
    isMigrateUserIsSet_ = true;
}

bool UpdateUserReq::isMigrateUserIsSet() const
{
    return isMigrateUserIsSet_;
}

void UpdateUserReq::unsetisMigrateUser()
{
    isMigrateUserIsSet_ = false;
}

bool UpdateUserReq::isIsSyncObjectPrivilege() const
{
    return isSyncObjectPrivilege_;
}

void UpdateUserReq::setIsSyncObjectPrivilege(bool value)
{
    isSyncObjectPrivilege_ = value;
    isSyncObjectPrivilegeIsSet_ = true;
}

bool UpdateUserReq::isSyncObjectPrivilegeIsSet() const
{
    return isSyncObjectPrivilegeIsSet_;
}

void UpdateUserReq::unsetisSyncObjectPrivilege()
{
    isSyncObjectPrivilegeIsSet_ = false;
}

}
}
}
}
}


