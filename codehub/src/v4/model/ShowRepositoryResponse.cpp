

#include "huaweicloud/codehub/v4/model/ShowRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryResponse::ShowRepositoryResponse()
{
    id_ = 0;
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameWithNamespace_ = "";
    nameWithNamespaceIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    sshUrlToRepo_ = "";
    sshUrlToRepoIsSet_ = false;
    httpUrlToRepo_ = "";
    httpUrlToRepoIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    readmeUrl_ = "";
    readmeUrlIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    defaultBranch_ = "";
    defaultBranchIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    starCount_ = 0;
    starCountIsSet_ = false;
    forksCount_ = 0;
    forksCountIsSet_ = false;
    openIssuesCount_ = 0;
    openIssuesCountIsSet_ = false;
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
    lastActivityAt_ = "";
    lastActivityAtIsSet_ = false;
    namespaceIsSet_ = false;
    emptyRepo_ = false;
    emptyRepoIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    securityTag_ = "";
    securityTagIsSet_ = false;
    security_ = "";
    securityIsSet_ = false;
    networkType_ = "";
    networkTypeIsSet_ = false;
    ownerIsSet_ = false;
    creatorIsSet_ = false;
    creatorId_ = 0;
    creatorIdIsSet_ = false;
    forkedFromRepositoryIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    ancestorIdsIsSet_ = false;
    ancestorNamesIsSet_ = false;
    importStatus_ = "";
    importStatusIsSet_ = false;
    importUrl_ = "";
    importUrlIsSet_ = false;
    importError_ = "";
    importErrorIsSet_ = false;
    repoType_ = "";
    repoTypeIsSet_ = false;
    onlyAllowMergeIfPipelineSucceeds_ = false;
    onlyAllowMergeIfPipelineSucceedsIsSet_ = false;
    requestAccessEnabled_ = false;
    requestAccessEnabledIsSet_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolved_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
    mergeMethod_ = "";
    mergeMethodIsSet_ = false;
    forkNetworkRepositoriesIsSet_ = false;
    permissionsIsSet_ = false;
    repositoryType_ = "";
    repositoryTypeIsSet_ = false;
    statisticsIsSet_ = false;
    branchCount_ = 0;
    branchCountIsSet_ = false;
    tagCount_ = 0;
    tagCountIsSet_ = false;
    labelCount_ = 0;
    labelCountIsSet_ = false;
    memberCount_ = 0;
    memberCountIsSet_ = false;
}

ShowRepositoryResponse::~ShowRepositoryResponse() = default;

void ShowRepositoryResponse::validate()
{
}

