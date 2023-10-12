

#include "huaweicloud/drs/v5/model/UserMigrationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UserMigrationInfo::UserMigrationInfo()
{
    isMigrateUser_ = false;
    isMigrateUserIsSet_ = false;
    isSetPassword_ = false;
    isSetPasswordIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    userListIsSet_ = false;
    roleListIsSet_ = false;
}

UserMigrationInfo::~UserMigrationInfo() = default;

void UserMigrationInfo::validate()
{
}

web::json::value UserMigrationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isMigrateUserIsSet_) {
        val[utility::conversions::to_string_t("is_migrate_user")] = ModelBase::toJson(isMigrateUser_);
    }
    if(isSetPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_set_password")] = ModelBase::toJson(isSetPassword_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(userListIsSet_) {
        val[utility::conversions::to_string_t("user_list")] = ModelBase::toJson(userList_);
    }
    if(roleListIsSet_) {
        val[utility::conversions::to_string_t("role_list")] = ModelBase::toJson(roleList_);
    }

    return val;
}
bool UserMigrationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_migrate_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_migrate_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMigrateUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserMigrationList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserMigrationRole> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleList(refVal);
        }
    }
    return ok;
}


bool UserMigrationInfo::isIsMigrateUser() const
{
    return isMigrateUser_;
}

void UserMigrationInfo::setIsMigrateUser(bool value)
{
    isMigrateUser_ = value;
    isMigrateUserIsSet_ = true;
}

bool UserMigrationInfo::isMigrateUserIsSet() const
{
    return isMigrateUserIsSet_;
}

void UserMigrationInfo::unsetisMigrateUser()
{
    isMigrateUserIsSet_ = false;
}

bool UserMigrationInfo::isIsSetPassword() const
{
    return isSetPassword_;
}

void UserMigrationInfo::setIsSetPassword(bool value)
{
    isSetPassword_ = value;
    isSetPasswordIsSet_ = true;
}

bool UserMigrationInfo::isSetPasswordIsSet() const
{
    return isSetPasswordIsSet_;
}

void UserMigrationInfo::unsetisSetPassword()
{
    isSetPasswordIsSet_ = false;
}

std::string UserMigrationInfo::getPassword() const
{
    return password_;
}

void UserMigrationInfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserMigrationInfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserMigrationInfo::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<UserMigrationList>& UserMigrationInfo::getUserList()
{
    return userList_;
}

void UserMigrationInfo::setUserList(const std::vector<UserMigrationList>& value)
{
    userList_ = value;
    userListIsSet_ = true;
}

bool UserMigrationInfo::userListIsSet() const
{
    return userListIsSet_;
}

void UserMigrationInfo::unsetuserList()
{
    userListIsSet_ = false;
}

std::vector<UserMigrationRole>& UserMigrationInfo::getRoleList()
{
    return roleList_;
}

void UserMigrationInfo::setRoleList(const std::vector<UserMigrationRole>& value)
{
    roleList_ = value;
    roleListIsSet_ = true;
}

bool UserMigrationInfo::roleListIsSet() const
{
    return roleListIsSet_;
}

void UserMigrationInfo::unsetroleList()
{
    roleListIsSet_ = false;
}

}
}
}
}
}


