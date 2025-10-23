

#include "huaweicloud/codehub/v4/model/RepositoryBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryBasicDto::RepositoryBasicDto()
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
}

RepositoryBasicDto::~RepositoryBasicDto() = default;

void RepositoryBasicDto::validate()
{
}

web::json::value RepositoryBasicDto::toJson() const
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

    return val;
}
bool RepositoryBasicDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t RepositoryBasicDto::getId() const
{
    return id_;
}

void RepositoryBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryBasicDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryBasicDto::getDescription() const
{
    return description_;
}

void RepositoryBasicDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryBasicDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryBasicDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryBasicDto::getName() const
{
    return name_;
}

void RepositoryBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryBasicDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void RepositoryBasicDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool RepositoryBasicDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void RepositoryBasicDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string RepositoryBasicDto::getPath() const
{
    return path_;
}

void RepositoryBasicDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool RepositoryBasicDto::pathIsSet() const
{
    return pathIsSet_;
}

void RepositoryBasicDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string RepositoryBasicDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void RepositoryBasicDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool RepositoryBasicDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void RepositoryBasicDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string RepositoryBasicDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositoryBasicDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositoryBasicDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositoryBasicDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepositoryBasicDto::getUpdatedAt() const
{
    return updatedAt_;
}

void RepositoryBasicDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepositoryBasicDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepositoryBasicDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool RepositoryBasicDto::isArchived() const
{
    return archived_;
}

void RepositoryBasicDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool RepositoryBasicDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void RepositoryBasicDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string RepositoryBasicDto::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void RepositoryBasicDto::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool RepositoryBasicDto::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void RepositoryBasicDto::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string RepositoryBasicDto::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void RepositoryBasicDto::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool RepositoryBasicDto::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void RepositoryBasicDto::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string RepositoryBasicDto::getProjectId() const
{
    return projectId_;
}

void RepositoryBasicDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositoryBasicDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositoryBasicDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositoryBasicDto::getProjectName() const
{
    return projectName_;
}

void RepositoryBasicDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepositoryBasicDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepositoryBasicDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string RepositoryBasicDto::getDevelopMode() const
{
    return developMode_;
}

void RepositoryBasicDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool RepositoryBasicDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void RepositoryBasicDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

bool RepositoryBasicDto::isModerationResult() const
{
    return moderationResult_;
}

void RepositoryBasicDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool RepositoryBasicDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void RepositoryBasicDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

std::string RepositoryBasicDto::getDefaultBranch() const
{
    return defaultBranch_;
}

void RepositoryBasicDto::setDefaultBranch(const std::string& value)
{
    defaultBranch_ = value;
    defaultBranchIsSet_ = true;
}

bool RepositoryBasicDto::defaultBranchIsSet() const
{
    return defaultBranchIsSet_;
}

void RepositoryBasicDto::unsetdefaultBranch()
{
    defaultBranchIsSet_ = false;
}

std::string RepositoryBasicDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void RepositoryBasicDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool RepositoryBasicDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void RepositoryBasicDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

int32_t RepositoryBasicDto::getStarCount() const
{
    return starCount_;
}

void RepositoryBasicDto::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool RepositoryBasicDto::starCountIsSet() const
{
    return starCountIsSet_;
}

void RepositoryBasicDto::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t RepositoryBasicDto::getForksCount() const
{
    return forksCount_;
}

void RepositoryBasicDto::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool RepositoryBasicDto::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void RepositoryBasicDto::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t RepositoryBasicDto::getOpenIssuesCount() const
{
    return openIssuesCount_;
}

void RepositoryBasicDto::setOpenIssuesCount(int32_t value)
{
    openIssuesCount_ = value;
    openIssuesCountIsSet_ = true;
}

bool RepositoryBasicDto::openIssuesCountIsSet() const
{
    return openIssuesCountIsSet_;
}

void RepositoryBasicDto::unsetopenIssuesCount()
{
    openIssuesCountIsSet_ = false;
}

