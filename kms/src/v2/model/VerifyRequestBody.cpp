

#include "huaweicloud/kms/v2/model/VerifyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




VerifyRequestBody::VerifyRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    signingAlgorithm_ = "";
    signingAlgorithmIsSet_ = false;
    messageType_ = "";
    messageTypeIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

VerifyRequestBody::~VerifyRequestBody() = default;

void VerifyRequestBody::validate()
{
}

web::json::value VerifyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }
    if(signingAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("signing_algorithm")] = ModelBase::toJson(signingAlgorithm_);
    }
    if(messageTypeIsSet_) {
        val[utility::conversions::to_string_t("message_type")] = ModelBase::toJson(messageType_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool VerifyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("signing_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signing_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSigningAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageType(refVal);
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

std::string VerifyRequestBody::getKeyId() const
{
    return keyId_;
}

void VerifyRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool VerifyRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void VerifyRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string VerifyRequestBody::getMessage() const
{
    return message_;
}

void VerifyRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool VerifyRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void VerifyRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::string VerifyRequestBody::getSignature() const
{
    return signature_;
}

void VerifyRequestBody::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool VerifyRequestBody::signatureIsSet() const
{
    return signatureIsSet_;
}

void VerifyRequestBody::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string VerifyRequestBody::getSigningAlgorithm() const
{
    return signingAlgorithm_;
}

void VerifyRequestBody::setSigningAlgorithm(const std::string& value)
{
    signingAlgorithm_ = value;
    signingAlgorithmIsSet_ = true;
}

bool VerifyRequestBody::signingAlgorithmIsSet() const
{
    return signingAlgorithmIsSet_;
}

void VerifyRequestBody::unsetsigningAlgorithm()
{
    signingAlgorithmIsSet_ = false;
}

std::string VerifyRequestBody::getMessageType() const
{
    return messageType_;
}

void VerifyRequestBody::setMessageType(const std::string& value)
{
    messageType_ = value;
    messageTypeIsSet_ = true;
}

bool VerifyRequestBody::messageTypeIsSet() const
{
    return messageTypeIsSet_;
}

void VerifyRequestBody::unsetmessageType()
{
    messageTypeIsSet_ = false;
}

std::string VerifyRequestBody::getSequence() const
{
    return sequence_;
}

void VerifyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool VerifyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void VerifyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


