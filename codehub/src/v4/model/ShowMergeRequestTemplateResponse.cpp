

#include "huaweicloud/codehub/v4/model/ShowMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestTemplateResponse::ShowMergeRequestTemplateResponse()
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

ShowMergeRequestTemplateResponse::~ShowMergeRequestTemplateResponse() = default;

void ShowMergeRequestTemplateResponse::validate()
{
}

web::json::value ShowMergeRequestTemplateResponse::toJson() const
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
bool ShowMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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


int32_t ShowMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void ShowMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowMergeRequestTemplateResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestTemplateResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowMergeRequestTemplateResponse::getDescription() const
{
    return description_;
}

void ShowMergeRequestTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowMergeRequestTemplateResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowMergeRequestTemplateResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowMergeRequestTemplateResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowMergeRequestTemplateResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowMergeRequestTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void ShowMergeRequestTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowMergeRequestTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowMergeRequestTemplateResponse::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void ShowMergeRequestTemplateResponse::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool ShowMergeRequestTemplateResponse::isIsDefault() const
{
    return isDefault_;
}

void ShowMergeRequestTemplateResponse::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool ShowMergeRequestTemplateResponse::isIsWip() const
{
    return isWip_;
}

void ShowMergeRequestTemplateResponse::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::isWipIsSet() const
{
    return isWipIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t ShowMergeRequestTemplateResponse::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void ShowMergeRequestTemplateResponse::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto ShowMergeRequestTemplateResponse::getCreator() const
{
    return creator_;
}

void ShowMergeRequestTemplateResponse::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ShowMergeRequestTemplateResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void ShowMergeRequestTemplateResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

}
}
}
}
}


