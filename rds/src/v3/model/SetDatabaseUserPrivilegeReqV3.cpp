

#include "huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeReqV3.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetDatabaseUserPrivilegeReqV3::SetDatabaseUserPrivilegeReqV3()
{
    allUsers_ = false;
    allUsersIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

SetDatabaseUserPrivilegeReqV3::~SetDatabaseUserPrivilegeReqV3() = default;

void SetDatabaseUserPrivilegeReqV3::validate()
{
}

web::json::value SetDatabaseUserPrivilegeReqV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allUsersIsSet_) {
        val[utility::conversions::to_string_t("all_users")] = ModelBase::toJson(allUsers_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}

bool SetDatabaseUserPrivilegeReqV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_users"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    return ok;
}

bool SetDatabaseUserPrivilegeReqV3::isAllUsers() const
{
    return allUsers_;
}

void SetDatabaseUserPrivilegeReqV3::setAllUsers(bool value)
{
    allUsers_ = value;
    allUsersIsSet_ = true;
}

bool SetDatabaseUserPrivilegeReqV3::allUsersIsSet() const
{
    return allUsersIsSet_;
}

void SetDatabaseUserPrivilegeReqV3::unsetallUsers()
{
    allUsersIsSet_ = false;
}

std::string SetDatabaseUserPrivilegeReqV3::getUserName() const
{
    return userName_;
}

void SetDatabaseUserPrivilegeReqV3::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SetDatabaseUserPrivilegeReqV3::userNameIsSet() const
{
    return userNameIsSet_;
}

void SetDatabaseUserPrivilegeReqV3::unsetuserName()
{
    userNameIsSet_ = false;
}

bool SetDatabaseUserPrivilegeReqV3::isReadonly() const
{
    return readonly_;
}

void SetDatabaseUserPrivilegeReqV3::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool SetDatabaseUserPrivilegeReqV3::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void SetDatabaseUserPrivilegeReqV3::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


