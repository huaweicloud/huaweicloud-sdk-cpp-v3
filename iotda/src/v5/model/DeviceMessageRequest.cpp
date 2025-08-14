

#include "huaweicloud/iotda/v5/model/DeviceMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceMessageRequest::DeviceMessageRequest()
{
    messageId_ = "";
    messageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    messageIsSet_ = false;
    propertiesIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    payloadFormat_ = "";
    payloadFormatIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    topicFullName_ = "";
    topicFullNameIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
}

DeviceMessageRequest::~DeviceMessageRequest() = default;

void DeviceMessageRequest::validate()
{
}

web::json::value DeviceMessageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(payloadFormatIsSet_) {
        val[utility::conversions::to_string_t("payload_format")] = ModelBase::toJson(payloadFormat_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(topicFullNameIsSet_) {
        val[utility::conversions::to_string_t("topic_full_name")] = ModelBase::toJson(topicFullName_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }

    return val;
}
bool DeviceMessageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            PropertiesDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payload_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payload_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayloadFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    return ok;
}


std::string DeviceMessageRequest::getMessageId() const
{
    return messageId_;
}

void DeviceMessageRequest::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool DeviceMessageRequest::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void DeviceMessageRequest::unsetmessageId()
{
    messageIdIsSet_ = false;
}

std::string DeviceMessageRequest::getName() const
{
    return name_;
}

void DeviceMessageRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeviceMessageRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeviceMessageRequest::unsetname()
{
    nameIsSet_ = false;
}

Object DeviceMessageRequest::getMessage() const
{
    return message_;
}

void DeviceMessageRequest::setMessage(const Object& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeviceMessageRequest::messageIsSet() const
{
    return messageIsSet_;
}

void DeviceMessageRequest::unsetmessage()
{
    messageIsSet_ = false;
}

PropertiesDTO DeviceMessageRequest::getProperties() const
{
    return properties_;
}

void DeviceMessageRequest::setProperties(const PropertiesDTO& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool DeviceMessageRequest::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void DeviceMessageRequest::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string DeviceMessageRequest::getEncoding() const
{
    return encoding_;
}

void DeviceMessageRequest::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool DeviceMessageRequest::encodingIsSet() const
{
    return encodingIsSet_;
}

void DeviceMessageRequest::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string DeviceMessageRequest::getPayloadFormat() const
{
    return payloadFormat_;
}

void DeviceMessageRequest::setPayloadFormat(const std::string& value)
{
    payloadFormat_ = value;
    payloadFormatIsSet_ = true;
}

bool DeviceMessageRequest::payloadFormatIsSet() const
{
    return payloadFormatIsSet_;
}

void DeviceMessageRequest::unsetpayloadFormat()
{
    payloadFormatIsSet_ = false;
}

std::string DeviceMessageRequest::getTopic() const
{
    return topic_;
}

void DeviceMessageRequest::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool DeviceMessageRequest::topicIsSet() const
{
    return topicIsSet_;
}

void DeviceMessageRequest::unsettopic()
{
    topicIsSet_ = false;
}

std::string DeviceMessageRequest::getTopicFullName() const
{
    return topicFullName_;
}

void DeviceMessageRequest::setTopicFullName(const std::string& value)
{
    topicFullName_ = value;
    topicFullNameIsSet_ = true;
}

bool DeviceMessageRequest::topicFullNameIsSet() const
{
    return topicFullNameIsSet_;
}

void DeviceMessageRequest::unsettopicFullName()
{
    topicFullNameIsSet_ = false;
}

int32_t DeviceMessageRequest::getTtl() const
{
    return ttl_;
}

void DeviceMessageRequest::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool DeviceMessageRequest::ttlIsSet() const
{
    return ttlIsSet_;
}

void DeviceMessageRequest::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}


