

#include "huaweicloud/codehub/v4/model/RepositoryProtectedActionBasicBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryProtectedActionBasicBodyDto::RepositoryProtectedActionBasicBodyDto()
{
    enable_ = false;
    enableIsSet_ = false;
    userIdsIsSet_ = false;
    userTeamIdsIsSet_ = false;
    relatedRoleIdsIsSet_ = false;
}

RepositoryProtectedActionBasicBodyDto::~RepositoryProtectedActionBasicBodyDto() = default;

void RepositoryProtectedActionBasicBodyDto::validate()
{
}

web::json::value RepositoryProtectedActionBasicBodyDto::toJson() const
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

    return val;
}
bool RepositoryProtectedActionBasicBodyDto::fromJson(const web::json::value& val)
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
    return ok;
}


bool RepositoryProtectedActionBasicBodyDto::isEnable() const
{
    return enable_;
}

void RepositoryProtectedActionBasicBodyDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool RepositoryProtectedActionBasicBodyDto::enableIsSet() const
{
    return enableIsSet_;
}

void RepositoryProtectedActionBasicBodyDto::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<Object>& RepositoryProtectedActionBasicBodyDto::getUserIds()
{
    return userIds_;
}

void RepositoryProtectedActionBasicBodyDto::setUserIds(const std::vector<Object>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool RepositoryProtectedActionBasicBodyDto::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void RepositoryProtectedActionBasicBodyDto::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::vector<int32_t>& RepositoryProtectedActionBasicBodyDto::getUserTeamIds()
{
    return userTeamIds_;
}

void RepositoryProtectedActionBasicBodyDto::setUserTeamIds(std::vector<int32_t> value)
{
    userTeamIds_ = value;
    userTeamIdsIsSet_ = true;
}

bool RepositoryProtectedActionBasicBodyDto::userTeamIdsIsSet() const
{
    return userTeamIdsIsSet_;
}

void RepositoryProtectedActionBasicBodyDto::unsetuserTeamIds()
{
    userTeamIdsIsSet_ = false;
}

std::vector<std::string>& RepositoryProtectedActionBasicBodyDto::getRelatedRoleIds()
{
    return relatedRoleIds_;
}

void RepositoryProtectedActionBasicBodyDto::setRelatedRoleIds(const std::vector<std::string>& value)
{
    relatedRoleIds_ = value;
    relatedRoleIdsIsSet_ = true;
}

bool RepositoryProtectedActionBasicBodyDto::relatedRoleIdsIsSet() const
{
    return relatedRoleIdsIsSet_;
}

void RepositoryProtectedActionBasicBodyDto::unsetrelatedRoleIds()
{
    relatedRoleIdsIsSet_ = false;
}

}
}
}
}
}


