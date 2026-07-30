

#include "huaweicloud/modelarts/v1/model/AcceptScheduledEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AcceptScheduledEventRequest::AcceptScheduledEventRequest()
{
    eventId_ = "";
    eventIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AcceptScheduledEventRequest::~AcceptScheduledEventRequest() = default;

void AcceptScheduledEventRequest::validate()
{
}

web::json::value AcceptScheduledEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AcceptScheduledEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspaceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EventUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AcceptScheduledEventRequest::getEventId() const
{
    return eventId_;
}

void AcceptScheduledEventRequest::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool AcceptScheduledEventRequest::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void AcceptScheduledEventRequest::unseteventId()
{
    eventIdIsSet_ = false;
}

std::string AcceptScheduledEventRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void AcceptScheduledEventRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool AcceptScheduledEventRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void AcceptScheduledEventRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

EventUpdate AcceptScheduledEventRequest::getBody() const
{
    return body_;
}

void AcceptScheduledEventRequest::setBody(const EventUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AcceptScheduledEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AcceptScheduledEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


