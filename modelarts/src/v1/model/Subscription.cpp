

#include "huaweicloud/modelarts/v1/model/Subscription.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Subscription::Subscription()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    topicUrnsIsSet_ = false;
    entity_ = "";
    entityIsSet_ = false;
    eventsIsSet_ = false;
}

Subscription::~Subscription() = default;

void Subscription::validate()
{
}

web::json::value Subscription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(topicUrnsIsSet_) {
        val[utility::conversions::to_string_t("topic_urns")] = ModelBase::toJson(topicUrns_);
    }
    if(entityIsSet_) {
        val[utility::conversions::to_string_t("entity")] = ModelBase::toJson(entity_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool Subscription::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntity(refVal);
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


std::string Subscription::getCreatedAt() const
{
    return createdAt_;
}

void Subscription::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Subscription::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Subscription::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string Subscription::getSubscriptionId() const
{
    return subscriptionId_;
}

void Subscription::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool Subscription::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void Subscription::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::vector<std::string>& Subscription::getTopicUrns()
{
    return topicUrns_;
}

void Subscription::setTopicUrns(const std::vector<std::string>& value)
{
    topicUrns_ = value;
    topicUrnsIsSet_ = true;
}

bool Subscription::topicUrnsIsSet() const
{
    return topicUrnsIsSet_;
}

void Subscription::unsettopicUrns()
{
    topicUrnsIsSet_ = false;
}

std::string Subscription::getEntity() const
{
    return entity_;
}

void Subscription::setEntity(const std::string& value)
{
    entity_ = value;
    entityIsSet_ = true;
}

bool Subscription::entityIsSet() const
{
    return entityIsSet_;
}

void Subscription::unsetentity()
{
    entityIsSet_ = false;
}

std::vector<std::string>& Subscription::getEvents()
{
    return events_;
}

void Subscription::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool Subscription::eventsIsSet() const
{
    return eventsIsSet_;
}

void Subscription::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


