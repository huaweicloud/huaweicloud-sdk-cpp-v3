

#include "huaweicloud/kms/v2/model/ReEncryptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReEncryptResponse::ReEncryptResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    sourceKeyId_ = "";
    sourceKeyIdIsSet_ = false;
    sourceEncryptionAlgorithm_ = "";
    sourceEncryptionAlgorithmIsSet_ = false;
    destinationEncryptionAlgorithm_ = "";
    destinationEncryptionAlgorithmIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
}

ReEncryptResponse::~ReEncryptResponse() = default;

void ReEncryptResponse::validate()
{
}

web::json::value ReEncryptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(sourceKeyIdIsSet_) {
        val[utility::conversions::to_string_t("source_key_id")] = ModelBase::toJson(sourceKeyId_);
    }
    if(sourceEncryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("source_encryption_algorithm")] = ModelBase::toJson(sourceEncryptionAlgorithm_);
    }
    if(destinationEncryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("destination_encryption_algorithm")] = ModelBase::toJson(destinationEncryptionAlgorithm_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }

    return val;
}
bool ReEncryptResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_encryption_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_encryption_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEncryptionAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_encryption_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_encryption_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationEncryptionAlgorithm(refVal);
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
    return ok;
}


std::string ReEncryptResponse::getKeyId() const
{
    return keyId_;
}

void ReEncryptResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ReEncryptResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ReEncryptResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ReEncryptResponse::getSourceKeyId() const
{
    return sourceKeyId_;
}

void ReEncryptResponse::setSourceKeyId(const std::string& value)
{
    sourceKeyId_ = value;
    sourceKeyIdIsSet_ = true;
}

bool ReEncryptResponse::sourceKeyIdIsSet() const
{
    return sourceKeyIdIsSet_;
}

void ReEncryptResponse::unsetsourceKeyId()
{
    sourceKeyIdIsSet_ = false;
}

std::string ReEncryptResponse::getSourceEncryptionAlgorithm() const
{
    return sourceEncryptionAlgorithm_;
}

void ReEncryptResponse::setSourceEncryptionAlgorithm(const std::string& value)
{
    sourceEncryptionAlgorithm_ = value;
    sourceEncryptionAlgorithmIsSet_ = true;
}

bool ReEncryptResponse::sourceEncryptionAlgorithmIsSet() const
{
    return sourceEncryptionAlgorithmIsSet_;
}

void ReEncryptResponse::unsetsourceEncryptionAlgorithm()
{
    sourceEncryptionAlgorithmIsSet_ = false;
}

std::string ReEncryptResponse::getDestinationEncryptionAlgorithm() const
{
    return destinationEncryptionAlgorithm_;
}

void ReEncryptResponse::setDestinationEncryptionAlgorithm(const std::string& value)
{
    destinationEncryptionAlgorithm_ = value;
    destinationEncryptionAlgorithmIsSet_ = true;
}

bool ReEncryptResponse::destinationEncryptionAlgorithmIsSet() const
{
    return destinationEncryptionAlgorithmIsSet_;
}

void ReEncryptResponse::unsetdestinationEncryptionAlgorithm()
{
    destinationEncryptionAlgorithmIsSet_ = false;
}

std::string ReEncryptResponse::getCipherText() const
{
    return cipherText_;
}

void ReEncryptResponse::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool ReEncryptResponse::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void ReEncryptResponse::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

}
}
}
}
}


