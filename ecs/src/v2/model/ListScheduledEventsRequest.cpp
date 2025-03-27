

#include "huaweicloud/ecs/v2/model/ListScheduledEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListScheduledEventsRequest::ListScheduledEventsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    instanceIdIsSet_ = false;
    typeIsSet_ = false;
    stateIsSet_ = false;
    publishSince_ = "";
    publishSinceIsSet_ = false;
    publishUntil_ = "";
    publishUntilIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduledEventsRequest::~ListScheduledEventsRequest() = default;

void ListScheduledEventsRequest::validate()
{
}

web::json::value ListScheduledEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(publishSinceIsSet_) {
        val[utility::conversions::to_string_t("publish_since")] = ModelBase::toJson(publishSince_);
    }
    if(publishUntilIsSet_) {
        val[utility::conversions::to_string_t("publish_until")] = ModelBase::toJson(publishUntil_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListScheduledEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListScheduledEventsRequest::getMarker() const
{
    return marker_;
}

void ListScheduledEventsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListScheduledEventsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListScheduledEventsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListScheduledEventsRequest::getId() const
{
    return id_;
}

void ListScheduledEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListScheduledEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListScheduledEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListScheduledEventsRequest::getInstanceId()
{
    return instanceId_;
}

void ListScheduledEventsRequest::setInstanceId(const std::vector<std::string>& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduledEventsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduledEventsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& ListScheduledEventsRequest::getType()
{
    return type_;
}

void ListScheduledEventsRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListScheduledEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListScheduledEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ListScheduledEventsRequest::getState()
{
    return state_;
}

void ListScheduledEventsRequest::setState(const std::vector<std::string>& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListScheduledEventsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListScheduledEventsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListScheduledEventsRequest::getPublishSince() const
{
    return publishSince_;
}

void ListScheduledEventsRequest::setPublishSince(const std::string& value)
{
    publishSince_ = value;
    publishSinceIsSet_ = true;
}

bool ListScheduledEventsRequest::publishSinceIsSet() const
{
    return publishSinceIsSet_;
}

void ListScheduledEventsRequest::unsetpublishSince()
{
    publishSinceIsSet_ = false;
}

std::string ListScheduledEventsRequest::getPublishUntil() const
{
    return publishUntil_;
}

void ListScheduledEventsRequest::setPublishUntil(const std::string& value)
{
    publishUntil_ = value;
    publishUntilIsSet_ = true;
}

bool ListScheduledEventsRequest::publishUntilIsSet() const
{
    return publishUntilIsSet_;
}

void ListScheduledEventsRequest::unsetpublishUntil()
{
    publishUntilIsSet_ = false;
}

int32_t ListScheduledEventsRequest::getLimit() const
{
    return limit_;
}

void ListScheduledEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduledEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduledEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


