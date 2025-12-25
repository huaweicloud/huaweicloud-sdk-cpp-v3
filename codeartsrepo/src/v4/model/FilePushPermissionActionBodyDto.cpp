

#include "huaweicloud/codeartsrepo/v4/model/FilePushPermissionActionBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




FilePushPermissionActionBodyDto::FilePushPermissionActionBodyDto()
{
    enable_ = false;
    enableIsSet_ = false;
    userIdsIsSet_ = false;
    userTeamIdsIsSet_ = false;
    relatedRoleIdsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

FilePushPermissionActionBodyDto::~FilePushPermissionActionBodyDto() = default;

void FilePushPermissionActionBodyDto::validate()
{
}

web::json::value FilePushPermissionActionBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }
    if(userTeamIdsIsSet_) {
        val[utility::conversions::to_string_t("user_team_ids")] = ModelBase::toJson(userTeamIds_);
    }
    if(relatedRoleIdsIsSet_) {
        val[utility::conversions::to_string_t("related_role_ids")] = ModelBase::toJson(relatedRoleIds_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool FilePushPermissionActionBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("user_team_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_team_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTeamIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


bool FilePushPermissionActionBodyDto::isEnable() const
{
    return enable_;
}

void FilePushPermissionActionBodyDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool FilePushPermissionActionBodyDto::enableIsSet() const
{
    return enableIsSet_;
}

void FilePushPermissionActionBodyDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<int32_t>& FilePushPermissionActionBodyDto::getUserIds()
{
    return userIds_;
}

void FilePushPermissionActionBodyDto::setUserIds(std::vector<int32_t> value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool FilePushPermissionActionBodyDto::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void FilePushPermissionActionBodyDto::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::vector<int32_t>& FilePushPermissionActionBodyDto::getUserTeamIds()
{
    return userTeamIds_;
}

void FilePushPermissionActionBodyDto::setUserTeamIds(std::vector<int32_t> value)
{
    userTeamIds_ = value;
    userTeamIdsIsSet_ = true;
}

bool FilePushPermissionActionBodyDto::userTeamIdsIsSet() const
{
    return userTeamIdsIsSet_;
}

void FilePushPermissionActionBodyDto::unsetuserTeamIds()
{
    userTeamIdsIsSet_ = false;
}

std::vector<std::string>& FilePushPermissionActionBodyDto::getRelatedRoleIds()
{
    return relatedRoleIds_;
}

void FilePushPermissionActionBodyDto::setRelatedRoleIds(const std::vector<std::string>& value)
{
    relatedRoleIds_ = value;
    relatedRoleIdsIsSet_ = true;
}

bool FilePushPermissionActionBodyDto::relatedRoleIdsIsSet() const
{
    return relatedRoleIdsIsSet_;
}

void FilePushPermissionActionBodyDto::unsetrelatedRoleIds()
{
    relatedRoleIdsIsSet_ = false;
}

std::string FilePushPermissionActionBodyDto::getAction() const
{
    return action_;
}

void FilePushPermissionActionBodyDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool FilePushPermissionActionBodyDto::actionIsSet() const
{
    return actionIsSet_;
}

void FilePushPermissionActionBodyDto::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


