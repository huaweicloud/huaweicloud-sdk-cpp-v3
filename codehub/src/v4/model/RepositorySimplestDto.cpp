

#include "huaweicloud/codehub/v4/model/RepositorySimplestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositorySimplestDto::RepositorySimplestDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    developMode_ = "";
    developModeIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    security_ = "";
    securityIsSet_ = false;
    starCount_ = 0;
    starCountIsSet_ = false;
    forksCount_ = 0;
    forksCountIsSet_ = false;
    openIssuesCount_ = 0;
    openIssuesCountIsSet_ = false;
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    nameWithNamespace_ = "";
    nameWithNamespaceIsSet_ = false;
    lastActivityAt_ = "";
    lastActivityAtIsSet_ = false;
    forkedFromRepositoryIsSet_ = false;
    permissions_ = 0;
    permissionsIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    memberCount_ = 0;
    memberCountIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    lastRepositoryUpdatedAt_ = "";
    lastRepositoryUpdatedAtIsSet_ = false;
    sshUrlToRepo_ = "";
    sshUrlToRepoIsSet_ = false;
    httpUrlToRepo_ = "";
    httpUrlToRepoIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    activeStatisticIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectIsDelete_ = false;
    projectIsDeleteIsSet_ = false;
    creatorId_ = 0;
    creatorIdIsSet_ = false;
}

RepositorySimplestDto::~RepositorySimplestDto() = default;

void RepositorySimplestDto::validate()
{
}

