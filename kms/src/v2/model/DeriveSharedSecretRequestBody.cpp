

#include "huaweicloud/kms/v2/model/DeriveSharedSecretRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeriveSharedSecretRequestBody::DeriveSharedSecretRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyAgreementAlgorithm_ = "";
    keyAgreementAlgorithmIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    recipientIsSet_ = false;
}

DeriveSharedSecretRequestBody::~DeriveSharedSecretRequestBody() = default;

void DeriveSharedSecretRequestBody::validate()
{
}

web::json::value DeriveSharedSecretRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyAgreementAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("key_agreement_algorithm")] = ModelBase::toJson(keyAgreementAlgorithm_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(recipientIsSet_) {
        val[utility::conversions::to_string_t("recipient")] = ModelBase::toJson(recipient_);
    }

    return val;
}
bool DeriveSharedSecretRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recipient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recipient"));
        if(!fieldValue.is_null())
        {
            Recipient refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecipient(refVal);
        }
    }
    return ok;
}


std::string DeriveSharedSecretRequestBody::getKeyId() const
{
    return keyId_;
}

void DeriveSharedSecretRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeriveSharedSecretRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeriveSharedSecretRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DeriveSharedSecretRequestBody::getKeyAgreementAlgorithm() const
{
    return keyAgreementAlgorithm_;
}

void DeriveSharedSecretRequestBody::setKeyAgreementAlgorithm(const std::string& value)
{
    keyAgreementAlgorithm_ = value;
    keyAgreementAlgorithmIsSet_ = true;
}

bool DeriveSharedSecretRequestBody::keyAgreementAlgorithmIsSet() const
{
    return keyAgreementAlgorithmIsSet_;
}

void DeriveSharedSecretRequestBody::unsetkeyAgreementAlgorithm()
{
    keyAgreementAlgorithmIsSet_ = false;
}

std::string DeriveSharedSecretRequestBody::getPublicKey() const
{
    return publicKey_;
}

void DeriveSharedSecretRequestBody::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool DeriveSharedSecretRequestBody::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void DeriveSharedSecretRequestBody::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

Recipient DeriveSharedSecretRequestBody::getRecipient() const
{
    return recipient_;
}

void DeriveSharedSecretRequestBody::setRecipient(const Recipient& value)
{
    recipient_ = value;
    recipientIsSet_ = true;
}

bool DeriveSharedSecretRequestBody::recipientIsSet() const
{
    return recipientIsSet_;
}

void DeriveSharedSecretRequestBody::unsetrecipient()
{
    recipientIsSet_ = false;
}

}
}
}
}
}


