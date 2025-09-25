

#include "huaweicloud/codehub/v4/model/GroupBaseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GroupBaseDto::GroupBaseDto()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    ancestorIdsIsSet_ = false;
    ancestorNamesIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    groupLevel_ = 0;
    groupLevelIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    subgroupCount_ = 0;
    subgroupCountIsSet_ = false;
    projectCount_ = 0;
    projectCountIsSet_ = false;
    groupRole_ = 0;
    groupRoleIsSet_ = false;
    groupMembersCount_ = 0;
    groupMembersCountIsSet_ = false;
    descendantType_ = "";
    descendantTypeIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    isProjectAdmin_ = 0;
    isProjectAdminIsSet_ = false;
    isGroupCreator_ = 0;
    isGroupCreatorIsSet_ = false;
    isRepoCreator_ = 0;
    isRepoCreatorIsSet_ = false;
    lfsEnabled_ = false;
    lfsEnabledIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    itemType_ = "";
    itemTypeIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    myRoleIsSet_ = false;
    members_ = 0;
    membersIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    subGroupCount_ = 0;
    subGroupCountIsSet_ = false;
    lastOwner_ = false;
    lastOwnerIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
}

GroupBaseDto::~GroupBaseDto() = default;

void GroupBaseDto::validate()
{
}

