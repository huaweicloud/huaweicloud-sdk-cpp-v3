

#include "huaweicloud/kms/v2/model/EncryptDatakeyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDatakeyResponse::EncryptDatakeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
    datakeyLength_ = "";
    datakeyLengthIsSet_ = false;
}

EncryptDatakeyResponse::~EncryptDatakeyResponse() = default;

void EncryptDatakeyResponse::validate()
{
}

web::json::value EncryptDatakeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }
    if(datakeyLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_length")] = ModelBase::toJson(datakeyLength_);
    }

    return val;
}

bool EncryptDatakeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cipher_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipherText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyLength(refVal);
        }
    }
    return ok;
}

std::string EncryptDatakeyResponse::getKeyId() const
{
    return keyId_;
}

void EncryptDatakeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool EncryptDatakeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void EncryptDatakeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string EncryptDatakeyResponse::getCipherText() const
{
    return cipherText_;
}

void EncryptDatakeyResponse::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool EncryptDatakeyResponse::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void EncryptDatakeyResponse::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

std::string EncryptDatakeyResponse::getDatakeyLength() const
{
    return datakeyLength_;
}

void EncryptDatakeyResponse::setDatakeyLength(const std::string& value)
{
    datakeyLength_ = value;
    datakeyLengthIsSet_ = true;
}

bool EncryptDatakeyResponse::datakeyLengthIsSet() const
{
    return datakeyLengthIsSet_;
}

void EncryptDatakeyResponse::unsetdatakeyLength()
{
    datakeyLengthIsSet_ = false;
}

}
}
}
}
}


