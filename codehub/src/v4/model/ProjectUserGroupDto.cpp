

#include "huaweicloud/codehub/v4/model/ProjectUserGroupDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectUserGroupDto::ProjectUserGroupDto()
{
    id_ = 0;
    idIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
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
    description_ = "";
    descriptionIsSet_ = false;
}

ProjectUserGroupDto::~ProjectUserGroupDto() = default;

void ProjectUserGroupDto::validate()
{
}

web::json::value ProjectUserGroupDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ProjectUserGroupDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


int32_t ProjectUserGroupDto::getId() const
{
    return id_;
}

void ProjectUserGroupDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectUserGroupDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectUserGroupDto::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectUserGroupDto::getUserGroupId() const
{
    return userGroupId_;
}

void ProjectUserGroupDto::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool ProjectUserGroupDto::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void ProjectUserGroupDto::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

std::string ProjectUserGroupDto::getName() const
{
    return name_;
}

void ProjectUserGroupDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectUserGroupDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectUserGroupDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectUserGroupDto::getProjectId() const
{
    return projectId_;
}

void ProjectUserGroupDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectUserGroupDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectUserGroupDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ProjectUserGroupDto::getTenantId() const
{
    return tenantId_;
}

void ProjectUserGroupDto::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ProjectUserGroupDto::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ProjectUserGroupDto::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ProjectUserGroupDto::getGroupType() const
{
    return groupType_;
}

void ProjectUserGroupDto::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ProjectUserGroupDto::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ProjectUserGroupDto::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

int32_t ProjectUserGroupDto::getMemberCount() const
{
    return memberCount_;
}

void ProjectUserGroupDto::setMemberCount(int32_t value)
{
    memberCount_ = value;
    memberCountIsSet_ = true;
}

bool ProjectUserGroupDto::memberCountIsSet() const
{
    return memberCountIsSet_;
}

void ProjectUserGroupDto::unsetmemberCount()
{
    memberCountIsSet_ = false;
}

std::string ProjectUserGroupDto::getCreatedAt() const
{
    return createdAt_;
}

void ProjectUserGroupDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ProjectUserGroupDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ProjectUserGroupDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ProjectUserGroupDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ProjectUserGroupDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ProjectUserGroupDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ProjectUserGroupDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ProjectUserGroupDto::getDescription() const
{
    return description_;
}

void ProjectUserGroupDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectUserGroupDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectUserGroupDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


