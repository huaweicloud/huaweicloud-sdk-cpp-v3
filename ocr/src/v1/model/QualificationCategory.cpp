

#include "huaweicloud/ocr/v1/model/QualificationCategory.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QualificationCategory::QualificationCategory()
{
    category_ = "";
    categoryIsSet_ = false;
    initialIssueDate_ = "";
    initialIssueDateIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
}

QualificationCategory::~QualificationCategory() = default;

void QualificationCategory::validate()
{
}

web::json::value QualificationCategory::toJson() const
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

bool QualificationCategory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initial_issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    return ok;
}

std::string QualificationCategory::getCategory() const
{
    return category_;
}

void QualificationCategory::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool QualificationCategory::categoryIsSet() const
{
    return categoryIsSet_;
}

void QualificationCategory::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string QualificationCategory::getInitialIssueDate() const
{
    return initialIssueDate_;
}

void QualificationCategory::setInitialIssueDate(const std::string& value)
{
    initialIssueDate_ = value;
    initialIssueDateIsSet_ = true;
}

bool QualificationCategory::initialIssueDateIsSet() const
{
    return initialIssueDateIsSet_;
}

void QualificationCategory::unsetinitialIssueDate()
{
    initialIssueDateIsSet_ = false;
}

std::string QualificationCategory::getIssueDate() const
{
    return issueDate_;
}

void QualificationCategory::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool QualificationCategory::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void QualificationCategory::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string QualificationCategory::getExpiryDate() const
{
    return expiryDate_;
}

void QualificationCategory::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool QualificationCategory::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void QualificationCategory::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

}
}
}
}
}


