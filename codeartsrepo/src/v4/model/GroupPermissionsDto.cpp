

#include "huaweicloud/codeartsrepo/v4/model/GroupPermissionsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GroupPermissionsDto::GroupPermissionsDto()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

GroupPermissionsDto::~GroupPermissionsDto() = default;

void GroupPermissionsDto::validate()
{
}

web::json::value GroupPermissionsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool GroupPermissionsDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string GroupPermissionsDto::getProjectId() const
{
    return projectId_;
}

void GroupPermissionsDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool GroupPermissionsDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void GroupPermissionsDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string GroupPermissionsDto::getGroupName() const
{
    return groupName_;
}

void GroupPermissionsDto::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool GroupPermissionsDto::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void GroupPermissionsDto::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string GroupPermissionsDto::getGroupId() const
{
    return groupId_;
}

void GroupPermissionsDto::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupPermissionsDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupPermissionsDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


