

#include "huaweicloud/codeartsrepo/v4/model/TransferRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




TransferRepositoryResponse::TransferRepositoryResponse()
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
    encryptionStatus_ = "";
    encryptionStatusIsSet_ = false;
    repoEncryptionEnabled_ = false;
    repoEncryptionEnabledIsSet_ = false;
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

TransferRepositoryResponse::~TransferRepositoryResponse() = default;

void TransferRepositoryResponse::validate()
{
}

web::json::value TransferRepositoryResponse::toJson() const
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
    if(encryptionStatusIsSet_) {
        val[utility::conversions::to_string_t("encryption_status")] = ModelBase::toJson(encryptionStatus_);
    }
    if(repoEncryptionEnabledIsSet_) {
        val[utility::conversions::to_string_t("repo_encryption_enabled")] = ModelBase::toJson(repoEncryptionEnabled_);
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
bool TransferRepositoryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("encryption_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_encryption_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_encryption_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoEncryptionEnabled(refVal);
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


int32_t TransferRepositoryResponse::getId() const
{
    return id_;
}

void TransferRepositoryResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TransferRepositoryResponse::idIsSet() const
{
    return idIsSet_;
}

void TransferRepositoryResponse::unsetid()
{
    idIsSet_ = false;
}

std::string TransferRepositoryResponse::getDescription() const
{
    return description_;
}

void TransferRepositoryResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TransferRepositoryResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TransferRepositoryResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TransferRepositoryResponse::getName() const
{
    return name_;
}

void TransferRepositoryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransferRepositoryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void TransferRepositoryResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string TransferRepositoryResponse::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void TransferRepositoryResponse::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool TransferRepositoryResponse::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void TransferRepositoryResponse::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string TransferRepositoryResponse::getPath() const
{
    return path_;
}

void TransferRepositoryResponse::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool TransferRepositoryResponse::pathIsSet() const
{
    return pathIsSet_;
}

void TransferRepositoryResponse::unsetpath()
{
    pathIsSet_ = false;
}

std::string TransferRepositoryResponse::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void TransferRepositoryResponse::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool TransferRepositoryResponse::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void TransferRepositoryResponse::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string TransferRepositoryResponse::getCreatedAt() const
{
    return createdAt_;
}

void TransferRepositoryResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool TransferRepositoryResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void TransferRepositoryResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string TransferRepositoryResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void TransferRepositoryResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool TransferRepositoryResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void TransferRepositoryResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool TransferRepositoryResponse::isArchived() const
{
    return archived_;
}

void TransferRepositoryResponse::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool TransferRepositoryResponse::archivedIsSet() const
{
    return archivedIsSet_;
}

void TransferRepositoryResponse::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string TransferRepositoryResponse::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void TransferRepositoryResponse::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool TransferRepositoryResponse::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void TransferRepositoryResponse::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string TransferRepositoryResponse::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void TransferRepositoryResponse::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool TransferRepositoryResponse::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void TransferRepositoryResponse::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string TransferRepositoryResponse::getProjectId() const
{
    return projectId_;
}

void TransferRepositoryResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TransferRepositoryResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TransferRepositoryResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TransferRepositoryResponse::getProjectName() const
{
    return projectName_;
}

void TransferRepositoryResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TransferRepositoryResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TransferRepositoryResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TransferRepositoryResponse::getDevelopMode() const
{
    return developMode_;
}

void TransferRepositoryResponse::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool TransferRepositoryResponse::developModeIsSet() const
{
    return developModeIsSet_;
}

void TransferRepositoryResponse::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

bool TransferRepositoryResponse::isModerationResult() const
{
    return moderationResult_;
}

void TransferRepositoryResponse::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool TransferRepositoryResponse::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void TransferRepositoryResponse::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

std::string TransferRepositoryResponse::getDefaultBranch() const
{
    return defaultBranch_;
}

void TransferRepositoryResponse::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool TransferRepositoryResponse::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void TransferRepositoryResponse::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string TransferRepositoryResponse::getAvatarUrl() const
{
    return avatarUrl_;
}

void TransferRepositoryResponse::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool TransferRepositoryResponse::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void TransferRepositoryResponse::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

int32_t TransferRepositoryResponse::getStarCount() const
{
    return starCount_;
}

void TransferRepositoryResponse::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool TransferRepositoryResponse::starCountIsSet() const
{
    return starCountIsSet_;
}

void TransferRepositoryResponse::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getForksCount() const
{
    return forksCount_;
}

void TransferRepositoryResponse::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool TransferRepositoryResponse::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void TransferRepositoryResponse::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getOpenIssuesCount() const
{
    return openIssuesCount_;
}

void TransferRepositoryResponse::setOpenIssuesCount(int32_t value)
{
    openIssuesCount_ = value;
    openIssuesCountIsSet_ = true;
}

bool TransferRepositoryResponse::openIssuesCountIsSet() const
{
    return openIssuesCountIsSet_;
}

void TransferRepositoryResponse::unsetopenIssuesCount()
{
    openIssuesCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void TransferRepositoryResponse::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool TransferRepositoryResponse::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void TransferRepositoryResponse::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

std::string TransferRepositoryResponse::getLastActivityAt() const
{
    return lastActivityAt_;
}

void TransferRepositoryResponse::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool TransferRepositoryResponse::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void TransferRepositoryResponse::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

NamespaceBasicDto TransferRepositoryResponse::getNamespace() const
{
    return namespace_;
}

void TransferRepositoryResponse::setNamespace(const NamespaceBasicDto& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool TransferRepositoryResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void TransferRepositoryResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

bool TransferRepositoryResponse::isEmptyRepo() const
{
    return emptyRepo_;
}

void TransferRepositoryResponse::setEmptyRepo(bool value)
{
    emptyRepo_ = value;
    emptyRepoIsSet_ = true;
}

bool TransferRepositoryResponse::emptyRepoIsSet() const
{
    return emptyRepoIsSet_;
}

void TransferRepositoryResponse::unsetemptyRepo()
{
    emptyRepoIsSet_ = false;
}

bool TransferRepositoryResponse::isStarred() const
{
    return starred_;
}

void TransferRepositoryResponse::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool TransferRepositoryResponse::starredIsSet() const
{
    return starredIsSet_;
}

void TransferRepositoryResponse::unsetstarred()
{
    starredIsSet_ = false;
}

std::string TransferRepositoryResponse::getVisibility() const
{
    return visibility_;
}

void TransferRepositoryResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool TransferRepositoryResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void TransferRepositoryResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string TransferRepositoryResponse::getSecurityTag() const
{
    return securityTag_;
}

void TransferRepositoryResponse::setSecurityTag(const std::string& value)
{
    securityTag_ = value;
    securityTagIsSet_ = true;
}

bool TransferRepositoryResponse::securityTagIsSet() const
{
    return securityTagIsSet_;
}

void TransferRepositoryResponse::unsetsecurityTag()
{
    securityTagIsSet_ = false;
}

std::string TransferRepositoryResponse::getSecurity() const
{
    return security_;
}

void TransferRepositoryResponse::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool TransferRepositoryResponse::securityIsSet() const
{
    return securityIsSet_;
}

void TransferRepositoryResponse::unsetsecurity()
{
    securityIsSet_ = false;
}

std::string TransferRepositoryResponse::getNetworkType() const
{
    return networkType_;
}

void TransferRepositoryResponse::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool TransferRepositoryResponse::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void TransferRepositoryResponse::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

RepositoryUserBasicDto TransferRepositoryResponse::getOwner() const
{
    return owner_;
}

void TransferRepositoryResponse::setOwner(const RepositoryUserBasicDto& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TransferRepositoryResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void TransferRepositoryResponse::unsetowner()
{
    ownerIsSet_ = false;
}

RepositoryUserBasicDto TransferRepositoryResponse::getCreator() const
{
    return creator_;
}

void TransferRepositoryResponse::setCreator(const RepositoryUserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TransferRepositoryResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void TransferRepositoryResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t TransferRepositoryResponse::getCreatorId() const
{
    return creatorId_;
}

void TransferRepositoryResponse::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TransferRepositoryResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TransferRepositoryResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

RepositorySimpleDto TransferRepositoryResponse::getForkedFromRepository() const
{
    return forkedFromRepository_;
}

void TransferRepositoryResponse::setForkedFromRepository(const RepositorySimpleDto& value)
{
    forkedFromRepository_ = value;
    forkedFromRepositoryIsSet_ = true;
}

bool TransferRepositoryResponse::forkedFromRepositoryIsSet() const
{
    return forkedFromRepositoryIsSet_;
}

void TransferRepositoryResponse::unsetforkedFromRepository()
{
    forkedFromRepositoryIsSet_ = false;
}

std::string TransferRepositoryResponse::getEncryptionStatus() const
{
    return encryptionStatus_;
}

void TransferRepositoryResponse::setEncryptionStatus(const std::string& value)
{
    encryptionStatus_ = value;
    encryptionStatusIsSet_ = true;
}

bool TransferRepositoryResponse::encryptionStatusIsSet() const
{
    return encryptionStatusIsSet_;
}

void TransferRepositoryResponse::unsetencryptionStatus()
{
    encryptionStatusIsSet_ = false;
}

bool TransferRepositoryResponse::isRepoEncryptionEnabled() const
{
    return repoEncryptionEnabled_;
}

void TransferRepositoryResponse::setRepoEncryptionEnabled(bool value)
{
    repoEncryptionEnabled_ = value;
    repoEncryptionEnabledIsSet_ = true;
}

bool TransferRepositoryResponse::repoEncryptionEnabledIsSet() const
{
    return repoEncryptionEnabledIsSet_;
}

void TransferRepositoryResponse::unsetrepoEncryptionEnabled()
{
    repoEncryptionEnabledIsSet_ = false;
}

std::string TransferRepositoryResponse::getUuid() const
{
    return uuid_;
}

void TransferRepositoryResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool TransferRepositoryResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void TransferRepositoryResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::vector<int32_t>& TransferRepositoryResponse::getAncestorIds()
{
    return ancestorIds_;
}

void TransferRepositoryResponse::setAncestorIds(std::vector<int32_t> value)
{
    ancestorIds_ = value;
    ancestorIdsIsSet_ = true;
}

bool TransferRepositoryResponse::ancestorIdsIsSet() const
{
    return ancestorIdsIsSet_;
}

void TransferRepositoryResponse::unsetancestorIds()
{
    ancestorIdsIsSet_ = false;
}

std::vector<std::string>& TransferRepositoryResponse::getAncestorNames()
{
    return ancestorNames_;
}

void TransferRepositoryResponse::setAncestorNames(const std::vector<std::string>& value)
{
    ancestorNames_ = value;
    ancestorNamesIsSet_ = true;
}

bool TransferRepositoryResponse::ancestorNamesIsSet() const
{
    return ancestorNamesIsSet_;
}

void TransferRepositoryResponse::unsetancestorNames()
{
    ancestorNamesIsSet_ = false;
}

std::string TransferRepositoryResponse::getImportStatus() const
{
    return importStatus_;
}

void TransferRepositoryResponse::setImportStatus(const std::string& value)
{
    importStatus_ = value;
    importStatusIsSet_ = true;
}

bool TransferRepositoryResponse::importStatusIsSet() const
{
    return importStatusIsSet_;
}

void TransferRepositoryResponse::unsetimportStatus()
{
    importStatusIsSet_ = false;
}

std::string TransferRepositoryResponse::getImportUrl() const
{
    return importUrl_;
}

void TransferRepositoryResponse::setImportUrl(const std::string& value)
{
    importUrl_ = value;
    importUrlIsSet_ = true;
}

bool TransferRepositoryResponse::importUrlIsSet() const
{
    return importUrlIsSet_;
}

void TransferRepositoryResponse::unsetimportUrl()
{
    importUrlIsSet_ = false;
}

std::string TransferRepositoryResponse::getImportError() const
{
    return importError_;
}

void TransferRepositoryResponse::setImportError(const std::string& value)
{
    importError_ = value;
    importErrorIsSet_ = true;
}

bool TransferRepositoryResponse::importErrorIsSet() const
{
    return importErrorIsSet_;
}

void TransferRepositoryResponse::unsetimportError()
{
    importErrorIsSet_ = false;
}

std::string TransferRepositoryResponse::getRepoType() const
{
    return repoType_;
}

void TransferRepositoryResponse::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool TransferRepositoryResponse::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void TransferRepositoryResponse::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

bool TransferRepositoryResponse::isOnlyAllowMergeIfPipelineSucceeds() const
{
    return onlyAllowMergeIfPipelineSucceeds_;
}

void TransferRepositoryResponse::setOnlyAllowMergeIfPipelineSucceeds(bool value)
{
    onlyAllowMergeIfPipelineSucceeds_ = value;
    onlyAllowMergeIfPipelineSucceedsIsSet_ = true;
}

bool TransferRepositoryResponse::onlyAllowMergeIfPipelineSucceedsIsSet() const
{
    return onlyAllowMergeIfPipelineSucceedsIsSet_;
}

void TransferRepositoryResponse::unsetonlyAllowMergeIfPipelineSucceeds()
{
    onlyAllowMergeIfPipelineSucceedsIsSet_ = false;
}

bool TransferRepositoryResponse::isRequestAccessEnabled() const
{
    return requestAccessEnabled_;
}

void TransferRepositoryResponse::setRequestAccessEnabled(bool value)
{
    requestAccessEnabled_ = value;
    requestAccessEnabledIsSet_ = true;
}

bool TransferRepositoryResponse::requestAccessEnabledIsSet() const
{
    return requestAccessEnabledIsSet_;
}

void TransferRepositoryResponse::unsetrequestAccessEnabled()
{
    requestAccessEnabledIsSet_ = false;
}

bool TransferRepositoryResponse::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void TransferRepositoryResponse::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool TransferRepositoryResponse::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void TransferRepositoryResponse::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

std::string TransferRepositoryResponse::getMergeMethod() const
{
    return mergeMethod_;
}

void TransferRepositoryResponse::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool TransferRepositoryResponse::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void TransferRepositoryResponse::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

std::vector<RepositoryIdentityDto>& TransferRepositoryResponse::getForkNetworkRepositories()
{
    return forkNetworkRepositories_;
}

void TransferRepositoryResponse::setForkNetworkRepositories(const std::vector<RepositoryIdentityDto>& value)
{
    forkNetworkRepositories_ = value;
    forkNetworkRepositoriesIsSet_ = true;
}

bool TransferRepositoryResponse::forkNetworkRepositoriesIsSet() const
{
    return forkNetworkRepositoriesIsSet_;
}

void TransferRepositoryResponse::unsetforkNetworkRepositories()
{
    forkNetworkRepositoriesIsSet_ = false;
}

PermissionsDto TransferRepositoryResponse::getPermissions() const
{
    return permissions_;
}

void TransferRepositoryResponse::setPermissions(const PermissionsDto& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool TransferRepositoryResponse::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void TransferRepositoryResponse::unsetpermissions()
{
    permissionsIsSet_ = false;
}

std::string TransferRepositoryResponse::getRepositoryType() const
{
    return repositoryType_;
}

void TransferRepositoryResponse::setRepositoryType(const std::string& value)
{
    repositoryType_ = value;
    repositoryTypeIsSet_ = true;
}

bool TransferRepositoryResponse::repositoryTypeIsSet() const
{
    return repositoryTypeIsSet_;
}

void TransferRepositoryResponse::unsetrepositoryType()
{
    repositoryTypeIsSet_ = false;
}

RepositoryStatisticsDto TransferRepositoryResponse::getStatistics() const
{
    return statistics_;
}

void TransferRepositoryResponse::setStatistics(const RepositoryStatisticsDto& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool TransferRepositoryResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void TransferRepositoryResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

int32_t TransferRepositoryResponse::getBranchCount() const
{
    return branchCount_;
}

void TransferRepositoryResponse::setBranchCount(int32_t value)
{
    branchCount_ = value;
    branchCountIsSet_ = true;
}

bool TransferRepositoryResponse::branchCountIsSet() const
{
    return branchCountIsSet_;
}

void TransferRepositoryResponse::unsetbranchCount()
{
    branchCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getTagCount() const
{
    return tagCount_;
}

void TransferRepositoryResponse::setTagCount(int32_t value)
{
    tagCount_ = value;
    tagCountIsSet_ = true;
}

bool TransferRepositoryResponse::tagCountIsSet() const
{
    return tagCountIsSet_;
}

void TransferRepositoryResponse::unsettagCount()
{
    tagCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getLabelCount() const
{
    return labelCount_;
}

void TransferRepositoryResponse::setLabelCount(int32_t value)
{
    labelCount_ = value;
    labelCountIsSet_ = true;
}

bool TransferRepositoryResponse::labelCountIsSet() const
{
    return labelCountIsSet_;
}

void TransferRepositoryResponse::unsetlabelCount()
{
    labelCountIsSet_ = false;
}

int32_t TransferRepositoryResponse::getMemberCount() const
{
    return memberCount_;
}

void TransferRepositoryResponse::setMemberCount(int32_t value)
{
    memberCount_ = value;
    memberCountIsSet_ = true;
}

bool TransferRepositoryResponse::memberCountIsSet() const
{
    return memberCountIsSet_;
}

void TransferRepositoryResponse::unsetmemberCount()
{
    memberCountIsSet_ = false;
}

}
}
}
}
}