web::json::value RepositorySimplestDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(developModeIsSet_) {
        val[utility::conversions::to_string_t("develop_mode")] = ModelBase::toJson(developMode_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(securityIsSet_) {
        val[utility::conversions::to_string_t("security")] = ModelBase::toJson(security_);
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
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(nameWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("name_with_namespace")] = ModelBase::toJson(nameWithNamespace_);
    }
    if(lastActivityAtIsSet_) {
        val[utility::conversions::to_string_t("last_activity_at")] = ModelBase::toJson(lastActivityAt_);
    }
    if(forkedFromRepositoryIsSet_) {
        val[utility::conversions::to_string_t("forked_from_repository")] = ModelBase::toJson(forkedFromRepository_);
    }
    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(memberCountIsSet_) {
        val[utility::conversions::to_string_t("member_count")] = ModelBase::toJson(memberCount_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(lastRepositoryUpdatedAtIsSet_) {
        val[utility::conversions::to_string_t("last_repository_updated_at")] = ModelBase::toJson(lastRepositoryUpdatedAt_);
    }
    if(sshUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("ssh_url_to_repo")] = ModelBase::toJson(sshUrlToRepo_);
    }
    if(httpUrlToRepoIsSet_) {
        val[utility::conversions::to_string_t("http_url_to_repo")] = ModelBase::toJson(httpUrlToRepo_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(activeStatisticIsSet_) {
        val[utility::conversions::to_string_t("active_statistic")] = ModelBase::toJson(activeStatistic_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectIsDeleteIsSet_) {
        val[utility::conversions::to_string_t("project_is_delete")] = ModelBase::toJson(projectIsDelete_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }

    return val;
}
bool RepositorySimplestDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("develop_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("develop_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_activity_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_activity_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastActivityAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forked_from_repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forked_from_repository"));
        if(!fieldValue.is_null())
        {
            ForkedFromRepositorySimplestDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForkedFromRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("member_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_is_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIsDelete(refVal);
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
    return ok;
}


int32_t RepositorySimplestDto::getId() const
{
    return id_;
}

void RepositorySimplestDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositorySimplestDto::idIsSet() const
{
    return idIsSet_;
}

void RepositorySimplestDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositorySimplestDto::getName() const
{
    return name_;
}

void RepositorySimplestDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositorySimplestDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositorySimplestDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositorySimplestDto::getNamespace() const
{
    return namespace_;
}

void RepositorySimplestDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool RepositorySimplestDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void RepositorySimplestDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string RepositorySimplestDto::getPath() const
{
    return path_;
}

void RepositorySimplestDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool RepositorySimplestDto::pathIsSet() const
{
    return pathIsSet_;
}

void RepositorySimplestDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string RepositorySimplestDto::getDevelopMode() const
{
    return developMode_;
}

void RepositorySimplestDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool RepositorySimplestDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void RepositorySimplestDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

std::string RepositorySimplestDto::getVisibility() const
{
    return visibility_;
}

void RepositorySimplestDto::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool RepositorySimplestDto::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void RepositorySimplestDto::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string RepositorySimplestDto::getSecurity() const
{
    return security_;
}

void RepositorySimplestDto::setSecurity(const std::string& value)
{
    security_ = value;
    securityIsSet_ = true;
}

bool RepositorySimplestDto::securityIsSet() const
{
    return securityIsSet_;
}

void RepositorySimplestDto::unsetsecurity()
{
    securityIsSet_ = false;
}

int32_t RepositorySimplestDto::getStarCount() const
{
    return starCount_;
}

void RepositorySimplestDto::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool RepositorySimplestDto::starCountIsSet() const
{
    return starCountIsSet_;
}

void RepositorySimplestDto::unsetstarCount()
{
    starCountIsSet_ = false;
}

int32_t RepositorySimplestDto::getForksCount() const
{
    return forksCount_;
}

void RepositorySimplestDto::setForksCount(int32_t value)
{
    forksCount_ = value;
    forksCountIsSet_ = true;
}

bool RepositorySimplestDto::forksCountIsSet() const
{
    return forksCountIsSet_;
}

void RepositorySimplestDto::unsetforksCount()
{
    forksCountIsSet_ = false;
}

int32_t RepositorySimplestDto::getOpenIssuesCount() const
{
    return openIssuesCount_;
}

void RepositorySimplestDto::setOpenIssuesCount(int32_t value)
{
    openIssuesCount_ = value;
    openIssuesCountIsSet_ = true;
}

bool RepositorySimplestDto::openIssuesCountIsSet() const
{
    return openIssuesCountIsSet_;
}

void RepositorySimplestDto::unsetopenIssuesCount()
{
    openIssuesCountIsSet_ = false;
}

int32_t RepositorySimplestDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void RepositorySimplestDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool RepositorySimplestDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void RepositorySimplestDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

bool RepositorySimplestDto::isStarred() const
{
    return starred_;
}

void RepositorySimplestDto::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool RepositorySimplestDto::starredIsSet() const
{
    return starredIsSet_;
}

void RepositorySimplestDto::unsetstarred()
{
    starredIsSet_ = false;
}

std::string RepositorySimplestDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void RepositorySimplestDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool RepositorySimplestDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void RepositorySimplestDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string RepositorySimplestDto::getLastActivityAt() const
{
    return lastActivityAt_;
}

void RepositorySimplestDto::setLastActivityAt(const std::string& value)
{
    lastActivityAt_ = value;
    lastActivityAtIsSet_ = true;
}

bool RepositorySimplestDto::lastActivityAtIsSet() const
{
    return lastActivityAtIsSet_;
}

void RepositorySimplestDto::unsetlastActivityAt()
{
    lastActivityAtIsSet_ = false;
}

ForkedFromRepositorySimplestDto RepositorySimplestDto::getForkedFromRepository() const
{
    return forkedFromRepository_;
}

void RepositorySimplestDto::setForkedFromRepository(const ForkedFromRepositorySimplestDto& value)
{
    forkedFromRepository_ = value;
    forkedFromRepositoryIsSet_ = true;
}

bool RepositorySimplestDto::forkedFromRepositoryIsSet() const
{
    return forkedFromRepositoryIsSet_;
}

void RepositorySimplestDto::unsetforkedFromRepository()
{
    forkedFromRepositoryIsSet_ = false;
}

int32_t RepositorySimplestDto::getPermissions() const
{
    return permissions_;
}

void RepositorySimplestDto::setPermissions(int32_t value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool RepositorySimplestDto::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void RepositorySimplestDto::unsetpermissions()
{
    permissionsIsSet_ = false;
}

bool RepositorySimplestDto::isArchived() const
{
    return archived_;
}

void RepositorySimplestDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool RepositorySimplestDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void RepositorySimplestDto::unsetarchived()
{
    archivedIsSet_ = false;
}

int32_t RepositorySimplestDto::getMemberCount() const
{
    return memberCount_;
}

void RepositorySimplestDto::setMemberCount(int32_t value)
{
    memberCount_ = value;
    memberCountIsSet_ = true;
}

bool RepositorySimplestDto::memberCountIsSet() const
{
    return memberCountIsSet_;
}

void RepositorySimplestDto::unsetmemberCount()
{
    memberCountIsSet_ = false;
}

std::string RepositorySimplestDto::getUuid() const
{
    return uuid_;
}

void RepositorySimplestDto::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool RepositorySimplestDto::uuidIsSet() const
{
    return uuidIsSet_;
}

void RepositorySimplestDto::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string RepositorySimplestDto::getDescription() const
{
    return description_;
}

void RepositorySimplestDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositorySimplestDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositorySimplestDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositorySimplestDto::getLastRepositoryUpdatedAt() const
{
    return lastRepositoryUpdatedAt_;
}

void RepositorySimplestDto::setLastRepositoryUpdatedAt(const std::string& value)
{
    lastRepositoryUpdatedAt_ = value;
    lastRepositoryUpdatedAtIsSet_ = true;
}

bool RepositorySimplestDto::lastRepositoryUpdatedAtIsSet() const
{
    return lastRepositoryUpdatedAtIsSet_;
}

void RepositorySimplestDto::unsetlastRepositoryUpdatedAt()
{
    lastRepositoryUpdatedAtIsSet_ = false;
}

std::string RepositorySimplestDto::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void RepositorySimplestDto::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool RepositorySimplestDto::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void RepositorySimplestDto::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string RepositorySimplestDto::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void RepositorySimplestDto::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool RepositorySimplestDto::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void RepositorySimplestDto::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string RepositorySimplestDto::getStatus() const
{
    return status_;
}

void RepositorySimplestDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepositorySimplestDto::statusIsSet() const
{
    return statusIsSet_;
}

void RepositorySimplestDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<int32_t>& RepositorySimplestDto::getActiveStatistic()
{
    return activeStatistic_;
}

void RepositorySimplestDto::setActiveStatistic(std::vector<int32_t> value)
{
    activeStatistic_ = value;
    activeStatisticIsSet_ = true;
}

bool RepositorySimplestDto::activeStatisticIsSet() const
{
    return activeStatisticIsSet_;
}

void RepositorySimplestDto::unsetactiveStatistic()
{
    activeStatisticIsSet_ = false;
}

std::string RepositorySimplestDto::getProjectName() const
{
    return projectName_;
}

void RepositorySimplestDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepositorySimplestDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepositorySimplestDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string RepositorySimplestDto::getProjectId() const
{
    return projectId_;
}

void RepositorySimplestDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositorySimplestDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositorySimplestDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool RepositorySimplestDto::isProjectIsDelete() const
{
    return projectIsDelete_;
}

void RepositorySimplestDto::setProjectIsDelete(bool value)
{
    projectIsDelete_ = value;
    projectIsDeleteIsSet_ = true;
}

bool RepositorySimplestDto::projectIsDeleteIsSet() const
{
    return projectIsDeleteIsSet_;
}

void RepositorySimplestDto::unsetprojectIsDelete()
{
    projectIsDeleteIsSet_ = false;
}

int32_t RepositorySimplestDto::getCreatorId() const
{
    return creatorId_;
}

void RepositorySimplestDto::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool RepositorySimplestDto::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void RepositorySimplestDto::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

}
}
}
}
}


