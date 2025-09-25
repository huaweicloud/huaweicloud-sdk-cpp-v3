

#include "huaweicloud/codehub/v4/model/UserGroupDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UserGroupDto::UserGroupDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    memberCount_ = 0;
    memberCountIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

UserGroupDto::~UserGroupDto() = default;

void UserGroupDto::validate()
{
}

web::json::value UserGroupDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(memberCountIsSet_) {
        val[utility::conversions::to_string_t("member_count")] = ModelBase::toJson(memberCount_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool UserGroupDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberCount(refVal);
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


int32_t UserGroupDto::getId() const
{
    return id_;
}

void UserGroupDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserGroupDto::idIsSet() const
{
    return idIsSet_;
}

void UserGroupDto::unsetid()
{
    idIsSet_ = false;
}

std::string UserGroupDto::getName() const
{
    return name_;
}

void UserGroupDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserGroupDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserGroupDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UserGroupDto::getUserGroupId() const
{
    return userGroupId_;
}

void UserGroupDto::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool UserGroupDto::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void UserGroupDto::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

std::string UserGroupDto::getProjectId() const
{
    return projectId_;
}

void UserGroupDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UserGroupDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UserGroupDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UserGroupDto::getTenantId() const
{
    return tenantId_;
}

void UserGroupDto::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UserGroupDto::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UserGroupDto::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string UserGroupDto::getGroupType() const
{
    return groupType_;
}

void UserGroupDto::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool UserGroupDto::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void UserGroupDto::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

int32_t UserGroupDto::getMemberCount() const
{
    return memberCount_;
}

void UserGroupDto::setMemberCount(int32_t value)
{
    memberCount_ = value;
    memberCountIsSet_ = true;
}

bool UserGroupDto::memberCountIsSet() const
{
    return memberCountIsSet_;
}

void UserGroupDto::unsetmemberCount()
{
    memberCountIsSet_ = false;
}

std::string UserGroupDto::getCreatedAt() const
{
    return createdAt_;
}

void UserGroupDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UserGroupDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UserGroupDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UserGroupDto::getUpdatedAt() const
{
    return updatedAt_;
}

void UserGroupDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UserGroupDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UserGroupDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


