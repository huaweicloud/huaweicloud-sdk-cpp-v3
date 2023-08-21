

#include "huaweicloud/kms/v2/model/EncryptDataResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




EncryptDataResponse::EncryptDataResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
}

EncryptDataResponse::~EncryptDataResponse() = default;

void EncryptDataResponse::validate()
{
}

web::json::value EncryptDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }

    return val;
}

bool EncryptDataResponse::fromJson(const web::json::value& val)
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

std::string EncryptDataResponse::getKeyId() const
{
    return keyId_;
}

void EncryptDataResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool EncryptDataResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void EncryptDataResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string EncryptDataResponse::getCipherText() const
{
    return cipherText_;
}

void EncryptDataResponse::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool EncryptDataResponse::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void EncryptDataResponse::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

}
}
}
}
}


