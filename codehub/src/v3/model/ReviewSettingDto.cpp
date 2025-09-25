

#include "huaweicloud/codehub/v3/model/ReviewSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ReviewSettingDto::ReviewSettingDto()
{
    categoriesAndModulesEnabled_ = false;
    categoriesAndModulesEnabledIsSet_ = false;
    secondaryCategoryEnabled_ = false;
    secondaryCategoryEnabledIsSet_ = false;
    forbiddenAddToIssue_ = false;
    forbiddenAddToIssueIsSet_ = false;
    primaryCategoriesIsSet_ = false;
    reviewDefaultCategoriesIsSet_ = false;
    reviewCustomizedCategoriesIsSet_ = false;
    reviewModulesIsSet_ = false;
    sourceId_ = 0;
    sourceIdIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourcePath_ = "";
    sourcePathIsSet_ = false;
    secondaryCategoryType_ = "";
    secondaryCategoryTypeIsSet_ = false;
    secondaryCategoriesIsSet_ = false;
}

ReviewSettingDto::~ReviewSettingDto() = default;

void ReviewSettingDto::validate()
{
}

web::json::value ReviewSettingDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoriesAndModulesEnabledIsSet_) {
        val[utility::conversions::to_string_t("categories_and_modules_enabled")] = ModelBase::toJson(categoriesAndModulesEnabled_);
    }
    if(secondaryCategoryEnabledIsSet_) {
        val[utility::conversions::to_string_t("secondary_category_enabled")] = ModelBase::toJson(secondaryCategoryEnabled_);
    }
    if(forbiddenAddToIssueIsSet_) {
        val[utility::conversions::to_string_t("forbidden_add_to_issue")] = ModelBase::toJson(forbiddenAddToIssue_);
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
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(sourcePathIsSet_) {
        val[utility::conversions::to_string_t("source_path")] = ModelBase::toJson(sourcePath_);
    }
    if(secondaryCategoryTypeIsSet_) {
        val[utility::conversions::to_string_t("secondary_category_type")] = ModelBase::toJson(secondaryCategoryType_);
    }
    if(secondaryCategoriesIsSet_) {
        val[utility::conversions::to_string_t("secondary_categories")] = ModelBase::toJson(secondaryCategories_);
    }

    return val;
}
bool ReviewSettingDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("forbidden_add_to_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_add_to_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenAddToIssue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePath(refVal);
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


bool ReviewSettingDto::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void ReviewSettingDto::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool ReviewSettingDto::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void ReviewSettingDto::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

bool ReviewSettingDto::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void ReviewSettingDto::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool ReviewSettingDto::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void ReviewSettingDto::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

bool ReviewSettingDto::isForbiddenAddToIssue() const
{
    return forbiddenAddToIssue_;
}

void ReviewSettingDto::setForbiddenAddToIssue(bool value)
{
    forbiddenAddToIssue_ = value;
    forbiddenAddToIssueIsSet_ = true;
}

bool ReviewSettingDto::forbiddenAddToIssueIsSet() const
{
    return forbiddenAddToIssueIsSet_;
}

void ReviewSettingDto::unsetforbiddenAddToIssue()
{
    forbiddenAddToIssueIsSet_ = false;
}

std::vector<CategoryDto>& ReviewSettingDto::getPrimaryCategories()
{
    return primaryCategories_;
}

void ReviewSettingDto::setPrimaryCategories(const std::vector<CategoryDto>& value)
{
    primaryCategories_ = value;
    primaryCategoriesIsSet_ = true;
}

bool ReviewSettingDto::primaryCategoriesIsSet() const
{
    return primaryCategoriesIsSet_;
}

void ReviewSettingDto::unsetprimaryCategories()
{
    primaryCategoriesIsSet_ = false;
}

std::vector<std::string>& ReviewSettingDto::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void ReviewSettingDto::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool ReviewSettingDto::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void ReviewSettingDto::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& ReviewSettingDto::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void ReviewSettingDto::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool ReviewSettingDto::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void ReviewSettingDto::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

std::vector<std::string>& ReviewSettingDto::getReviewModules()
{
    return reviewModules_;
}

void ReviewSettingDto::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool ReviewSettingDto::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void ReviewSettingDto::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

int32_t ReviewSettingDto::getSourceId() const
{
    return sourceId_;
}

void ReviewSettingDto::setSourceId(int32_t value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool ReviewSettingDto::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void ReviewSettingDto::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string ReviewSettingDto::getSourceType() const
{
    return sourceType_;
}

void ReviewSettingDto::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ReviewSettingDto::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ReviewSettingDto::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string ReviewSettingDto::getSourcePath() const
{
    return sourcePath_;
}

void ReviewSettingDto::setSourcePath(const std::string& value)
{
    sourcePath_ = value;
    sourcePathIsSet_ = true;
}

bool ReviewSettingDto::sourcePathIsSet() const
{
    return sourcePathIsSet_;
}

void ReviewSettingDto::unsetsourcePath()
{
    sourcePathIsSet_ = false;
}

std::string ReviewSettingDto::getSecondaryCategoryType() const
{
    return secondaryCategoryType_;
}

void ReviewSettingDto::setSecondaryCategoryType(const std::string& value)
{
    secondaryCategoryType_ = value;
    secondaryCategoryTypeIsSet_ = true;
}

bool ReviewSettingDto::secondaryCategoryTypeIsSet() const
{
    return secondaryCategoryTypeIsSet_;
}

void ReviewSettingDto::unsetsecondaryCategoryType()
{
    secondaryCategoryTypeIsSet_ = false;
}

std::vector<CategoryDto>& ReviewSettingDto::getSecondaryCategories()
{
    return secondaryCategories_;
}

void ReviewSettingDto::setSecondaryCategories(const std::vector<CategoryDto>& value)
{
    secondaryCategories_ = value;
    secondaryCategoriesIsSet_ = true;
}

bool ReviewSettingDto::secondaryCategoriesIsSet() const
{
    return secondaryCategoriesIsSet_;
}

void ReviewSettingDto::unsetsecondaryCategories()
{
    secondaryCategoriesIsSet_ = false;
}

}
}
}
}
}


