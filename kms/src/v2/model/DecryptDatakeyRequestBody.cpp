

#include "huaweicloud/kms/v2/model/DecryptDatakeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyRequestBody::DecryptDatakeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
    datakeyCipherLength_ = "";
    datakeyCipherLengthIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

DecryptDatakeyRequestBody::~DecryptDatakeyRequestBody() = default;

void DecryptDatakeyRequestBody::validate()
{
}

web::json::value DecryptDatakeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }
    if(datakeyCipherLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_cipher_length")] = ModelBase::toJson(datakeyCipherLength_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool DecryptDatakeyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datakey_cipher_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_cipher_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyCipherLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string DecryptDatakeyRequestBody::getKeyId() const
{
    return keyId_;
}

void DecryptDatakeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DecryptDatakeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DecryptDatakeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DecryptDatakeyRequestBody::getCipherText() const
{
    return cipherText_;
}

void DecryptDatakeyRequestBody::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool DecryptDatakeyRequestBody::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void DecryptDatakeyRequestBody::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

std::string DecryptDatakeyRequestBody::getDatakeyCipherLength() const
{
    return datakeyCipherLength_;
}

void DecryptDatakeyRequestBody::setDatakeyCipherLength(const std::string& value)
{
    datakeyCipherLength_ = value;
    datakeyCipherLengthIsSet_ = true;
}

bool DecryptDatakeyRequestBody::datakeyCipherLengthIsSet() const
{
    return datakeyCipherLengthIsSet_;
}

void DecryptDatakeyRequestBody::unsetdatakeyCipherLength()
{
    datakeyCipherLengthIsSet_ = false;
}

std::string DecryptDatakeyRequestBody::getSequence() const
{
    return sequence_;
}

void DecryptDatakeyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool DecryptDatakeyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void DecryptDatakeyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


