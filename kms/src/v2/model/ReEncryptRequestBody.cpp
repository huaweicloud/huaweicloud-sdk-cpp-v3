

#include "huaweicloud/kms/v2/model/ReEncryptRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReEncryptRequestBody::ReEncryptRequestBody()
{
    sourceKeyId_ = "";
    sourceKeyIdIsSet_ = false;
    sourceAdditionalAuthenticatedData_ = "";
    sourceAdditionalAuthenticatedDataIsSet_ = false;
    sourceEncryptionAlgorithm_ = "";
    sourceEncryptionAlgorithmIsSet_ = false;
    destinationKeyId_ = "";
    destinationKeyIdIsSet_ = false;
    destinationAdditionalAuthenticatedData_ = "";
    destinationAdditionalAuthenticatedDataIsSet_ = false;
    destinationEncryptionAlgorithm_ = "";
    destinationEncryptionAlgorithmIsSet_ = false;
    datakeyCipherLength_ = "";
    datakeyCipherLengthIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
}

ReEncryptRequestBody::~ReEncryptRequestBody() = default;

void ReEncryptRequestBody::validate()
{
}

web::json::value ReEncryptRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceKeyIdIsSet_) {
        val[utility::conversions::to_string_t("source_key_id")] = ModelBase::toJson(sourceKeyId_);
    }
    if(sourceAdditionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("source_additional_authenticated_data")] = ModelBase::toJson(sourceAdditionalAuthenticatedData_);
    }
    if(sourceEncryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("source_encryption_algorithm")] = ModelBase::toJson(sourceEncryptionAlgorithm_);
    }
    if(destinationKeyIdIsSet_) {
        val[utility::conversions::to_string_t("destination_key_id")] = ModelBase::toJson(destinationKeyId_);
    }
    if(destinationAdditionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("destination_additional_authenticated_data")] = ModelBase::toJson(destinationAdditionalAuthenticatedData_);
    }
    if(destinationEncryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("destination_encryption_algorithm")] = ModelBase::toJson(destinationEncryptionAlgorithm_);
    }
    if(datakeyCipherLengthIsSet_) {
        val[utility::conversions::to_string_t("datakey_cipher_length")] = ModelBase::toJson(datakeyCipherLength_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }

    return val;
}
bool ReEncryptRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_additional_authenticated_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_additional_authenticated_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAdditionalAuthenticatedData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("destination_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_additional_authenticated_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_additional_authenticated_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationAdditionalAuthenticatedData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datakey_cipher_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_cipher_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyCipherLength(refVal);
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


std::string ReEncryptRequestBody::getSourceKeyId() const
{
    return sourceKeyId_;
}

void ReEncryptRequestBody::setSourceKeyId(const std::string& value)
{
    sourceKeyId_ = value;
    sourceKeyIdIsSet_ = true;
}

bool ReEncryptRequestBody::sourceKeyIdIsSet() const
{
    return sourceKeyIdIsSet_;
}

void ReEncryptRequestBody::unsetsourceKeyId()
{
    sourceKeyIdIsSet_ = false;
}

std::string ReEncryptRequestBody::getSourceAdditionalAuthenticatedData() const
{
    return sourceAdditionalAuthenticatedData_;
}

void ReEncryptRequestBody::setSourceAdditionalAuthenticatedData(const std::string& value)
{
    sourceAdditionalAuthenticatedData_ = value;
    sourceAdditionalAuthenticatedDataIsSet_ = true;
}

bool ReEncryptRequestBody::sourceAdditionalAuthenticatedDataIsSet() const
{
    return sourceAdditionalAuthenticatedDataIsSet_;
}

void ReEncryptRequestBody::unsetsourceAdditionalAuthenticatedData()
{
    sourceAdditionalAuthenticatedDataIsSet_ = false;
}

std::string ReEncryptRequestBody::getSourceEncryptionAlgorithm() const
{
    return sourceEncryptionAlgorithm_;
}

void ReEncryptRequestBody::setSourceEncryptionAlgorithm(const std::string& value)
{
    sourceEncryptionAlgorithm_ = value;
    sourceEncryptionAlgorithmIsSet_ = true;
}

bool ReEncryptRequestBody::sourceEncryptionAlgorithmIsSet() const
{
    return sourceEncryptionAlgorithmIsSet_;
}

void ReEncryptRequestBody::unsetsourceEncryptionAlgorithm()
{
    sourceEncryptionAlgorithmIsSet_ = false;
}

std::string ReEncryptRequestBody::getDestinationKeyId() const
{
    return destinationKeyId_;
}

void ReEncryptRequestBody::setDestinationKeyId(const std::string& value)
{
    destinationKeyId_ = value;
    destinationKeyIdIsSet_ = true;
}

bool ReEncryptRequestBody::destinationKeyIdIsSet() const
{
    return destinationKeyIdIsSet_;
}

void ReEncryptRequestBody::unsetdestinationKeyId()
{
    destinationKeyIdIsSet_ = false;
}

std::string ReEncryptRequestBody::getDestinationAdditionalAuthenticatedData() const
{
    return destinationAdditionalAuthenticatedData_;
}

void ReEncryptRequestBody::setDestinationAdditionalAuthenticatedData(const std::string& value)
{
    destinationAdditionalAuthenticatedData_ = value;
    destinationAdditionalAuthenticatedDataIsSet_ = true;
}

bool ReEncryptRequestBody::destinationAdditionalAuthenticatedDataIsSet() const
{
    return destinationAdditionalAuthenticatedDataIsSet_;
}

void ReEncryptRequestBody::unsetdestinationAdditionalAuthenticatedData()
{
    destinationAdditionalAuthenticatedDataIsSet_ = false;
}

std::string ReEncryptRequestBody::getDestinationEncryptionAlgorithm() const
{
    return destinationEncryptionAlgorithm_;
}

void ReEncryptRequestBody::setDestinationEncryptionAlgorithm(const std::string& value)
{
    destinationEncryptionAlgorithm_ = value;
    destinationEncryptionAlgorithmIsSet_ = true;
}

bool ReEncryptRequestBody::destinationEncryptionAlgorithmIsSet() const
{
    return destinationEncryptionAlgorithmIsSet_;
}

void ReEncryptRequestBody::unsetdestinationEncryptionAlgorithm()
{
    destinationEncryptionAlgorithmIsSet_ = false;
}

std::string ReEncryptRequestBody::getDatakeyCipherLength() const
{
    return datakeyCipherLength_;
}

void ReEncryptRequestBody::setDatakeyCipherLength(const std::string& value)
{
    datakeyCipherLength_ = value;
    datakeyCipherLengthIsSet_ = true;
}

bool ReEncryptRequestBody::datakeyCipherLengthIsSet() const
{
    return datakeyCipherLengthIsSet_;
}

void ReEncryptRequestBody::unsetdatakeyCipherLength()
{
    datakeyCipherLengthIsSet_ = false;
}

std::string ReEncryptRequestBody::getCipherText() const
{
    return cipherText_;
}

void ReEncryptRequestBody::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool ReEncryptRequestBody::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void ReEncryptRequestBody::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

}
}
}
}
}


