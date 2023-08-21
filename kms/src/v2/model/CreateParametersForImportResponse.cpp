

#include "huaweicloud/kms/v2/model/CreateParametersForImportResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateParametersForImportResponse::CreateParametersForImportResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    importToken_ = "";
    importTokenIsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
}

CreateParametersForImportResponse::~CreateParametersForImportResponse() = default;

void CreateParametersForImportResponse::validate()
{
}

web::json::value CreateParametersForImportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(importTokenIsSet_) {
        val[utility::conversions::to_string_t("import_token")] = ModelBase::toJson(importToken_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }

    return val;
}

bool CreateParametersForImportResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
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
    return ok;
}

std::string CreateParametersForImportResponse::getKeyId() const
{
    return keyId_;
}

void CreateParametersForImportResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateParametersForImportResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateParametersForImportResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateParametersForImportResponse::getImportToken() const
{
    return importToken_;
}

void CreateParametersForImportResponse::setImportToken(const std::string& value)
{
    importToken_ = value;
    importTokenIsSet_ = true;
}

bool CreateParametersForImportResponse::importTokenIsSet() const
{
    return importTokenIsSet_;
}

void CreateParametersForImportResponse::unsetimportToken()
{
    importTokenIsSet_ = false;
}

int64_t CreateParametersForImportResponse::getExpirationTime() const
{
    return expirationTime_;
}

void CreateParametersForImportResponse::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool CreateParametersForImportResponse::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void CreateParametersForImportResponse::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string CreateParametersForImportResponse::getPublicKey() const
{
    return publicKey_;
}

void CreateParametersForImportResponse::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool CreateParametersForImportResponse::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void CreateParametersForImportResponse::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

}
}
}
}
}


