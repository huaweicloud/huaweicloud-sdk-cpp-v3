

#include "huaweicloud/drs/v3/model/QueryUserDetailResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryUserDetailResp::QueryUserDetailResp()
{
    id_ = "";
    idIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    isTransfer_ = false;
    isTransferIsSet_ = false;
    privileges_ = "";
    privilegesIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    rolesIsSet_ = false;
    selected_ = false;
    selectedIsSet_ = false;
    noPrivileges_ = "";
    noPrivilegesIsSet_ = false;
    parentAccount_ = "";
    parentAccountIsSet_ = false;
    noParentAccount_ = "";
    noParentAccountIsSet_ = false;
}

QueryUserDetailResp::~QueryUserDetailResp() = default;

void QueryUserDetailResp::validate()
{
}

web::json::value QueryUserDetailResp::toJson() const
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
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }
    if(selectedIsSet_) {
        val[utility::conversions::to_string_t("selected")] = ModelBase::toJson(selected_);
    }
    if(noPrivilegesIsSet_) {
        val[utility::conversions::to_string_t("no_privileges")] = ModelBase::toJson(noPrivileges_);
    }
    if(parentAccountIsSet_) {
        val[utility::conversions::to_string_t("parent_account")] = ModelBase::toJson(parentAccount_);
    }
    if(noParentAccountIsSet_) {
        val[utility::conversions::to_string_t("no_parent_account")] = ModelBase::toJson(noParentAccount_);
    }

    return val;
}
bool QueryUserDetailResp::fromJson(const web::json::value& val)
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
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("no_privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_privileges"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoPrivileges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_parent_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_parent_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoParentAccount(refVal);
        }
    }
    return ok;
}


std::string QueryUserDetailResp::getId() const
{
    return id_;
}

void QueryUserDetailResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryUserDetailResp::idIsSet() const
{
    return idIsSet_;
}

void QueryUserDetailResp::unsetid()
{
    idIsSet_ = false;
}

std::string QueryUserDetailResp::getAccount() const
{
    return account_;
}

void QueryUserDetailResp::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool QueryUserDetailResp::accountIsSet() const
{
    return accountIsSet_;
}

void QueryUserDetailResp::unsetaccount()
{
    accountIsSet_ = false;
}

std::string QueryUserDetailResp::getComment() const
{
    return comment_;
}

void QueryUserDetailResp::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool QueryUserDetailResp::commentIsSet() const
{
    return commentIsSet_;
}

void QueryUserDetailResp::unsetcomment()
{
    commentIsSet_ = false;
}

bool QueryUserDetailResp::isIsTransfer() const
{
    return isTransfer_;
}

void QueryUserDetailResp::setIsTransfer(bool value)
{
    isTransfer_ = value;
    isTransferIsSet_ = true;
}

bool QueryUserDetailResp::isTransferIsSet() const
{
    return isTransferIsSet_;
}

void QueryUserDetailResp::unsetisTransfer()
{
    isTransferIsSet_ = false;
}

std::string QueryUserDetailResp::getPrivileges() const
{
    return privileges_;
}

void QueryUserDetailResp::setPrivileges(const std::string& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool QueryUserDetailResp::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void QueryUserDetailResp::unsetprivileges()
{
    privilegesIsSet_ = false;
}

std::string QueryUserDetailResp::getPassword() const
{
    return password_;
}

void QueryUserDetailResp::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool QueryUserDetailResp::passwordIsSet() const
{
    return passwordIsSet_;
}

void QueryUserDetailResp::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<std::string>& QueryUserDetailResp::getRoles()
{
    return roles_;
}

void QueryUserDetailResp::setRoles(const std::vector<std::string>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool QueryUserDetailResp::rolesIsSet() const
{
    return rolesIsSet_;
}

void QueryUserDetailResp::unsetroles()
{
    rolesIsSet_ = false;
}

bool QueryUserDetailResp::isSelected() const
{
    return selected_;
}

void QueryUserDetailResp::setSelected(bool value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool QueryUserDetailResp::selectedIsSet() const
{
    return selectedIsSet_;
}

void QueryUserDetailResp::unsetselected()
{
    selectedIsSet_ = false;
}

std::string QueryUserDetailResp::getNoPrivileges() const
{
    return noPrivileges_;
}

void QueryUserDetailResp::setNoPrivileges(const std::string& value)
{
    noPrivileges_ = value;
    noPrivilegesIsSet_ = true;
}

bool QueryUserDetailResp::noPrivilegesIsSet() const
{
    return noPrivilegesIsSet_;
}

void QueryUserDetailResp::unsetnoPrivileges()
{
    noPrivilegesIsSet_ = false;
}

std::string QueryUserDetailResp::getParentAccount() const
{
    return parentAccount_;
}

void QueryUserDetailResp::setParentAccount(const std::string& value)
{
    parentAccount_ = value;
    parentAccountIsSet_ = true;
}

bool QueryUserDetailResp::parentAccountIsSet() const
{
    return parentAccountIsSet_;
}

void QueryUserDetailResp::unsetparentAccount()
{
    parentAccountIsSet_ = false;
}

std::string QueryUserDetailResp::getNoParentAccount() const
{
    return noParentAccount_;
}

void QueryUserDetailResp::setNoParentAccount(const std::string& value)
{
    noParentAccount_ = value;
    noParentAccountIsSet_ = true;
}

bool QueryUserDetailResp::noParentAccountIsSet() const
{
    return noParentAccountIsSet_;
}

void QueryUserDetailResp::unsetnoParentAccount()
{
    noParentAccountIsSet_ = false;
}

}
}
}
}
}


