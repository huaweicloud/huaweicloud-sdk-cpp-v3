

#include "huaweicloud/modelarts/v1/model/Notification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Notification::Notification()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    eventsIsSet_ = false;
}

Notification::~Notification() = default;

void Notification::validate()
{
}

web::json::value Notification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool Notification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


std::string Notification::getTopicUrn() const
{
    return topicUrn_;
}

void Notification::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool Notification::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void Notification::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::vector<std::string>& Notification::getEvents()
{
    return events_;
}

void Notification::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool Notification::eventsIsSet() const
{
    return eventsIsSet_;
}

void Notification::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


