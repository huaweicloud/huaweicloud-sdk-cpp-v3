

#include "huaweicloud/kms/v2/model/SignResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




SignResponse::SignResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
}

SignResponse::~SignResponse() = default;

void SignResponse::validate()
{
}

web::json::value SignResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }

    return val;
}
bool SignResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignature(refVal);
        }
    }
    return ok;
}


std::string SignResponse::getKeyId() const
{
    return keyId_;
}

void SignResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool SignResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void SignResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string SignResponse::getSignature() const
{
    return signature_;
}

void SignResponse::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool SignResponse::signatureIsSet() const
{
    return signatureIsSet_;
}

void SignResponse::unsetsignature()
{
    signatureIsSet_ = false;
}

}
}
}
}
}


