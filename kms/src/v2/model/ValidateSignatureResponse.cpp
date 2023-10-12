

#include "huaweicloud/kms/v2/model/ValidateSignatureResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ValidateSignatureResponse::ValidateSignatureResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    signatureValid_ = "";
    signatureValidIsSet_ = false;
}

ValidateSignatureResponse::~ValidateSignatureResponse() = default;

void ValidateSignatureResponse::validate()
{
}

web::json::value ValidateSignatureResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(signatureValidIsSet_) {
        val[utility::conversions::to_string_t("signature_valid")] = ModelBase::toJson(signatureValid_);
    }

    return val;
}
bool ValidateSignatureResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("signature_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature_valid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignatureValid(refVal);
        }
    }
    return ok;
}


std::string ValidateSignatureResponse::getKeyId() const
{
    return keyId_;
}

void ValidateSignatureResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ValidateSignatureResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ValidateSignatureResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ValidateSignatureResponse::getSignatureValid() const
{
    return signatureValid_;
}

void ValidateSignatureResponse::setSignatureValid(const std::string& value)
{
    signatureValid_ = value;
    signatureValidIsSet_ = true;
}

bool ValidateSignatureResponse::signatureValidIsSet() const
{
    return signatureValidIsSet_;
}

void ValidateSignatureResponse::unsetsignatureValid()
{
    signatureValidIsSet_ = false;
}

}
}
}
}
}


