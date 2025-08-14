

#include "huaweicloud/iotda/v5/model/ShowDeviceMessageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceMessageResponse::ShowDeviceMessageResponse()
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

ShowDeviceMessageResponse::~ShowDeviceMessageResponse() = default;

void ShowDeviceMessageResponse::validate()
{
}

web::json::value ShowDeviceMessageResponse::toJson() const
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
bool ShowDeviceMessageResponse::fromJson(const web::json::value& val)
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


std::string ShowDeviceMessageResponse::getMessageId() const
{
    return messageId_;
}

void ShowDeviceMessageResponse::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool ShowDeviceMessageResponse::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void ShowDeviceMessageResponse::unsetmessageId()
{
    messageIdIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getName() const
{
    return name_;
}

void ShowDeviceMessageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDeviceMessageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDeviceMessageResponse::unsetname()
{
    nameIsSet_ = false;
}

Object ShowDeviceMessageResponse::getMessage() const
{
    return message_;
}

void ShowDeviceMessageResponse::setMessage(const Object& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowDeviceMessageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowDeviceMessageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getEncoding() const
{
    return encoding_;
}

void ShowDeviceMessageResponse::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ShowDeviceMessageResponse::encodingIsSet() const
{
    return encodingIsSet_;
}

void ShowDeviceMessageResponse::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getPayloadFormat() const
{
    return payloadFormat_;
}

void ShowDeviceMessageResponse::setPayloadFormat(const std::string& value)
{
    payloadFormat_ = value;
    payloadFormatIsSet_ = true;
}

bool ShowDeviceMessageResponse::payloadFormatIsSet() const
{
    return payloadFormatIsSet_;
}

void ShowDeviceMessageResponse::unsetpayloadFormat()
{
    payloadFormatIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getTopic() const
{
    return topic_;
}

void ShowDeviceMessageResponse::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool ShowDeviceMessageResponse::topicIsSet() const
{
    return topicIsSet_;
}

void ShowDeviceMessageResponse::unsettopic()
{
    topicIsSet_ = false;
}

PropertiesDTO ShowDeviceMessageResponse::getProperties() const
{
    return properties_;
}

void ShowDeviceMessageResponse::setProperties(const PropertiesDTO& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ShowDeviceMessageResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ShowDeviceMessageResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getStatus() const
{
    return status_;
}

void ShowDeviceMessageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDeviceMessageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDeviceMessageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ErrorInfoDTO ShowDeviceMessageResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowDeviceMessageResponse::setErrorInfo(const ErrorInfoDTO& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowDeviceMessageResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowDeviceMessageResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowDeviceMessageResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowDeviceMessageResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowDeviceMessageResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowDeviceMessageResponse::getFinishedTime() const
{
    return finishedTime_;
}

void ShowDeviceMessageResponse::setFinishedTime(const std::string& value)
{
    finishedTime_ = value;
    finishedTimeIsSet_ = true;
}

bool ShowDeviceMessageResponse::finishedTimeIsSet() const
{
    return finishedTimeIsSet_;
}

void ShowDeviceMessageResponse::unsetfinishedTime()
{
    finishedTimeIsSet_ = false;
}

}
}
}
}
}


