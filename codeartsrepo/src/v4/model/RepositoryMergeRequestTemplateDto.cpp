

#include "huaweicloud/codeartsrepo/v4/model/RepositoryMergeRequestTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryMergeRequestTemplateDto::RepositoryMergeRequestTemplateDto()
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
}

RepositoryMergeRequestTemplateDto::~RepositoryMergeRequestTemplateDto() = default;

void RepositoryMergeRequestTemplateDto::validate()
{
}

web::json::value RepositoryMergeRequestTemplateDto::toJson() const
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

    return val;
}
bool RepositoryMergeRequestTemplateDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t RepositoryMergeRequestTemplateDto::getId() const
{
    return id_;
}

void RepositoryMergeRequestTemplateDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetid()
{
    idIsSet_ = false;
}

int32_t RepositoryMergeRequestTemplateDto::getRepositoryId() const
{
    return repositoryId_;
}

void RepositoryMergeRequestTemplateDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string RepositoryMergeRequestTemplateDto::getDescription() const
{
    return description_;
}

void RepositoryMergeRequestTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryMergeRequestTemplateDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositoryMergeRequestTemplateDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepositoryMergeRequestTemplateDto::getUpdatedAt() const
{
    return updatedAt_;
}

void RepositoryMergeRequestTemplateDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string RepositoryMergeRequestTemplateDto::getTemplateName() const
{
    return templateName_;
}

void RepositoryMergeRequestTemplateDto::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string RepositoryMergeRequestTemplateDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void RepositoryMergeRequestTemplateDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool RepositoryMergeRequestTemplateDto::isIsDefault() const
{
    return isDefault_;
}

void RepositoryMergeRequestTemplateDto::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool RepositoryMergeRequestTemplateDto::isIsWip() const
{
    return isWip_;
}

void RepositoryMergeRequestTemplateDto::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::isWipIsSet() const
{
    return isWipIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t RepositoryMergeRequestTemplateDto::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void RepositoryMergeRequestTemplateDto::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto RepositoryMergeRequestTemplateDto::getCreator() const
{
    return creator_;
}

void RepositoryMergeRequestTemplateDto::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool RepositoryMergeRequestTemplateDto::creatorIsSet() const
{
    return creatorIsSet_;
}

void RepositoryMergeRequestTemplateDto::unsetcreator()
{
    creatorIsSet_ = false;
}

}
}
}
}
}


