

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupReviewSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupReviewSettingsResponse::ShowGroupReviewSettingsResponse()
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

ShowGroupReviewSettingsResponse::~ShowGroupReviewSettingsResponse() = default;

void ShowGroupReviewSettingsResponse::validate()
{
}

web::json::value ShowGroupReviewSettingsResponse::toJson() const
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
bool ShowGroupReviewSettingsResponse::fromJson(const web::json::value& val)
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


bool ShowGroupReviewSettingsResponse::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void ShowGroupReviewSettingsResponse::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

bool ShowGroupReviewSettingsResponse::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void ShowGroupReviewSettingsResponse::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

std::vector<CategoryDto>& ShowGroupReviewSettingsResponse::getPrimaryCategories()
{
    return primaryCategories_;
}

void ShowGroupReviewSettingsResponse::setPrimaryCategories(const std::vector<CategoryDto>& value)
{
    primaryCategories_ = value;
    primaryCategoriesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::primaryCategoriesIsSet() const
{
    return primaryCategoriesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetprimaryCategories()
{
    primaryCategoriesIsSet_ = false;
}

std::vector<std::string>& ShowGroupReviewSettingsResponse::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void ShowGroupReviewSettingsResponse::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& ShowGroupReviewSettingsResponse::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void ShowGroupReviewSettingsResponse::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

std::vector<std::string>& ShowGroupReviewSettingsResponse::getReviewModules()
{
    return reviewModules_;
}

void ShowGroupReviewSettingsResponse::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

int32_t ShowGroupReviewSettingsResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ShowGroupReviewSettingsResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::vector<RequiredAttributeDto>& ShowGroupReviewSettingsResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void ShowGroupReviewSettingsResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

std::vector<CategoryDto>& ShowGroupReviewSettingsResponse::getCodehubDefaultCategories()
{
    return codehubDefaultCategories_;
}

void ShowGroupReviewSettingsResponse::setCodehubDefaultCategories(const std::vector<CategoryDto>& value)
{
    codehubDefaultCategories_ = value;
    codehubDefaultCategoriesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::codehubDefaultCategoriesIsSet() const
{
    return codehubDefaultCategoriesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsetcodehubDefaultCategories()
{
    codehubDefaultCategoriesIsSet_ = false;
}

std::vector<CategoryDto>& ShowGroupReviewSettingsResponse::getHicodeDefaultCategories()
{
    return hicodeDefaultCategories_;
}

void ShowGroupReviewSettingsResponse::setHicodeDefaultCategories(const std::vector<CategoryDto>& value)
{
    hicodeDefaultCategories_ = value;
    hicodeDefaultCategoriesIsSet_ = true;
}

bool ShowGroupReviewSettingsResponse::hicodeDefaultCategoriesIsSet() const
{
    return hicodeDefaultCategoriesIsSet_;
}

void ShowGroupReviewSettingsResponse::unsethicodeDefaultCategories()
{
    hicodeDefaultCategoriesIsSet_ = false;
}

}
}
}
}
}


