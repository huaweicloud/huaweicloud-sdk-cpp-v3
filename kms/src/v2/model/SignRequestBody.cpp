

#include "huaweicloud/kms/v2/model/SignRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




SignRequestBody::SignRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    signingAlgorithm_ = "";
    signingAlgorithmIsSet_ = false;
    messageType_ = "";
    messageTypeIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

SignRequestBody::~SignRequestBody() = default;

void SignRequestBody::validate()
{
}

web::json::value SignRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
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

bool SignRequestBody::fromJson(const web::json::value& val)
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

std::string SignRequestBody::getKeyId() const
{
    return keyId_;
}

void SignRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool SignRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void SignRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string SignRequestBody::getMessage() const
{
    return message_;
}

void SignRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SignRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void SignRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::string SignRequestBody::getSigningAlgorithm() const
{
    return signingAlgorithm_;
}

void SignRequestBody::setSigningAlgorithm(const std::string& value)
{
    signingAlgorithm_ = value;
    signingAlgorithmIsSet_ = true;
}

bool SignRequestBody::signingAlgorithmIsSet() const
{
    return signingAlgorithmIsSet_;
}

void SignRequestBody::unsetsigningAlgorithm()
{
    signingAlgorithmIsSet_ = false;
}

std::string SignRequestBody::getMessageType() const
{
    return messageType_;
}

void SignRequestBody::setMessageType(const std::string& value)
{
    messageType_ = value;
    messageTypeIsSet_ = true;
}

bool SignRequestBody::messageTypeIsSet() const
{
    return messageTypeIsSet_;
}

void SignRequestBody::unsetmessageType()
{
    messageTypeIsSet_ = false;
}

std::string SignRequestBody::getSequence() const
{
    return sequence_;
}

void SignRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool SignRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void SignRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


