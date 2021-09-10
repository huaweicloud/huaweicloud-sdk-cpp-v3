

#include "huaweicloud/ocr/v1/model/BankcardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BankcardResult::BankcardResult()
{
    bankName_ = "";
    bankNameIsSet_ = false;
    cardNumber_ = "";
    cardNumberIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    confidenceIsSet_ = false;
}

BankcardResult::~BankcardResult() = default;

void BankcardResult::validate()
{
}

web::json::value BankcardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bankNameIsSet_) {
        val[utility::conversions::to_string_t("bank_name")] = ModelBase::toJson(bankName_);
    }
    if(cardNumberIsSet_) {
        val[utility::conversions::to_string_t("card_number")] = ModelBase::toJson(cardNumber_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool BankcardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string BankcardResult::getBankName() const
{
    return bankName_;
}

void BankcardResult::setBankName(const std::string& value)
{
    bankName_ = value;
    bankNameIsSet_ = true;
}

bool BankcardResult::bankNameIsSet() const
{
    return bankNameIsSet_;
}

void BankcardResult::unsetbankName()
{
    bankNameIsSet_ = false;
}

std::string BankcardResult::getCardNumber() const
{
    return cardNumber_;
}

void BankcardResult::setCardNumber(const std::string& value)
{
    cardNumber_ = value;
    cardNumberIsSet_ = true;
}

bool BankcardResult::cardNumberIsSet() const
{
    return cardNumberIsSet_;
}

void BankcardResult::unsetcardNumber()
{
    cardNumberIsSet_ = false;
}

std::string BankcardResult::getIssueDate() const
{
    return issueDate_;
}

void BankcardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool BankcardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void BankcardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string BankcardResult::getExpiryDate() const
{
    return expiryDate_;
}

void BankcardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool BankcardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void BankcardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string BankcardResult::getType() const
{
    return type_;
}

void BankcardResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BankcardResult::typeIsSet() const
{
    return typeIsSet_;
}

void BankcardResult::unsettype()
{
    typeIsSet_ = false;
}

Object BankcardResult::getConfidence() const
{
    return confidence_;
}

void BankcardResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool BankcardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void BankcardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


