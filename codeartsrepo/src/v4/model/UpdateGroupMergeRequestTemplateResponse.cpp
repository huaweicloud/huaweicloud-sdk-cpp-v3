

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupMergeRequestTemplateResponse::UpdateGroupMergeRequestTemplateResponse()
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
    groupId_ = 0;
    groupIdIsSet_ = false;
}

UpdateGroupMergeRequestTemplateResponse::~UpdateGroupMergeRequestTemplateResponse() = default;

void UpdateGroupMergeRequestTemplateResponse::validate()
{
}

web::json::value UpdateGroupMergeRequestTemplateResponse::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool UpdateGroupMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void UpdateGroupMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateGroupMergeRequestTemplateResponse::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateGroupMergeRequestTemplateResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateGroupMergeRequestTemplateResponse::getDescription() const
{
    return description_;
}

void UpdateGroupMergeRequestTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateGroupMergeRequestTemplateResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateGroupMergeRequestTemplateResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateGroupMergeRequestTemplateResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateGroupMergeRequestTemplateResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateGroupMergeRequestTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void UpdateGroupMergeRequestTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string UpdateGroupMergeRequestTemplateResponse::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void UpdateGroupMergeRequestTemplateResponse::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool UpdateGroupMergeRequestTemplateResponse::isIsDefault() const
{
    return isDefault_;
}

void UpdateGroupMergeRequestTemplateResponse::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool UpdateGroupMergeRequestTemplateResponse::isIsWip() const
{
    return isWip_;
}

void UpdateGroupMergeRequestTemplateResponse::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::isWipIsSet() const
{
    return isWipIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t UpdateGroupMergeRequestTemplateResponse::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void UpdateGroupMergeRequestTemplateResponse::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto UpdateGroupMergeRequestTemplateResponse::getCreator() const
{
    return creator_;
}

void UpdateGroupMergeRequestTemplateResponse::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t UpdateGroupMergeRequestTemplateResponse::getGroupId() const
{
    return groupId_;
}

void UpdateGroupMergeRequestTemplateResponse::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupMergeRequestTemplateResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


