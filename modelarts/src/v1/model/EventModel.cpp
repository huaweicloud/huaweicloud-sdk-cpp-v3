

#include "huaweicloud/modelarts/v1/model/EventModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EventModel::EventModel()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    firstTimestamp_ = "";
    firstTimestampIsSet_ = false;
    lastTimestamp_ = "";
    lastTimestampIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

EventModel::~EventModel() = default;

void EventModel::validate()
{
}

web::json::value EventModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(firstTimestampIsSet_) {
        val[utility::conversions::to_string_t("firstTimestamp")] = ModelBase::toJson(firstTimestamp_);
    }
    if(lastTimestampIsSet_) {
        val[utility::conversions::to_string_t("lastTimestamp")] = ModelBase::toJson(lastTimestamp_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool EventModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
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
    return ok;
}


std::string EventModel::getApiVersion() const
{
    return apiVersion_;
}

void EventModel::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool EventModel::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void EventModel::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string EventModel::getKind() const
{
    return kind_;
}

void EventModel::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool EventModel::kindIsSet() const
{
    return kindIsSet_;
}

void EventModel::unsetkind()
{
    kindIsSet_ = false;
}

std::string EventModel::getType() const
{
    return type_;
}

void EventModel::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EventModel::typeIsSet() const
{
    return typeIsSet_;
}

void EventModel::unsettype()
{
    typeIsSet_ = false;
}

std::string EventModel::getFirstTimestamp() const
{
    return firstTimestamp_;
}

void EventModel::setFirstTimestamp(const std::string& value)
{
    firstTimestamp_ = value;
    firstTimestampIsSet_ = true;
}

bool EventModel::firstTimestampIsSet() const
{
    return firstTimestampIsSet_;
}

void EventModel::unsetfirstTimestamp()
{
    firstTimestampIsSet_ = false;
}

std::string EventModel::getLastTimestamp() const
{
    return lastTimestamp_;
}

void EventModel::setLastTimestamp(const std::string& value)
{
    lastTimestamp_ = value;
    lastTimestampIsSet_ = true;
}

bool EventModel::lastTimestampIsSet() const
{
    return lastTimestampIsSet_;
}

void EventModel::unsetlastTimestamp()
{
    lastTimestampIsSet_ = false;
}

int32_t EventModel::getCount() const
{
    return count_;
}

void EventModel::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool EventModel::countIsSet() const
{
    return countIsSet_;
}

void EventModel::unsetcount()
{
    countIsSet_ = false;
}

std::string EventModel::getReason() const
{
    return reason_;
}

void EventModel::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool EventModel::reasonIsSet() const
{
    return reasonIsSet_;
}

void EventModel::unsetreason()
{
    reasonIsSet_ = false;
}

std::string EventModel::getMessage() const
{
    return message_;
}

void EventModel::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool EventModel::messageIsSet() const
{
    return messageIsSet_;
}

void EventModel::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


