

#include "huaweicloud/codehub/v4/model/DiscussionTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DiscussionTemplateDto::DiscussionTemplateDto()
{
    id_ = 0;
    idIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    assigneeId_ = 0;
    assigneeIdIsSet_ = false;
    categories_ = "";
    categoriesIsSet_ = false;
    categoriesEn_ = "";
    categoriesEnIsSet_ = false;
    categoriesCn_ = "";
    categoriesCnIsSet_ = false;
    modulesIsSet_ = false;
    reviewSeverity_ = "";
    reviewSeverityIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    creatorId_ = 0;
    creatorIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    creatorIsSet_ = false;
    assigneeIsSet_ = false;
}

DiscussionTemplateDto::~DiscussionTemplateDto() = default;

void DiscussionTemplateDto::validate()
{
}

web::json::value DiscussionTemplateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(assigneeIdIsSet_) {
        val[utility::conversions::to_string_t("assignee_id")] = ModelBase::toJson(assigneeId_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(categoriesEnIsSet_) {
        val[utility::conversions::to_string_t("categories_en")] = ModelBase::toJson(categoriesEn_);
    }
    if(categoriesCnIsSet_) {
        val[utility::conversions::to_string_t("categories_cn")] = ModelBase::toJson(categoriesCn_);
    }
    if(modulesIsSet_) {
        val[utility::conversions::to_string_t("modules")] = ModelBase::toJson(modules_);
    }
    if(reviewSeverityIsSet_) {
        val[utility::conversions::to_string_t("review_severity")] = ModelBase::toJson(reviewSeverity_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(assigneeIsSet_) {
        val[utility::conversions::to_string_t("assignee")] = ModelBase::toJson(assignee_);
    }

    return val;
}
bool DiscussionTemplateDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignee_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoriesEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoriesCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modules"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewSeverity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignee(refVal);
        }
    }
    return ok;
}


int32_t DiscussionTemplateDto::getId() const
{
    return id_;
}

void DiscussionTemplateDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DiscussionTemplateDto::idIsSet() const
{
    return idIsSet_;
}

void DiscussionTemplateDto::unsetid()
{
    idIsSet_ = false;
}

std::string DiscussionTemplateDto::getTemplateName() const
{
    return templateName_;
}

void DiscussionTemplateDto::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool DiscussionTemplateDto::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void DiscussionTemplateDto::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string DiscussionTemplateDto::getDescription() const
{
    return description_;
}

void DiscussionTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DiscussionTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DiscussionTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t DiscussionTemplateDto::getAssigneeId() const
{
    return assigneeId_;
}

void DiscussionTemplateDto::setAssigneeId(int32_t value)
{
    assigneeId_ = value;
    assigneeIdIsSet_ = true;
}

bool DiscussionTemplateDto::assigneeIdIsSet() const
{
    return assigneeIdIsSet_;
}

void DiscussionTemplateDto::unsetassigneeId()
{
    assigneeIdIsSet_ = false;
}

std::string DiscussionTemplateDto::getCategories() const
{
    return categories_;
}

void DiscussionTemplateDto::setCategories(const std::string& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool DiscussionTemplateDto::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void DiscussionTemplateDto::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::string DiscussionTemplateDto::getCategoriesEn() const
{
    return categoriesEn_;
}

void DiscussionTemplateDto::setCategoriesEn(const std::string& value)
{
    categoriesEn_ = value;
    categoriesEnIsSet_ = true;
}

bool DiscussionTemplateDto::categoriesEnIsSet() const
{
    return categoriesEnIsSet_;
}

void DiscussionTemplateDto::unsetcategoriesEn()
{
    categoriesEnIsSet_ = false;
}

std::string DiscussionTemplateDto::getCategoriesCn() const
{
    return categoriesCn_;
}

void DiscussionTemplateDto::setCategoriesCn(const std::string& value)
{
    categoriesCn_ = value;
    categoriesCnIsSet_ = true;
}

bool DiscussionTemplateDto::categoriesCnIsSet() const
{
    return categoriesCnIsSet_;
}

void DiscussionTemplateDto::unsetcategoriesCn()
{
    categoriesCnIsSet_ = false;
}

std::vector<std::string>& DiscussionTemplateDto::getModules()
{
    return modules_;
}

void DiscussionTemplateDto::setModules(const std::vector<std::string>& value)
{
    modules_ = value;
    modulesIsSet_ = true;
}

bool DiscussionTemplateDto::modulesIsSet() const
{
    return modulesIsSet_;
}

void DiscussionTemplateDto::unsetmodules()
{
    modulesIsSet_ = false;
}

std::string DiscussionTemplateDto::getReviewSeverity() const
{
    return reviewSeverity_;
}

void DiscussionTemplateDto::setReviewSeverity(const std::string& value)
{
    reviewSeverity_ = value;
    reviewSeverityIsSet_ = true;
}

bool DiscussionTemplateDto::reviewSeverityIsSet() const
{
    return reviewSeverityIsSet_;
}

void DiscussionTemplateDto::unsetreviewSeverity()
{
    reviewSeverityIsSet_ = false;
}

bool DiscussionTemplateDto::isIsDefault() const
{
    return isDefault_;
}

void DiscussionTemplateDto::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool DiscussionTemplateDto::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void DiscussionTemplateDto::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

int32_t DiscussionTemplateDto::getCreatorId() const
{
    return creatorId_;
}

void DiscussionTemplateDto::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool DiscussionTemplateDto::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void DiscussionTemplateDto::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string DiscussionTemplateDto::getCreatedAt() const
{
    return createdAt_;
}

void DiscussionTemplateDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DiscussionTemplateDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DiscussionTemplateDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DiscussionTemplateDto::getUpdatedAt() const
{
    return updatedAt_;
}

void DiscussionTemplateDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DiscussionTemplateDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DiscussionTemplateDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

UserBasicDto DiscussionTemplateDto::getCreator() const
{
    return creator_;
}

void DiscussionTemplateDto::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool DiscussionTemplateDto::creatorIsSet() const
{
    return creatorIsSet_;
}

void DiscussionTemplateDto::unsetcreator()
{
    creatorIsSet_ = false;
}

UserBasicDto DiscussionTemplateDto::getAssignee() const
{
    return assignee_;
}

void DiscussionTemplateDto::setAssignee(const UserBasicDto& value)
{
    assignee_ = value;
    assigneeIsSet_ = true;
}

bool DiscussionTemplateDto::assigneeIsSet() const
{
    return assigneeIsSet_;
}

void DiscussionTemplateDto::unsetassignee()
{
    assigneeIsSet_ = false;
}

}
}
}
}
}


