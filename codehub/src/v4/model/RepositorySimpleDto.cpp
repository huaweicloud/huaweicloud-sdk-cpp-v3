

#include "huaweicloud/codehub/v4/model/RepositorySimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositorySimpleDto::RepositorySimpleDto()
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
}

RepositorySimpleDto::~RepositorySimpleDto() = default;

void RepositorySimpleDto::validate()
{
}

web::json::value RepositorySimpleDto::toJson() const
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

    return val;
}
bool RepositorySimpleDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t RepositorySimpleDto::getId() const
{
    return id_;
}

void RepositorySimpleDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositorySimpleDto::idIsSet() const
{
    return idIsSet_;
}

void RepositorySimpleDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositorySimpleDto::getDescription() const
{
    return description_;
}

void RepositorySimpleDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositorySimpleDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositorySimpleDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositorySimpleDto::getName() const
{
    return name_;
}

void RepositorySimpleDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositorySimpleDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositorySimpleDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositorySimpleDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void RepositorySimpleDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool RepositorySimpleDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void RepositorySimpleDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string RepositorySimpleDto::getPath() const
{
    return path_;
}

void RepositorySimpleDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool RepositorySimpleDto::pathIsSet() const
{
    return pathIsSet_;
}

void RepositorySimpleDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string RepositorySimpleDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void RepositorySimpleDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool RepositorySimpleDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void RepositorySimpleDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string RepositorySimpleDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositorySimpleDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositorySimpleDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositorySimpleDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepositorySimpleDto::getUpdatedAt() const
{
    return updatedAt_;
}

void RepositorySimpleDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepositorySimpleDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepositorySimpleDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool RepositorySimpleDto::isArchived() const
{
    return archived_;
}

void RepositorySimpleDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool RepositorySimpleDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void RepositorySimpleDto::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string RepositorySimpleDto::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void RepositorySimpleDto::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool RepositorySimpleDto::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void RepositorySimpleDto::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string RepositorySimpleDto::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void RepositorySimpleDto::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool RepositorySimpleDto::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void RepositorySimpleDto::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string RepositorySimpleDto::getWebUrl() const
{
    return webUrl_;
}

void RepositorySimpleDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RepositorySimpleDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RepositorySimpleDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string RepositorySimpleDto::getReadmeUrl() const
{
    return readmeUrl_;
}

void RepositorySimpleDto::setReadmeUrl(const std::string& value)
{
    readmeUrl_ = value;
    readmeUrlIsSet_ = true;
}

bool RepositorySimpleDto::readmeUrlIsSet() const
{
    return readmeUrlIsSet_;
}

void RepositorySimpleDto::unsetreadmeUrl()
{
    readmeUrlIsSet_ = false;
}

std::string RepositorySimpleDto::getProjectId() const
{
    return projectId_;
}

void RepositorySimpleDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepositorySimpleDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepositorySimpleDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepositorySimpleDto::getProjectName() const
{
    return projectName_;
}

void RepositorySimpleDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepositorySimpleDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepositorySimpleDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string RepositorySimpleDto::getDevelopMode() const
{
    return developMode_;
}

void RepositorySimpleDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool RepositorySimpleDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void RepositorySimpleDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

bool RepositorySimpleDto::isModerationResult() const
{
    return moderationResult_;
}

void RepositorySimpleDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool RepositorySimpleDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void RepositorySimpleDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

}
}
}
}
}


