

#include "huaweicloud/kms/v2/model/EncryptDataRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDataRequestBody::EncryptDataRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    plainText_ = "";
    plainTextIsSet_ = false;
    encryptionAlgorithm_ = "";
    encryptionAlgorithmIsSet_ = false;
    additionalAuthenticatedData_ = "";
    additionalAuthenticatedDataIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

EncryptDataRequestBody::~EncryptDataRequestBody() = default;

void EncryptDataRequestBody::validate()
{
}

web::json::value EncryptDataRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(plainTextIsSet_) {
        val[utility::conversions::to_string_t("plain_text")] = ModelBase::toJson(plainText_);
    }
    if(encryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("encryption_algorithm")] = ModelBase::toJson(encryptionAlgorithm_);
    }
    if(additionalAuthenticatedDataIsSet_) {
        val[utility::conversions::to_string_t("additional_authenticated_data")] = ModelBase::toJson(additionalAuthenticatedData_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool EncryptDataRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("encryption_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionAlgorithm(refVal);
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


std::string EncryptDataRequestBody::getKeyId() const
{
    return keyId_;
}

void EncryptDataRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool EncryptDataRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void EncryptDataRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string EncryptDataRequestBody::getPlainText() const
{
    return plainText_;
}

void EncryptDataRequestBody::setPlainText(const std::string& value)
{
    plainText_ = value;
    plainTextIsSet_ = true;
}

bool EncryptDataRequestBody::plainTextIsSet() const
{
    return plainTextIsSet_;
}

void EncryptDataRequestBody::unsetplainText()
{
    plainTextIsSet_ = false;
}

std::string EncryptDataRequestBody::getEncryptionAlgorithm() const
{
    return encryptionAlgorithm_;
}

void EncryptDataRequestBody::setEncryptionAlgorithm(const std::string& value)
{
    encryptionAlgorithm_ = value;
    encryptionAlgorithmIsSet_ = true;
}

bool EncryptDataRequestBody::encryptionAlgorithmIsSet() const
{
    return encryptionAlgorithmIsSet_;
}

void EncryptDataRequestBody::unsetencryptionAlgorithm()
{
    encryptionAlgorithmIsSet_ = false;
}

std::string EncryptDataRequestBody::getAdditionalAuthenticatedData() const
{
    return additionalAuthenticatedData_;
}

void EncryptDataRequestBody::setAdditionalAuthenticatedData(const std::string& value)
{
    additionalAuthenticatedData_ = value;
    additionalAuthenticatedDataIsSet_ = true;
}

bool EncryptDataRequestBody::additionalAuthenticatedDataIsSet() const
{
    return additionalAuthenticatedDataIsSet_;
}

void EncryptDataRequestBody::unsetadditionalAuthenticatedData()
{
    additionalAuthenticatedDataIsSet_ = false;
}

std::string EncryptDataRequestBody::getSequence() const
{
    return sequence_;
}

void EncryptDataRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool EncryptDataRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void EncryptDataRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


