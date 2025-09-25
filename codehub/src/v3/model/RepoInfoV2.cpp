

#include "huaweicloud/codehub/v3/model/RepoInfoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoInfoV2::RepoInfoV2()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    httpsUrl_ = "";
    httpsUrlIsSet_ = false;
    iamUserUuid_ = "";
    iamUserUuidIsSet_ = false;
    isOwner_ = 0;
    isOwnerIsSet_ = false;
    lfsSize_ = "";
    lfsSizeIsSet_ = false;
    projectIsDeleted_ = "";
    projectIsDeletedIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    repositorySize_ = "";
    repositorySizeIsSet_ = false;
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    sshUrl_ = "";
    sshUrlIsSet_ = false;
    star_ = false;
    starIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    userRole_ = 0;
    userRoleIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
}

RepoInfoV2::~RepoInfoV2() = default;

void RepoInfoV2::validate()
{
}

web::json::value RepoInfoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(httpsUrlIsSet_) {
        val[utility::conversions::to_string_t("https_url")] = ModelBase::toJson(httpsUrl_);
    }
    if(iamUserUuidIsSet_) {
        val[utility::conversions::to_string_t("iam_user_uuid")] = ModelBase::toJson(iamUserUuid_);
    }
    if(isOwnerIsSet_) {
        val[utility::conversions::to_string_t("is_owner")] = ModelBase::toJson(isOwner_);
    }
    if(lfsSizeIsSet_) {
        val[utility::conversions::to_string_t("lfs_size")] = ModelBase::toJson(lfsSize_);
    }
    if(projectIsDeletedIsSet_) {
        val[utility::conversions::to_string_t("project_is_deleted")] = ModelBase::toJson(projectIsDeleted_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(repositorySizeIsSet_) {
        val[utility::conversions::to_string_t("repository_size")] = ModelBase::toJson(repositorySize_);
    }
    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(sshUrlIsSet_) {
        val[utility::conversions::to_string_t("ssh_url")] = ModelBase::toJson(sshUrl_);
    }
    if(starIsSet_) {
        val[utility::conversions::to_string_t("star")] = ModelBase::toJson(star_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(userRoleIsSet_) {
        val[utility::conversions::to_string_t("userRole")] = ModelBase::toJson(userRole_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibility_level")] = ModelBase::toJson(visibilityLevel_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }

    return val;
}
bool RepoInfoV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iam_user_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_user_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamUserUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_owner"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lfs_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lfs_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLfsSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_is_deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssh_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("star"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("star"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStar(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userRole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userRole"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    return ok;
}


std::string RepoInfoV2::getCreatedAt() const
{
    return createdAt_;
}

void RepoInfoV2::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepoInfoV2::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepoInfoV2::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepoInfoV2::getCreatorName() const
{
    return creatorName_;
}

void RepoInfoV2::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RepoInfoV2::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RepoInfoV2::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RepoInfoV2::getDomainName() const
{
    return domainName_;
}

void RepoInfoV2::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool RepoInfoV2::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void RepoInfoV2::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string RepoInfoV2::getGroupName() const
{
    return groupName_;
}

void RepoInfoV2::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool RepoInfoV2::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void RepoInfoV2::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string RepoInfoV2::getHttpsUrl() const
{
    return httpsUrl_;
}

void RepoInfoV2::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool RepoInfoV2::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void RepoInfoV2::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

std::string RepoInfoV2::getIamUserUuid() const
{
    return iamUserUuid_;
}

void RepoInfoV2::setIamUserUuid(const std::string& value)
{
    iamUserUuid_ = value;
    iamUserUuidIsSet_ = true;
}

bool RepoInfoV2::iamUserUuidIsSet() const
{
    return iamUserUuidIsSet_;
}

void RepoInfoV2::unsetiamUserUuid()
{
    iamUserUuidIsSet_ = false;
}

int32_t RepoInfoV2::getIsOwner() const
{
    return isOwner_;
}

void RepoInfoV2::setIsOwner(int32_t value)
{
    isOwner_ = value;
    isOwnerIsSet_ = true;
}

bool RepoInfoV2::isOwnerIsSet() const
{
    return isOwnerIsSet_;
}

void RepoInfoV2::unsetisOwner()
{
    isOwnerIsSet_ = false;
}

std::string RepoInfoV2::getLfsSize() const
{
    return lfsSize_;
}

void RepoInfoV2::setLfsSize(const std::string& value)
{
    lfsSize_ = value;
    lfsSizeIsSet_ = true;
}

bool RepoInfoV2::lfsSizeIsSet() const
{
    return lfsSizeIsSet_;
}

void RepoInfoV2::unsetlfsSize()
{
    lfsSizeIsSet_ = false;
}

std::string RepoInfoV2::getProjectIsDeleted() const
{
    return projectIsDeleted_;
}

void RepoInfoV2::setProjectIsDeleted(const std::string& value)
{
    projectIsDeleted_ = value;
    projectIsDeletedIsSet_ = true;
}

bool RepoInfoV2::projectIsDeletedIsSet() const
{
    return projectIsDeletedIsSet_;
}

void RepoInfoV2::unsetprojectIsDeleted()
{
    projectIsDeletedIsSet_ = false;
}

std::string RepoInfoV2::getProjectUuid() const
{
    return projectUuid_;
}

void RepoInfoV2::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool RepoInfoV2::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void RepoInfoV2::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

int32_t RepoInfoV2::getRepositoryId() const
{
    return repositoryId_;
}

void RepoInfoV2::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RepoInfoV2::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RepoInfoV2::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string RepoInfoV2::getRepositoryName() const
{
    return repositoryName_;
}

void RepoInfoV2::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepoInfoV2::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepoInfoV2::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepoInfoV2::getRepositorySize() const
{
    return repositorySize_;
}

void RepoInfoV2::setRepositorySize(const std::string& value)
{
    repositorySize_ = value;
    repositorySizeIsSet_ = true;
}

bool RepoInfoV2::repositorySizeIsSet() const
{
    return repositorySizeIsSet_;
}

void RepoInfoV2::unsetrepositorySize()
{
    repositorySizeIsSet_ = false;
}

std::string RepoInfoV2::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void RepoInfoV2::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool RepoInfoV2::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void RepoInfoV2::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string RepoInfoV2::getSshUrl() const
{
    return sshUrl_;
}

void RepoInfoV2::setSshUrl(const std::string& value)
{
    sshUrl_ = value;
    sshUrlIsSet_ = true;
}

bool RepoInfoV2::sshUrlIsSet() const
{
    return sshUrlIsSet_;
}

void RepoInfoV2::unsetsshUrl()
{
    sshUrlIsSet_ = false;
}

bool RepoInfoV2::isStar() const
{
    return star_;
}

void RepoInfoV2::setStar(bool value)
{
    star_ = value;
    starIsSet_ = true;
}

bool RepoInfoV2::starIsSet() const
{
    return starIsSet_;
}

void RepoInfoV2::unsetstar()
{
    starIsSet_ = false;
}

int32_t RepoInfoV2::getStatus() const
{
    return status_;
}

void RepoInfoV2::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepoInfoV2::statusIsSet() const
{
    return statusIsSet_;
}

void RepoInfoV2::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepoInfoV2::getUpdatedAt() const
{
    return updatedAt_;
}

void RepoInfoV2::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepoInfoV2::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepoInfoV2::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t RepoInfoV2::getUserRole() const
{
    return userRole_;
}

void RepoInfoV2::setUserRole(int32_t value)
{
    userRole_ = value;
    userRoleIsSet_ = true;
}

bool RepoInfoV2::userRoleIsSet() const
{
    return userRoleIsSet_;
}

void RepoInfoV2::unsetuserRole()
{
    userRoleIsSet_ = false;
}

int32_t RepoInfoV2::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void RepoInfoV2::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool RepoInfoV2::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void RepoInfoV2::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

std::string RepoInfoV2::getWebUrl() const
{
    return webUrl_;
}

void RepoInfoV2::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RepoInfoV2::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RepoInfoV2::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

}
}
}
}
}


