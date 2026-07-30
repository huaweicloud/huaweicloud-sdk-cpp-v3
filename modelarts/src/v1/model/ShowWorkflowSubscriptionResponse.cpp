

#include "huaweicloud/modelarts/v1/model/ShowWorkflowSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowSubscriptionResponse::ShowWorkflowSubscriptionResponse()
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

ShowWorkflowSubscriptionResponse::~ShowWorkflowSubscriptionResponse() = default;

void ShowWorkflowSubscriptionResponse::validate()
{
}

web::json::value ShowWorkflowSubscriptionResponse::toJson() const
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
bool ShowWorkflowSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string ShowWorkflowSubscriptionResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowWorkflowSubscriptionResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowWorkflowSubscriptionResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowWorkflowSubscriptionResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowWorkflowSubscriptionResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void ShowWorkflowSubscriptionResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool ShowWorkflowSubscriptionResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void ShowWorkflowSubscriptionResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::vector<std::string>& ShowWorkflowSubscriptionResponse::getTopicUrns()
{
    return topicUrns_;
}

void ShowWorkflowSubscriptionResponse::setTopicUrns(const std::vector<std::string>& value)
{
    topicUrns_ = value;
    topicUrnsIsSet_ = true;
}

bool ShowWorkflowSubscriptionResponse::topicUrnsIsSet() const
{
    return topicUrnsIsSet_;
}

void ShowWorkflowSubscriptionResponse::unsettopicUrns()
{
    topicUrnsIsSet_ = false;
}

std::string ShowWorkflowSubscriptionResponse::getEntity() const
{
    return entity_;
}

void ShowWorkflowSubscriptionResponse::setEntity(const std::string& value)
{
    entity_ = value;
    entityIsSet_ = true;
}

bool ShowWorkflowSubscriptionResponse::entityIsSet() const
{
    return entityIsSet_;
}

void ShowWorkflowSubscriptionResponse::unsetentity()
{
    entityIsSet_ = false;
}

std::vector<std::string>& ShowWorkflowSubscriptionResponse::getEvents()
{
    return events_;
}

void ShowWorkflowSubscriptionResponse::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ShowWorkflowSubscriptionResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ShowWorkflowSubscriptionResponse::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


