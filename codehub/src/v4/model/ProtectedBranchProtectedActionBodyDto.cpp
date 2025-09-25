

#include "huaweicloud/codehub/v4/model/ProtectedBranchProtectedActionBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProtectedBranchProtectedActionBodyDto::ProtectedBranchProtectedActionBodyDto()
{
    enable_ = false;
    enableIsSet_ = false;
    userIdsIsSet_ = false;
    userTeamIdsIsSet_ = false;
    relatedRoleIdsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

ProtectedBranchProtectedActionBodyDto::~ProtectedBranchProtectedActionBodyDto() = default;

void ProtectedBranchProtectedActionBodyDto::validate()
{
}

web::json::value ProtectedBranchProtectedActionBodyDto::toJson() const
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
bool ProtectedBranchProtectedActionBodyDto::fromJson(const web::json::value& val)
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
            std::vector<Object> refVal;
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


bool ProtectedBranchProtectedActionBodyDto::isEnable() const
{
    return enable_;
}

void ProtectedBranchProtectedActionBodyDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProtectedBranchProtectedActionBodyDto::enableIsSet() const
{
    return enableIsSet_;
}

void ProtectedBranchProtectedActionBodyDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<Object>& ProtectedBranchProtectedActionBodyDto::getUserIds()
{
    return userIds_;
}

void ProtectedBranchProtectedActionBodyDto::setUserIds(const std::vector<Object>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ProtectedBranchProtectedActionBodyDto::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ProtectedBranchProtectedActionBodyDto::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::vector<int32_t>& ProtectedBranchProtectedActionBodyDto::getUserTeamIds()
{
    return userTeamIds_;
}

void ProtectedBranchProtectedActionBodyDto::setUserTeamIds(std::vector<int32_t> value)
{
    userTeamIds_ = value;
    userTeamIdsIsSet_ = true;
}

bool ProtectedBranchProtectedActionBodyDto::userTeamIdsIsSet() const
{
    return userTeamIdsIsSet_;
}

void ProtectedBranchProtectedActionBodyDto::unsetuserTeamIds()
{
    userTeamIdsIsSet_ = false;
}

std::vector<std::string>& ProtectedBranchProtectedActionBodyDto::getRelatedRoleIds()
{
    return relatedRoleIds_;
}

void ProtectedBranchProtectedActionBodyDto::setRelatedRoleIds(const std::vector<std::string>& value)
{
    relatedRoleIds_ = value;
    relatedRoleIdsIsSet_ = true;
}

bool ProtectedBranchProtectedActionBodyDto::relatedRoleIdsIsSet() const
{
    return relatedRoleIdsIsSet_;
}

void ProtectedBranchProtectedActionBodyDto::unsetrelatedRoleIds()
{
    relatedRoleIdsIsSet_ = false;
}

std::string ProtectedBranchProtectedActionBodyDto::getAction() const
{
    return action_;
}

void ProtectedBranchProtectedActionBodyDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProtectedBranchProtectedActionBodyDto::actionIsSet() const
{
    return actionIsSet_;
}

void ProtectedBranchProtectedActionBodyDto::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


