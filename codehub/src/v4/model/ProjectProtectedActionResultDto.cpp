

#include "huaweicloud/codehub/v4/model/ProjectProtectedActionResultDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectProtectedActionResultDto::ProjectProtectedActionResultDto()
{
    action_ = "";
    actionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    levels_ = "";
    levelsIsSet_ = false;
    levelNames_ = "";
    levelNamesIsSet_ = false;
    usersIsSet_ = false;
    userTeamsIsSet_ = false;
    rolesIsSet_ = false;
    additionSwitchersIsSet_ = false;
}

ProjectProtectedActionResultDto::~ProjectProtectedActionResultDto() = default;

void ProjectProtectedActionResultDto::validate()
{
}

web::json::value ProjectProtectedActionResultDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(levelsIsSet_) {
        val[utility::conversions::to_string_t("levels")] = ModelBase::toJson(levels_);
    }
    if(levelNamesIsSet_) {
        val[utility::conversions::to_string_t("level_names")] = ModelBase::toJson(levelNames_);
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
bool ProjectProtectedActionResultDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("levels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("levels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevelNames(refVal);
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


std::string ProjectProtectedActionResultDto::getAction() const
{
    return action_;
}

void ProjectProtectedActionResultDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProjectProtectedActionResultDto::actionIsSet() const
{
    return actionIsSet_;
}

void ProjectProtectedActionResultDto::unsetaction()
{
    actionIsSet_ = false;
}

bool ProjectProtectedActionResultDto::isEnable() const
{
    return enable_;
}

void ProjectProtectedActionResultDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProjectProtectedActionResultDto::enableIsSet() const
{
    return enableIsSet_;
}

void ProjectProtectedActionResultDto::unsetenable()
{
    enableIsSet_ = false;
}

std::string ProjectProtectedActionResultDto::getLevels() const
{
    return levels_;
}

void ProjectProtectedActionResultDto::setLevels(const std::string& value)
{
    levels_ = value;
    levelsIsSet_ = true;
}

bool ProjectProtectedActionResultDto::levelsIsSet() const
{
    return levelsIsSet_;
}

void ProjectProtectedActionResultDto::unsetlevels()
{
    levelsIsSet_ = false;
}

std::string ProjectProtectedActionResultDto::getLevelNames() const
{
    return levelNames_;
}

void ProjectProtectedActionResultDto::setLevelNames(const std::string& value)
{
    levelNames_ = value;
    levelNamesIsSet_ = true;
}

bool ProjectProtectedActionResultDto::levelNamesIsSet() const
{
    return levelNamesIsSet_;
}

void ProjectProtectedActionResultDto::unsetlevelNames()
{
    levelNamesIsSet_ = false;
}

std::vector<UserBasicDto>& ProjectProtectedActionResultDto::getUsers()
{
    return users_;
}

void ProjectProtectedActionResultDto::setUsers(const std::vector<UserBasicDto>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ProjectProtectedActionResultDto::usersIsSet() const
{
    return usersIsSet_;
}

void ProjectProtectedActionResultDto::unsetusers()
{
    usersIsSet_ = false;
}

std::vector<UserTeamBasicDto>& ProjectProtectedActionResultDto::getUserTeams()
{
    return userTeams_;
}

void ProjectProtectedActionResultDto::setUserTeams(const std::vector<UserTeamBasicDto>& value)
{
    userTeams_ = value;
    userTeamsIsSet_ = true;
}

bool ProjectProtectedActionResultDto::userTeamsIsSet() const
{
    return userTeamsIsSet_;
}

void ProjectProtectedActionResultDto::unsetuserTeams()
{
    userTeamsIsSet_ = false;
}

std::vector<RoleBasicDto>& ProjectProtectedActionResultDto::getRoles()
{
    return roles_;
}

void ProjectProtectedActionResultDto::setRoles(const std::vector<RoleBasicDto>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ProjectProtectedActionResultDto::rolesIsSet() const
{
    return rolesIsSet_;
}

void ProjectProtectedActionResultDto::unsetroles()
{
    rolesIsSet_ = false;
}

std::vector<ForceActionEnableDto>& ProjectProtectedActionResultDto::getAdditionSwitchers()
{
    return additionSwitchers_;
}

void ProjectProtectedActionResultDto::setAdditionSwitchers(const std::vector<ForceActionEnableDto>& value)
{
    additionSwitchers_ = value;
    additionSwitchersIsSet_ = true;
}

bool ProjectProtectedActionResultDto::additionSwitchersIsSet() const
{
    return additionSwitchersIsSet_;
}

void ProjectProtectedActionResultDto::unsetadditionSwitchers()
{
    additionSwitchersIsSet_ = false;
}

}
}
}
}
}


