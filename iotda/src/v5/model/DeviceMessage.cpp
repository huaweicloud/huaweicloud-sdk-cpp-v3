

#include "huaweicloud/iotda/v5/model/DeviceMessage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceMessage::DeviceMessage()
{
    messageId_ = "";
    messageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    messageIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    payloadFormat_ = "";
    payloadFormatIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    propertiesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorInfoIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    finishedTime_ = "";
    finishedTimeIsSet_ = false;
}

DeviceMessage::~DeviceMessage() = default;

void DeviceMessage::validate()
{
}

web::json::value DeviceMessage::toJson() const
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
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(payloadFormatIsSet_) {
        val[utility::conversions::to_string_t("payload_format")] = ModelBase::toJson(payloadFormat_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(finishedTimeIsSet_) {
        val[utility::conversions::to_string_t("finished_time")] = ModelBase::toJson(finishedTime_);
    }

    return val;
}
bool DeviceMessage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            PropertiesDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorInfoDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedTime(refVal);
        }
    }
    return ok;
}


std::string DeviceMessage::getMessageId() const
{
    return messageId_;
}

void DeviceMessage::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool DeviceMessage::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void DeviceMessage::unsetmessageId()
{
    messageIdIsSet_ = false;
}

std::string DeviceMessage::getName() const
{
    return name_;
}

void DeviceMessage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeviceMessage::nameIsSet() const
{
    return nameIsSet_;
}

void DeviceMessage::unsetname()
{
    nameIsSet_ = false;
}

Object DeviceMessage::getMessage() const
{
    return message_;
}

void DeviceMessage::setMessage(const Object& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeviceMessage::messageIsSet() const
{
    return messageIsSet_;
}

void DeviceMessage::unsetmessage()
{
    messageIsSet_ = false;
}

std::string DeviceMessage::getEncoding() const
{
    return encoding_;
}

void DeviceMessage::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool DeviceMessage::encodingIsSet() const
{
    return encodingIsSet_;
}

void DeviceMessage::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string DeviceMessage::getPayloadFormat() const
{
    return payloadFormat_;
}

void DeviceMessage::setPayloadFormat(const std::string& value)
{
    payloadFormat_ = value;
    payloadFormatIsSet_ = true;
}

bool DeviceMessage::payloadFormatIsSet() const
{
    return payloadFormatIsSet_;
}

void DeviceMessage::unsetpayloadFormat()
{
    payloadFormatIsSet_ = false;
}

std::string DeviceMessage::getTopic() const
{
    return topic_;
}

void DeviceMessage::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool DeviceMessage::topicIsSet() const
{
    return topicIsSet_;
}

void DeviceMessage::unsettopic()
{
    topicIsSet_ = false;
}

PropertiesDTO DeviceMessage::getProperties() const
{
    return properties_;
}

void DeviceMessage::setProperties(const PropertiesDTO& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool DeviceMessage::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void DeviceMessage::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string DeviceMessage::getStatus() const
{
    return status_;
}

void DeviceMessage::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeviceMessage::statusIsSet() const
{
    return statusIsSet_;
}

void DeviceMessage::unsetstatus()
{
    statusIsSet_ = false;
}

ErrorInfoDTO DeviceMessage::getErrorInfo() const
{
    return errorInfo_;
}

void DeviceMessage::setErrorInfo(const ErrorInfoDTO& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool DeviceMessage::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void DeviceMessage::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string DeviceMessage::getCreatedTime() const
{
    return createdTime_;
}

void DeviceMessage::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool DeviceMessage::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void DeviceMessage::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string DeviceMessage::getFinishedTime() const
{
    return finishedTime_;
}

void DeviceMessage::setFinishedTime(const std::string& value)
{
    finishedTime_ = value;
    finishedTimeIsSet_ = true;
}

bool DeviceMessage::finishedTimeIsSet() const
{
    return finishedTimeIsSet_;
}

void DeviceMessage::unsetfinishedTime()
{
    finishedTimeIsSet_ = false;
}

}
}
}
}
}


