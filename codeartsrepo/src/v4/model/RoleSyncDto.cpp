

#include "huaweicloud/codeartsrepo/v4/model/RoleSyncDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RoleSyncDto::RoleSyncDto()
{
    id_ = 0;
    idIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleSyncEnabled_ = false;
    roleSyncEnabledIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleType_ = "";
    roleTypeIsSet_ = false;
    roleChineseName_ = "";
    roleChineseNameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

RoleSyncDto::~RoleSyncDto() = default;

void RoleSyncDto::validate()
{
}

web::json::value RoleSyncDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleSyncEnabledIsSet_) {
        val[utility::conversions::to_string_t("role_sync_enabled")] = ModelBase::toJson(roleSyncEnabled_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }
    if(roleChineseNameIsSet_) {
        val[utility::conversions::to_string_t("role_chinese_name")] = ModelBase::toJson(roleChineseName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool RoleSyncDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_sync_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_sync_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleSyncEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_chinese_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_chinese_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleChineseName(refVal);
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
    return ok;
}


int32_t RoleSyncDto::getId() const
{
    return id_;
}

void RoleSyncDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RoleSyncDto::idIsSet() const
{
    return idIsSet_;
}

void RoleSyncDto::unsetid()
{
    idIsSet_ = false;
}

std::string RoleSyncDto::getRoleId() const
{
    return roleId_;
}

void RoleSyncDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool RoleSyncDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void RoleSyncDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

bool RoleSyncDto::isRoleSyncEnabled() const
{
    return roleSyncEnabled_;
}

void RoleSyncDto::setRoleSyncEnabled(bool value)
{
    roleSyncEnabled_ = value;
    roleSyncEnabledIsSet_ = true;
}

bool RoleSyncDto::roleSyncEnabledIsSet() const
{
    return roleSyncEnabledIsSet_;
}

void RoleSyncDto::unsetroleSyncEnabled()
{
    roleSyncEnabledIsSet_ = false;
}

std::string RoleSyncDto::getRoleName() const
{
    return roleName_;
}

void RoleSyncDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool RoleSyncDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void RoleSyncDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string RoleSyncDto::getRoleType() const
{
    return roleType_;
}

void RoleSyncDto::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool RoleSyncDto::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void RoleSyncDto::unsetroleType()
{
    roleTypeIsSet_ = false;
}

std::string RoleSyncDto::getRoleChineseName() const
{
    return roleChineseName_;
}

void RoleSyncDto::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool RoleSyncDto::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void RoleSyncDto::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

std::string RoleSyncDto::getCreatedAt() const
{
    return createdAt_;
}

void RoleSyncDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RoleSyncDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RoleSyncDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RoleSyncDto::getUpdatedAt() const
{
    return updatedAt_;
}

void RoleSyncDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RoleSyncDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RoleSyncDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


