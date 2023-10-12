

#include "huaweicloud/kms/v2/model/CreateDatakeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyResponse::CreateDatakeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    plainText_ = "";
    plainTextIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
}

CreateDatakeyResponse::~CreateDatakeyResponse() = default;

void CreateDatakeyResponse::validate()
{
}

web::json::value CreateDatakeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(plainTextIsSet_) {
        val[utility::conversions::to_string_t("plain_text")] = ModelBase::toJson(plainText_);
    }
    if(cipherTextIsSet_) {
        val[utility::conversions::to_string_t("cipher_text")] = ModelBase::toJson(cipherText_);
    }

    return val;
}
bool CreateDatakeyResponse::fromJson(const web::json::value& val)
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


std::string CreateDatakeyResponse::getKeyId() const
{
    return keyId_;
}

void CreateDatakeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateDatakeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateDatakeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateDatakeyResponse::getPlainText() const
{
    return plainText_;
}

void CreateDatakeyResponse::setPlainText(const std::string& value)
{
    plainText_ = value;
    plainTextIsSet_ = true;
}

bool CreateDatakeyResponse::plainTextIsSet() const
{
    return plainTextIsSet_;
}

void CreateDatakeyResponse::unsetplainText()
{
    plainTextIsSet_ = false;
}

std::string CreateDatakeyResponse::getCipherText() const
{
    return cipherText_;
}

void CreateDatakeyResponse::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool CreateDatakeyResponse::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void CreateDatakeyResponse::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

}
}
}
}
}