web::json::value GroupBaseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(ancestorIdsIsSet_) {
        val[utility::conversions::to_string_t("ancestor_ids")] = ModelBase::toJson(ancestorIds_);
    }
    if(ancestorNamesIsSet_) {
        val[utility::conversions::to_string_t("ancestor_names")] = ModelBase::toJson(ancestorNames_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(groupLevelIsSet_) {
        val[utility::conversions::to_string_t("group_level")] = ModelBase::toJson(groupLevel_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(subgroupCountIsSet_) {
        val[utility::conversions::to_string_t("subgroup_count")] = ModelBase::toJson(subgroupCount_);
    }
    if(projectCountIsSet_) {
        val[utility::conversions::to_string_t("project_count")] = ModelBase::toJson(projectCount_);
    }
    if(groupRoleIsSet_) {
        val[utility::conversions::to_string_t("group_role")] = ModelBase::toJson(groupRole_);
    }
    if(groupMembersCountIsSet_) {
        val[utility::conversions::to_string_t("group_members_count")] = ModelBase::toJson(groupMembersCount_);
    }
    if(descendantTypeIsSet_) {
        val[utility::conversions::to_string_t("descendant_type")] = ModelBase::toJson(descendantType_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibility_level")] = ModelBase::toJson(visibilityLevel_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
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
    if(lfsEnabledIsSet_) {
        val[utility::conversions::to_string_t("lfs_enabled")] = ModelBase::toJson(lfsEnabled_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(itemTypeIsSet_) {
        val[utility::conversions::to_string_t("item_type")] = ModelBase::toJson(itemType_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(myRoleIsSet_) {
        val[utility::conversions::to_string_t("my_role")] = ModelBase::toJson(myRole_);
    }
    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(subGroupCountIsSet_) {
        val[utility::conversions::to_string_t("sub_group_count")] = ModelBase::toJson(subGroupCount_);
    }
    if(lastOwnerIsSet_) {
        val[utility::conversions::to_string_t("last_owner")] = ModelBase::toJson(lastOwner_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }

    return val;
}
bool GroupBaseDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ancestor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ancestor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAncestorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ancestor_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ancestor_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAncestorNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("develop_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopMode(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subgroup_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subgroup_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubgroupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_members_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_members_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupMembersCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("descendant_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("descendant_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescendantType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibilityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lfs_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lfs_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLfsEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("my_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("my_role"));
        if(!fieldValue.is_null())
        {
            GroupMyRoleDtoV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMyRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sub_group_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_group_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubGroupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_owner"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
        }
    }
    return ok;
}


std::string GroupBaseDto::getProjectId() const
{
    return projectId_;
}

void GroupBaseDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool GroupBaseDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void GroupBaseDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string GroupBaseDto::getProjectName() const
{
    return projectName_;
}

void GroupBaseDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool GroupBaseDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void GroupBaseDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::vector<int32_t>& GroupBaseDto::getAncestorIds()
{
    return ancestorIds_;
}

void GroupBaseDto::setAncestorIds(std::vector<int32_t> value)
{
    ancestorIds_ = value;
    ancestorIdsIsSet_ = true;
}

bool GroupBaseDto::ancestorIdsIsSet() const
{
    return ancestorIdsIsSet_;
}

void GroupBaseDto::unsetancestorIds()
{
    ancestorIdsIsSet_ = false;
}

std::vector<std::string>& GroupBaseDto::getAncestorNames()
{
    return ancestorNames_;
}

void GroupBaseDto::setAncestorNames(const std::vector<std::string>& value)
{
    ancestorNames_ = value;
    ancestorNamesIsSet_ = true;
}

bool GroupBaseDto::ancestorNamesIsSet() const
{
    return ancestorNamesIsSet_;
}

void GroupBaseDto::unsetancestorNames()
{
    ancestorNamesIsSet_ = false;
}

std::string GroupBaseDto::getDevelopMode() const
{
    return developMode_;
}

void GroupBaseDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool GroupBaseDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void GroupBaseDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

int32_t GroupBaseDto::getId() const
{
    return id_;
}

void GroupBaseDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupBaseDto::idIsSet() const
{
    return idIsSet_;
}

void GroupBaseDto::unsetid()
{
    idIsSet_ = false;
}

std::string GroupBaseDto::getName() const
{
    return name_;
}

void GroupBaseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupBaseDto::nameIsSet() const
{
    return nameIsSet_;
}

void GroupBaseDto::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupBaseDto::getPath() const
{
    return path_;
}

void GroupBaseDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool GroupBaseDto::pathIsSet() const
{
    return pathIsSet_;
}

void GroupBaseDto::unsetpath()
{
    pathIsSet_ = false;
}

int32_t GroupBaseDto::getGroupLevel() const
{
    return groupLevel_;
}

void GroupBaseDto::setGroupLevel(int32_t value)
{
    groupLevel_ = value;
    groupLevelIsSet_ = true;
}

bool GroupBaseDto::groupLevelIsSet() const
{
    return groupLevelIsSet_;
}

void GroupBaseDto::unsetgroupLevel()
{
    groupLevelIsSet_ = false;
}

std::string GroupBaseDto::getDescription() const
{
    return description_;
}

void GroupBaseDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupBaseDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupBaseDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t GroupBaseDto::getSubgroupCount() const
{
    return subgroupCount_;
}

void GroupBaseDto::setSubgroupCount(int32_t value)
{
    subgroupCount_ = value;
    subgroupCountIsSet_ = true;
}

bool GroupBaseDto::subgroupCountIsSet() const
{
    return subgroupCountIsSet_;
}

void GroupBaseDto::unsetsubgroupCount()
{
    subgroupCountIsSet_ = false;
}

int32_t GroupBaseDto::getProjectCount() const
{
    return projectCount_;
}

void GroupBaseDto::setProjectCount(int32_t value)
{
    projectCount_ = value;
    projectCountIsSet_ = true;
}

bool GroupBaseDto::projectCountIsSet() const
{
    return projectCountIsSet_;
}

void GroupBaseDto::unsetprojectCount()
{
    projectCountIsSet_ = false;
}

int32_t GroupBaseDto::getGroupRole() const
{
    return groupRole_;
}

void GroupBaseDto::setGroupRole(int32_t value)
{
    groupRole_ = value;
    groupRoleIsSet_ = true;
}

bool GroupBaseDto::groupRoleIsSet() const
{
    return groupRoleIsSet_;
}

void GroupBaseDto::unsetgroupRole()
{
    groupRoleIsSet_ = false;
}

int32_t GroupBaseDto::getGroupMembersCount() const
{
    return groupMembersCount_;
}

void GroupBaseDto::setGroupMembersCount(int32_t value)
{
    groupMembersCount_ = value;
    groupMembersCountIsSet_ = true;
}

bool GroupBaseDto::groupMembersCountIsSet() const
{
    return groupMembersCountIsSet_;
}

void GroupBaseDto::unsetgroupMembersCount()
{
    groupMembersCountIsSet_ = false;
}

std::string GroupBaseDto::getDescendantType() const
{
    return descendantType_;
}

void GroupBaseDto::setDescendantType(const std::string& value)
{
    descendantType_ = value;
    descendantTypeIsSet_ = true;
}

bool GroupBaseDto::descendantTypeIsSet() const
{
    return descendantTypeIsSet_;
}

void GroupBaseDto::unsetdescendantType()
{
    descendantTypeIsSet_ = false;
}

int32_t GroupBaseDto::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void GroupBaseDto::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool GroupBaseDto::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void GroupBaseDto::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

std::string GroupBaseDto::getVisibility() const
{
    return visibility_;
}

void GroupBaseDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GroupBaseDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GroupBaseDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

int32_t GroupBaseDto::getIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void GroupBaseDto::setIsProjectAdmin(int32_t value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool GroupBaseDto::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void GroupBaseDto::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

int32_t GroupBaseDto::getIsGroupCreator() const
{
    return isGroupCreator_;
}

void GroupBaseDto::setIsGroupCreator(int32_t value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool GroupBaseDto::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void GroupBaseDto::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

int32_t GroupBaseDto::getIsRepoCreator() const
{
    return isRepoCreator_;
}

void GroupBaseDto::setIsRepoCreator(int32_t value)
{
    isRepoCreator_ = value;
    isRepoCreatorIsSet_ = true;
}

bool GroupBaseDto::isRepoCreatorIsSet() const
{
    return isRepoCreatorIsSet_;
}

void GroupBaseDto::unsetisRepoCreator()
{
    isRepoCreatorIsSet_ = false;
}

bool GroupBaseDto::isLfsEnabled() const
{
    return lfsEnabled_;
}

void GroupBaseDto::setLfsEnabled(bool value)
{
    lfsEnabled_ = value;
    lfsEnabledIsSet_ = true;
}

bool GroupBaseDto::lfsEnabledIsSet() const
{
    return lfsEnabledIsSet_;
}

void GroupBaseDto::unsetlfsEnabled()
{
    lfsEnabledIsSet_ = false;
}

std::string GroupBaseDto::getFullName() const
{
    return fullName_;
}

void GroupBaseDto::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool GroupBaseDto::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void GroupBaseDto::unsetfullName()
{
    fullNameIsSet_ = false;
}

std::string GroupBaseDto::getFullPath() const
{
    return fullPath_;
}

void GroupBaseDto::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool GroupBaseDto::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void GroupBaseDto::unsetfullPath()
{
    fullPathIsSet_ = false;
}

std::string GroupBaseDto::getItemType() const
{
    return itemType_;
}

void GroupBaseDto::setItemType(const std::string& value)
{
    itemType_ = value;
    itemTypeIsSet_ = true;
}

bool GroupBaseDto::itemTypeIsSet() const
{
    return itemTypeIsSet_;
}

void GroupBaseDto::unsetitemType()
{
    itemTypeIsSet_ = false;
}

int32_t GroupBaseDto::getParentId() const
{
    return parentId_;
}

void GroupBaseDto::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool GroupBaseDto::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void GroupBaseDto::unsetparentId()
{
    parentIdIsSet_ = false;
}

GroupMyRoleDtoV4 GroupBaseDto::getMyRole() const
{
    return myRole_;
}

void GroupBaseDto::setMyRole(const GroupMyRoleDtoV4& value)
{
    myRole_ = value;
    myRoleIsSet_ = true;
}

bool GroupBaseDto::myRoleIsSet() const
{
    return myRoleIsSet_;
}

void GroupBaseDto::unsetmyRole()
{
    myRoleIsSet_ = false;
}

int32_t GroupBaseDto::getMembers() const
{
    return members_;
}

void GroupBaseDto::setMembers(int32_t value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool GroupBaseDto::membersIsSet() const
{
    return membersIsSet_;
}

void GroupBaseDto::unsetmembers()
{
    membersIsSet_ = false;
}

std::string GroupBaseDto::getWebUrl() const
{
    return webUrl_;
}

void GroupBaseDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool GroupBaseDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void GroupBaseDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string GroupBaseDto::getCreatedAt() const
{
    return createdAt_;
}

void GroupBaseDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GroupBaseDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GroupBaseDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t GroupBaseDto::getSubGroupCount() const
{
    return subGroupCount_;
}

void GroupBaseDto::setSubGroupCount(int32_t value)
{
    subGroupCount_ = value;
    subGroupCountIsSet_ = true;
}

bool GroupBaseDto::subGroupCountIsSet() const
{
    return subGroupCountIsSet_;
}

void GroupBaseDto::unsetsubGroupCount()
{
    subGroupCountIsSet_ = false;
}

bool GroupBaseDto::isLastOwner() const
{
    return lastOwner_;
}

void GroupBaseDto::setLastOwner(bool value)
{
    lastOwner_ = value;
    lastOwnerIsSet_ = true;
}

bool GroupBaseDto::lastOwnerIsSet() const
{
    return lastOwnerIsSet_;
}

void GroupBaseDto::unsetlastOwner()
{
    lastOwnerIsSet_ = false;
}

bool GroupBaseDto::isStarred() const
{
    return starred_;
}

void GroupBaseDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool GroupBaseDto::starredIsSet() const
{
    return starredIsSet_;
}

void GroupBaseDto::unsetstarred()
{
    starredIsSet_ = false;
}

}
}
}
}
}


