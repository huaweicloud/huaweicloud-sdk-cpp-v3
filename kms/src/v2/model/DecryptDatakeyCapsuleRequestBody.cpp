

#include "huaweicloud/kms/v2/model/DecryptDatakeyCapsuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyCapsuleRequestBody::DecryptDatakeyCapsuleRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    datakeyCapsule_ = "";
    datakeyCapsuleIsSet_ = false;
    attestationDocumentIsSet_ = false;
}

DecryptDatakeyCapsuleRequestBody::~DecryptDatakeyCapsuleRequestBody() = default;

void DecryptDatakeyCapsuleRequestBody::validate()
{
}

web::json::value DecryptDatakeyCapsuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(datakeyCapsuleIsSet_) {
        val[utility::conversions::to_string_t("datakey_capsule")] = ModelBase::toJson(datakeyCapsule_);
    }
    if(attestationDocumentIsSet_) {
        val[utility::conversions::to_string_t("attestation_document")] = ModelBase::toJson(attestationDocument_);
    }

    return val;
}
bool DecryptDatakeyCapsuleRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_capsule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_capsule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyCapsule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attestation_document"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attestation_document"));
        if(!fieldValue.is_null())
        {
            DecryptDatakeyCapsuleRequestBody_attestation_document refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttestationDocument(refVal);
        }
    }
    return ok;
}


std::string DecryptDatakeyCapsuleRequestBody::getKeyId() const
{
    return keyId_;
}

void DecryptDatakeyCapsuleRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DecryptDatakeyCapsuleRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody::getPublicKey() const
{
    return publicKey_;
}

void DecryptDatakeyCapsuleRequestBody::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void DecryptDatakeyCapsuleRequestBody::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody::getDatakeyCapsule() const
{
    return datakeyCapsule_;
}

void DecryptDatakeyCapsuleRequestBody::setDatakeyCapsule(const std::string& value)
{
    datakeyCapsule_ = value;
    datakeyCapsuleIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody::datakeyCapsuleIsSet() const
{
    return datakeyCapsuleIsSet_;
}

void DecryptDatakeyCapsuleRequestBody::unsetdatakeyCapsule()
{
    datakeyCapsuleIsSet_ = false;
}

DecryptDatakeyCapsuleRequestBody_attestation_document DecryptDatakeyCapsuleRequestBody::getAttestationDocument() const
{
    return attestationDocument_;
}

void DecryptDatakeyCapsuleRequestBody::setAttestationDocument(const DecryptDatakeyCapsuleRequestBody_attestation_document& value)
{
    attestationDocument_ = value;
    attestationDocumentIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody::attestationDocumentIsSet() const
{
    return attestationDocumentIsSet_;
}

void DecryptDatakeyCapsuleRequestBody::unsetattestationDocument()
{
    attestationDocumentIsSet_ = false;
}

}
}
}
}
}


