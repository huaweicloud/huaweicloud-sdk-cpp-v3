

#include "huaweicloud/modelarts/v1/model/Event.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Event::Event()
{
    message_ = "";
    messageIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
}

Event::~Event() = default;

void Event::validate()
{
}

web::json::value Event::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool Event::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string Event::getMessage() const
{
    return message_;
}

void Event::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Event::messageIsSet() const
{
    return messageIsSet_;
}

void Event::unsetmessage()
{
    messageIsSet_ = false;
}

std::string Event::getLevel() const
{
    return level_;
}

void Event::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool Event::levelIsSet() const
{
    return levelIsSet_;
}

void Event::unsetlevel()
{
    levelIsSet_ = false;
}

std::string Event::getTime() const
{
    return time_;
}

void Event::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Event::timeIsSet() const
{
    return timeIsSet_;
}

void Event::unsettime()
{
    timeIsSet_ = false;
}

std::string Event::getSource() const
{
    return source_;
}

void Event::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool Event::sourceIsSet() const
{
    return sourceIsSet_;
}

void Event::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


