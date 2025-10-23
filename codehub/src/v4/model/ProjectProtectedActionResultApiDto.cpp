

#include "huaweicloud/codehub/v4/model/ProjectProtectedActionResultApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectProtectedActionResultApiDto::ProjectProtectedActionResultApiDto()
{
    action_ = "";
    actionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    usersIsSet_ = false;
    userTeamsIsSet_ = false;
    rolesIsSet_ = false;
    additionSwitchersIsSet_ = false;
}

ProjectProtectedActionResultApiDto::~ProjectProtectedActionResultApiDto() = default;

void ProjectProtectedActionResultApiDto::validate()
{
}

web::json::value ProjectProtectedActionResultApiDto::toJson() const
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
    if(additionSwitchersIsSet_) {
        val[utility::conversions::to_string_t("addition_switchers")] = ModelBase::toJson(additionSwitchers_);
    }

    return val;
}
bool ProjectProtectedActionResultApiDto::fromJson(const web::json::value& val)
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
            std::vector<UserBasicDto> refVal;
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
            std::vector<RoleBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addition_switchers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addition_switchers"));
        if(!fieldValue.is_null())
        {
            std::vector<ForceActionEnableDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionSwitchers(refVal);
        }
    }
    return ok;
}


std::string ProjectProtectedActionResultApiDto::getAction() const
{
    return action_;
}

void ProjectProtectedActionResultApiDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::actionIsSet() const
{
    return actionIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetaction()
{
    actionIsSet_ = false;
}

bool ProjectProtectedActionResultApiDto::isEnable() const
{
    return enable_;
}

void ProjectProtectedActionResultApiDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::enableIsSet() const
{
    return enableIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<UserBasicDto>& ProjectProtectedActionResultApiDto::getUsers()
{
    return users_;
}

void ProjectProtectedActionResultApiDto::setUsers(const std::vector<UserBasicDto>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::usersIsSet() const
{
    return usersIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetusers()
{
    usersIsSet_ = false;
}

std::vector<UserTeamBasicDto>& ProjectProtectedActionResultApiDto::getUserTeams()
{
    return userTeams_;
}

void ProjectProtectedActionResultApiDto::setUserTeams(const std::vector<UserTeamBasicDto>& value)
{
    userTeams_ = value;
    userTeamsIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::userTeamsIsSet() const
{
    return userTeamsIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetuserTeams()
{
    userTeamsIsSet_ = false;
}

std::vector<RoleBasicDto>& ProjectProtectedActionResultApiDto::getRoles()
{
    return roles_;
}

void ProjectProtectedActionResultApiDto::setRoles(const std::vector<RoleBasicDto>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::rolesIsSet() const
{
    return rolesIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetroles()
{
    rolesIsSet_ = false;
}

std::vector<ForceActionEnableDto>& ProjectProtectedActionResultApiDto::getAdditionSwitchers()
{
    return additionSwitchers_;
}

void ProjectProtectedActionResultApiDto::setAdditionSwitchers(const std::vector<ForceActionEnableDto>& value)
{
    additionSwitchers_ = value;
    additionSwitchersIsSet_ = true;
}

bool ProjectProtectedActionResultApiDto::additionSwitchersIsSet() const
{
    return additionSwitchersIsSet_;
}

void ProjectProtectedActionResultApiDto::unsetadditionSwitchers()
{
    additionSwitchersIsSet_ = false;
}

}
}
}
}
}


