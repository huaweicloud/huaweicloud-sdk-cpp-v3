

#include "huaweicloud/kms/v2/model/CreateRsaDatakeyPairResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateRsaDatakeyPairResponse::CreateRsaDatakeyPairResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    privateKeyCipherText_ = "";
    privateKeyCipherTextIsSet_ = false;
    privateKeyPlainText_ = "";
    privateKeyPlainTextIsSet_ = false;
    wrappedPrivateKey_ = "";
    wrappedPrivateKeyIsSet_ = false;
    ciphertextRecipient_ = "";
    ciphertextRecipientIsSet_ = false;
}

CreateRsaDatakeyPairResponse::~CreateRsaDatakeyPairResponse() = default;

void CreateRsaDatakeyPairResponse::validate()
{
}

web::json::value CreateRsaDatakeyPairResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(privateKeyCipherTextIsSet_) {
        val[utility::conversions::to_string_t("private_key_cipher_text")] = ModelBase::toJson(privateKeyCipherText_);
    }
    if(privateKeyPlainTextIsSet_) {
        val[utility::conversions::to_string_t("private_key_plain_text")] = ModelBase::toJson(privateKeyPlainText_);
    }
    if(wrappedPrivateKeyIsSet_) {
        val[utility::conversions::to_string_t("wrapped_private_key")] = ModelBase::toJson(wrappedPrivateKey_);
    }
    if(ciphertextRecipientIsSet_) {
        val[utility::conversions::to_string_t("ciphertext_recipient")] = ModelBase::toJson(ciphertextRecipient_);
    }

    return val;
}
bool CreateRsaDatakeyPairResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key_cipher_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key_cipher_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKeyCipherText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key_plain_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key_plain_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKeyPlainText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wrapped_private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wrapped_private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWrappedPrivateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ciphertext_recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ciphertext_recipient"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCiphertextRecipient(refVal);
        }
    }
    return ok;
}


std::string CreateRsaDatakeyPairResponse::getKeyId() const
{
    return keyId_;
}

void CreateRsaDatakeyPairResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getKeySpec() const
{
    return keySpec_;
}

void CreateRsaDatakeyPairResponse::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getPublicKey() const
{
    return publicKey_;
}

void CreateRsaDatakeyPairResponse::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getPrivateKeyCipherText() const
{
    return privateKeyCipherText_;
}

void CreateRsaDatakeyPairResponse::setPrivateKeyCipherText(const std::string& value)
{
    privateKeyCipherText_ = value;
    privateKeyCipherTextIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::privateKeyCipherTextIsSet() const
{
    return privateKeyCipherTextIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetprivateKeyCipherText()
{
    privateKeyCipherTextIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getPrivateKeyPlainText() const
{
    return privateKeyPlainText_;
}

void CreateRsaDatakeyPairResponse::setPrivateKeyPlainText(const std::string& value)
{
    privateKeyPlainText_ = value;
    privateKeyPlainTextIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::privateKeyPlainTextIsSet() const
{
    return privateKeyPlainTextIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetprivateKeyPlainText()
{
    privateKeyPlainTextIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getWrappedPrivateKey() const
{
    return wrappedPrivateKey_;
}

void CreateRsaDatakeyPairResponse::setWrappedPrivateKey(const std::string& value)
{
    wrappedPrivateKey_ = value;
    wrappedPrivateKeyIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::wrappedPrivateKeyIsSet() const
{
    return wrappedPrivateKeyIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetwrappedPrivateKey()
{
    wrappedPrivateKeyIsSet_ = false;
}

std::string CreateRsaDatakeyPairResponse::getCiphertextRecipient() const
{
    return ciphertextRecipient_;
}

void CreateRsaDatakeyPairResponse::setCiphertextRecipient(const std::string& value)
{
    ciphertextRecipient_ = value;
    ciphertextRecipientIsSet_ = true;
}

bool CreateRsaDatakeyPairResponse::ciphertextRecipientIsSet() const
{
    return ciphertextRecipientIsSet_;
}

void CreateRsaDatakeyPairResponse::unsetciphertextRecipient()
{
    ciphertextRecipientIsSet_ = false;
}

}
}
}
}
}


