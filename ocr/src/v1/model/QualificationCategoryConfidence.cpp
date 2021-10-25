

#include "huaweicloud/ocr/v1/model/QualificationCategoryConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QualificationCategoryConfidence::QualificationCategoryConfidence()
{
    category_ = 0.0f;
    categoryIsSet_ = false;
    initialIssueDate_ = 0.0f;
    initialIssueDateIsSet_ = false;
    issueDate_ = 0.0f;
    issueDateIsSet_ = false;
    expiryDate_ = 0.0f;
    expiryDateIsSet_ = false;
}

QualificationCategoryConfidence::~QualificationCategoryConfidence() = default;

void QualificationCategoryConfidence::validate()
{
}

web::json::value QualificationCategoryConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(initialIssueDateIsSet_) {
        val[utility::conversions::to_string_t("initial_issue_date")] = ModelBase::toJson(initialIssueDate_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }

    return val;
}

bool QualificationCategoryConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_issue_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    return ok;
}


float QualificationCategoryConfidence::getCategory() const
{
    return category_;
}

void QualificationCategoryConfidence::setCategory(float value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool QualificationCategoryConfidence::categoryIsSet() const
{
    return categoryIsSet_;
}

void QualificationCategoryConfidence::unsetcategory()
{
    categoryIsSet_ = false;
}

float QualificationCategoryConfidence::getInitialIssueDate() const
{
    return initialIssueDate_;
}

void QualificationCategoryConfidence::setInitialIssueDate(float value)
{
    initialIssueDate_ = value;
    initialIssueDateIsSet_ = true;
}

bool QualificationCategoryConfidence::initialIssueDateIsSet() const
{
    return initialIssueDateIsSet_;
}

void QualificationCategoryConfidence::unsetinitialIssueDate()
{
    initialIssueDateIsSet_ = false;
}

float QualificationCategoryConfidence::getIssueDate() const
{
    return issueDate_;
}

void QualificationCategoryConfidence::setIssueDate(float value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool QualificationCategoryConfidence::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void QualificationCategoryConfidence::unsetissueDate()
{
    issueDateIsSet_ = false;
}

float QualificationCategoryConfidence::getExpiryDate() const
{
    return expiryDate_;
}

void QualificationCategoryConfidence::setExpiryDate(float value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool QualificationCategoryConfidence::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void QualificationCategoryConfidence::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

}
}
}
}
}


