

#include "huaweicloud/codeartsartifact/v2/model/RepoUserPrivilegeV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepoUserPrivilegeV5::RepoUserPrivilegeV5()
{
    userId_ = "";
    userIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    privilege_ = "";
    privilegeIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
}

RepoUserPrivilegeV5::~RepoUserPrivilegeV5() = default;

void RepoUserPrivilegeV5::validate()
{
}

web::json::value RepoUserPrivilegeV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(privilegeIsSet_) {
        val[utility::conversions::to_string_t("privilege")] = ModelBase::toJson(privilege_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }

    return val;
}
bool RepoUserPrivilegeV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privilege"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivilege(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    return ok;
}


std::string RepoUserPrivilegeV5::getUserId() const
{
    return userId_;
}

void RepoUserPrivilegeV5::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RepoUserPrivilegeV5::userIdIsSet() const
{
    return userIdIsSet_;
}

void RepoUserPrivilegeV5::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getDomainId() const
{
    return domainId_;
}

void RepoUserPrivilegeV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepoUserPrivilegeV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepoUserPrivilegeV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getUserName() const
{
    return userName_;
}

void RepoUserPrivilegeV5::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepoUserPrivilegeV5::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepoUserPrivilegeV5::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getRepoId() const
{
    return repoId_;
}

void RepoUserPrivilegeV5::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool RepoUserPrivilegeV5::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void RepoUserPrivilegeV5::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getPrivilege() const
{
    return privilege_;
}

void RepoUserPrivilegeV5::setPrivilege(const std::string& value)
{
    privilege_ = value;
    privilegeIsSet_ = true;
}

bool RepoUserPrivilegeV5::privilegeIsSet() const
{
    return privilegeIsSet_;
}

void RepoUserPrivilegeV5::unsetprivilege()
{
    privilegeIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getRoleId() const
{
    return roleId_;
}

void RepoUserPrivilegeV5::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool RepoUserPrivilegeV5::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void RepoUserPrivilegeV5::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string RepoUserPrivilegeV5::getRoleName() const
{
    return roleName_;
}

void RepoUserPrivilegeV5::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool RepoUserPrivilegeV5::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void RepoUserPrivilegeV5::unsetroleName()
{
    roleNameIsSet_ = false;
}

}
}
}
}
}


