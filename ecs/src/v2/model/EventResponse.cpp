

#include "huaweicloud/ecs/v2/model/EventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




EventResponse::EventResponse()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    publishTime_ = "";
    publishTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    notBefore_ = "";
    notBeforeIsSet_ = false;
    notAfter_ = "";
    notAfterIsSet_ = false;
    notBeforeDeadline_ = "";
    notBeforeDeadlineIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    executeOptionsIsSet_ = false;
    sourceIsSet_ = false;
}

EventResponse::~EventResponse() = default;

void EventResponse::validate()
{
}

web::json::value EventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(publishTimeIsSet_) {
        val[utility::conversions::to_string_t("publish_time")] = ModelBase::toJson(publishTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("not_before")] = ModelBase::toJson(notBefore_);
    }
    if(notAfterIsSet_) {
        val[utility::conversions::to_string_t("not_after")] = ModelBase::toJson(notAfter_);
    }
    if(notBeforeDeadlineIsSet_) {
        val[utility::conversions::to_string_t("not_before_deadline")] = ModelBase::toJson(notBeforeDeadline_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(executeOptionsIsSet_) {
        val[utility::conversions::to_string_t("execute_options")] = ModelBase::toJson(executeOptions_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool EventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_before"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_after"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_before_deadline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_before_deadline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBeforeDeadline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_options"));
        if(!fieldValue.is_null())
        {
            EventResponse_execute_options refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            EventResponse_source refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string EventResponse::getId() const
{
    return id_;
}

void EventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EventResponse::idIsSet() const
{
    return idIsSet_;
}

void EventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string EventResponse::getType() const
{
    return type_;
}

void EventResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EventResponse::typeIsSet() const
{
    return typeIsSet_;
}

void EventResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string EventResponse::getState() const
{
    return state_;
}

void EventResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool EventResponse::stateIsSet() const
{
    return stateIsSet_;
}

void EventResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string EventResponse::getPublishTime() const
{
    return publishTime_;
}

void EventResponse::setPublishTime(const std::string& value)
{
    publishTime_ = value;
    publishTimeIsSet_ = true;
}

bool EventResponse::publishTimeIsSet() const
{
    return publishTimeIsSet_;
}

void EventResponse::unsetpublishTime()
{
    publishTimeIsSet_ = false;
}

std::string EventResponse::getStartTime() const
{
    return startTime_;
}

void EventResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EventResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EventResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EventResponse::getFinishTime() const
{
    return finishTime_;
}

void EventResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool EventResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void EventResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string EventResponse::getNotBefore() const
{
    return notBefore_;
}

void EventResponse::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool EventResponse::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void EventResponse::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

std::string EventResponse::getNotAfter() const
{
    return notAfter_;
}

void EventResponse::setNotAfter(const std::string& value)
{
    notAfter_ = value;
    notAfterIsSet_ = true;
}

bool EventResponse::notAfterIsSet() const
{
    return notAfterIsSet_;
}

void EventResponse::unsetnotAfter()
{
    notAfterIsSet_ = false;
}

std::string EventResponse::getNotBeforeDeadline() const
{
    return notBeforeDeadline_;
}

void EventResponse::setNotBeforeDeadline(const std::string& value)
{
    notBeforeDeadline_ = value;
    notBeforeDeadlineIsSet_ = true;
}

bool EventResponse::notBeforeDeadlineIsSet() const
{
    return notBeforeDeadlineIsSet_;
}

void EventResponse::unsetnotBeforeDeadline()
{
    notBeforeDeadlineIsSet_ = false;
}

std::string EventResponse::getDescription() const
{
    return description_;
}

void EventResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EventResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EventResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EventResponse::getInstanceId() const
{
    return instanceId_;
}

void EventResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EventResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EventResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

EventResponse_execute_options EventResponse::getExecuteOptions() const
{
    return executeOptions_;
}

void EventResponse::setExecuteOptions(const EventResponse_execute_options& value)
{
    executeOptions_ = value;
    executeOptionsIsSet_ = true;
}

bool EventResponse::executeOptionsIsSet() const
{
    return executeOptionsIsSet_;
}

void EventResponse::unsetexecuteOptions()
{
    executeOptionsIsSet_ = false;
}

EventResponse_source EventResponse::getSource() const
{
    return source_;
}

void EventResponse::setSource(const EventResponse_source& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool EventResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void EventResponse::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