web::json::value ShowRepositoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("name_with_namespace")] = ModelBase::toJson(nameWithNamespace_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(sshUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("ssh_url_to_repo")] = ModelBase::toJson(sshUrlToRepo_);
    }
    if(httpUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("http_url_to_repo")] = ModelBase::toJson(httpUrlToRepo_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(readmeUrlIsSet_) {
        val[utility::conversions::to_string_t("readme_url")] = ModelBase::toJson(readmeUrl_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(moderationResultIsSet_) {
        val[utility::conversions::to_string_t("moderation_result")] = ModelBase::toJson(moderationResult_);
    }
    if(defaultBranchIsSet_) {
        val[utility::conversions::to_string_t("default_branch")] = ModelBase::toJson(defaultBranch_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(starCountIsSet_) {
        val[utility::conversions::to_string_t("star_count")] = ModelBase::toJson(starCount_);
    }
    if(forksCountIsSet_) {
        val[utility::conversions::to_string_t("forks_count")] = ModelBase::toJson(forksCount_);
    }
    if(openIssuesCountIsSet_) {
        val[utility::conversions::to_string_t("open_issues_count")] = ModelBase::toJson(openIssuesCount_);
    }
    if(openMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("open_merge_requests_count")] = ModelBase::toJson(openMergeRequestsCount_);
    }
    if(lastActivityAtIsSet_) {
        val[utility::conversions::to_string_t("last_activity_at")] = ModelBase::toJson(lastActivityAt_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(emptyRepoIsSet_) {
        val[utility::conversions::to_string_t("empty_repo")] = ModelBase::toJson(emptyRepo_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(securityTagIsSet_) {
        val[utility::conversions::to_string_t("security_tag")] = ModelBase::toJson(securityTag_);
    }
    if(securityIsSet_) {
        val[utility::conversions::to_string_t("security")] = ModelBase::toJson(security_);
    }
    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("network_type")] = ModelBase::toJson(networkType_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(forkedFromRepositoryIsSet_) {
        val[utility::conversions::to_string_t("forked_from_repository")] = ModelBase::toJson(forkedFromRepository_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(ancestorIdsIsSet_) {
        val[utility::conversions::to_string_t("ancestor_ids")] = ModelBase::toJson(ancestorIds_);
    }
    if(ancestorNamesIsSet_) {
        val[utility::conversions::to_string_t("ancestor_names")] = ModelBase::toJson(ancestorNames_);
    }
    if(importStatusIsSet_) {
        val[utility::conversions::to_string_t("import_status")] = ModelBase::toJson(importStatus_);
    }
    if(importUrlIsSet_) {
        val[utility::conversions::to_string_t("import_url")] = ModelBase::toJson(importUrl_);
    }
    if(importErrorIsSet_) {
        val[utility::conversions::to_string_t("import_error")] = ModelBase::toJson(importError_);
    }
    if(repoTypeIsSet_) {
        val[utility::conversions::to_string_t("repo_type")] = ModelBase::toJson(repoType_);
    }
    if(onlyAllowMergeIfPipelineSucceedsIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_pipeline_succeeds")] = ModelBase::toJson(onlyAllowMergeIfPipelineSucceeds_);
    }
    if(requestAccessEnabledIsSet_) {
        val[utility::conversions::to_string_t("request_access_enabled")] = ModelBase::toJson(requestAccessEnabled_);
    }
    if(onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved")] = ModelBase::toJson(onlyAllowMergeIfAllDiscussionsAreResolved_);
    }
    if(mergeMethodIsSet_) {
        val[utility::conversions::to_string_t("merge_method")] = ModelBase::toJson(mergeMethod_);
    }
    if(forkNetworkRepositoriesIsSet_) {
        val[utility::conversions::to_string_t("fork_network_repositories")] = ModelBase::toJson(forkNetworkRepositories_);
    }
    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }
    if(repositoryTypeIsSet_) {
        val[utility::conversions::to_string_t("repository_type")] = ModelBase::toJson(repositoryType_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(branchCountIsSet_) {
        val[utility::conversions::to_string_t("branch_count")] = ModelBase::toJson(branchCount_);
    }
    if(tagCountIsSet_) {
        val[utility::conversions::to_string_t("tag_count")] = ModelBase::toJson(tagCount_);
    }
    if(labelCountIsSet_) {
        val[utility::conversions::to_string_t("label_count")] = ModelBase::toJson(labelCount_);
    }
    if(memberCountIsSet_) {
        val[utility::conversions::to_string_t("member_count")] = ModelBase::toJson(memberCount_);
    }

    return val;
}
bool ShowRepositoryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameWithNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathWithNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("http_url_to_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_url_to_repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpUrlToRepo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("readme_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readme_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadmeUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("moderation_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("forks_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forks_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForksCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_issues_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_issues_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenIssuesCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_activity_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_activity_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastActivityAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            NamespaceBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("empty_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("empty_repo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmptyRepo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            RepositoryUserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            RepositoryUserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forked_from_repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forked_from_repository"));
        if(!fieldValue.is_null())
        {
            RepositorySimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForkedFromRepository(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("import_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_allow_merge_if_pipeline_succeeds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_merge_if_pipeline_succeeds"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowMergeIfPipelineSucceeds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_access_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_access_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestAccessEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowMergeIfAllDiscussionsAreResolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fork_network_repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fork_network_repositories"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryIdentityDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForkNetworkRepositories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            PermissionsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            RepositoryStatisticsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelCount(refVal);
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
    return ok;
}


int32_t ShowRepositoryResponse::getId() const
{
    return id_;
}

void ShowRepositoryResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRepositoryResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowRepositoryResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowRepositoryResponse::getDescription() const
{
    return description_;
}

void ShowRepositoryResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRepositoryResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRepositoryResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowRepositoryResponse::getName() const
{
    return name_;
}

void ShowRepositoryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRepositoryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRepositoryResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowRepositoryResponse::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void ShowRepositoryResponse::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool ShowRepositoryResponse::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void ShowRepositoryResponse::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string ShowRepositoryResponse::getPath() const
{
    return path_;
}

void ShowRepositoryResponse::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowRepositoryResponse::pathIsSet() const
{
    return pathIsSet_;
}

void ShowRepositoryResponse::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowRepositoryResponse::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void ShowRepositoryResponse::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool ShowRepositoryResponse::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void ShowRepositoryResponse::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string ShowRepositoryResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowRepositoryResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowRepositoryResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowRepositoryResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowRepositoryResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowRepositoryResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowRepositoryResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowRepositoryResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowRepositoryResponse::isArchived() const
{
    return archived_;
}

void ShowRepositoryResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ShowRepositoryResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void ShowRepositoryResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string ShowRepositoryResponse::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void ShowRepositoryResponse::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool ShowRepositoryResponse::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void ShowRepositoryResponse::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string ShowRepositoryResponse::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void ShowRepositoryResponse::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool ShowRepositoryResponse::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void ShowRepositoryResponse::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string ShowRepositoryResponse::getWebUrl() const
{
    return webUrl_;
}

void ShowRepositoryResponse::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool ShowRepositoryResponse::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void ShowRepositoryResponse::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string ShowRepositoryResponse::getReadmeUrl() const
{
    return readmeUrl_;
}

void ShowRepositoryResponse::setReadmeUrl(const std::string& value)
{
    readmeUrl_ = value;
    readmeUrlIsSet_ = true;
}

bool ShowRepositoryResponse::readmeUrlIsSet() const
{
    return readmeUrlIsSet_;
}

void ShowRepositoryResponse::unsetreadmeUrl()
{
    readmeUrlIsSet_ = false;
}

std::string ShowRepositoryResponse::getProjectId() const
{
    return projectId_;
}

void ShowRepositoryResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowRepositoryResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowRepositoryResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowRepositoryResponse::getProjectName() const
{
    return projectName_;
}

void ShowRepositoryResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowRepositoryResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowRepositoryResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowRepositoryResponse::getDevelopMode() const
{
    return developMode_;
}

void ShowRepositoryResponse::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool ShowRepositoryResponse::developModeIsSet() const
{
    return developModeIsSet_;
}

void ShowRepositoryResponse::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

bool ShowRepositoryResponse::isModerationResult() const
{
    return moderationResult_;
}

void ShowRepositoryResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool ShowRepositoryResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void ShowRepositoryResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

std::string ShowRepositoryResponse::getDefaultBranch() const
{
    return defaultBranch_;
}

void ShowRepositoryResponse::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool ShowRepositoryResponse::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void ShowRepositoryResponse::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string ShowRepositoryResponse::getAvatarUrl() const
{
    return avatarUrl_;
}

void ShowRepositoryResponse::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool ShowRepositoryResponse::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void ShowRepositoryResponse::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

int32_t ShowRepositoryResponse::getStarCount() const
{
    return starCount_;
}

void ShowRepositoryResponse::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool ShowRepositoryResponse::starCountIsSet() const
{
    return starCountIsSet_;
}

void ShowRepositoryResponse::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getForksCount() const
{
    return forksCount_;
}

void ShowRepositoryResponse::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool ShowRepositoryResponse::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void ShowRepositoryResponse::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getOpenIssuesCount() const
{
    return openIssuesCount_;
}

void ShowRepositoryResponse::setOpenIssuesCount(int32_t value)
{
    openIssuesCount_ = value;
    openIssuesCountIsSet_ = true;
}

bool ShowRepositoryResponse::openIssuesCountIsSet() const
{
    return openIssuesCountIsSet_;
}

void ShowRepositoryResponse::unsetopenIssuesCount()
{
    openIssuesCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void ShowRepositoryResponse::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool ShowRepositoryResponse::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void ShowRepositoryResponse::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

std::string ShowRepositoryResponse::getLastActivityAt() const
{
    return lastActivityAt_;
}

void ShowRepositoryResponse::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool ShowRepositoryResponse::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void ShowRepositoryResponse::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

NamespaceBasicDto ShowRepositoryResponse::getNamespace() const
{
    return namespace_;
}

void ShowRepositoryResponse::setNamespace(const NamespaceBasicDto& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowRepositoryResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowRepositoryResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

bool ShowRepositoryResponse::isEmptyRepo() const
{
    return emptyRepo_;
}

void ShowRepositoryResponse::setEmptyRepo(bool value)
{
    emptyRepo_ = value;
    emptyRepoIsSet_ = true;
}

bool ShowRepositoryResponse::emptyRepoIsSet() const
{
    return emptyRepoIsSet_;
}

void ShowRepositoryResponse::unsetemptyRepo()
{
    emptyRepoIsSet_ = false;
}

bool ShowRepositoryResponse::isStarred() const
{
    return starred_;
}

void ShowRepositoryResponse::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ShowRepositoryResponse::starredIsSet() const
{
    return starredIsSet_;
}

void ShowRepositoryResponse::unsetstarred()
{
    starredIsSet_ = false;
}

std::string ShowRepositoryResponse::getVisibility() const
{
    return visibility_;
}

void ShowRepositoryResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ShowRepositoryResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ShowRepositoryResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ShowRepositoryResponse::getSecurityTag() const
{
    return securityTag_;
}

void ShowRepositoryResponse::setSecurityTag(const std::string& value)
{
    securityTag_ = value;
    securityTagIsSet_ = true;
}

bool ShowRepositoryResponse::securityTagIsSet() const
{
    return securityTagIsSet_;
}

void ShowRepositoryResponse::unsetsecurityTag()
{
    securityTagIsSet_ = false;
}

std::string ShowRepositoryResponse::getSecurity() const
{
    return security_;
}

void ShowRepositoryResponse::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool ShowRepositoryResponse::securityIsSet() const
{
    return securityIsSet_;
}

void ShowRepositoryResponse::unsetsecurity()
{
    securityIsSet_ = false;
}

std::string ShowRepositoryResponse::getNetworkType() const
{
    return networkType_;
}

void ShowRepositoryResponse::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool ShowRepositoryResponse::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void ShowRepositoryResponse::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

RepositoryUserBasicDto ShowRepositoryResponse::getOwner() const
{
    return owner_;
}

void ShowRepositoryResponse::setOwner(const RepositoryUserBasicDto& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowRepositoryResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowRepositoryResponse::unsetowner()
{
    ownerIsSet_ = false;
}

RepositoryUserBasicDto ShowRepositoryResponse::getCreator() const
{
    return creator_;
}

void ShowRepositoryResponse::setCreator(const RepositoryUserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowRepositoryResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowRepositoryResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t ShowRepositoryResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowRepositoryResponse::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowRepositoryResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowRepositoryResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

RepositorySimpleDto ShowRepositoryResponse::getForkedFromRepository() const
{
    return forkedFromRepository_;
}

void ShowRepositoryResponse::setForkedFromRepository(const RepositorySimpleDto& value)
{
    forkedFromRepository_ = value;
    forkedFromRepositoryIsSet_ = true;
}

bool ShowRepositoryResponse::forkedFromRepositoryIsSet() const
{
    return forkedFromRepositoryIsSet_;
}

void ShowRepositoryResponse::unsetforkedFromRepository()
{
    forkedFromRepositoryIsSet_ = false;
}

std::string ShowRepositoryResponse::getUuid() const
{
    return uuid_;
}

void ShowRepositoryResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ShowRepositoryResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void ShowRepositoryResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::vector<int32_t>& ShowRepositoryResponse::getAncestorIds()
{
    return ancestorIds_;
}

void ShowRepositoryResponse::setAncestorIds(std::vector<int32_t> value)
{
    ancestorIds_ = value;
    ancestorIdsIsSet_ = true;
}

bool ShowRepositoryResponse::ancestorIdsIsSet() const
{
    return ancestorIdsIsSet_;
}

void ShowRepositoryResponse::unsetancestorIds()
{
    ancestorIdsIsSet_ = false;
}

std::vector<std::string>& ShowRepositoryResponse::getAncestorNames()
{
    return ancestorNames_;
}

void ShowRepositoryResponse::setAncestorNames(const std::vector<std::string>& value)
{
    ancestorNames_ = value;
    ancestorNamesIsSet_ = true;
}

bool ShowRepositoryResponse::ancestorNamesIsSet() const
{
    return ancestorNamesIsSet_;
}

void ShowRepositoryResponse::unsetancestorNames()
{
    ancestorNamesIsSet_ = false;
}

std::string ShowRepositoryResponse::getImportStatus() const
{
    return importStatus_;
}

void ShowRepositoryResponse::setImportStatus(const std::string& value)
{
    importStatus_ = value;
    importStatusIsSet_ = true;
}

bool ShowRepositoryResponse::importStatusIsSet() const
{
    return importStatusIsSet_;
}

void ShowRepositoryResponse::unsetimportStatus()
{
    importStatusIsSet_ = false;
}

std::string ShowRepositoryResponse::getImportUrl() const
{
    return importUrl_;
}

void ShowRepositoryResponse::setImportUrl(const std::string& value)
{
    importUrl_ = value;
    importUrlIsSet_ = true;
}

bool ShowRepositoryResponse::importUrlIsSet() const
{
    return importUrlIsSet_;
}

void ShowRepositoryResponse::unsetimportUrl()
{
    importUrlIsSet_ = false;
}

std::string ShowRepositoryResponse::getImportError() const
{
    return importError_;
}

void ShowRepositoryResponse::setImportError(const std::string& value)
{
    importError_ = value;
    importErrorIsSet_ = true;
}

bool ShowRepositoryResponse::importErrorIsSet() const
{
    return importErrorIsSet_;
}

void ShowRepositoryResponse::unsetimportError()
{
    importErrorIsSet_ = false;
}

std::string ShowRepositoryResponse::getRepoType() const
{
    return repoType_;
}

void ShowRepositoryResponse::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool ShowRepositoryResponse::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void ShowRepositoryResponse::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

bool ShowRepositoryResponse::isOnlyAllowMergeIfPipelineSucceeds() const
{
    return onlyAllowMergeIfPipelineSucceeds_;
}

void ShowRepositoryResponse::setOnlyAllowMergeIfPipelineSucceeds(bool value)
{
    onlyAllowMergeIfPipelineSucceeds_ = value;
    onlyAllowMergeIfPipelineSucceedsIsSet_ = true;
}

bool ShowRepositoryResponse::onlyAllowMergeIfPipelineSucceedsIsSet() const
{
    return onlyAllowMergeIfPipelineSucceedsIsSet_;
}

void ShowRepositoryResponse::unsetonlyAllowMergeIfPipelineSucceeds()
{
    onlyAllowMergeIfPipelineSucceedsIsSet_ = false;
}

bool ShowRepositoryResponse::isRequestAccessEnabled() const
{
    return requestAccessEnabled_;
}

void ShowRepositoryResponse::setRequestAccessEnabled(bool value)
{
    requestAccessEnabled_ = value;
    requestAccessEnabledIsSet_ = true;
}

bool ShowRepositoryResponse::requestAccessEnabledIsSet() const
{
    return requestAccessEnabledIsSet_;
}

void ShowRepositoryResponse::unsetrequestAccessEnabled()
{
    requestAccessEnabledIsSet_ = false;
}

bool ShowRepositoryResponse::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void ShowRepositoryResponse::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool ShowRepositoryResponse::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void ShowRepositoryResponse::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

std::string ShowRepositoryResponse::getMergeMethod() const
{
    return mergeMethod_;
}

void ShowRepositoryResponse::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool ShowRepositoryResponse::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void ShowRepositoryResponse::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

std::vector<RepositoryIdentityDto>& ShowRepositoryResponse::getForkNetworkRepositories()
{
    return forkNetworkRepositories_;
}

void ShowRepositoryResponse::setForkNetworkRepositories(const std::vector<RepositoryIdentityDto>& value)
{
    forkNetworkRepositories_ = value;
    forkNetworkRepositoriesIsSet_ = true;
}

bool ShowRepositoryResponse::forkNetworkRepositoriesIsSet() const
{
    return forkNetworkRepositoriesIsSet_;
}

void ShowRepositoryResponse::unsetforkNetworkRepositories()
{
    forkNetworkRepositoriesIsSet_ = false;
}

PermissionsDto ShowRepositoryResponse::getPermissions() const
{
    return permissions_;
}

void ShowRepositoryResponse::setPermissions(const PermissionsDto& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool ShowRepositoryResponse::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void ShowRepositoryResponse::unsetpermissions()
{
    permissionsIsSet_ = false;
}

std::string ShowRepositoryResponse::getRepositoryType() const
{
    return repositoryType_;
}

void ShowRepositoryResponse::setRepositoryType(const std::string& value)
{
    repositoryType_ = value;
    repositoryTypeIsSet_ = true;
}

bool ShowRepositoryResponse::repositoryTypeIsSet() const
{
    return repositoryTypeIsSet_;
}

void ShowRepositoryResponse::unsetrepositoryType()
{
    repositoryTypeIsSet_ = false;
}

RepositoryStatisticsDto ShowRepositoryResponse::getStatistics() const
{
    return statistics_;
}

void ShowRepositoryResponse::setStatistics(const RepositoryStatisticsDto& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowRepositoryResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowRepositoryResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

int32_t ShowRepositoryResponse::getBranchCount() const
{
    return branchCount_;
}

void ShowRepositoryResponse::setBranchCount(int32_t value)
{
    branchCount_ = value;
    branchCountIsSet_ = true;
}

bool ShowRepositoryResponse::branchCountIsSet() const
{
    return branchCountIsSet_;
}

void ShowRepositoryResponse::unsetbranchCount()
{
    branchCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getTagCount() const
{
    return tagCount_;
}

void ShowRepositoryResponse::setTagCount(int32_t value)
{
    tagCount_ = value;
    tagCountIsSet_ = true;
}

bool ShowRepositoryResponse::tagCountIsSet() const
{
    return tagCountIsSet_;
}

void ShowRepositoryResponse::unsettagCount()
{
    tagCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getLabelCount() const
{
    return labelCount_;
}

void ShowRepositoryResponse::setLabelCount(int32_t value)
{
    labelCount_ = value;
    labelCountIsSet_ = true;
}

bool ShowRepositoryResponse::labelCountIsSet() const
{
    return labelCountIsSet_;
}

void ShowRepositoryResponse::unsetlabelCount()
{
    labelCountIsSet_ = false;
}

int32_t ShowRepositoryResponse::getMemberCount() const
{
    return memberCount_;
}

void ShowRepositoryResponse::setMemberCount(int32_t value)
{
    memberCount_ = value;
    memberCountIsSet_ = true;
}

bool ShowRepositoryResponse::memberCountIsSet() const
{
    return memberCountIsSet_;
}

void ShowRepositoryResponse::unsetmemberCount()
{
    memberCountIsSet_ = false;
}

}
}
}
}
}


