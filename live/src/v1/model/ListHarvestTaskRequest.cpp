

#include "huaweicloud/live/v1/model/ListHarvestTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListHarvestTaskRequest::ListHarvestTaskRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
    eventName_ = "";
    eventNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListHarvestTaskRequest::~ListHarvestTaskRequest() = default;

void ListHarvestTaskRequest::validate()
{
}

web::json::value ListHarvestTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAllowInternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Internal")] = ModelBase::toJson(accessControlAllowInternal_);
    }
    if(accessControlAllowExternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-External")] = ModelBase::toJson(accessControlAllowExternal_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListHarvestTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Internal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Internal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowInternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-External"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-External"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowExternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
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
    return ok;
}


std::string ListHarvestTaskRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ListHarvestTaskRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ListHarvestTaskRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ListHarvestTaskRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ListHarvestTaskRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ListHarvestTaskRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ListHarvestTaskRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ListHarvestTaskRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

std::string ListHarvestTaskRequest::getDomain() const
{
    return domain_;
}

void ListHarvestTaskRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListHarvestTaskRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListHarvestTaskRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListHarvestTaskRequest::getAppName() const
{
    return appName_;
}

void ListHarvestTaskRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ListHarvestTaskRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ListHarvestTaskRequest::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ListHarvestTaskRequest::getId() const
{
    return id_;
}

void ListHarvestTaskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListHarvestTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void ListHarvestTaskRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListHarvestTaskRequest::getJobId() const
{
    return jobId_;
}

void ListHarvestTaskRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListHarvestTaskRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListHarvestTaskRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListHarvestTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListHarvestTaskRequest::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHarvestTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHarvestTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ListHarvestTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListHarvestTaskRequest::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHarvestTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHarvestTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListHarvestTaskRequest::getEventName() const
{
    return eventName_;
}

void ListHarvestTaskRequest::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool ListHarvestTaskRequest::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void ListHarvestTaskRequest::unseteventName()
{
    eventNameIsSet_ = false;
}

int32_t ListHarvestTaskRequest::getLimit() const
{
    return limit_;
}

void ListHarvestTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHarvestTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHarvestTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHarvestTaskRequest::getOffset() const
{
    return offset_;
}

void ListHarvestTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHarvestTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHarvestTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


