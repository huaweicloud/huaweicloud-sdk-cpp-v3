

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupMergeRequestTemplateResponse::CreateGroupMergeRequestTemplateResponse()
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

CreateGroupMergeRequestTemplateResponse::~CreateGroupMergeRequestTemplateResponse() = default;

void CreateGroupMergeRequestTemplateResponse::validate()
{
}

web::json::value CreateGroupMergeRequestTemplateResponse::toJson() const
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
bool CreateGroupMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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


int32_t CreateGroupMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void CreateGroupMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateGroupMergeRequestTemplateResponse::getRepositoryId() const
{
    return repositoryId_;
}

void CreateGroupMergeRequestTemplateResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateGroupMergeRequestTemplateResponse::getDescription() const
{
    return description_;
}

void CreateGroupMergeRequestTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateGroupMergeRequestTemplateResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateGroupMergeRequestTemplateResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateGroupMergeRequestTemplateResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateGroupMergeRequestTemplateResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string CreateGroupMergeRequestTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void CreateGroupMergeRequestTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateGroupMergeRequestTemplateResponse::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void CreateGroupMergeRequestTemplateResponse::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool CreateGroupMergeRequestTemplateResponse::isIsDefault() const
{
    return isDefault_;
}

void CreateGroupMergeRequestTemplateResponse::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool CreateGroupMergeRequestTemplateResponse::isIsWip() const
{
    return isWip_;
}

void CreateGroupMergeRequestTemplateResponse::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::isWipIsSet() const
{
    return isWipIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t CreateGroupMergeRequestTemplateResponse::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void CreateGroupMergeRequestTemplateResponse::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto CreateGroupMergeRequestTemplateResponse::getCreator() const
{
    return creator_;
}

void CreateGroupMergeRequestTemplateResponse::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t CreateGroupMergeRequestTemplateResponse::getGroupId() const
{
    return groupId_;
}

void CreateGroupMergeRequestTemplateResponse::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateGroupMergeRequestTemplateResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


