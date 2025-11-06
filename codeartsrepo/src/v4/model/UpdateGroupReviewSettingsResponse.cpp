

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupReviewSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupReviewSettingsResponse::UpdateGroupReviewSettingsResponse()
{
    categoriesAndModulesEnabled_ = false;
    categoriesAndModulesEnabledIsSet_ = false;
    secondaryCategoryEnabled_ = false;
    secondaryCategoryEnabledIsSet_ = false;
    primaryCategoriesIsSet_ = false;
    reviewDefaultCategoriesIsSet_ = false;
    reviewCustomizedCategoriesIsSet_ = false;
    reviewModulesIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    noteRequiredAttributesIsSet_ = false;
    codehubDefaultCategoriesIsSet_ = false;
    hicodeDefaultCategoriesIsSet_ = false;
}

UpdateGroupReviewSettingsResponse::~UpdateGroupReviewSettingsResponse() = default;

void UpdateGroupReviewSettingsResponse::validate()
{
}

web::json::value UpdateGroupReviewSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoriesAndModulesEnabledIsSet_) {
        val[utility::conversions::to_string_t("categories_and_modules_enabled")] = ModelBase::toJson(categoriesAndModulesEnabled_);
    }
    if(secondaryCategoryEnabledIsSet_) {
        val[utility::conversions::to_string_t("secondary_category_enabled")] = ModelBase::toJson(secondaryCategoryEnabled_);
    }
    if(primaryCategoriesIsSet_) {
        val[utility::conversions::to_string_t("primary_categories")] = ModelBase::toJson(primaryCategories_);
    }
    if(reviewDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_default_categories")] = ModelBase::toJson(reviewDefaultCategories_);
    }
    if(reviewCustomizedCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_customized_categories")] = ModelBase::toJson(reviewCustomizedCategories_);
    }
    if(reviewModulesIsSet_) {
        val[utility::conversions::to_string_t("review_modules")] = ModelBase::toJson(reviewModules_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(noteRequiredAttributesIsSet_) {
        val[utility::conversions::to_string_t("note_required_attributes")] = ModelBase::toJson(noteRequiredAttributes_);
    }
    if(codehubDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("codehub_default_categories")] = ModelBase::toJson(codehubDefaultCategories_);
    }
    if(hicodeDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("hicode_default_categories")] = ModelBase::toJson(hicodeDefaultCategories_);
    }

    return val;
}
bool UpdateGroupReviewSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("categories_and_modules_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories_and_modules_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoriesAndModulesEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_category_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_category_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryCategoryEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_default_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_default_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewDefaultCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_customized_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_customized_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCustomizedCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_modules"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewModules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("note_required_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_required_attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<RequiredAttributeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteRequiredAttributes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codehub_default_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_default_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubDefaultCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hicode_default_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hicode_default_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHicodeDefaultCategories(refVal);
        }
    }
    return ok;
}


bool UpdateGroupReviewSettingsResponse::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void UpdateGroupReviewSettingsResponse::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

bool UpdateGroupReviewSettingsResponse::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void UpdateGroupReviewSettingsResponse::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

std::vector<CategoryDto>& UpdateGroupReviewSettingsResponse::getPrimaryCategories()
{
    return primaryCategories_;
}

void UpdateGroupReviewSettingsResponse::setPrimaryCategories(const std::vector<CategoryDto>& value)
{
    primaryCategories_ = value;
    primaryCategoriesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::primaryCategoriesIsSet() const
{
    return primaryCategoriesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetprimaryCategories()
{
    primaryCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateGroupReviewSettingsResponse::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void UpdateGroupReviewSettingsResponse::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateGroupReviewSettingsResponse::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void UpdateGroupReviewSettingsResponse::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateGroupReviewSettingsResponse::getReviewModules()
{
    return reviewModules_;
}

void UpdateGroupReviewSettingsResponse::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

int32_t UpdateGroupReviewSettingsResponse::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateGroupReviewSettingsResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::vector<RequiredAttributeDto>& UpdateGroupReviewSettingsResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void UpdateGroupReviewSettingsResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

std::vector<CategoryDto>& UpdateGroupReviewSettingsResponse::getCodehubDefaultCategories()
{
    return codehubDefaultCategories_;
}

void UpdateGroupReviewSettingsResponse::setCodehubDefaultCategories(const std::vector<CategoryDto>& value)
{
    codehubDefaultCategories_ = value;
    codehubDefaultCategoriesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::codehubDefaultCategoriesIsSet() const
{
    return codehubDefaultCategoriesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsetcodehubDefaultCategories()
{
    codehubDefaultCategoriesIsSet_ = false;
}

std::vector<CategoryDto>& UpdateGroupReviewSettingsResponse::getHicodeDefaultCategories()
{
    return hicodeDefaultCategories_;
}

void UpdateGroupReviewSettingsResponse::setHicodeDefaultCategories(const std::vector<CategoryDto>& value)
{
    hicodeDefaultCategories_ = value;
    hicodeDefaultCategoriesIsSet_ = true;
}

bool UpdateGroupReviewSettingsResponse::hicodeDefaultCategoriesIsSet() const
{
    return hicodeDefaultCategoriesIsSet_;
}

void UpdateGroupReviewSettingsResponse::unsethicodeDefaultCategories()
{
    hicodeDefaultCategoriesIsSet_ = false;
}

}
}
}
}
}


