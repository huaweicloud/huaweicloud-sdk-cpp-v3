

#include "huaweicloud/ocr/v1/model/InvoiceVerificationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InvoiceVerificationRequestBody::InvoiceVerificationRequestBody()
{
    code_ = "";
    codeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    checkCode_ = "";
    checkCodeIsSet_ = false;
    subtotalAmount_ = "";
    subtotalAmountIsSet_ = false;
}

InvoiceVerificationRequestBody::~InvoiceVerificationRequestBody() = default;

void InvoiceVerificationRequestBody::validate()
{
}

web::json::value InvoiceVerificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(checkCodeIsSet_) {
        val[utility::conversions::to_string_t("check_code")] = ModelBase::toJson(checkCode_);
    }
    if(subtotalAmountIsSet_) {
        val[utility::conversions::to_string_t("subtotal_amount")] = ModelBase::toJson(subtotalAmount_);
    }

    return val;
}

bool InvoiceVerificationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("check_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtotal_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtotal_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtotalAmount(refVal);
        }
    }
    return ok;
}


std::string InvoiceVerificationRequestBody::getCode() const
{
    return code_;
}

void InvoiceVerificationRequestBody::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool InvoiceVerificationRequestBody::codeIsSet() const
{
    return codeIsSet_;
}

void InvoiceVerificationRequestBody::unsetcode()
{
    codeIsSet_ = false;
}

std::string InvoiceVerificationRequestBody::getNumber() const
{
    return number_;
}

void InvoiceVerificationRequestBody::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool InvoiceVerificationRequestBody::numberIsSet() const
{
    return numberIsSet_;
}

void InvoiceVerificationRequestBody::unsetnumber()
{
    numberIsSet_ = false;
}

std::string InvoiceVerificationRequestBody::getIssueDate() const
{
    return issueDate_;
}

void InvoiceVerificationRequestBody::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool InvoiceVerificationRequestBody::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void InvoiceVerificationRequestBody::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string InvoiceVerificationRequestBody::getCheckCode() const
{
    return checkCode_;
}

void InvoiceVerificationRequestBody::setCheckCode(const std::string& value)
{
    checkCode_ = value;
    checkCodeIsSet_ = true;
}

bool InvoiceVerificationRequestBody::checkCodeIsSet() const
{
    return checkCodeIsSet_;
}

void InvoiceVerificationRequestBody::unsetcheckCode()
{
    checkCodeIsSet_ = false;
}

std::string InvoiceVerificationRequestBody::getSubtotalAmount() const
{
    return subtotalAmount_;
}

void InvoiceVerificationRequestBody::setSubtotalAmount(const std::string& value)
{
    subtotalAmount_ = value;
    subtotalAmountIsSet_ = true;
}

bool InvoiceVerificationRequestBody::subtotalAmountIsSet() const
{
    return subtotalAmountIsSet_;
}

void InvoiceVerificationRequestBody::unsetsubtotalAmount()
{
    subtotalAmountIsSet_ = false;
}

}
}
}
}
}


