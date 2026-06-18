

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectReviewSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectReviewSettingsResponse::UpdateProjectReviewSettingsResponse()
{
    categoriesAndModulesEnabled_ = false;
    categoriesAndModulesEnabledIsSet_ = false;
    secondaryCategoryEnabled_ = false;
    secondaryCategoryEnabledIsSet_ = false;
    primaryCategoriesIsSet_ = false;
    reviewDefaultCategoriesIsSet_ = false;
    reviewCustomizedCategoriesIsSet_ = false;
    reviewModulesIsSet_ = false;
    secondaryCategoryType_ = "";
    secondaryCategoryTypeIsSet_ = false;
    secondaryCategoriesIsSet_ = false;
}

UpdateProjectReviewSettingsResponse::~UpdateProjectReviewSettingsResponse() = default;

void UpdateProjectReviewSettingsResponse::validate()
{
}

web::json::value UpdateProjectReviewSettingsResponse::toJson() const
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
    if(secondaryCategoryTypeIsSet_) {
        val[utility::conversions::to_string_t("secondary_category_type")] = ModelBase::toJson(secondaryCategoryType_);
    }
    if(secondaryCategoriesIsSet_) {
        val[utility::conversions::to_string_t("secondary_categories")] = ModelBase::toJson(secondaryCategories_);
    }

    return val;
}
bool UpdateProjectReviewSettingsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("secondary_category_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_category_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryCategoryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryCategories(refVal);
        }
    }
    return ok;
}


bool UpdateProjectReviewSettingsResponse::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void UpdateProjectReviewSettingsResponse::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

bool UpdateProjectReviewSettingsResponse::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void UpdateProjectReviewSettingsResponse::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

std::vector<CategoryDto>& UpdateProjectReviewSettingsResponse::getPrimaryCategories()
{
    return primaryCategories_;
}

void UpdateProjectReviewSettingsResponse::setPrimaryCategories(const std::vector<CategoryDto>& value)
{
    primaryCategories_ = value;
    primaryCategoriesIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::primaryCategoriesIsSet() const
{
    return primaryCategoriesIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetprimaryCategories()
{
    primaryCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateProjectReviewSettingsResponse::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void UpdateProjectReviewSettingsResponse::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateProjectReviewSettingsResponse::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void UpdateProjectReviewSettingsResponse::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

std::vector<std::string>& UpdateProjectReviewSettingsResponse::getReviewModules()
{
    return reviewModules_;
}

void UpdateProjectReviewSettingsResponse::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string UpdateProjectReviewSettingsResponse::getSecondaryCategoryType() const
{
    return secondaryCategoryType_;
}

void UpdateProjectReviewSettingsResponse::setSecondaryCategoryType(const std::string& value)
{
    secondaryCategoryType_ = value;
    secondaryCategoryTypeIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::secondaryCategoryTypeIsSet() const
{
    return secondaryCategoryTypeIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetsecondaryCategoryType()
{
    secondaryCategoryTypeIsSet_ = false;
}

std::vector<CategoryDto>& UpdateProjectReviewSettingsResponse::getSecondaryCategories()
{
    return secondaryCategories_;
}

void UpdateProjectReviewSettingsResponse::setSecondaryCategories(const std::vector<CategoryDto>& value)
{
    secondaryCategories_ = value;
    secondaryCategoriesIsSet_ = true;
}

bool UpdateProjectReviewSettingsResponse::secondaryCategoriesIsSet() const
{
    return secondaryCategoriesIsSet_;
}

void UpdateProjectReviewSettingsResponse::unsetsecondaryCategories()
{
    secondaryCategoriesIsSet_ = false;
}

}
}
}
}
}


