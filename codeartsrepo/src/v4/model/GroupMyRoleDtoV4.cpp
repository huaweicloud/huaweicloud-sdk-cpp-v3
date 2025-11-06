

#include "huaweicloud/codeartsrepo/v4/model/GroupMyRoleDtoV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GroupMyRoleDtoV4::GroupMyRoleDtoV4()
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
    isProjectAdmin_ = 0;
    isProjectAdminIsSet_ = false;
    isGroupCreator_ = 0;
    isGroupCreatorIsSet_ = false;
    isRepoCreator_ = 0;
    isRepoCreatorIsSet_ = false;
    roleShowFlag_ = 0;
    roleShowFlagIsSet_ = false;
}

GroupMyRoleDtoV4::~GroupMyRoleDtoV4() = default;

void GroupMyRoleDtoV4::validate()
{
}

web::json::value GroupMyRoleDtoV4::toJson() const
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
    if(isProjectAdminIsSet_) {
        val[utility::conversions::to_string_t("is_project_admin")] = ModelBase::toJson(isProjectAdmin_);
    }
    if(isGroupCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_group_creator")] = ModelBase::toJson(isGroupCreator_);
    }
    if(isRepoCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_repo_creator")] = ModelBase::toJson(isRepoCreator_);
    }
    if(roleShowFlagIsSet_) {
        val[utility::conversions::to_string_t("role_show_flag")] = ModelBase::toJson(roleShowFlag_);
    }

    return val;
}
bool GroupMyRoleDtoV4::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_project_admin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_project_admin"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProjectAdmin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_group_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_group_creator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGroupCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_repo_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_repo_creator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRepoCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_show_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_show_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleShowFlag(refVal);
        }
    }
    return ok;
}


int32_t GroupMyRoleDtoV4::getId() const
{
    return id_;
}

void GroupMyRoleDtoV4::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupMyRoleDtoV4::idIsSet() const
{
    return idIsSet_;
}

void GroupMyRoleDtoV4::unsetid()
{
    idIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getAccessLevel() const
{
    return accessLevel_;
}

void GroupMyRoleDtoV4::setAccessLevel(int32_t value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool GroupMyRoleDtoV4::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void GroupMyRoleDtoV4::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

std::string GroupMyRoleDtoV4::getRoleNamecn() const
{
    return roleNamecn_;
}

void GroupMyRoleDtoV4::setRoleNamecn(const std::string& value)
{
    roleNamecn_ = value;
    roleNamecnIsSet_ = true;
}

bool GroupMyRoleDtoV4::roleNamecnIsSet() const
{
    return roleNamecnIsSet_;
}

void GroupMyRoleDtoV4::unsetroleNamecn()
{
    roleNamecnIsSet_ = false;
}

std::string GroupMyRoleDtoV4::getRoleNamen() const
{
    return roleNamen_;
}

void GroupMyRoleDtoV4::setRoleNamen(const std::string& value)
{
    roleNamen_ = value;
    roleNamenIsSet_ = true;
}

bool GroupMyRoleDtoV4::roleNamenIsSet() const
{
    return roleNamenIsSet_;
}

void GroupMyRoleDtoV4::unsetroleNamen()
{
    roleNamenIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getSourceId() const
{
    return sourceId_;
}

void GroupMyRoleDtoV4::setSourceId(int32_t value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool GroupMyRoleDtoV4::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void GroupMyRoleDtoV4::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string GroupMyRoleDtoV4::getSourceType() const
{
    return sourceType_;
}

void GroupMyRoleDtoV4::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool GroupMyRoleDtoV4::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void GroupMyRoleDtoV4::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getUserId() const
{
    return userId_;
}

void GroupMyRoleDtoV4::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GroupMyRoleDtoV4::userIdIsSet() const
{
    return userIdIsSet_;
}

void GroupMyRoleDtoV4::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getNotificationLevel() const
{
    return notificationLevel_;
}

void GroupMyRoleDtoV4::setNotificationLevel(int32_t value)
{
    notificationLevel_ = value;
    notificationLevelIsSet_ = true;
}

bool GroupMyRoleDtoV4::notificationLevelIsSet() const
{
    return notificationLevelIsSet_;
}

void GroupMyRoleDtoV4::unsetnotificationLevel()
{
    notificationLevelIsSet_ = false;
}

std::string GroupMyRoleDtoV4::getCreatedAt() const
{
    return createdAt_;
}

void GroupMyRoleDtoV4::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GroupMyRoleDtoV4::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GroupMyRoleDtoV4::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GroupMyRoleDtoV4::getUpdatedAt() const
{
    return updatedAt_;
}

void GroupMyRoleDtoV4::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GroupMyRoleDtoV4::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GroupMyRoleDtoV4::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void GroupMyRoleDtoV4::setIsProjectAdmin(int32_t value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool GroupMyRoleDtoV4::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void GroupMyRoleDtoV4::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getIsGroupCreator() const
{
    return isGroupCreator_;
}

void GroupMyRoleDtoV4::setIsGroupCreator(int32_t value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool GroupMyRoleDtoV4::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void GroupMyRoleDtoV4::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getIsRepoCreator() const
{
    return isRepoCreator_;
}

void GroupMyRoleDtoV4::setIsRepoCreator(int32_t value)
{
    isRepoCreator_ = value;
    isRepoCreatorIsSet_ = true;
}

bool GroupMyRoleDtoV4::isRepoCreatorIsSet() const
{
    return isRepoCreatorIsSet_;
}

void GroupMyRoleDtoV4::unsetisRepoCreator()
{
    isRepoCreatorIsSet_ = false;
}

int32_t GroupMyRoleDtoV4::getRoleShowFlag() const
{
    return roleShowFlag_;
}

void GroupMyRoleDtoV4::setRoleShowFlag(int32_t value)
{
    roleShowFlag_ = value;
    roleShowFlagIsSet_ = true;
}

bool GroupMyRoleDtoV4::roleShowFlagIsSet() const
{
    return roleShowFlagIsSet_;
}

void GroupMyRoleDtoV4::unsetroleShowFlag()
{
    roleShowFlagIsSet_ = false;
}

}
}
}
}
}


