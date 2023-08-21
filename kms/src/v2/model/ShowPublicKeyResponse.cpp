

#include "huaweicloud/kms/v2/model/ShowPublicKeyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowPublicKeyResponse::ShowPublicKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
}

ShowPublicKeyResponse::~ShowPublicKeyResponse() = default;

void ShowPublicKeyResponse::validate()
{
}

web::json::value ShowPublicKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }

    return val;
}

bool ShowPublicKeyResponse::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowPublicKeyResponse::getKeyId() const
{
    return keyId_;
}

void ShowPublicKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowPublicKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowPublicKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ShowPublicKeyResponse::getPublicKey() const
{
    return publicKey_;
}

void ShowPublicKeyResponse::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool ShowPublicKeyResponse::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void ShowPublicKeyResponse::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

}
}
}
}
}