int32_t RepositoryBasicDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void RepositoryBasicDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool RepositoryBasicDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void RepositoryBasicDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

std::string RepositoryBasicDto::getLastActivityAt() const
{
    return lastActivityAt_;
}

void RepositoryBasicDto::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool RepositoryBasicDto::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void RepositoryBasicDto::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

NamespaceBasicDto RepositoryBasicDto::getNamespace() const
{
    return namespace_;
}

void RepositoryBasicDto::setNamespace(const NamespaceBasicDto& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool RepositoryBasicDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void RepositoryBasicDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

bool RepositoryBasicDto::isEmptyRepo() const
{
    return emptyRepo_;
}

void RepositoryBasicDto::setEmptyRepo(bool value)
{
    emptyRepo_ = value;
    emptyRepoIsSet_ = true;
}

bool RepositoryBasicDto::emptyRepoIsSet() const
{
    return emptyRepoIsSet_;
}

void RepositoryBasicDto::unsetemptyRepo()
{
    emptyRepoIsSet_ = false;
}

bool RepositoryBasicDto::isStarred() const
{
    return starred_;
}

void RepositoryBasicDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool RepositoryBasicDto::starredIsSet() const
{
    return starredIsSet_;
}

void RepositoryBasicDto::unsetstarred()
{
    starredIsSet_ = false;
}

std::string RepositoryBasicDto::getVisibility() const
{
    return visibility_;
}

void RepositoryBasicDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool RepositoryBasicDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void RepositoryBasicDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string RepositoryBasicDto::getSecurityTag() const
{
    return securityTag_;
}

void RepositoryBasicDto::setSecurityTag(const std::string& value)
{
    securityTag_ = value;
    securityTagIsSet_ = true;
}

bool RepositoryBasicDto::securityTagIsSet() const
{
    return securityTagIsSet_;
}

void RepositoryBasicDto::unsetsecurityTag()
{
    securityTagIsSet_ = false;
}

std::string RepositoryBasicDto::getSecurity() const
{
    return security_;
}

void RepositoryBasicDto::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool RepositoryBasicDto::securityIsSet() const
{
    return securityIsSet_;
}

void RepositoryBasicDto::unsetsecurity()
{
    securityIsSet_ = false;
}

std::string RepositoryBasicDto::getNetworkType() const
{
    return networkType_;
}

void RepositoryBasicDto::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool RepositoryBasicDto::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void RepositoryBasicDto::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

RepositoryUserBasicDto RepositoryBasicDto::getOwner() const
{
    return owner_;
}

void RepositoryBasicDto::setOwner(const RepositoryUserBasicDto& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool RepositoryBasicDto::ownerIsSet() const
{
    return ownerIsSet_;
}

void RepositoryBasicDto::unsetowner()
{
    ownerIsSet_ = false;
}

RepositoryUserBasicDto RepositoryBasicDto::getCreator() const
{
    return creator_;
}

void RepositoryBasicDto::setCreator(const RepositoryUserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool RepositoryBasicDto::creatorIsSet() const
{
    return creatorIsSet_;
}

void RepositoryBasicDto::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t RepositoryBasicDto::getCreatorId() const
{
    return creatorId_;
}

void RepositoryBasicDto::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool RepositoryBasicDto::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void RepositoryBasicDto::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

RepositorySimpleDto RepositoryBasicDto::getForkedFromRepository() const
{
    return forkedFromRepository_;
}

void RepositoryBasicDto::setForkedFromRepository(const RepositorySimpleDto& value)
{
    forkedFromRepository_ = value;
    forkedFromRepositoryIsSet_ = true;
}

bool RepositoryBasicDto::forkedFromRepositoryIsSet() const
{
    return forkedFromRepositoryIsSet_;
}

void RepositoryBasicDto::unsetforkedFromRepository()
{
    forkedFromRepositoryIsSet_ = false;
}

}
}
}
}
}


