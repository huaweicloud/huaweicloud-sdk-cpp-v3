

#include "huaweicloud/ocr/v1/model/BankReceiptResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BankReceiptResult::BankReceiptResult()
{
    bankReceiptCount_ = 0;
    bankReceiptCountIsSet_ = false;
    bankReceiptListIsSet_ = false;
}

BankReceiptResult::~BankReceiptResult() = default;

void BankReceiptResult::validate()
{
}

web::json::value BankReceiptResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bankReceiptCountIsSet_) {
        val[utility::conversions::to_string_t("bank_receipt_count")] = ModelBase::toJson(bankReceiptCount_);
    }
    if(bankReceiptListIsSet_) {
        val[utility::conversions::to_string_t("bank_receipt_list")] = ModelBase::toJson(bankReceiptList_);
    }

    return val;
}
bool BankReceiptResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bank_receipt_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bank_receipt_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBankReceiptCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bank_receipt_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bank_receipt_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BankReceiptDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBankReceiptList(refVal);
        }
    }
    return ok;
}


int32_t BankReceiptResult::getBankReceiptCount() const
{
    return bankReceiptCount_;
}

void BankReceiptResult::setBankReceiptCount(int32_t value)
{
    bankReceiptCount_ = value;
    bankReceiptCountIsSet_ = true;
}

bool BankReceiptResult::bankReceiptCountIsSet() const
{
    return bankReceiptCountIsSet_;
}

void BankReceiptResult::unsetbankReceiptCount()
{
    bankReceiptCountIsSet_ = false;
}

std::vector<BankReceiptDict>& BankReceiptResult::getBankReceiptList()
{
    return bankReceiptList_;
}

void BankReceiptResult::setBankReceiptList(const std::vector<BankReceiptDict>& value)
{
    bankReceiptList_ = value;
    bankReceiptListIsSet_ = true;
}

bool BankReceiptResult::bankReceiptListIsSet() const
{
    return bankReceiptListIsSet_;
}

void BankReceiptResult::unsetbankReceiptList()
{
    bankReceiptListIsSet_ = false;
}

}
}
}
}
}


