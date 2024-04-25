

#include "huaweicloud/ocr/v1/model/BankReceiptKvPair.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BankReceiptKvPair::BankReceiptKvPair()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BankReceiptKvPair::~BankReceiptKvPair() = default;

void BankReceiptKvPair::validate()
{
}

web::json::value BankReceiptKvPair::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool BankReceiptKvPair::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string BankReceiptKvPair::getKey() const
{
    return key_;
}

void BankReceiptKvPair::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BankReceiptKvPair::keyIsSet() const
{
    return keyIsSet_;
}

void BankReceiptKvPair::unsetkey()
{
    keyIsSet_ = false;
}

std::string BankReceiptKvPair::getValue() const
{
    return value_;
}

void BankReceiptKvPair::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BankReceiptKvPair::valueIsSet() const
{
    return valueIsSet_;
}

void BankReceiptKvPair::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


