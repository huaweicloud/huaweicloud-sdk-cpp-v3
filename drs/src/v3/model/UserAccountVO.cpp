

#include "huaweicloud/drs/v3/model/UserAccountVO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UserAccountVO::UserAccountVO()
{
    id_ = "";
    idIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    isTransfer_ = false;
    isTransferIsSet_ = false;
    privilegesIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    isSetPassword_ = false;
    isSetPasswordIsSet_ = false;
    rolesIsSet_ = false;
    selected_ = false;
    selectedIsSet_ = false;
}

UserAccountVO::~UserAccountVO() = default;

void UserAccountVO::validate()
{
}

web::json::value UserAccountVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(isTransferIsSet_) {
        val[utility::conversions::to_string_t("is_transfer")] = ModelBase::toJson(isTransfer_);
    }
    if(privilegesIsSet_) {
        val[utility::conversions::to_string_t("privileges")] = ModelBase::toJson(privileges_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(isSetPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_set_password")] = ModelBase::toJson(isSetPassword_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }
    if(selectedIsSet_) {
        val[utility::conversions::to_string_t("selected")] = ModelBase::toJson(selected_);
    }

    return val;
}

bool UserAccountVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_transfer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTransfer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privileges"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivileges(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_set_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_set_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelected(refVal);
        }
    }
    return ok;
}

std::string UserAccountVO::getId() const
{
    return id_;
}

void UserAccountVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserAccountVO::idIsSet() const
{
    return idIsSet_;
}

void UserAccountVO::unsetid()
{
    idIsSet_ = false;
}

std::string UserAccountVO::getAccount() const
{
    return account_;
}

void UserAccountVO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool UserAccountVO::accountIsSet() const
{
    return accountIsSet_;
}

void UserAccountVO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string UserAccountVO::getComment() const
{
    return comment_;
}

void UserAccountVO::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UserAccountVO::commentIsSet() const
{
    return commentIsSet_;
}

void UserAccountVO::unsetcomment()
{
    commentIsSet_ = false;
}

bool UserAccountVO::isIsTransfer() const
{
    return isTransfer_;
}

void UserAccountVO::setIsTransfer(bool value)
{
    isTransfer_ = value;
    isTransferIsSet_ = true;
}

bool UserAccountVO::isTransferIsSet() const
{
    return isTransferIsSet_;
}

void UserAccountVO::unsetisTransfer()
{
    isTransferIsSet_ = false;
}

std::vector<std::string>& UserAccountVO::getPrivileges()
{
    return privileges_;
}

void UserAccountVO::setPrivileges(const std::vector<std::string>& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool UserAccountVO::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void UserAccountVO::unsetprivileges()
{
    privilegesIsSet_ = false;
}

std::string UserAccountVO::getPassword() const
{
    return password_;
}

void UserAccountVO::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserAccountVO::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserAccountVO::unsetpassword()
{
    passwordIsSet_ = false;
}

bool UserAccountVO::isIsSetPassword() const
{
    return isSetPassword_;
}

void UserAccountVO::setIsSetPassword(bool value)
{
    isSetPassword_ = value;
    isSetPasswordIsSet_ = true;
}

bool UserAccountVO::isSetPasswordIsSet() const
{
    return isSetPasswordIsSet_;
}

void UserAccountVO::unsetisSetPassword()
{
    isSetPasswordIsSet_ = false;
}

std::vector<std::string>& UserAccountVO::getRoles()
{
    return roles_;
}

void UserAccountVO::setRoles(const std::vector<std::string>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool UserAccountVO::rolesIsSet() const
{
    return rolesIsSet_;
}

void UserAccountVO::unsetroles()
{
    rolesIsSet_ = false;
}

bool UserAccountVO::isSelected() const
{
    return selected_;
}

void UserAccountVO::setSelected(bool value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool UserAccountVO::selectedIsSet() const
{
    return selectedIsSet_;
}

void UserAccountVO::unsetselected()
{
    selectedIsSet_ = false;
}

}
}
}
}
}


