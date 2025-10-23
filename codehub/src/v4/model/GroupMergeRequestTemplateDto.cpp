

#include "huaweicloud/codehub/v4/model/GroupMergeRequestTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GroupMergeRequestTemplateDto::GroupMergeRequestTemplateDto()
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

GroupMergeRequestTemplateDto::~GroupMergeRequestTemplateDto() = default;

void GroupMergeRequestTemplateDto::validate()
{
}

web::json::value GroupMergeRequestTemplateDto::toJson() const
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
bool GroupMergeRequestTemplateDto::fromJson(const web::json::value& val)
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


int32_t GroupMergeRequestTemplateDto::getId() const
{
    return id_;
}

void GroupMergeRequestTemplateDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::idIsSet() const
{
    return idIsSet_;
}

void GroupMergeRequestTemplateDto::unsetid()
{
    idIsSet_ = false;
}

int32_t GroupMergeRequestTemplateDto::getRepositoryId() const
{
    return repositoryId_;
}

void GroupMergeRequestTemplateDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void GroupMergeRequestTemplateDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string GroupMergeRequestTemplateDto::getDescription() const
{
    return description_;
}

void GroupMergeRequestTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupMergeRequestTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GroupMergeRequestTemplateDto::getCreatedAt() const
{
    return createdAt_;
}

void GroupMergeRequestTemplateDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GroupMergeRequestTemplateDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GroupMergeRequestTemplateDto::getUpdatedAt() const
{
    return updatedAt_;
}

void GroupMergeRequestTemplateDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GroupMergeRequestTemplateDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GroupMergeRequestTemplateDto::getTemplateName() const
{
    return templateName_;
}

void GroupMergeRequestTemplateDto::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void GroupMergeRequestTemplateDto::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string GroupMergeRequestTemplateDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void GroupMergeRequestTemplateDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void GroupMergeRequestTemplateDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

bool GroupMergeRequestTemplateDto::isIsDefault() const
{
    return isDefault_;
}

void GroupMergeRequestTemplateDto::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void GroupMergeRequestTemplateDto::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool GroupMergeRequestTemplateDto::isIsWip() const
{
    return isWip_;
}

void GroupMergeRequestTemplateDto::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::isWipIsSet() const
{
    return isWipIsSet_;
}

void GroupMergeRequestTemplateDto::unsetisWip()
{
    isWipIsSet_ = false;
}

int32_t GroupMergeRequestTemplateDto::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void GroupMergeRequestTemplateDto::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void GroupMergeRequestTemplateDto::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

UserBasicDto GroupMergeRequestTemplateDto::getCreator() const
{
    return creator_;
}

void GroupMergeRequestTemplateDto::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::creatorIsSet() const
{
    return creatorIsSet_;
}

void GroupMergeRequestTemplateDto::unsetcreator()
{
    creatorIsSet_ = false;
}

int32_t GroupMergeRequestTemplateDto::getGroupId() const
{
    return groupId_;
}

void GroupMergeRequestTemplateDto::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupMergeRequestTemplateDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupMergeRequestTemplateDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


