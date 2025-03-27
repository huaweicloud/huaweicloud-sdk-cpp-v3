

#include "huaweicloud/kms/v2/model/CreateEcDatakeyPairResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateEcDatakeyPairResponse::CreateEcDatakeyPairResponse()
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

CreateEcDatakeyPairResponse::~CreateEcDatakeyPairResponse() = default;

void CreateEcDatakeyPairResponse::validate()
{
}

web::json::value CreateEcDatakeyPairResponse::toJson() const
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
bool CreateEcDatakeyPairResponse::fromJson(const web::json::value& val)
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


std::string CreateEcDatakeyPairResponse::getKeyId() const
{
    return keyId_;
}

void CreateEcDatakeyPairResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateEcDatakeyPairResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getKeySpec() const
{
    return keySpec_;
}

void CreateEcDatakeyPairResponse::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateEcDatakeyPairResponse::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getPublicKey() const
{
    return publicKey_;
}

void CreateEcDatakeyPairResponse::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void CreateEcDatakeyPairResponse::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getPrivateKeyCipherText() const
{
    return privateKeyCipherText_;
}

void CreateEcDatakeyPairResponse::setPrivateKeyCipherText(const std::string& value)
{
    privateKeyCipherText_ = value;
    privateKeyCipherTextIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::privateKeyCipherTextIsSet() const
{
    return privateKeyCipherTextIsSet_;
}

void CreateEcDatakeyPairResponse::unsetprivateKeyCipherText()
{
    privateKeyCipherTextIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getPrivateKeyPlainText() const
{
    return privateKeyPlainText_;
}

void CreateEcDatakeyPairResponse::setPrivateKeyPlainText(const std::string& value)
{
    privateKeyPlainText_ = value;
    privateKeyPlainTextIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::privateKeyPlainTextIsSet() const
{
    return privateKeyPlainTextIsSet_;
}

void CreateEcDatakeyPairResponse::unsetprivateKeyPlainText()
{
    privateKeyPlainTextIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getWrappedPrivateKey() const
{
    return wrappedPrivateKey_;
}

void CreateEcDatakeyPairResponse::setWrappedPrivateKey(const std::string& value)
{
    wrappedPrivateKey_ = value;
    wrappedPrivateKeyIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::wrappedPrivateKeyIsSet() const
{
    return wrappedPrivateKeyIsSet_;
}

void CreateEcDatakeyPairResponse::unsetwrappedPrivateKey()
{
    wrappedPrivateKeyIsSet_ = false;
}

std::string CreateEcDatakeyPairResponse::getCiphertextRecipient() const
{
    return ciphertextRecipient_;
}

void CreateEcDatakeyPairResponse::setCiphertextRecipient(const std::string& value)
{
    ciphertextRecipient_ = value;
    ciphertextRecipientIsSet_ = true;
}

bool CreateEcDatakeyPairResponse::ciphertextRecipientIsSet() const
{
    return ciphertextRecipientIsSet_;
}

void CreateEcDatakeyPairResponse::unsetciphertextRecipient()
{
    ciphertextRecipientIsSet_ = false;
}

}
}
}
}
}


