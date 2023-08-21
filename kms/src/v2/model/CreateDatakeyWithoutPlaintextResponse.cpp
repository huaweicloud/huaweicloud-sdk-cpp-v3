

#include "huaweicloud/kms/v2/model/CreateDatakeyWithoutPlaintextResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyWithoutPlaintextResponse::CreateDatakeyWithoutPlaintextResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    cipherText_ = "";
    cipherTextIsSet_ = false;
}

CreateDatakeyWithoutPlaintextResponse::~CreateDatakeyWithoutPlaintextResponse() = default;

void CreateDatakeyWithoutPlaintextResponse::validate()
{
}

web::json::value CreateDatakeyWithoutPlaintextResponse::toJson() const
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

bool CreateDatakeyWithoutPlaintextResponse::fromJson(const web::json::value& val)
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

std::string CreateDatakeyWithoutPlaintextResponse::getKeyId() const
{
    return keyId_;
}

void CreateDatakeyWithoutPlaintextResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateDatakeyWithoutPlaintextResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateDatakeyWithoutPlaintextResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateDatakeyWithoutPlaintextResponse::getCipherText() const
{
    return cipherText_;
}

void CreateDatakeyWithoutPlaintextResponse::setCipherText(const std::string& value)
{
    cipherText_ = value;
    cipherTextIsSet_ = true;
}

bool CreateDatakeyWithoutPlaintextResponse::cipherTextIsSet() const
{
    return cipherTextIsSet_;
}

void CreateDatakeyWithoutPlaintextResponse::unsetcipherText()
{
    cipherTextIsSet_ = false;
}

}
}
}
}
}


