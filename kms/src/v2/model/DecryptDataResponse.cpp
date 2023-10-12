

#include "huaweicloud/kms/v2/model/DecryptDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDataResponse::DecryptDataResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    plainText_ = "";
    plainTextIsSet_ = false;
    plainTextBase64_ = "";
    plainTextBase64IsSet_ = false;
}

DecryptDataResponse::~DecryptDataResponse() = default;

void DecryptDataResponse::validate()
{
}

web::json::value DecryptDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(plainTextIsSet_) {
        val[utility::conversions::to_string_t("plain_text")] = ModelBase::toJson(plainText_);
    }
    if(plainTextBase64IsSet_) {
        val[utility::conversions::to_string_t("plain_text_base64")] = ModelBase::toJson(plainTextBase64_);
    }

    return val;
}
bool DecryptDataResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plain_text_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plain_text_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlainTextBase64(refVal);
        }
    }
    return ok;
}


std::string DecryptDataResponse::getKeyId() const
{
    return keyId_;
}

void DecryptDataResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DecryptDataResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DecryptDataResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DecryptDataResponse::getPlainText() const
{
    return plainText_;
}

void DecryptDataResponse::setPlainText(const std::string& value)
{
    plainText_ = value;
    plainTextIsSet_ = true;
}

bool DecryptDataResponse::plainTextIsSet() const
{
    return plainTextIsSet_;
}

void DecryptDataResponse::unsetplainText()
{
    plainTextIsSet_ = false;
}

std::string DecryptDataResponse::getPlainTextBase64() const
{
    return plainTextBase64_;
}

void DecryptDataResponse::setPlainTextBase64(const std::string& value)
{
    plainTextBase64_ = value;
    plainTextBase64IsSet_ = true;
}

bool DecryptDataResponse::plainTextBase64IsSet() const
{
    return plainTextBase64IsSet_;
}

void DecryptDataResponse::unsetplainTextBase64()
{
    plainTextBase64IsSet_ = false;
}

}
}
}
}
}


