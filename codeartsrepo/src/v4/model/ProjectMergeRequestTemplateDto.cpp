

#include "huaweicloud/codeartsrepo/v4/model/ProjectMergeRequestTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectMergeRequestTemplateDto::ProjectMergeRequestTemplateDto()
{
    id_ = 0;
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    mergeRequestTitle_ = "";
    mergeRequestTitleIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    isWip_ = false;
    isWipIsSet_ = false;
    autoExtractMrTitle_ = 0;
    autoExtractMrTitleIsSet_ = false;
    creatorIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ProjectMergeRequestTemplateDto::~ProjectMergeRequestTemplateDto() = default;

void ProjectMergeRequestTemplateDto::validate()
{
}

web::json::value ProjectMergeRequestTemplateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(mergeRequestTitleIsSet_) {
        val[utility::conversions::to_string_t("merge_request_title")] = ModelBase::toJson(mergeRequestTitle_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(isWipIsSet_) {
        val[utility::conversions::to_string_t("is_wip")] = ModelBase::toJson(isWip_);
    }
    if(autoExtractMrTitleIsSet_) {
        val[utility::conversions::to_string_t("auto_extract_mr_title")] = ModelBase::toJson(autoExtractMrTitle_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ProjectMergeRequestTemplateDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_wip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_wip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_extract_mr_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_extract_mr_title"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExtractMrTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    return ok;
}


int32_t ProjectMergeRequestTemplateDto::getId() const
{
    return id_;
}

void ProjectMergeRequestTemplateDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetid()
{
    idIsSet_ = false;
}

int32_t ProjectMergeRequestTemplateDto::getRepositoryId() const
{
    return repositoryId_;
}

void ProjectMergeRequestTemplateDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getDescription() const
{
    return description_;
}

void ProjectMergeRequestTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getCreatedAt() const
{
    return createdAt_;
}

void ProjectMergeRequestTemplateDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ProjectMergeRequestTemplateDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getTemplateName() const
{
    return templateName_;
}

void ProjectMergeRequestTemplateDto::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ProjectMergeRequestTemplateDto::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void ProjectMergeRequestTemplateDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool ProjectMergeRequestTemplateDto::isIsDefault() const
{
    return isDefault_;
}

void ProjectMergeRequestTemplateDto::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool ProjectMergeRequestTemplateDto::isIsWip() const
{
    return isWip_;
}

void ProjectMergeRequestTemplateDto::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::isWipIsSet() const
{
    return isWipIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t ProjectMergeRequestTemplateDto::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void ProjectMergeRequestTemplateDto::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto ProjectMergeRequestTemplateDto::getCreator() const
{
    return creator_;
}

void ProjectMergeRequestTemplateDto::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::creatorIsSet() const
{
    return creatorIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ProjectMergeRequestTemplateDto::getProjectId() const
{
    return projectId_;
}

void ProjectMergeRequestTemplateDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectMergeRequestTemplateDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectMergeRequestTemplateDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


