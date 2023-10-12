

#include "huaweicloud/mpc/v1/model/Notification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Notification::Notification()
{
    eventName_ = "";
    eventNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    msgType_ = 0;
    msgTypeIsSet_ = false;
}

Notification::~Notification() = default;

void Notification::validate()
{
}

web::json::value Notification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(msgTypeIsSet_) {
        val[utility::conversions::to_string_t("msg_type")] = ModelBase::toJson(msgType_);
    }

    return val;
}
bool Notification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("msg_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsgType(refVal);
        }
    }
    return ok;
}


std::string Notification::getEventName() const
{
    return eventName_;
}

void Notification::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool Notification::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void Notification::unseteventName()
{
    eventNameIsSet_ = false;
}

std::string Notification::getStatus() const
{
    return status_;
}

void Notification::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Notification::statusIsSet() const
{
    return statusIsSet_;
}

void Notification::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Notification::getTopic() const
{
    return topic_;
}

void Notification::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool Notification::topicIsSet() const
{
    return topicIsSet_;
}

void Notification::unsettopic()
{
    topicIsSet_ = false;
}

int32_t Notification::getMsgType() const
{
    return msgType_;
}

void Notification::setMsgType(int32_t value)
{
    msgType_ = value;
    msgTypeIsSet_ = true;
}

bool Notification::msgTypeIsSet() const
{
    return msgTypeIsSet_;
}

void Notification::unsetmsgType()
{
    msgTypeIsSet_ = false;
}

}
}
}
}
}


