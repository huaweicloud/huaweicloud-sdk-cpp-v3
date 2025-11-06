

#include "huaweicloud/codeartsrepo/v4/model/CreateReviewSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateReviewSettingResponse::CreateReviewSettingResponse()
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

CreateReviewSettingResponse::~CreateReviewSettingResponse() = default;

void CreateReviewSettingResponse::validate()
{
}

web::json::value CreateReviewSettingResponse::toJson() const
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
bool CreateReviewSettingResponse::fromJson(const web::json::value& val)
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


bool CreateReviewSettingResponse::isCategoriesAndModulesEnabled() const
{
    return categoriesAndModulesEnabled_;
}

void CreateReviewSettingResponse::setCategoriesAndModulesEnabled(bool value)
{
    categoriesAndModulesEnabled_ = value;
    categoriesAndModulesEnabledIsSet_ = true;
}

bool CreateReviewSettingResponse::categoriesAndModulesEnabledIsSet() const
{
    return categoriesAndModulesEnabledIsSet_;
}

void CreateReviewSettingResponse::unsetcategoriesAndModulesEnabled()
{
    categoriesAndModulesEnabledIsSet_ = false;
}

bool CreateReviewSettingResponse::isSecondaryCategoryEnabled() const
{
    return secondaryCategoryEnabled_;
}

void CreateReviewSettingResponse::setSecondaryCategoryEnabled(bool value)
{
    secondaryCategoryEnabled_ = value;
    secondaryCategoryEnabledIsSet_ = true;
}

bool CreateReviewSettingResponse::secondaryCategoryEnabledIsSet() const
{
    return secondaryCategoryEnabledIsSet_;
}

void CreateReviewSettingResponse::unsetsecondaryCategoryEnabled()
{
    secondaryCategoryEnabledIsSet_ = false;
}

std::vector<CategoryDto>& CreateReviewSettingResponse::getPrimaryCategories()
{
    return primaryCategories_;
}

void CreateReviewSettingResponse::setPrimaryCategories(const std::vector<CategoryDto>& value)
{
    primaryCategories_ = value;
    primaryCategoriesIsSet_ = true;
}

bool CreateReviewSettingResponse::primaryCategoriesIsSet() const
{
    return primaryCategoriesIsSet_;
}

void CreateReviewSettingResponse::unsetprimaryCategories()
{
    primaryCategoriesIsSet_ = false;
}

std::vector<std::string>& CreateReviewSettingResponse::getReviewDefaultCategories()
{
    return reviewDefaultCategories_;
}

void CreateReviewSettingResponse::setReviewDefaultCategories(const std::vector<std::string>& value)
{
    reviewDefaultCategories_ = value;
    reviewDefaultCategoriesIsSet_ = true;
}

bool CreateReviewSettingResponse::reviewDefaultCategoriesIsSet() const
{
    return reviewDefaultCategoriesIsSet_;
}

void CreateReviewSettingResponse::unsetreviewDefaultCategories()
{
    reviewDefaultCategoriesIsSet_ = false;
}

std::vector<std::string>& CreateReviewSettingResponse::getReviewCustomizedCategories()
{
    return reviewCustomizedCategories_;
}

void CreateReviewSettingResponse::setReviewCustomizedCategories(const std::vector<std::string>& value)
{
    reviewCustomizedCategories_ = value;
    reviewCustomizedCategoriesIsSet_ = true;
}

bool CreateReviewSettingResponse::reviewCustomizedCategoriesIsSet() const
{
    return reviewCustomizedCategoriesIsSet_;
}

void CreateReviewSettingResponse::unsetreviewCustomizedCategories()
{
    reviewCustomizedCategoriesIsSet_ = false;
}

std::vector<std::string>& CreateReviewSettingResponse::getReviewModules()
{
    return reviewModules_;
}

void CreateReviewSettingResponse::setReviewModules(const std::vector<std::string>& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool CreateReviewSettingResponse::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void CreateReviewSettingResponse::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

int32_t CreateReviewSettingResponse::getRepositoryId() const
{
    return repositoryId_;
}

void CreateReviewSettingResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateReviewSettingResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateReviewSettingResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::vector<RequiredAttributeDto>& CreateReviewSettingResponse::getNoteRequiredAttributes()
{
    return noteRequiredAttributes_;
}

void CreateReviewSettingResponse::setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value)
{
    noteRequiredAttributes_ = value;
    noteRequiredAttributesIsSet_ = true;
}

bool CreateReviewSettingResponse::noteRequiredAttributesIsSet() const
{
    return noteRequiredAttributesIsSet_;
}

void CreateReviewSettingResponse::unsetnoteRequiredAttributes()
{
    noteRequiredAttributesIsSet_ = false;
}

std::vector<CategoryDto>& CreateReviewSettingResponse::getCodehubDefaultCategories()
{
    return codehubDefaultCategories_;
}

void CreateReviewSettingResponse::setCodehubDefaultCategories(const std::vector<CategoryDto>& value)
{
    codehubDefaultCategories_ = value;
    codehubDefaultCategoriesIsSet_ = true;
}

bool CreateReviewSettingResponse::codehubDefaultCategoriesIsSet() const
{
    return codehubDefaultCategoriesIsSet_;
}

void CreateReviewSettingResponse::unsetcodehubDefaultCategories()
{
    codehubDefaultCategoriesIsSet_ = false;
}

std::vector<CategoryDto>& CreateReviewSettingResponse::getHicodeDefaultCategories()
{
    return hicodeDefaultCategories_;
}

void CreateReviewSettingResponse::setHicodeDefaultCategories(const std::vector<CategoryDto>& value)
{
    hicodeDefaultCategories_ = value;
    hicodeDefaultCategoriesIsSet_ = true;
}

bool CreateReviewSettingResponse::hicodeDefaultCategoriesIsSet() const
{
    return hicodeDefaultCategoriesIsSet_;
}

void CreateReviewSettingResponse::unsethicodeDefaultCategories()
{
    hicodeDefaultCategoriesIsSet_ = false;
}

}
}
}
}
}


