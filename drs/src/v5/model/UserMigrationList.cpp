

#include "huaweicloud/drs/v5/model/UserMigrationList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UserMigrationList::UserMigrationList()
{
    id_ = "";
    idIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    isSetPassword_ = false;
    isSetPasswordIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

UserMigrationList::~UserMigrationList() = default;

void UserMigrationList::validate()
{
}

web::json::value UserMigrationList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(isSetPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_set_password")] = ModelBase::toJson(isSetPassword_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool UserMigrationList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
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
    return ok;
}


std::string UserMigrationList::getId() const
{
    return id_;
}

void UserMigrationList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserMigrationList::idIsSet() const
{
    return idIsSet_;
}

void UserMigrationList::unsetid()
{
    idIsSet_ = false;
}

std::string UserMigrationList::getAccount() const
{
    return account_;
}

void UserMigrationList::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool UserMigrationList::accountIsSet() const
{
    return accountIsSet_;
}

void UserMigrationList::unsetaccount()
{
    accountIsSet_ = false;
}

bool UserMigrationList::isIsSetPassword() const
{
    return isSetPassword_;
}

void UserMigrationList::setIsSetPassword(bool value)
{
    isSetPassword_ = value;
    isSetPasswordIsSet_ = true;
}

bool UserMigrationList::isSetPasswordIsSet() const
{
    return isSetPasswordIsSet_;
}

void UserMigrationList::unsetisSetPassword()
{
    isSetPasswordIsSet_ = false;
}

std::string UserMigrationList::getPassword() const
{
    return password_;
}

void UserMigrationList::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserMigrationList::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserMigrationList::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


