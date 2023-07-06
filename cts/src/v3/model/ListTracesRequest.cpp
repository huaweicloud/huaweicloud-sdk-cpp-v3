

#include "huaweicloud/cts/v3/model/ListTracesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTracesRequest::ListTracesRequest()
{
    traceType_ = "";
    traceTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    from_ = 0L;
    fromIsSet_ = false;
    next_ = "";
    nextIsSet_ = false;
    to_ = 0L;
    toIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    traceName_ = "";
    traceNameIsSet_ = false;
    traceRating_ = "";
    traceRatingIsSet_ = false;
}

ListTracesRequest::~ListTracesRequest() = default;

void ListTracesRequest::validate()
{
}

web::json::value ListTracesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceTypeIsSet_) {
        val[utility::conversions::to_string_t("trace_type")] = ModelBase::toJson(traceType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(nextIsSet_) {
        val[utility::conversions::to_string_t("next")] = ModelBase::toJson(next_);
    }
    if(toIsSet_) {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(to_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(traceNameIsSet_) {
        val[utility::conversions::to_string_t("trace_name")] = ModelBase::toJson(traceName_);
    }
    if(traceRatingIsSet_) {
        val[utility::conversions::to_string_t("trace_rating")] = ModelBase::toJson(traceRating_);
    }

    return val;
}

bool ListTracesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trace_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_rating"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceRating(refVal);
        }
    }
    return ok;
}

std::string ListTracesRequest::getTraceType() const
{
    return traceType_;
}

void ListTracesRequest::setTraceType(const std::string& value)
{
    traceType_ = value;
    traceTypeIsSet_ = true;
}

bool ListTracesRequest::traceTypeIsSet() const
{
    return traceTypeIsSet_;
}

void ListTracesRequest::unsettraceType()
{
    traceTypeIsSet_ = false;
}

int32_t ListTracesRequest::getLimit() const
{
    return limit_;
}

void ListTracesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTracesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTracesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListTracesRequest::getFrom() const
{
    return from_;
}

void ListTracesRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ListTracesRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ListTracesRequest::unsetfrom()
{
    fromIsSet_ = false;
}

std::string ListTracesRequest::getNext() const
{
    return next_;
}

void ListTracesRequest::setNext(const std::string& value)
{
    next_ = value;
    nextIsSet_ = true;
}

bool ListTracesRequest::nextIsSet() const
{
    return nextIsSet_;
}

void ListTracesRequest::unsetnext()
{
    nextIsSet_ = false;
}

int64_t ListTracesRequest::getTo() const
{
    return to_;
}

void ListTracesRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ListTracesRequest::toIsSet() const
{
    return toIsSet_;
}

void ListTracesRequest::unsetto()
{
    toIsSet_ = false;
}

std::string ListTracesRequest::getTrackerName() const
{
    return trackerName_;
}

void ListTracesRequest::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool ListTracesRequest::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void ListTracesRequest::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string ListTracesRequest::getServiceType() const
{
    return serviceType_;
}

void ListTracesRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListTracesRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListTracesRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListTracesRequest::getUser() const
{
    return user_;
}

void ListTracesRequest::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ListTracesRequest::userIsSet() const
{
    return userIsSet_;
}

void ListTracesRequest::unsetuser()
{
    userIsSet_ = false;
}

std::string ListTracesRequest::getResourceId() const
{
    return resourceId_;
}

void ListTracesRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListTracesRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListTracesRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListTracesRequest::getResourceName() const
{
    return resourceName_;
}

void ListTracesRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListTracesRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListTracesRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ListTracesRequest::getResourceType() const
{
    return resourceType_;
}

void ListTracesRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListTracesRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListTracesRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListTracesRequest::getTraceId() const
{
    return traceId_;
}

void ListTracesRequest::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListTracesRequest::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListTracesRequest::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ListTracesRequest::getTraceName() const
{
    return traceName_;
}

void ListTracesRequest::setTraceName(const std::string& value)
{
    traceName_ = value;
    traceNameIsSet_ = true;
}

bool ListTracesRequest::traceNameIsSet() const
{
    return traceNameIsSet_;
}

void ListTracesRequest::unsettraceName()
{
    traceNameIsSet_ = false;
}

std::string ListTracesRequest::getTraceRating() const
{
    return traceRating_;
}

void ListTracesRequest::setTraceRating(const std::string& value)
{
    traceRating_ = value;
    traceRatingIsSet_ = true;
}

bool ListTracesRequest::traceRatingIsSet() const
{
    return traceRatingIsSet_;
}

void ListTracesRequest::unsettraceRating()
{
    traceRatingIsSet_ = false;
}

}
}
}
}
}


