

#include "huaweicloud/codehub/v4/model/GroupMyRoleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GroupMyRoleDto::GroupMyRoleDto()
{
    id_ = 0;
    idIsSet_ = false;
    accessLevel_ = 0;
    accessLevelIsSet_ = false;
    roleNamecn_ = "";
    roleNamecnIsSet_ = false;
    roleNamen_ = "";
    roleNamenIsSet_ = false;
    sourceId_ = 0;
    sourceIdIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    userId_ = 0;
    userIdIsSet_ = false;
    notificationLevel_ = 0;
    notificationLevelIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    createdById_ = 0;
    createdByIdIsSet_ = false;
    inviteEmail_ = "";
    inviteEmailIsSet_ = false;
    inviteToken_ = "";
    inviteTokenIsSet_ = false;
    inviteAcceptedAt_ = "";
    inviteAcceptedAtIsSet_ = false;
    requestedAt_ = "";
    requestedAtIsSet_ = false;
    expiresAt_ = "";
    expiresAtIsSet_ = false;
    limited_ = false;
    limitedIsSet_ = false;
    isProjectAdmin_ = 0;
    isProjectAdminIsSet_ = false;
    isGroupCreator_ = 0;
    isGroupCreatorIsSet_ = false;
    isRepoCreator_ = 0;
    isRepoCreatorIsSet_ = false;
    roleShowFlag_ = 0;
    roleShowFlagIsSet_ = false;
}

GroupMyRoleDto::~GroupMyRoleDto() = default;

void GroupMyRoleDto::validate()
{
}

