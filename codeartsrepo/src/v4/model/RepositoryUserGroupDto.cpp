

#include "huaweicloud/codeartsrepo/v4/model/RepositoryUserGroupDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryUserGroupDto::RepositoryUserGroupDto()
{
    userGroupName_ = "";
    userGroupNameIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    userCount_ = "";
    userCountIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RepositoryUserGroupDto::~RepositoryUserGroupDto() = default;

void RepositoryUserGroupDto::validate()
{
}

web::json::value RepositoryUserGroupDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userGroupNameIsSet_) {
        val[utility::conversions::to_string_t("user_group_name")] = ModelBase::toJson(userGroupName_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(userCountIsSet_) {
        val[utility::conversions::to_string_t("user_count")] = ModelBase::toJson(userCount_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool RepositoryUserGroupDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserCount(refVal);
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


std::string RepositoryUserGroupDto::getUserGroupName() const
{
    return userGroupName_;
}

void RepositoryUserGroupDto::setUserGroupName(const std::string& value)
{
    userGroupName_ = value;
    userGroupNameIsSet_ = true;
}

bool RepositoryUserGroupDto::userGroupNameIsSet() const
{
    return userGroupNameIsSet_;
}

void RepositoryUserGroupDto::unsetuserGroupName()
{
    userGroupNameIsSet_ = false;
}

std::string RepositoryUserGroupDto::getUserGroupId() const
{
    return userGroupId_;
}

void RepositoryUserGroupDto::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool RepositoryUserGroupDto::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void RepositoryUserGroupDto::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

std::string RepositoryUserGroupDto::getProjectId() const
{
    return projectId_;
}

void RepositoryUserGroupDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryUserGroupDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryUserGroupDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryUserGroupDto::getUserCount() const
{
    return userCount_;
}

void RepositoryUserGroupDto::setUserCount(const std::string& value)
{
    userCount_ = value;
    userCountIsSet_ = true;
}

bool RepositoryUserGroupDto::userCountIsSet() const
{
    return userCountIsSet_;
}

void RepositoryUserGroupDto::unsetuserCount()
{
    userCountIsSet_ = false;
}

std::string RepositoryUserGroupDto::getDescription() const
{
    return description_;
}

void RepositoryUserGroupDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryUserGroupDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryUserGroupDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


