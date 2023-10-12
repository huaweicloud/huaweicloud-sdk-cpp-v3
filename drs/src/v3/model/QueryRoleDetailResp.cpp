

#include "huaweicloud/drs/v3/model/QueryRoleDetailResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryRoleDetailResp::QueryRoleDetailResp()
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

QueryRoleDetailResp::~QueryRoleDetailResp() = default;

void QueryRoleDetailResp::validate()
{
}

web::json::value QueryRoleDetailResp::toJson() const
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
bool QueryRoleDetailResp::fromJson(const web::json::value& val)
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


std::string QueryRoleDetailResp::getRole() const
{
    return role_;
}

void QueryRoleDetailResp::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool QueryRoleDetailResp::roleIsSet() const
{
    return roleIsSet_;
}

void QueryRoleDetailResp::unsetrole()
{
    roleIsSet_ = false;
}

std::string QueryRoleDetailResp::getComment() const
{
    return comment_;
}

void QueryRoleDetailResp::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool QueryRoleDetailResp::commentIsSet() const
{
    return commentIsSet_;
}

void QueryRoleDetailResp::unsetcomment()
{
    commentIsSet_ = false;
}

bool QueryRoleDetailResp::isIsTransfer() const
{
    return isTransfer_;
}

void QueryRoleDetailResp::setIsTransfer(bool value)
{
    isTransfer_ = value;
    isTransferIsSet_ = true;
}

bool QueryRoleDetailResp::isTransferIsSet() const
{
    return isTransferIsSet_;
}

void QueryRoleDetailResp::unsetisTransfer()
{
    isTransferIsSet_ = false;
}

std::string QueryRoleDetailResp::getPrivileges() const
{
    return privileges_;
}

void QueryRoleDetailResp::setPrivileges(const std::string& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool QueryRoleDetailResp::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void QueryRoleDetailResp::unsetprivileges()
{
    privilegesIsSet_ = false;
}

std::vector<std::string>& QueryRoleDetailResp::getInheritsRoles()
{
    return inheritsRoles_;
}

void QueryRoleDetailResp::setInheritsRoles(const std::vector<std::string>& value)
{
    inheritsRoles_ = value;
    inheritsRolesIsSet_ = true;
}

bool QueryRoleDetailResp::inheritsRolesIsSet() const
{
    return inheritsRolesIsSet_;
}

void QueryRoleDetailResp::unsetinheritsRoles()
{
    inheritsRolesIsSet_ = false;
}

bool QueryRoleDetailResp::isSelected() const
{
    return selected_;
}

void QueryRoleDetailResp::setSelected(bool value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool QueryRoleDetailResp::selectedIsSet() const
{
    return selectedIsSet_;
}

void QueryRoleDetailResp::unsetselected()
{
    selectedIsSet_ = false;
}

}
}
}
}
}


