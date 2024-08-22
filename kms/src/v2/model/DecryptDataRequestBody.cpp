

#include "huaweicloud/kms/v2/model/DecryptDataRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDataRequestBody::DecryptDataRequestBody()
{
    cipherText_ = "";
    cipherTextIsSet_ = false;
    encryptionAlgorithm_ = "";
    encryptionAlgorithmIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    additionalAuthenticatedData_ = "";
    additionalAuthenticatedDataIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

DecryptDataRequestBody::~DecryptDataRequestBody() = default;

void DecryptDataRequestBody::validate()
{
}

web::json::value DecryptDataRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }
    if(encryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("encryption_algorithm")] = ModelBase::toJson(encryptionAlgorithm_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(additionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("additional_authenticated_data")] = ModelBase::toJson(additionalAuthenticatedData_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool DecryptDataRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cipher_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipherText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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
    return ok;
}


std::string DecryptDataRequestBody::getCipherText() const
{
    return cipherText_;
}

void DecryptDataRequestBody::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool DecryptDataRequestBody::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void DecryptDataRequestBody::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

std::string DecryptDataRequestBody::getEncryptionAlgorithm() const
{
    return encryptionAlgorithm_;
}

void DecryptDataRequestBody::setEncryptionAlgorithm(const std::string& value)
{
    encryptionAlgorithm_ = value;
    encryptionAlgorithmIsSet_ = true;
}

bool DecryptDataRequestBody::encryptionAlgorithmIsSet() const
{
    return encryptionAlgorithmIsSet_;
}

void DecryptDataRequestBody::unsetencryptionAlgorithm()
{
    encryptionAlgorithmIsSet_ = false;
}

std::string DecryptDataRequestBody::getKeyId() const
{
    return keyId_;
}

void DecryptDataRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DecryptDataRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DecryptDataRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DecryptDataRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void DecryptDataRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool DecryptDataRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void DecryptDataRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
}

std::string DecryptDataRequestBody::getSequence() const
{
    return sequence_;
}

void DecryptDataRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool DecryptDataRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void DecryptDataRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


