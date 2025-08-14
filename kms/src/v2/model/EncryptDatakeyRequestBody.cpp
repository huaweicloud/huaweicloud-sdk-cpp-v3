

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
    additionalAuthenticatedData_ = "";
    additionalAuthenticatedDataIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    pin_ = "";
    pinIsSet_ = false;
    pinType_ = "";
    pinTypeIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
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
    if(additionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("additional_authenticated_data")] = ModelBase::toJson(additionalAuthenticatedData_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(pinIsSet_) {
        val[utility::conversions::to_string_t("pin")] = ModelBase::toJson(pin_);
    }
    if(pinTypeIsSet_) {
        val[utility::conversions::to_string_t("pin_type")] = ModelBase::toJson(pinType_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
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
    if(val.has_field(utility::conversions::to_string_t("additional_authenticated_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_authenticated_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalAuthenticatedData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPinType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
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

std::string EncryptDatakeyRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void EncryptDatakeyRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool EncryptDatakeyRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void EncryptDatakeyRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
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

std::string EncryptDatakeyRequestBody::getPin() const
{
    return pin_;
}

void EncryptDatakeyRequestBody::setPin(const std::string& value)
{
    pin_ = value;
    pinIsSet_ = true;
}

bool EncryptDatakeyRequestBody::pinIsSet() const
{
    return pinIsSet_;
}

void EncryptDatakeyRequestBody::unsetpin()
{
    pinIsSet_ = false;
}

std::string EncryptDatakeyRequestBody::getPinType() const
{
    return pinType_;
}

void EncryptDatakeyRequestBody::setPinType(const std::string& value)
{
    pinType_ = value;
    pinTypeIsSet_ = true;
}

bool EncryptDatakeyRequestBody::pinTypeIsSet() const
{
    return pinTypeIsSet_;
}

void EncryptDatakeyRequestBody::unsetpinType()
{
    pinTypeIsSet_ = false;
}

std::string EncryptDatakeyRequestBody::getKeySpec() const
{
    return keySpec_;
}

void EncryptDatakeyRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool EncryptDatakeyRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void EncryptDatakeyRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

}
}
}
}
}


