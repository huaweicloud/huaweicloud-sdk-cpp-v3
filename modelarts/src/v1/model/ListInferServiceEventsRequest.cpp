

#include "huaweicloud/modelarts/v1/model/ListInferServiceEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServiceEventsRequest::ListInferServiceEventsRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    eventInfoKey_ = "";
    eventInfoKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListInferServiceEventsRequest::~ListInferServiceEventsRequest() = default;

void ListInferServiceEventsRequest::validate()
{
}

web::json::value ListInferServiceEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(eventInfoKeyIsSet_) {
        val[utility::conversions::to_string_t("event_info_key")] = ModelBase::toJson(eventInfoKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListInferServiceEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_info_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_info_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInfoKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListInferServiceEventsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferServiceEventsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferServiceEventsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferServiceEventsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferServiceEventsRequest::getEventType() const
{
    return eventType_;
}

void ListInferServiceEventsRequest::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool ListInferServiceEventsRequest::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void ListInferServiceEventsRequest::unseteventType()
{
    eventTypeIsSet_ = false;
}

int64_t ListInferServiceEventsRequest::getStartTime() const
{
    return startTime_;
}

void ListInferServiceEventsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListInferServiceEventsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListInferServiceEventsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListInferServiceEventsRequest::getEndTime() const
{
    return endTime_;
}

void ListInferServiceEventsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListInferServiceEventsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListInferServiceEventsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListInferServiceEventsRequest::getEventInfoKey() const
{
    return eventInfoKey_;
}

void ListInferServiceEventsRequest::setEventInfoKey(const std::string& value)
{
    eventInfoKey_ = value;
    eventInfoKeyIsSet_ = true;
}

bool ListInferServiceEventsRequest::eventInfoKeyIsSet() const
{
    return eventInfoKeyIsSet_;
}

void ListInferServiceEventsRequest::unseteventInfoKey()
{
    eventInfoKeyIsSet_ = false;
}

int32_t ListInferServiceEventsRequest::getLimit() const
{
    return limit_;
}

void ListInferServiceEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferServiceEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferServiceEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferServiceEventsRequest::getOffset() const
{
    return offset_;
}

void ListInferServiceEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferServiceEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferServiceEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferServiceEventsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferServiceEventsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferServiceEventsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferServiceEventsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListInferServiceEventsRequest::getSortDir() const
{
    return sortDir_;
}

void ListInferServiceEventsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInferServiceEventsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInferServiceEventsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListInferServiceEventsRequest::getContentType() const
{
    return contentType_;
}

void ListInferServiceEventsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferServiceEventsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferServiceEventsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


