

#include "huaweicloud/codehub/v4/model/ProtectedActionBasicApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProtectedActionBasicApiDto::ProtectedActionBasicApiDto()
{
    action_ = "";
    actionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    userIdsIsSet_ = false;
    userTeamIdsIsSet_ = false;
    relatedRoleIdsIsSet_ = false;
    additionSwitchersIsSet_ = false;
}

ProtectedActionBasicApiDto::~ProtectedActionBasicApiDto() = default;

void ProtectedActionBasicApiDto::validate()
{
}

web::json::value ProtectedActionBasicApiDto::toJson() const
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
    if(userTeamIdsIsSet_) {
        val[utility::conversions::to_string_t("user_team_ids")] = ModelBase::toJson(userTeamIds_);
    }
    if(relatedRoleIdsIsSet_) {
        val[utility::conversions::to_string_t("related_role_ids")] = ModelBase::toJson(relatedRoleIds_);
    }
    if(additionSwitchersIsSet_) {
        val[utility::conversions::to_string_t("addition_switchers")] = ModelBase::toJson(additionSwitchers_);
    }

    return val;
}
bool ProtectedActionBasicApiDto::fromJson(const web::json::value& val)
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


std::string ProtectedActionBasicApiDto::getAction() const
{
    return action_;
}

void ProtectedActionBasicApiDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ProtectedActionBasicApiDto::actionIsSet() const
{
    return actionIsSet_;
}

void ProtectedActionBasicApiDto::unsetaction()
{
    actionIsSet_ = false;
}

bool ProtectedActionBasicApiDto::isEnable() const
{
    return enable_;
}

void ProtectedActionBasicApiDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProtectedActionBasicApiDto::enableIsSet() const
{
    return enableIsSet_;
}

void ProtectedActionBasicApiDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<int32_t>& ProtectedActionBasicApiDto::getUserIds()
{
    return userIds_;
}

void ProtectedActionBasicApiDto::setUserIds(std::vector<int32_t> value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ProtectedActionBasicApiDto::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ProtectedActionBasicApiDto::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::vector<int32_t>& ProtectedActionBasicApiDto::getUserTeamIds()
{
    return userTeamIds_;
}

void ProtectedActionBasicApiDto::setUserTeamIds(std::vector<int32_t> value)
{
    userTeamIds_ = value;
    userTeamIdsIsSet_ = true;
}

bool ProtectedActionBasicApiDto::userTeamIdsIsSet() const
{
    return userTeamIdsIsSet_;
}

void ProtectedActionBasicApiDto::unsetuserTeamIds()
{
    userTeamIdsIsSet_ = false;
}

std::vector<std::string>& ProtectedActionBasicApiDto::getRelatedRoleIds()
{
    return relatedRoleIds_;
}

void ProtectedActionBasicApiDto::setRelatedRoleIds(const std::vector<std::string>& value)
{
    relatedRoleIds_ = value;
    relatedRoleIdsIsSet_ = true;
}

bool ProtectedActionBasicApiDto::relatedRoleIdsIsSet() const
{
    return relatedRoleIdsIsSet_;
}

void ProtectedActionBasicApiDto::unsetrelatedRoleIds()
{
    relatedRoleIdsIsSet_ = false;
}

std::vector<ForceActionEnableDto>& ProtectedActionBasicApiDto::getAdditionSwitchers()
{
    return additionSwitchers_;
}

void ProtectedActionBasicApiDto::setAdditionSwitchers(const std::vector<ForceActionEnableDto>& value)
{
    additionSwitchers_ = value;
    additionSwitchersIsSet_ = true;
}

bool ProtectedActionBasicApiDto::additionSwitchersIsSet() const
{
    return additionSwitchersIsSet_;
}

void ProtectedActionBasicApiDto::unsetadditionSwitchers()
{
    additionSwitchersIsSet_ = false;
}

}
}
}
}
}


