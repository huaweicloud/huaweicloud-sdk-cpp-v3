

#include "huaweicloud/codeartsrepo/v4/model/PostNoteRequiredAttributeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PostNoteRequiredAttributeDto::PostNoteRequiredAttributeDto()
{
    isAssigneeIdRequired_ = false;
    isAssigneeIdRequiredIsSet_ = false;
    isReviewCategoriesRequired_ = false;
    isReviewCategoriesRequiredIsSet_ = false;
    isReviewModulesRequired_ = false;
    isReviewModulesRequiredIsSet_ = false;
}

PostNoteRequiredAttributeDto::~PostNoteRequiredAttributeDto() = default;

void PostNoteRequiredAttributeDto::validate()
{
}

web::json::value PostNoteRequiredAttributeDto::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool PostNoteRequiredAttributeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


bool PostNoteRequiredAttributeDto::isIsAssigneeIdRequired() const
{
    return isAssigneeIdRequired_;
}

void PostNoteRequiredAttributeDto::setIsAssigneeIdRequired(bool value)
{
    isAssigneeIdRequired_ = value;
    isAssigneeIdRequiredIsSet_ = true;
}

bool PostNoteRequiredAttributeDto::isAssigneeIdRequiredIsSet() const
{
    return isAssigneeIdRequiredIsSet_;
}

void PostNoteRequiredAttributeDto::unsetisAssigneeIdRequired()
{
    isAssigneeIdRequiredIsSet_ = false;
}

bool PostNoteRequiredAttributeDto::isIsReviewCategoriesRequired() const
{
    return isReviewCategoriesRequired_;
}

void PostNoteRequiredAttributeDto::setIsReviewCategoriesRequired(bool value)
{
    isReviewCategoriesRequired_ = value;
    isReviewCategoriesRequiredIsSet_ = true;
}

bool PostNoteRequiredAttributeDto::isReviewCategoriesRequiredIsSet() const
{
    return isReviewCategoriesRequiredIsSet_;
}

void PostNoteRequiredAttributeDto::unsetisReviewCategoriesRequired()
{
    isReviewCategoriesRequiredIsSet_ = false;
}

bool PostNoteRequiredAttributeDto::isIsReviewModulesRequired() const
{
    return isReviewModulesRequired_;
}

void PostNoteRequiredAttributeDto::setIsReviewModulesRequired(bool value)
{
    isReviewModulesRequired_ = value;
    isReviewModulesRequiredIsSet_ = true;
}

bool PostNoteRequiredAttributeDto::isReviewModulesRequiredIsSet() const
{
    return isReviewModulesRequiredIsSet_;
}

void PostNoteRequiredAttributeDto::unsetisReviewModulesRequired()
{
    isReviewModulesRequiredIsSet_ = false;
}

}
}
}
}
}


