

#include "huaweicloud/kms/v2/model/ImportKeyMaterialRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ImportKeyMaterialRequestBody::ImportKeyMaterialRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    importToken_ = "";
    importTokenIsSet_ = false;
    encryptedKeyMaterial_ = "";
    encryptedKeyMaterialIsSet_ = false;
    encryptedPrivatekey_ = "";
    encryptedPrivatekeyIsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ImportKeyMaterialRequestBody::~ImportKeyMaterialRequestBody() = default;

void ImportKeyMaterialRequestBody::validate()
{
}

web::json::value ImportKeyMaterialRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(importTokenIsSet_) {
        val[utility::conversions::to_string_t("import_token")] = ModelBase::toJson(importToken_);
    }
    if(encryptedKeyMaterialIsSet_) {
        val[utility::conversions::to_string_t("encrypted_key_material")] = ModelBase::toJson(encryptedKeyMaterial_);
    }
    if(encryptedPrivatekeyIsSet_) {
        val[utility::conversions::to_string_t("encrypted_privatekey")] = ModelBase::toJson(encryptedPrivatekey_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool ImportKeyMaterialRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("import_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_key_material"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_key_material"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedKeyMaterial(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_privatekey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_privatekey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedPrivatekey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
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

std::string ImportKeyMaterialRequestBody::getKeyId() const
{
    return keyId_;
}

void ImportKeyMaterialRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ImportKeyMaterialRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ImportKeyMaterialRequestBody::getImportToken() const
{
    return importToken_;
}

void ImportKeyMaterialRequestBody::setImportToken(const std::string& value)
{
    importToken_ = value;
    importTokenIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::importTokenIsSet() const
{
    return importTokenIsSet_;
}

void ImportKeyMaterialRequestBody::unsetimportToken()
{
    importTokenIsSet_ = false;
}

std::string ImportKeyMaterialRequestBody::getEncryptedKeyMaterial() const
{
    return encryptedKeyMaterial_;
}

void ImportKeyMaterialRequestBody::setEncryptedKeyMaterial(const std::string& value)
{
    encryptedKeyMaterial_ = value;
    encryptedKeyMaterialIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::encryptedKeyMaterialIsSet() const
{
    return encryptedKeyMaterialIsSet_;
}

void ImportKeyMaterialRequestBody::unsetencryptedKeyMaterial()
{
    encryptedKeyMaterialIsSet_ = false;
}

std::string ImportKeyMaterialRequestBody::getEncryptedPrivatekey() const
{
    return encryptedPrivatekey_;
}

void ImportKeyMaterialRequestBody::setEncryptedPrivatekey(const std::string& value)
{
    encryptedPrivatekey_ = value;
    encryptedPrivatekeyIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::encryptedPrivatekeyIsSet() const
{
    return encryptedPrivatekeyIsSet_;
}

void ImportKeyMaterialRequestBody::unsetencryptedPrivatekey()
{
    encryptedPrivatekeyIsSet_ = false;
}

int64_t ImportKeyMaterialRequestBody::getExpirationTime() const
{
    return expirationTime_;
}

void ImportKeyMaterialRequestBody::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void ImportKeyMaterialRequestBody::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string ImportKeyMaterialRequestBody::getSequence() const
{
    return sequence_;
}

void ImportKeyMaterialRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ImportKeyMaterialRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ImportKeyMaterialRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


