

#include "huaweicloud/codeartsrepo/v4/model/AssociateGroupUserGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AssociateGroupUserGroupRequest::AssociateGroupUserGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
}

AssociateGroupUserGroupRequest::~AssociateGroupUserGroupRequest() = default;

void AssociateGroupUserGroupRequest::validate()
{
}

web::json::value AssociateGroupUserGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }

    return val;
}
bool AssociateGroupUserGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


std::string AssociateGroupUserGroupRequest::getProjectId() const
{
    return projectId_;
}

void AssociateGroupUserGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateGroupUserGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateGroupUserGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t AssociateGroupUserGroupRequest::getGroupId() const
{
    return groupId_;
}

void AssociateGroupUserGroupRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AssociateGroupUserGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AssociateGroupUserGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string AssociateGroupUserGroupRequest::getUserGroupId() const
{
    return userGroupId_;
}

void AssociateGroupUserGroupRequest::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool AssociateGroupUserGroupRequest::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void AssociateGroupUserGroupRequest::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

}
}
}
}
}


