

#include "huaweicloud/codeartsrepo/v4/model/UserGroupPermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UserGroupPermissionDto::UserGroupPermissionDto()
{
    canCreateGroup_ = false;
    canCreateGroupIsSet_ = false;
    canCraeteProject_ = false;
    canCraeteProjectIsSet_ = false;
    canSetGroup_ = false;
    canSetGroupIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
    groupVisibility_ = "";
    groupVisibilityIsSet_ = false;
}

UserGroupPermissionDto::~UserGroupPermissionDto() = default;

void UserGroupPermissionDto::validate()
{
}

web::json::value UserGroupPermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canCreateGroupIsSet_) {
        val[utility::conversions::to_string_t("can_create_group")] = ModelBase::toJson(canCreateGroup_);
    }
    if(canCraeteProjectIsSet_) {
        val[utility::conversions::to_string_t("can_craete_project")] = ModelBase::toJson(canCraeteProject_);
    }
    if(canSetGroupIsSet_) {
        val[utility::conversions::to_string_t("can_set_group")] = ModelBase::toJson(canSetGroup_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupVisibilityIsSet_) {
        val[utility::conversions::to_string_t("group_visibility")] = ModelBase::toJson(groupVisibility_);
    }

    return val;
}
bool UserGroupPermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_create_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_create_group"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCreateGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_craete_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_craete_project"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCraeteProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_set_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_set_group"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanSetGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupVisibility(refVal);
        }
    }
    return ok;
}


bool UserGroupPermissionDto::isCanCreateGroup() const
{
    return canCreateGroup_;
}

void UserGroupPermissionDto::setCanCreateGroup(bool value)
{
    canCreateGroup_ = value;
    canCreateGroupIsSet_ = true;
}

bool UserGroupPermissionDto::canCreateGroupIsSet() const
{
    return canCreateGroupIsSet_;
}

void UserGroupPermissionDto::unsetcanCreateGroup()
{
    canCreateGroupIsSet_ = false;
}

bool UserGroupPermissionDto::isCanCraeteProject() const
{
    return canCraeteProject_;
}

void UserGroupPermissionDto::setCanCraeteProject(bool value)
{
    canCraeteProject_ = value;
    canCraeteProjectIsSet_ = true;
}

bool UserGroupPermissionDto::canCraeteProjectIsSet() const
{
    return canCraeteProjectIsSet_;
}

void UserGroupPermissionDto::unsetcanCraeteProject()
{
    canCraeteProjectIsSet_ = false;
}

bool UserGroupPermissionDto::isCanSetGroup() const
{
    return canSetGroup_;
}

void UserGroupPermissionDto::setCanSetGroup(bool value)
{
    canSetGroup_ = value;
    canSetGroupIsSet_ = true;
}

bool UserGroupPermissionDto::canSetGroupIsSet() const
{
    return canSetGroupIsSet_;
}

void UserGroupPermissionDto::unsetcanSetGroup()
{
    canSetGroupIsSet_ = false;
}

int32_t UserGroupPermissionDto::getGroupId() const
{
    return groupId_;
}

void UserGroupPermissionDto::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UserGroupPermissionDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UserGroupPermissionDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UserGroupPermissionDto::getGroupVisibility() const
{
    return groupVisibility_;
}

void UserGroupPermissionDto::setGroupVisibility(const std::string& value)
{
    groupVisibility_ = value;
    groupVisibilityIsSet_ = true;
}

bool UserGroupPermissionDto::groupVisibilityIsSet() const
{
    return groupVisibilityIsSet_;
}

void UserGroupPermissionDto::unsetgroupVisibility()
{
    groupVisibilityIsSet_ = false;
}

}
}
}
}
}


