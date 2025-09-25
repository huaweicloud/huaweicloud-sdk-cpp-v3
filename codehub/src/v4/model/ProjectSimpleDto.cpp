

#include "huaweicloud/codehub/v4/model/ProjectSimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectSimpleDto::ProjectSimpleDto()
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
    isKia_ = false;
    isKiaIsSet_ = false;
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

ProjectSimpleDto::~ProjectSimpleDto() = default;

void ProjectSimpleDto::validate()
{
}

web::json::value ProjectSimpleDto::toJson() const
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
    if(isKiaIsSet_) {
        val[utility::conversions::to_string_t("is_kia")] = ModelBase::toJson(isKia_);
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
bool ProjectSimpleDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_kia"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_kia"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsKia(refVal);
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


int32_t ProjectSimpleDto::getId() const
{
    return id_;
}

void ProjectSimpleDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectSimpleDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectSimpleDto::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectSimpleDto::getDescription() const
{
    return description_;
}

void ProjectSimpleDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectSimpleDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectSimpleDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProjectSimpleDto::getName() const
{
    return name_;
}

void ProjectSimpleDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectSimpleDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectSimpleDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectSimpleDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void ProjectSimpleDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool ProjectSimpleDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void ProjectSimpleDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string ProjectSimpleDto::getPath() const
{
    return path_;
}

void ProjectSimpleDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ProjectSimpleDto::pathIsSet() const
{
    return pathIsSet_;
}

void ProjectSimpleDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string ProjectSimpleDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void ProjectSimpleDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool ProjectSimpleDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void ProjectSimpleDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string ProjectSimpleDto::getCreatedAt() const
{
    return createdAt_;
}

void ProjectSimpleDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ProjectSimpleDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ProjectSimpleDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ProjectSimpleDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ProjectSimpleDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ProjectSimpleDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ProjectSimpleDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ProjectSimpleDto::isArchived() const
{
    return archived_;
}

void ProjectSimpleDto::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ProjectSimpleDto::archivedIsSet() const
{
    return archivedIsSet_;
}

void ProjectSimpleDto::unsetarchived()
{
    archivedIsSet_ = false;
}

bool ProjectSimpleDto::isIsKia() const
{
    return isKia_;
}

void ProjectSimpleDto::setIsKia(bool value)
{
    isKia_ = value;
    isKiaIsSet_ = true;
}

bool ProjectSimpleDto::isKiaIsSet() const
{
    return isKiaIsSet_;
}

void ProjectSimpleDto::unsetisKia()
{
    isKiaIsSet_ = false;
}

std::string ProjectSimpleDto::getSshUrlToRepo() const
{
    return sshUrlToRepo_;
}

void ProjectSimpleDto::setSshUrlToRepo(const std::string& value)
{
    sshUrlToRepo_ = value;
    sshUrlToRepoIsSet_ = true;
}

bool ProjectSimpleDto::sshUrlToRepoIsSet() const
{
    return sshUrlToRepoIsSet_;
}

void ProjectSimpleDto::unsetsshUrlToRepo()
{
    sshUrlToRepoIsSet_ = false;
}

std::string ProjectSimpleDto::getHttpUrlToRepo() const
{
    return httpUrlToRepo_;
}

void ProjectSimpleDto::setHttpUrlToRepo(const std::string& value)
{
    httpUrlToRepo_ = value;
    httpUrlToRepoIsSet_ = true;
}

bool ProjectSimpleDto::httpUrlToRepoIsSet() const
{
    return httpUrlToRepoIsSet_;
}

void ProjectSimpleDto::unsethttpUrlToRepo()
{
    httpUrlToRepoIsSet_ = false;
}

std::string ProjectSimpleDto::getWebUrl() const
{
    return webUrl_;
}

void ProjectSimpleDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool ProjectSimpleDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void ProjectSimpleDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string ProjectSimpleDto::getReadmeUrl() const
{
    return readmeUrl_;
}

void ProjectSimpleDto::setReadmeUrl(const std::string& value)
{
    readmeUrl_ = value;
    readmeUrlIsSet_ = true;
}

bool ProjectSimpleDto::readmeUrlIsSet() const
{
    return readmeUrlIsSet_;
}

void ProjectSimpleDto::unsetreadmeUrl()
{
    readmeUrlIsSet_ = false;
}

std::string ProjectSimpleDto::getProjectId() const
{
    return projectId_;
}

void ProjectSimpleDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectSimpleDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectSimpleDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ProjectSimpleDto::getProjectName() const
{
    return projectName_;
}

void ProjectSimpleDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ProjectSimpleDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ProjectSimpleDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ProjectSimpleDto::getDevelopMode() const
{
    return developMode_;
}

void ProjectSimpleDto::setDevelopMode(const std::string& value)
{
    developMode_ = value;
    developModeIsSet_ = true;
}

bool ProjectSimpleDto::developModeIsSet() const
{
    return developModeIsSet_;
}

void ProjectSimpleDto::unsetdevelopMode()
{
    developModeIsSet_ = false;
}

bool ProjectSimpleDto::isModerationResult() const
{
    return moderationResult_;
}

void ProjectSimpleDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool ProjectSimpleDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void ProjectSimpleDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

}
}
}
}
}


