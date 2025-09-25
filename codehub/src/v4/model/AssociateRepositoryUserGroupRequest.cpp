

#include "huaweicloud/codehub/v4/model/AssociateRepositoryUserGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AssociateRepositoryUserGroupRequest::AssociateRepositoryUserGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
}

AssociateRepositoryUserGroupRequest::~AssociateRepositoryUserGroupRequest() = default;

void AssociateRepositoryUserGroupRequest::validate()
{
}

web::json::value AssociateRepositoryUserGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }

    return val;
}
bool AssociateRepositoryUserGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    return ok;
}


std::string AssociateRepositoryUserGroupRequest::getProjectId() const
{
    return projectId_;
}

void AssociateRepositoryUserGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateRepositoryUserGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateRepositoryUserGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t AssociateRepositoryUserGroupRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AssociateRepositoryUserGroupRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AssociateRepositoryUserGroupRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AssociateRepositoryUserGroupRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string AssociateRepositoryUserGroupRequest::getUserGroupId() const
{
    return userGroupId_;
}

void AssociateRepositoryUserGroupRequest::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool AssociateRepositoryUserGroupRequest::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void AssociateRepositoryUserGroupRequest::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

}
}
}
}
}


