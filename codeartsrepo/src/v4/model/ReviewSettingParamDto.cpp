

#include "huaweicloud/codeartsrepo/v4/model/ReviewSettingParamDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ReviewSettingParamDto::ReviewSettingParamDto()
{
    categoriesAndModulesEnabled_ = false;
    categoriesAndModulesEnabledIsSet_ = false;
    reviewModulesIsSet_ = false;
    secondaryCategoryEnabled_ = false;
    secondaryCategoryEnabledIsSet_ = false;
    reviewDefaultCategoriesIsSet_ = false;
    reviewCustomizedCategoriesIsSet_ = false;
    isAssigneeIdRequired_ = false;
    isAssigneeIdRequiredIsSet_ = false;
    isReviewCategoriesRequired_ = false;
    isReviewCategoriesRequiredIsSet_ = false;
    isReviewModulesRequired_ = false;
    isReviewModulesRequiredIsSet_ = false;
}

ReviewSettingParamDto::~ReviewSettingParamDto() = default;

void ReviewSettingParamDto::validate()
{
}

web::json::value ReviewSettingParamDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoriesAndModulesEnabledIsSet_) {
        val[utility::conversions::to_string_t("categories_and_modules_enabled")] = ModelBase::toJson(categoriesAndModulesEnabled_);
    }
    if(reviewModulesIsSet_) {
        val[utility::conversions::to_string_t("review_modules")] = ModelBase::toJson(reviewModules_);
    }
    if(secondaryCategoryEnabledIsSet_) {
        val[utility::conversions::to_string_t("secondary_category_enabled")] = ModelBase::toJson(secondaryCategoryEnabled_);
    }
    if(reviewDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_default_categories")] = ModelBase::toJson(reviewDefaultCategories_);
    }
    if(reviewCustomizedCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_customized_categories")] = ModelBase::toJson(reviewCustomizedCategories_);
    }
    if(isAssigneeIdRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_assignee_id_required")] = ModelBase::toJson(isAssigneeIdRequired_);
    }
    if(isReviewCategoriesRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_review_categories_required")] = ModelBase::toJson(isReviewCategoriesRequired_);
    }
    if(isReviewModulesRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_review_modules_required")] = ModelBase::toJson(isReviewModulesRequired_);
    }

    return val;
}
bool ReviewSettingParamDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("review_modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_modules"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewModules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_assignee_id_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_assignee_id_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAssigneeIdRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_review_categories_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_review_categories_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReviewCategoriesRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_review_modules_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_review_modules_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReviewModulesRequired(refVal);
        }
    }
    return ok;
}


bool ReviewSettingParamDto::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void ReviewSettingParamDto::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool ReviewSettingParamDto::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void ReviewSettingParamDto::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

std::vector<std::string>& ReviewSettingParamDto::getReviewModules()
{
    return reviewModules_;
}

void ReviewSettingParamDto::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool ReviewSettingParamDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void ReviewSettingParamDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

bool ReviewSettingParamDto::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void ReviewSettingParamDto::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool ReviewSettingParamDto::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void ReviewSettingParamDto::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

std::vector<std::string>& ReviewSettingParamDto::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void ReviewSettingParamDto::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool ReviewSettingParamDto::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void ReviewSettingParamDto::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& ReviewSettingParamDto::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void ReviewSettingParamDto::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool ReviewSettingParamDto::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void ReviewSettingParamDto::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

bool ReviewSettingParamDto::isIsAssigneeIdRequired() const
{
    return isAssigneeIdRequired_;
}

void ReviewSettingParamDto::setIsAssigneeIdRequired(bool value)
{
    isAssigneeIdRequired_ = value;
    isAssigneeIdRequiredIsSet_ = true;
}

bool ReviewSettingParamDto::isAssigneeIdRequiredIsSet() const
{
    return isAssigneeIdRequiredIsSet_;
}

void ReviewSettingParamDto::unsetisAssigneeIdRequired()
{
    isAssigneeIdRequiredIsSet_ = false;
}

bool ReviewSettingParamDto::isIsReviewCategoriesRequired() const
{
    return isReviewCategoriesRequired_;
}

void ReviewSettingParamDto::setIsReviewCategoriesRequired(bool value)
{
    isReviewCategoriesRequired_ = value;
    isReviewCategoriesRequiredIsSet_ = true;
}

bool ReviewSettingParamDto::isReviewCategoriesRequiredIsSet() const
{
    return isReviewCategoriesRequiredIsSet_;
}

void ReviewSettingParamDto::unsetisReviewCategoriesRequired()
{
    isReviewCategoriesRequiredIsSet_ = false;
}

bool ReviewSettingParamDto::isIsReviewModulesRequired() const
{
    return isReviewModulesRequired_;
}

void ReviewSettingParamDto::setIsReviewModulesRequired(bool value)
{
    isReviewModulesRequired_ = value;
    isReviewModulesRequiredIsSet_ = true;
}

bool ReviewSettingParamDto::isReviewModulesRequiredIsSet() const
{
    return isReviewModulesRequiredIsSet_;
}

void ReviewSettingParamDto::unsetisReviewModulesRequired()
{
    isReviewModulesRequiredIsSet_ = false;
}

}
}
}
}
}


