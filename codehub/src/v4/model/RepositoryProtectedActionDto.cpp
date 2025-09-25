

#include "huaweicloud/codehub/v4/model/RepositoryProtectedActionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryProtectedActionDto::RepositoryProtectedActionDto()
{
    action_ = "";
    actionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    usersIsSet_ = false;
    userTeamsIsSet_ = false;
    rolesIsSet_ = false;
}

RepositoryProtectedActionDto::~RepositoryProtectedActionDto() = default;

void RepositoryProtectedActionDto::validate()
{
}

web::json::value RepositoryProtectedActionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(userTeamsIsSet_) {
        val[utility::conversions::to_string_t("user_teams")] = ModelBase::toJson(userTeams_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool RepositoryProtectedActionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_teams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_teams"));
        if(!fieldValue.is_null())
        {
            std::vector<UserTeamBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTeams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<BasicRoleDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string RepositoryProtectedActionDto::getAction() const
{
    return action_;
}

void RepositoryProtectedActionDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RepositoryProtectedActionDto::actionIsSet() const
{
    return actionIsSet_;
}

void RepositoryProtectedActionDto::unsetaction()
{
    actionIsSet_ = false;
}

bool RepositoryProtectedActionDto::isEnable() const
{
    return enable_;
}

void RepositoryProtectedActionDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool RepositoryProtectedActionDto::enableIsSet() const
{
    return enableIsSet_;
}

void RepositoryProtectedActionDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<RepositoryUserDto>& RepositoryProtectedActionDto::getUsers()
{
    return users_;
}

void RepositoryProtectedActionDto::setUsers(const std::vector<RepositoryUserDto>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RepositoryProtectedActionDto::usersIsSet() const
{
    return usersIsSet_;
}

void RepositoryProtectedActionDto::unsetusers()
{
    usersIsSet_ = false;
}

std::vector<UserTeamBasicDto>& RepositoryProtectedActionDto::getUserTeams()
{
    return userTeams_;
}

void RepositoryProtectedActionDto::setUserTeams(const std::vector<UserTeamBasicDto>& value)
{
    userTeams_ = value;
    userTeamsIsSet_ = true;
}

bool RepositoryProtectedActionDto::userTeamsIsSet() const
{
    return userTeamsIsSet_;
}

void RepositoryProtectedActionDto::unsetuserTeams()
{
    userTeamsIsSet_ = false;
}

std::vector<BasicRoleDto>& RepositoryProtectedActionDto::getRoles()
{
    return roles_;
}

void RepositoryProtectedActionDto::setRoles(const std::vector<BasicRoleDto>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool RepositoryProtectedActionDto::rolesIsSet() const
{
    return rolesIsSet_;
}

void RepositoryProtectedActionDto::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


