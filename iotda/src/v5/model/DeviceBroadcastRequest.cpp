

#include "huaweicloud/iotda/v5/model/DeviceBroadcastRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceBroadcastRequest::DeviceBroadcastRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    topicFullName_ = "";
    topicFullNameIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
    messageId_ = "";
    messageIdIsSet_ = false;
}

DeviceBroadcastRequest::~DeviceBroadcastRequest() = default;

void DeviceBroadcastRequest::validate()
{
}

web::json::value DeviceBroadcastRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(topicFullNameIsSet_) {
        val[utility::conversions::to_string_t("topic_full_name")] = ModelBase::toJson(topicFullName_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }

    return val;
}
bool DeviceBroadcastRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    return ok;
}


std::string DeviceBroadcastRequest::getAppId() const
{
    return appId_;
}

void DeviceBroadcastRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeviceBroadcastRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeviceBroadcastRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string DeviceBroadcastRequest::getTopicFullName() const
{
    return topicFullName_;
}

void DeviceBroadcastRequest::setTopicFullName(const std::string& value)
{
    topicFullName_ = value;
    topicFullNameIsSet_ = true;
}

bool DeviceBroadcastRequest::topicFullNameIsSet() const
{
    return topicFullNameIsSet_;
}

void DeviceBroadcastRequest::unsettopicFullName()
{
    topicFullNameIsSet_ = false;
}

std::string DeviceBroadcastRequest::getMessage() const
{
    return message_;
}

void DeviceBroadcastRequest::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeviceBroadcastRequest::messageIsSet() const
{
    return messageIsSet_;
}

void DeviceBroadcastRequest::unsetmessage()
{
    messageIsSet_ = false;
}

int32_t DeviceBroadcastRequest::getTtl() const
{
    return ttl_;
}

void DeviceBroadcastRequest::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool DeviceBroadcastRequest::ttlIsSet() const
{
    return ttlIsSet_;
}

void DeviceBroadcastRequest::unsetttl()
{
    ttlIsSet_ = false;
}

std::string DeviceBroadcastRequest::getMessageId() const
{
    return messageId_;
}

void DeviceBroadcastRequest::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool DeviceBroadcastRequest::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void DeviceBroadcastRequest::unsetmessageId()
{
    messageIdIsSet_ = false;
}

}
}
}
}
}


