

#include "huaweicloud/codeartsrepo/v4/model/SubgroupAndProjectBaseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




SubgroupAndProjectBaseDto::SubgroupAndProjectBaseDto()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    roleNamecn_ = "";
    roleNamecnIsSet_ = false;
    roleNameen_ = "";
    roleNameenIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAtTimestamp_ = "";
    updatedAtTimestampIsSet_ = false;
    starTime_ = "";
    starTimeIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
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
    roleShowFlag_ = 0;
    roleShowFlagIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    forksCount_ = 0;
    forksCountIsSet_ = false;
    isKia_ = false;
    isKiaIsSet_ = false;
    isOwner_ = false;
    isOwnerIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    lastRepositoryUpdatedAt_ = "";
    lastRepositoryUpdatedAtIsSet_ = false;
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
    allMergeRequestsCount_ = 0;
    allMergeRequestsCountIsSet_ = false;
    projectRole_ = 0;
    projectRoleIsSet_ = false;
    projectMembersCount_ = 0;
    projectMembersCountIsSet_ = false;
    projectCreatorIsSet_ = false;
    starCount_ = 0;
    starCountIsSet_ = false;
    tagListIsSet_ = false;
    httpUrlToRepo_ = "";
    httpUrlToRepoIsSet_ = false;
    sshUrlToRepo_ = "";
    sshUrlToRepoIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    activeStatisticIsSet_ = false;
    securityTag_ = "";
    securityTagIsSet_ = false;
}

SubgroupAndProjectBaseDto::~SubgroupAndProjectBaseDto() = default;

void SubgroupAndProjectBaseDto::validate()
{
}

web::json::value SubgroupAndProjectBaseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(roleNamecnIsSet_) {
        val[utility::conversions::to_string_t("role_namecn")] = ModelBase::toJson(roleNamecn_);
    }
    if(roleNameenIsSet_) {
        val[utility::conversions::to_string_t("role_nameen")] = ModelBase::toJson(roleNameen_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtTimestampIsSet_) {
        val[utility::conversions::to_string_t("updated_at_timestamp")] = ModelBase::toJson(updatedAtTimestamp_);
    }
    if(starTimeIsSet_) {
        val[utility::conversions::to_string_t("star_time")] = ModelBase::toJson(starTime_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
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
    if(roleShowFlagIsSet_) {
        val[utility::conversions::to_string_t("role_show_flag")] = ModelBase::toJson(roleShowFlag_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(forksCountIsSet_) {
        val[utility::conversions::to_string_t("forks_count")] = ModelBase::toJson(forksCount_);
    }
    if(isKiaIsSet_) {
        val[utility::conversions::to_string_t("is_kia")] = ModelBase::toJson(isKia_);
    }
    if(isOwnerIsSet_) {
        val[utility::conversions::to_string_t("is_owner")] = ModelBase::toJson(isOwner_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(lastRepositoryUpdatedAtIsSet_) {
        val[utility::conversions::to_string_t("last_repository_updated_at")] = ModelBase::toJson(lastRepositoryUpdatedAt_);
    }
    if(openMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("open_merge_requests_count")] = ModelBase::toJson(openMergeRequestsCount_);
    }
    if(allMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("all_merge_requests_count")] = ModelBase::toJson(allMergeRequestsCount_);
    }
    if(projectRoleIsSet_) {
        val[utility::conversions::to_string_t("project_role")] = ModelBase::toJson(projectRole_);
    }
    if(projectMembersCountIsSet_) {
        val[utility::conversions::to_string_t("project_members_count")] = ModelBase::toJson(projectMembersCount_);
    }
    if(projectCreatorIsSet_) {
        val[utility::conversions::to_string_t("project_creator")] = ModelBase::toJson(projectCreator_);
    }
    if(starCountIsSet_) {
        val[utility::conversions::to_string_t("star_count")] = ModelBase::toJson(starCount_);
    }
    if(tagListIsSet_) {
        val[utility::conversions::to_string_t("tag_list")] = ModelBase::toJson(tagList_);
    }
    if(httpUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("http_url_to_repo")] = ModelBase::toJson(httpUrlToRepo_);
    }
    if(sshUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("ssh_url_to_repo")] = ModelBase::toJson(sshUrlToRepo_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(activeStatisticIsSet_) {
        val[utility::conversions::to_string_t("active_statistic")] = ModelBase::toJson(activeStatistic_);
    }
    if(securityTagIsSet_) {
        val[utility::conversions::to_string_t("security_tag")] = ModelBase::toJson(securityTag_);
    }

    return val;
}
bool SubgroupAndProjectBaseDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_namecn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_namecn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNamecn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_nameen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_nameen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNameen(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at_timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAtTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("star_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("star_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_show_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_show_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleShowFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forks_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forks_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForksCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_kia"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_kia"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKia(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_owner"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_repository_updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_repository_updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastRepositoryUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_merge_requests_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_merge_requests_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenMergeRequestsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_merge_requests_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_merge_requests_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllMergeRequestsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_members_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_members_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectMembersCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_creator"));
        if(!fieldValue.is_null())
        {
            ProjectCreatorDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("star_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("star_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_url_to_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_url_to_repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpUrlToRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssh_url_to_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh_url_to_repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshUrlToRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_statistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_statistic"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityTag(refVal);
        }
    }
    return ok;
}


std::string SubgroupAndProjectBaseDto::getProjectId() const
{
    return projectId_;
}

void SubgroupAndProjectBaseDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getProjectName() const
{
    return projectName_;
}

void SubgroupAndProjectBaseDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getRoleNamecn() const
{
    return roleNamecn_;
}

void SubgroupAndProjectBaseDto::setRoleNamecn(const std::string& value)
{
    roleNamecn_ = value;
    roleNamecnIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::roleNamecnIsSet() const
{
    return roleNamecnIsSet_;
}

void SubgroupAndProjectBaseDto::unsetroleNamecn()
{
    roleNamecnIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getRoleNameen() const
{
    return roleNameen_;
}

void SubgroupAndProjectBaseDto::setRoleNameen(const std::string& value)
{
    roleNameen_ = value;
    roleNameenIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::roleNameenIsSet() const
{
    return roleNameenIsSet_;
}

void SubgroupAndProjectBaseDto::unsetroleNameen()
{
    roleNameenIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getFullName() const
{
    return fullName_;
}

void SubgroupAndProjectBaseDto::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void SubgroupAndProjectBaseDto::unsetfullName()
{
    fullNameIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getFullPath() const
{
    return fullPath_;
}

void SubgroupAndProjectBaseDto::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void SubgroupAndProjectBaseDto::unsetfullPath()
{
    fullPathIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getCreatedAt() const
{
    return createdAt_;
}

void SubgroupAndProjectBaseDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SubgroupAndProjectBaseDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getUpdatedAtTimestamp() const
{
    return updatedAtTimestamp_;
}

void SubgroupAndProjectBaseDto::setUpdatedAtTimestamp(const std::string& value)
{
    updatedAtTimestamp_ = value;
    updatedAtTimestampIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::updatedAtTimestampIsSet() const
{
    return updatedAtTimestampIsSet_;
}

void SubgroupAndProjectBaseDto::unsetupdatedAtTimestamp()
{
    updatedAtTimestampIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getStarTime() const
{
    return starTime_;
}

void SubgroupAndProjectBaseDto::setStarTime(const std::string& value)
{
    starTime_ = value;
    starTimeIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::starTimeIsSet() const
{
    return starTimeIsSet_;
}

void SubgroupAndProjectBaseDto::unsetstarTime()
{
    starTimeIsSet_ = false;
}

bool SubgroupAndProjectBaseDto::isStarred() const
{
    return starred_;
}

void SubgroupAndProjectBaseDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::starredIsSet() const
{
    return starredIsSet_;
}

void SubgroupAndProjectBaseDto::unsetstarred()
{
    starredIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getDevelopMode() const
{
    return developMode_;
}

void SubgroupAndProjectBaseDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void SubgroupAndProjectBaseDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getId() const
{
    return id_;
}

void SubgroupAndProjectBaseDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::idIsSet() const
{
    return idIsSet_;
}

void SubgroupAndProjectBaseDto::unsetid()
{
    idIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getName() const
{
    return name_;
}

void SubgroupAndProjectBaseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::nameIsSet() const
{
    return nameIsSet_;
}

void SubgroupAndProjectBaseDto::unsetname()
{
    nameIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getPath() const
{
    return path_;
}

void SubgroupAndProjectBaseDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::pathIsSet() const
{
    return pathIsSet_;
}

void SubgroupAndProjectBaseDto::unsetpath()
{
    pathIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getGroupLevel() const
{
    return groupLevel_;
}

void SubgroupAndProjectBaseDto::setGroupLevel(int32_t value)
{
    groupLevel_ = value;
    groupLevelIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::groupLevelIsSet() const
{
    return groupLevelIsSet_;
}

void SubgroupAndProjectBaseDto::unsetgroupLevel()
{
    groupLevelIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getDescription() const
{
    return description_;
}

void SubgroupAndProjectBaseDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SubgroupAndProjectBaseDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getSubgroupCount() const
{
    return subgroupCount_;
}

void SubgroupAndProjectBaseDto::setSubgroupCount(int32_t value)
{
    subgroupCount_ = value;
    subgroupCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::subgroupCountIsSet() const
{
    return subgroupCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetsubgroupCount()
{
    subgroupCountIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getProjectCount() const
{
    return projectCount_;
}

void SubgroupAndProjectBaseDto::setProjectCount(int32_t value)
{
    projectCount_ = value;
    projectCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectCountIsSet() const
{
    return projectCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectCount()
{
    projectCountIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getGroupRole() const
{
    return groupRole_;
}

void SubgroupAndProjectBaseDto::setGroupRole(int32_t value)
{
    groupRole_ = value;
    groupRoleIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::groupRoleIsSet() const
{
    return groupRoleIsSet_;
}

void SubgroupAndProjectBaseDto::unsetgroupRole()
{
    groupRoleIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getGroupMembersCount() const
{
    return groupMembersCount_;
}

void SubgroupAndProjectBaseDto::setGroupMembersCount(int32_t value)
{
    groupMembersCount_ = value;
    groupMembersCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::groupMembersCountIsSet() const
{
    return groupMembersCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetgroupMembersCount()
{
    groupMembersCountIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getDescendantType() const
{
    return descendantType_;
}

void SubgroupAndProjectBaseDto::setDescendantType(const std::string& value)
{
    descendantType_ = value;
    descendantTypeIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::descendantTypeIsSet() const
{
    return descendantTypeIsSet_;
}

void SubgroupAndProjectBaseDto::unsetdescendantType()
{
    descendantTypeIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void SubgroupAndProjectBaseDto::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void SubgroupAndProjectBaseDto::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getVisibility() const
{
    return visibility_;
}

void SubgroupAndProjectBaseDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void SubgroupAndProjectBaseDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void SubgroupAndProjectBaseDto::setIsProjectAdmin(int32_t value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void SubgroupAndProjectBaseDto::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getIsGroupCreator() const
{
    return isGroupCreator_;
}

void SubgroupAndProjectBaseDto::setIsGroupCreator(int32_t value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void SubgroupAndProjectBaseDto::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getIsRepoCreator() const
{
    return isRepoCreator_;
}

void SubgroupAndProjectBaseDto::setIsRepoCreator(int32_t value)
{
    isRepoCreator_ = value;
    isRepoCreatorIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::isRepoCreatorIsSet() const
{
    return isRepoCreatorIsSet_;
}

void SubgroupAndProjectBaseDto::unsetisRepoCreator()
{
    isRepoCreatorIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getRoleShowFlag() const
{
    return roleShowFlag_;
}

void SubgroupAndProjectBaseDto::setRoleShowFlag(int32_t value)
{
    roleShowFlag_ = value;
    roleShowFlagIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::roleShowFlagIsSet() const
{
    return roleShowFlagIsSet_;
}

void SubgroupAndProjectBaseDto::unsetroleShowFlag()
{
    roleShowFlagIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getUuid() const
{
    return uuid_;
}

void SubgroupAndProjectBaseDto::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::uuidIsSet() const
{
    return uuidIsSet_;
}

void SubgroupAndProjectBaseDto::unsetuuid()
{
    uuidIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getForksCount() const
{
    return forksCount_;
}

void SubgroupAndProjectBaseDto::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetforksCount()
{
    forksCountIsSet_ = false;
}

bool SubgroupAndProjectBaseDto::isIsKia() const
{
    return isKia_;
}

void SubgroupAndProjectBaseDto::setIsKia(bool value)
{
    isKia_ = value;
    isKiaIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::isKiaIsSet() const
{
    return isKiaIsSet_;
}

void SubgroupAndProjectBaseDto::unsetisKia()
{
    isKiaIsSet_ = false;
}

bool SubgroupAndProjectBaseDto::isIsOwner() const
{
    return isOwner_;
}

void SubgroupAndProjectBaseDto::setIsOwner(bool value)
{
    isOwner_ = value;
    isOwnerIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::isOwnerIsSet() const
{
    return isOwnerIsSet_;
}

void SubgroupAndProjectBaseDto::unsetisOwner()
{
    isOwnerIsSet_ = false;
}

bool SubgroupAndProjectBaseDto::isArchived() const
{
    return archived_;
}

void SubgroupAndProjectBaseDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void SubgroupAndProjectBaseDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getLastRepositoryUpdatedAt() const
{
    return lastRepositoryUpdatedAt_;
}

void SubgroupAndProjectBaseDto::setLastRepositoryUpdatedAt(const std::string& value)
{
    lastRepositoryUpdatedAt_ = value;
    lastRepositoryUpdatedAtIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::lastRepositoryUpdatedAtIsSet() const
{
    return lastRepositoryUpdatedAtIsSet_;
}

void SubgroupAndProjectBaseDto::unsetlastRepositoryUpdatedAt()
{
    lastRepositoryUpdatedAtIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void SubgroupAndProjectBaseDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getAllMergeRequestsCount() const
{
    return allMergeRequestsCount_;
}

void SubgroupAndProjectBaseDto::setAllMergeRequestsCount(int32_t value)
{
    allMergeRequestsCount_ = value;
    allMergeRequestsCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::allMergeRequestsCountIsSet() const
{
    return allMergeRequestsCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetallMergeRequestsCount()
{
    allMergeRequestsCountIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getProjectRole() const
{
    return projectRole_;
}

void SubgroupAndProjectBaseDto::setProjectRole(int32_t value)
{
    projectRole_ = value;
    projectRoleIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectRoleIsSet() const
{
    return projectRoleIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectRole()
{
    projectRoleIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getProjectMembersCount() const
{
    return projectMembersCount_;
}

void SubgroupAndProjectBaseDto::setProjectMembersCount(int32_t value)
{
    projectMembersCount_ = value;
    projectMembersCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectMembersCountIsSet() const
{
    return projectMembersCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectMembersCount()
{
    projectMembersCountIsSet_ = false;
}

ProjectCreatorDto SubgroupAndProjectBaseDto::getProjectCreator() const
{
    return projectCreator_;
}

void SubgroupAndProjectBaseDto::setProjectCreator(const ProjectCreatorDto& value)
{
    projectCreator_ = value;
    projectCreatorIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::projectCreatorIsSet() const
{
    return projectCreatorIsSet_;
}

void SubgroupAndProjectBaseDto::unsetprojectCreator()
{
    projectCreatorIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getStarCount() const
{
    return starCount_;
}

void SubgroupAndProjectBaseDto::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::starCountIsSet() const
{
    return starCountIsSet_;
}

void SubgroupAndProjectBaseDto::unsetstarCount()
{
    starCountIsSet_ = false;
}

std::vector<std::string>& SubgroupAndProjectBaseDto::getTagList()
{
    return tagList_;
}

void SubgroupAndProjectBaseDto::setTagList(const std::vector<std::string>& value)
{
    tagList_ = value;
    tagListIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::tagListIsSet() const
{
    return tagListIsSet_;
}

void SubgroupAndProjectBaseDto::unsettagList()
{
    tagListIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void SubgroupAndProjectBaseDto::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void SubgroupAndProjectBaseDto::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void SubgroupAndProjectBaseDto::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void SubgroupAndProjectBaseDto::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

int32_t SubgroupAndProjectBaseDto::getStatus() const
{
    return status_;
}

void SubgroupAndProjectBaseDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::statusIsSet() const
{
    return statusIsSet_;
}

void SubgroupAndProjectBaseDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<int32_t>& SubgroupAndProjectBaseDto::getActiveStatistic()
{
    return activeStatistic_;
}

void SubgroupAndProjectBaseDto::setActiveStatistic(std::vector<int32_t> value)
{
    activeStatistic_ = value;
    activeStatisticIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::activeStatisticIsSet() const
{
    return activeStatisticIsSet_;
}

void SubgroupAndProjectBaseDto::unsetactiveStatistic()
{
    activeStatisticIsSet_ = false;
}

std::string SubgroupAndProjectBaseDto::getSecurityTag() const
{
    return securityTag_;
}

void SubgroupAndProjectBaseDto::setSecurityTag(const std::string& value)
{
    securityTag_ = value;
    securityTagIsSet_ = true;
}

bool SubgroupAndProjectBaseDto::securityTagIsSet() const
{
    return securityTagIsSet_;
}

void SubgroupAndProjectBaseDto::unsetsecurityTag()
{
    securityTagIsSet_ = false;
}

}
}
}
}
}


