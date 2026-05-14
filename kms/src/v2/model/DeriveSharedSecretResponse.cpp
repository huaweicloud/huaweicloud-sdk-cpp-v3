

#include "huaweicloud/kms/v2/model/DeriveSharedSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeriveSharedSecretResponse::DeriveSharedSecretResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyAgreementAlgorithm_ = "";
    keyAgreementAlgorithmIsSet_ = false;
    sharedSecret_ = "";
    sharedSecretIsSet_ = false;
    ciphertextRecipient_ = "";
    ciphertextRecipientIsSet_ = false;
}

DeriveSharedSecretResponse::~DeriveSharedSecretResponse() = default;

void DeriveSharedSecretResponse::validate()
{
}

web::json::value DeriveSharedSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyAgreementAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("key_agreement_algorithm")] = ModelBase::toJson(keyAgreementAlgorithm_);
    }
    if(sharedSecretIsSet_) {
        val[utility::conversions::to_string_t("shared_secret")] = ModelBase::toJson(sharedSecret_);
    }
    if(ciphertextRecipientIsSet_) {
        val[utility::conversions::to_string_t("ciphertext_recipient")] = ModelBase::toJson(ciphertextRecipient_);
    }

    return val;
}
bool DeriveSharedSecretResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_agreement_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_agreement_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAgreementAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedSecret(refVal);
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


std::string DeriveSharedSecretResponse::getKeyId() const
{
    return keyId_;
}

void DeriveSharedSecretResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeriveSharedSecretResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeriveSharedSecretResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DeriveSharedSecretResponse::getKeyAgreementAlgorithm() const
{
    return keyAgreementAlgorithm_;
}

void DeriveSharedSecretResponse::setKeyAgreementAlgorithm(const std::string& value)
{
    keyAgreementAlgorithm_ = value;
    keyAgreementAlgorithmIsSet_ = true;
}

bool DeriveSharedSecretResponse::keyAgreementAlgorithmIsSet() const
{
    return keyAgreementAlgorithmIsSet_;
}

void DeriveSharedSecretResponse::unsetkeyAgreementAlgorithm()
{
    keyAgreementAlgorithmIsSet_ = false;
}

std::string DeriveSharedSecretResponse::getSharedSecret() const
{
    return sharedSecret_;
}

void DeriveSharedSecretResponse::setSharedSecret(const std::string& value)
{
    sharedSecret_ = value;
    sharedSecretIsSet_ = true;
}

bool DeriveSharedSecretResponse::sharedSecretIsSet() const
{
    return sharedSecretIsSet_;
}

void DeriveSharedSecretResponse::unsetsharedSecret()
{
    sharedSecretIsSet_ = false;
}

std::string DeriveSharedSecretResponse::getCiphertextRecipient() const
{
    return ciphertextRecipient_;
}

void DeriveSharedSecretResponse::setCiphertextRecipient(const std::string& value)
{
    ciphertextRecipient_ = value;
    ciphertextRecipientIsSet_ = true;
}

bool DeriveSharedSecretResponse::ciphertextRecipientIsSet() const
{
    return ciphertextRecipientIsSet_;
}

void DeriveSharedSecretResponse::unsetciphertextRecipient()
{
    ciphertextRecipientIsSet_ = false;
}

}
}
}
}
}


