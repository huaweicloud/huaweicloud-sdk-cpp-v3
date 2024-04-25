

#include "huaweicloud/ocr/v1/model/BankReceiptDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BankReceiptDict::BankReceiptDict()
{
    kvPairCount_ = 0;
    kvPairCountIsSet_ = false;
    bankReceiptLocationIsSet_ = false;
    kvPairListIsSet_ = false;
}

BankReceiptDict::~BankReceiptDict() = default;

void BankReceiptDict::validate()
{
}

web::json::value BankReceiptDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kvPairCountIsSet_) {
        val[utility::conversions::to_string_t("kv_pair_count")] = ModelBase::toJson(kvPairCount_);
    }
    if(bankReceiptLocationIsSet_) {
        val[utility::conversions::to_string_t("bank_receipt_location")] = ModelBase::toJson(bankReceiptLocation_);
    }
    if(kvPairListIsSet_) {
        val[utility::conversions::to_string_t("kv_pair_list")] = ModelBase::toJson(kvPairList_);
    }

    return val;
}
bool BankReceiptDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kv_pair_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_pair_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvPairCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bank_receipt_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bank_receipt_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBankReceiptLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kv_pair_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_pair_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BankReceiptKvPair> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvPairList(refVal);
        }
    }
    return ok;
}


int32_t BankReceiptDict::getKvPairCount() const
{
    return kvPairCount_;
}

void BankReceiptDict::setKvPairCount(int32_t value)
{
    kvPairCount_ = value;
    kvPairCountIsSet_ = true;
}

bool BankReceiptDict::kvPairCountIsSet() const
{
    return kvPairCountIsSet_;
}

void BankReceiptDict::unsetkvPairCount()
{
    kvPairCountIsSet_ = false;
}

std::vector<std::vector<int32_t>>& BankReceiptDict::getBankReceiptLocation()
{
    return bankReceiptLocation_;
}

void BankReceiptDict::setBankReceiptLocation(const std::vector<std::vector<int32_t>>& value)
{
    bankReceiptLocation_ = value;
    bankReceiptLocationIsSet_ = true;
}

bool BankReceiptDict::bankReceiptLocationIsSet() const
{
    return bankReceiptLocationIsSet_;
}

void BankReceiptDict::unsetbankReceiptLocation()
{
    bankReceiptLocationIsSet_ = false;
}

std::vector<BankReceiptKvPair>& BankReceiptDict::getKvPairList()
{
    return kvPairList_;
}

void BankReceiptDict::setKvPairList(const std::vector<BankReceiptKvPair>& value)
{
    kvPairList_ = value;
    kvPairListIsSet_ = true;
}

bool BankReceiptDict::kvPairListIsSet() const
{
    return kvPairListIsSet_;
}

void BankReceiptDict::unsetkvPairList()
{
    kvPairListIsSet_ = false;
}

}
}
}
}
}


