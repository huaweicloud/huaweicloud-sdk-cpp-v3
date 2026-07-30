

#include "huaweicloud/modelarts/v1/model/ListTrainingJobEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobEventsResponse::ListTrainingJobEventsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    eventsIsSet_ = false;
}

ListTrainingJobEventsResponse::~ListTrainingJobEventsResponse() = default;

void ListTrainingJobEventsResponse::validate()
{
}

web::json::value ListTrainingJobEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }

    return val;
}
bool ListTrainingJobEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<Event> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    return ok;
}


int32_t ListTrainingJobEventsResponse::getTotal() const
{
    return total_;
}

void ListTrainingJobEventsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTrainingJobEventsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTrainingJobEventsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListTrainingJobEventsResponse::getLimit() const
{
    return limit_;
}

void ListTrainingJobEventsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingJobEventsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingJobEventsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingJobEventsResponse::getOffset() const
{
    return offset_;
}

void ListTrainingJobEventsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingJobEventsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingJobEventsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTrainingJobEventsResponse::getOrder() const
{
    return order_;
}

void ListTrainingJobEventsResponse::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListTrainingJobEventsResponse::orderIsSet() const
{
    return orderIsSet_;
}

void ListTrainingJobEventsResponse::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListTrainingJobEventsResponse::getStartTime() const
{
    return startTime_;
}

void ListTrainingJobEventsResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTrainingJobEventsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTrainingJobEventsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTrainingJobEventsResponse::getEndTime() const
{
    return endTime_;
}

void ListTrainingJobEventsResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTrainingJobEventsResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTrainingJobEventsResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<Event>& ListTrainingJobEventsResponse::getEvents()
{
    return events_;
}

void ListTrainingJobEventsResponse::setEvents(const std::vector<Event>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ListTrainingJobEventsResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void ListTrainingJobEventsResponse::unsetevents()
{
    eventsIsSet_ = false;
}

}
}
}
}
}


