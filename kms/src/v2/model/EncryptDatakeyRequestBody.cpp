

#include "huaweicloud/kms/v2/model/EncryptDatakeyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDatakeyRequestBody::EncryptDatakeyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    plainText_ = "";
    plainTextIsSet_ = false;
    datakeyPlainLength_ = "";
    datakeyPlainLengthIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

EncryptDatakeyRequestBody::~EncryptDatakeyRequestBody() = default;

void EncryptDatakeyRequestBody::validate()
{
}

web::json::value EncryptDatakeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(plainTextIsSet_) {
        val[utility::conversions::to_string_t("plain_text")] = ModelBase::toJson(plainText_);
    }
    if(datakeyPlainLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_plain_length")] = ModelBase::toJson(datakeyPlainLength_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool EncryptDatakeyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plain_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plain_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlainText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_plain_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_plain_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyPlainLength(refVal);
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

std::string EncryptDatakeyRequestBody::getKeyId() const
{
    return keyId_;
}

void EncryptDatakeyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool EncryptDatakeyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void EncryptDatakeyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string EncryptDatakeyRequestBody::getPlainText() const
{
    return plainText_;
}

void EncryptDatakeyRequestBody::setPlainText(const std::string& value)
{
    plainText_ = value;
    plainTextIsSet_ = true;
}

bool EncryptDatakeyRequestBody::plainTextIsSet() const
{
    return plainTextIsSet_;
}

void EncryptDatakeyRequestBody::unsetplainText()
{
    plainTextIsSet_ = false;
}

std::string EncryptDatakeyRequestBody::getDatakeyPlainLength() const
{
    return datakeyPlainLength_;
}

void EncryptDatakeyRequestBody::setDatakeyPlainLength(const std::string& value)
{
    datakeyPlainLength_ = value;
    datakeyPlainLengthIsSet_ = true;
}

bool EncryptDatakeyRequestBody::datakeyPlainLengthIsSet() const
{
    return datakeyPlainLengthIsSet_;
}

void EncryptDatakeyRequestBody::unsetdatakeyPlainLength()
{
    datakeyPlainLengthIsSet_ = false;
}

std::string EncryptDatakeyRequestBody::getSequence() const
{
    return sequence_;
}

void EncryptDatakeyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool EncryptDatakeyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void EncryptDatakeyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