web::json::value GroupMyRoleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(accessLevelIsSet_) {
        val[utility::conversions::to_string_t("access_level")] = ModelBase::toJson(accessLevel_);
    }
    if(roleNamecnIsSet_) {
        val[utility::conversions::to_string_t("role_namecn")] = ModelBase::toJson(roleNamecn_);
    }
    if(roleNamenIsSet_) {
        val[utility::conversions::to_string_t("role_namen")] = ModelBase::toJson(roleNamen_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(notificationLevelIsSet_) {
        val[utility::conversions::to_string_t("notification_level")] = ModelBase::toJson(notificationLevel_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(createdByIdIsSet_) {
        val[utility::conversions::to_string_t("created_by_id")] = ModelBase::toJson(createdById_);
    }
    if(inviteEmailIsSet_) {
        val[utility::conversions::to_string_t("invite_email")] = ModelBase::toJson(inviteEmail_);
    }
    if(inviteTokenIsSet_) {
        val[utility::conversions::to_string_t("invite_token")] = ModelBase::toJson(inviteToken_);
    }
    if(inviteAcceptedAtIsSet_) {
        val[utility::conversions::to_string_t("invite_accepted_at")] = ModelBase::toJson(inviteAcceptedAt_);
    }
    if(requestedAtIsSet_) {
        val[utility::conversions::to_string_t("requested_at")] = ModelBase::toJson(requestedAt_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }
    if(limitedIsSet_) {
        val[utility::conversions::to_string_t("limited")] = ModelBase::toJson(limited_);
    }
    if(isProjectAdminIsSet_) {
        val[utility::conversions::to_string_t("isProjectAdmin")] = ModelBase::toJson(isProjectAdmin_);
    }
    if(isGroupCreatorIsSet_) {
        val[utility::conversions::to_string_t("isGroupCreator")] = ModelBase::toJson(isGroupCreator_);
    }
    if(isRepoCreatorIsSet_) {
        val[utility::conversions::to_string_t("isRepoCreator")] = ModelBase::toJson(isRepoCreator_);
    }
    if(roleShowFlagIsSet_) {
        val[utility::conversions::to_string_t("roleShowFlag")] = ModelBase::toJson(roleShowFlag_);
    }

    return val;
}
bool GroupMyRoleDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_namecn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_namecn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNamecn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_namen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_namen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNamen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedById(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invite_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invite_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInviteEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invite_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invite_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInviteToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invite_accepted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invite_accepted_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInviteAcceptedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requested_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requested_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limited"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isProjectAdmin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isProjectAdmin"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProjectAdmin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isGroupCreator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isGroupCreator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGroupCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isRepoCreator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRepoCreator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRepoCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roleShowFlag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roleShowFlag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleShowFlag(refVal);
        }
    }
    return ok;
}


int32_t GroupMyRoleDto::getId() const
{
    return id_;
}

void GroupMyRoleDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupMyRoleDto::idIsSet() const
{
    return idIsSet_;
}

void GroupMyRoleDto::unsetid()
{
    idIsSet_ = false;
}

int32_t GroupMyRoleDto::getAccessLevel() const
{
    return accessLevel_;
}

void GroupMyRoleDto::setAccessLevel(int32_t value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool GroupMyRoleDto::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void GroupMyRoleDto::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

std::string GroupMyRoleDto::getRoleNamecn() const
{
    return roleNamecn_;
}

void GroupMyRoleDto::setRoleNamecn(const std::string& value)
{
    roleNamecn_ = value;
    roleNamecnIsSet_ = true;
}

bool GroupMyRoleDto::roleNamecnIsSet() const
{
    return roleNamecnIsSet_;
}

void GroupMyRoleDto::unsetroleNamecn()
{
    roleNamecnIsSet_ = false;
}

std::string GroupMyRoleDto::getRoleNamen() const
{
    return roleNamen_;
}

void GroupMyRoleDto::setRoleNamen(const std::string& value)
{
    roleNamen_ = value;
    roleNamenIsSet_ = true;
}

bool GroupMyRoleDto::roleNamenIsSet() const
{
    return roleNamenIsSet_;
}

void GroupMyRoleDto::unsetroleNamen()
{
    roleNamenIsSet_ = false;
}

int32_t GroupMyRoleDto::getSourceId() const
{
    return sourceId_;
}

void GroupMyRoleDto::setSourceId(int32_t value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool GroupMyRoleDto::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void GroupMyRoleDto::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string GroupMyRoleDto::getSourceType() const
{
    return sourceType_;
}

void GroupMyRoleDto::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool GroupMyRoleDto::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void GroupMyRoleDto::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

int32_t GroupMyRoleDto::getUserId() const
{
    return userId_;
}

void GroupMyRoleDto::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GroupMyRoleDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void GroupMyRoleDto::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t GroupMyRoleDto::getNotificationLevel() const
{
    return notificationLevel_;
}

void GroupMyRoleDto::setNotificationLevel(int32_t value)
{
    notificationLevel_ = value;
    notificationLevelIsSet_ = true;
}

bool GroupMyRoleDto::notificationLevelIsSet() const
{
    return notificationLevelIsSet_;
}

void GroupMyRoleDto::unsetnotificationLevel()
{
    notificationLevelIsSet_ = false;
}

std::string GroupMyRoleDto::getCreatedAt() const
{
    return createdAt_;
}

void GroupMyRoleDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GroupMyRoleDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GroupMyRoleDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GroupMyRoleDto::getUpdatedAt() const
{
    return updatedAt_;
}

void GroupMyRoleDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GroupMyRoleDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GroupMyRoleDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t GroupMyRoleDto::getCreatedById() const
{
    return createdById_;
}

void GroupMyRoleDto::setCreatedById(int32_t value)
{
    createdById_ = value;
    createdByIdIsSet_ = true;
}

bool GroupMyRoleDto::createdByIdIsSet() const
{
    return createdByIdIsSet_;
}

void GroupMyRoleDto::unsetcreatedById()
{
    createdByIdIsSet_ = false;
}

std::string GroupMyRoleDto::getInviteEmail() const
{
    return inviteEmail_;
}

void GroupMyRoleDto::setInviteEmail(const std::string& value)
{
    inviteEmail_ = value;
    inviteEmailIsSet_ = true;
}

bool GroupMyRoleDto::inviteEmailIsSet() const
{
    return inviteEmailIsSet_;
}

void GroupMyRoleDto::unsetinviteEmail()
{
    inviteEmailIsSet_ = false;
}

std::string GroupMyRoleDto::getInviteToken() const
{
    return inviteToken_;
}

void GroupMyRoleDto::setInviteToken(const std::string& value)
{
    inviteToken_ = value;
    inviteTokenIsSet_ = true;
}

bool GroupMyRoleDto::inviteTokenIsSet() const
{
    return inviteTokenIsSet_;
}

void GroupMyRoleDto::unsetinviteToken()
{
    inviteTokenIsSet_ = false;
}

std::string GroupMyRoleDto::getInviteAcceptedAt() const
{
    return inviteAcceptedAt_;
}

void GroupMyRoleDto::setInviteAcceptedAt(const std::string& value)
{
    inviteAcceptedAt_ = value;
    inviteAcceptedAtIsSet_ = true;
}

bool GroupMyRoleDto::inviteAcceptedAtIsSet() const
{
    return inviteAcceptedAtIsSet_;
}

void GroupMyRoleDto::unsetinviteAcceptedAt()
{
    inviteAcceptedAtIsSet_ = false;
}

std::string GroupMyRoleDto::getRequestedAt() const
{
    return requestedAt_;
}

void GroupMyRoleDto::setRequestedAt(const std::string& value)
{
    requestedAt_ = value;
    requestedAtIsSet_ = true;
}

bool GroupMyRoleDto::requestedAtIsSet() const
{
    return requestedAtIsSet_;
}

void GroupMyRoleDto::unsetrequestedAt()
{
    requestedAtIsSet_ = false;
}

std::string GroupMyRoleDto::getExpiresAt() const
{
    return expiresAt_;
}

void GroupMyRoleDto::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool GroupMyRoleDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void GroupMyRoleDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

bool GroupMyRoleDto::isLimited() const
{
    return limited_;
}

void GroupMyRoleDto::setLimited(bool value)
{
    limited_ = value;
    limitedIsSet_ = true;
}

bool GroupMyRoleDto::limitedIsSet() const
{
    return limitedIsSet_;
}

void GroupMyRoleDto::unsetlimited()
{
    limitedIsSet_ = false;
}

int32_t GroupMyRoleDto::getIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void GroupMyRoleDto::setIsProjectAdmin(int32_t value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool GroupMyRoleDto::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void GroupMyRoleDto::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

int32_t GroupMyRoleDto::getIsGroupCreator() const
{
    return isGroupCreator_;
}

void GroupMyRoleDto::setIsGroupCreator(int32_t value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool GroupMyRoleDto::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void GroupMyRoleDto::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

int32_t GroupMyRoleDto::getIsRepoCreator() const
{
    return isRepoCreator_;
}

void GroupMyRoleDto::setIsRepoCreator(int32_t value)
{
    isRepoCreator_ = value;
    isRepoCreatorIsSet_ = true;
}

bool GroupMyRoleDto::isRepoCreatorIsSet() const
{
    return isRepoCreatorIsSet_;
}

void GroupMyRoleDto::unsetisRepoCreator()
{
    isRepoCreatorIsSet_ = false;
}

int32_t GroupMyRoleDto::getRoleShowFlag() const
{
    return roleShowFlag_;
}

void GroupMyRoleDto::setRoleShowFlag(int32_t value)
{
    roleShowFlag_ = value;
    roleShowFlagIsSet_ = true;
}

bool GroupMyRoleDto::roleShowFlagIsSet() const
{
    return roleShowFlagIsSet_;
}

void GroupMyRoleDto::unsetroleShowFlag()
{
    roleShowFlagIsSet_ = false;
}

}
}
}
}
}


