

#include "huaweicloud/kms/v2/model/Recipient.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




Recipient::Recipient()
{
    attestationDocument_ = "";
    attestationDocumentIsSet_ = false;
    keyEncryptionAlgorithm_ = "";
    keyEncryptionAlgorithmIsSet_ = false;
}

Recipient::~Recipient() = default;

void Recipient::validate()
{
}

web::json::value Recipient::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attestationDocumentIsSet_) {
        val[utility::conversions::to_string_t("attestation_document")] = ModelBase::toJson(attestationDocument_);
    }
    if(keyEncryptionAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("key_encryption_algorithm")] = ModelBase::toJson(keyEncryptionAlgorithm_);
    }

    return val;
}
bool Recipient::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attestation_document"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attestation_document"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttestationDocument(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_encryption_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_encryption_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyEncryptionAlgorithm(refVal);
        }
    }
    return ok;
}


std::string Recipient::getAttestationDocument() const
{
    return attestationDocument_;
}

void Recipient::setAttestationDocument(const std::string& value)
{
    attestationDocument_ = value;
    attestationDocumentIsSet_ = true;
}

bool Recipient::attestationDocumentIsSet() const
{
    return attestationDocumentIsSet_;
}

void Recipient::unsetattestationDocument()
{
    attestationDocumentIsSet_ = false;
}

std::string Recipient::getKeyEncryptionAlgorithm() const
{
    return keyEncryptionAlgorithm_;
}

void Recipient::setKeyEncryptionAlgorithm(const std::string& value)
{
    keyEncryptionAlgorithm_ = value;
    keyEncryptionAlgorithmIsSet_ = true;
}

bool Recipient::keyEncryptionAlgorithmIsSet() const
{
    return keyEncryptionAlgorithmIsSet_;
}

void Recipient::unsetkeyEncryptionAlgorithm()
{
    keyEncryptionAlgorithmIsSet_ = false;
}

}
}
}
}
}


