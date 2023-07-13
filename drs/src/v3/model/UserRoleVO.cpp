

#include "huaweicloud/drs/v3/model/UserRoleVO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UserRoleVO::UserRoleVO()
{
    role_ = "";
    roleIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    isTransfer_ = false;
    isTransferIsSet_ = false;
    privileges_ = "";
    privilegesIsSet_ = false;
    inheritsRolesIsSet_ = false;
    selected_ = false;
    selectedIsSet_ = false;
}

UserRoleVO::~UserRoleVO() = default;

void UserRoleVO::validate()
{
}

web::json::value UserRoleVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
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
    if(inheritsRolesIsSet_) {
        val[utility::conversions::to_string_t("inherits_roles")] = ModelBase::toJson(inheritsRoles_);
    }
    if(selectedIsSet_) {
        val[utility::conversions::to_string_t("selected")] = ModelBase::toJson(selected_);
    }

    return val;
}

bool UserRoleVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("inherits_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherits_roles"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritsRoles(refVal);
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

std::string UserRoleVO::getRole() const
{
    return role_;
}

void UserRoleVO::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool UserRoleVO::roleIsSet() const
{
    return roleIsSet_;
}

void UserRoleVO::unsetrole()
{
    roleIsSet_ = false;
}

std::string UserRoleVO::getComment() const
{
    return comment_;
}

void UserRoleVO::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UserRoleVO::commentIsSet() const
{
    return commentIsSet_;
}

void UserRoleVO::unsetcomment()
{
    commentIsSet_ = false;
}

bool UserRoleVO::isIsTransfer() const
{
    return isTransfer_;
}

void UserRoleVO::setIsTransfer(bool value)
{
    isTransfer_ = value;
    isTransferIsSet_ = true;
}

bool UserRoleVO::isTransferIsSet() const
{
    return isTransferIsSet_;
}

void UserRoleVO::unsetisTransfer()
{
    isTransferIsSet_ = false;
}

std::string UserRoleVO::getPrivileges() const
{
    return privileges_;
}

void UserRoleVO::setPrivileges(const std::string& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool UserRoleVO::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void UserRoleVO::unsetprivileges()
{
    privilegesIsSet_ = false;
}

std::vector<std::string>& UserRoleVO::getInheritsRoles()
{
    return inheritsRoles_;
}

void UserRoleVO::setInheritsRoles(const std::vector<std::string>& value)
{
    inheritsRoles_ = value;
    inheritsRolesIsSet_ = true;
}

bool UserRoleVO::inheritsRolesIsSet() const
{
    return inheritsRolesIsSet_;
}

void UserRoleVO::unsetinheritsRoles()
{
    inheritsRolesIsSet_ = false;
}

bool UserRoleVO::isSelected() const
{
    return selected_;
}

void UserRoleVO::setSelected(bool value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool UserRoleVO::selectedIsSet() const
{
    return selectedIsSet_;
}

void UserRoleVO::unsetselected()
{
    selectedIsSet_ = false;
}

}
}
}
}
}


