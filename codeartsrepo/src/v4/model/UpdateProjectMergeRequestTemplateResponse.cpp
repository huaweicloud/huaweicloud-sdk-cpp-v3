

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectMergeRequestTemplateResponse::UpdateProjectMergeRequestTemplateResponse()
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

UpdateProjectMergeRequestTemplateResponse::~UpdateProjectMergeRequestTemplateResponse() = default;

void UpdateProjectMergeRequestTemplateResponse::validate()
{
}

web::json::value UpdateProjectMergeRequestTemplateResponse::toJson() const
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
bool UpdateProjectMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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


int32_t UpdateProjectMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void UpdateProjectMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateProjectMergeRequestTemplateResponse::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateProjectMergeRequestTemplateResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getDescription() const
{
    return description_;
}

void UpdateProjectMergeRequestTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateProjectMergeRequestTemplateResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateProjectMergeRequestTemplateResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void UpdateProjectMergeRequestTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void UpdateProjectMergeRequestTemplateResponse::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool UpdateProjectMergeRequestTemplateResponse::isIsDefault() const
{
    return isDefault_;
}

void UpdateProjectMergeRequestTemplateResponse::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool UpdateProjectMergeRequestTemplateResponse::isIsWip() const
{
    return isWip_;
}

void UpdateProjectMergeRequestTemplateResponse::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::isWipIsSet() const
{
    return isWipIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t UpdateProjectMergeRequestTemplateResponse::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void UpdateProjectMergeRequestTemplateResponse::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto UpdateProjectMergeRequestTemplateResponse::getCreator() const
{
    return creator_;
}

void UpdateProjectMergeRequestTemplateResponse::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string UpdateProjectMergeRequestTemplateResponse::getProjectId() const
{
    return projectId_;
}

void UpdateProjectMergeRequestTemplateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectMergeRequestTemplateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectMergeRequestTemplateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


