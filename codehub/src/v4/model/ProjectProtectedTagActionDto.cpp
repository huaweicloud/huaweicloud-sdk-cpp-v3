

#include "huaweicloud/codehub/v4/model/ProjectProtectedTagActionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectProtectedTagActionDto::ProjectProtectedTagActionDto()
{
    action_ = "";
    actionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    userIdsIsSet_ = false;
    userNamesIsSet_ = false;
    userTeamIdsIsSet_ = false;
    userTeamNamesIsSet_ = false;
    relatedRoleIdsIsSet_ = false;
}

ProjectProtectedTagActionDto::~ProjectProtectedTagActionDto() = default;

void ProjectProtectedTagActionDto::validate()
{
}

web::json::value ProjectProtectedTagActionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }
    if(userNamesIsSet_) {
        val[utility::conversions::to_string_t("user_names")] = ModelBase::toJson(userNames_);
    }
    if(userTeamIdsIsSet_) {
        val[utility::conversions::to_string_t("user_team_ids")] = ModelBase::toJson(userTeamIds_);
    }
    if(userTeamNamesIsSet_) {
        val[utility::conversions::to_string_t("user_team_names")] = ModelBase::toJson(userTeamNames_);
    }
    if(relatedRoleIdsIsSet_) {
        val[utility::conversions::to_string_t("related_role_ids")] = ModelBase::toJson(relatedRoleIds_);
    }

    return val;
}
bool ProjectProtectedTagActionDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_team_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_team_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTeamIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_team_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_team_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTeamNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_role_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_role_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedRoleIds(refVal);
        }
    }
    return ok;
}


std::string ProjectProtectedTagActionDto::getAction() const
{
    return action_;
}

void ProjectProtectedTagActionDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProjectProtectedTagActionDto::actionIsSet() const
{
    return actionIsSet_;
}

void ProjectProtectedTagActionDto::unsetaction()
{
    actionIsSet_ = false;
}

bool ProjectProtectedTagActionDto::isEnable() const
{
    return enable_;
}

void ProjectProtectedTagActionDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProjectProtectedTagActionDto::enableIsSet() const
{
    return enableIsSet_;
}

void ProjectProtectedTagActionDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<int32_t>& ProjectProtectedTagActionDto::getUserIds()
{
    return userIds_;
}

void ProjectProtectedTagActionDto::setUserIds(std::vector<int32_t> value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ProjectProtectedTagActionDto::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ProjectProtectedTagActionDto::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::vector<std::string>& ProjectProtectedTagActionDto::getUserNames()
{
    return userNames_;
}

void ProjectProtectedTagActionDto::setUserNames(const std::vector<std::string>& value)
{
    userNames_ = value;
    userNamesIsSet_ = true;
}

bool ProjectProtectedTagActionDto::userNamesIsSet() const
{
    return userNamesIsSet_;
}

void ProjectProtectedTagActionDto::unsetuserNames()
{
    userNamesIsSet_ = false;
}

std::vector<int32_t>& ProjectProtectedTagActionDto::getUserTeamIds()
{
    return userTeamIds_;
}

void ProjectProtectedTagActionDto::setUserTeamIds(std::vector<int32_t> value)
{
    userTeamIds_ = value;
    userTeamIdsIsSet_ = true;
}

bool ProjectProtectedTagActionDto::userTeamIdsIsSet() const
{
    return userTeamIdsIsSet_;
}

void ProjectProtectedTagActionDto::unsetuserTeamIds()
{
    userTeamIdsIsSet_ = false;
}

std::vector<std::string>& ProjectProtectedTagActionDto::getUserTeamNames()
{
    return userTeamNames_;
}

void ProjectProtectedTagActionDto::setUserTeamNames(const std::vector<std::string>& value)
{
    userTeamNames_ = value;
    userTeamNamesIsSet_ = true;
}

bool ProjectProtectedTagActionDto::userTeamNamesIsSet() const
{
    return userTeamNamesIsSet_;
}

void ProjectProtectedTagActionDto::unsetuserTeamNames()
{
    userTeamNamesIsSet_ = false;
}

std::vector<std::string>& ProjectProtectedTagActionDto::getRelatedRoleIds()
{
    return relatedRoleIds_;
}

void ProjectProtectedTagActionDto::setRelatedRoleIds(const std::vector<std::string>& value)
{
    relatedRoleIds_ = value;
    relatedRoleIdsIsSet_ = true;
}

bool ProjectProtectedTagActionDto::relatedRoleIdsIsSet() const
{
    return relatedRoleIdsIsSet_;
}

void ProjectProtectedTagActionDto::unsetrelatedRoleIds()
{
    relatedRoleIdsIsSet_ = false;
}

}
}
}
}
}


