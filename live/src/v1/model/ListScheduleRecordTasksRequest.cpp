

#include "huaweicloud/live/v1/model/ListScheduleRecordTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListScheduleRecordTasksRequest::ListScheduleRecordTasksRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduleRecordTasksRequest::~ListScheduleRecordTasksRequest() = default;

void ListScheduleRecordTasksRequest::validate()
{
}

web::json::value ListScheduleRecordTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListScheduleRecordTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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


int64_t ListScheduleRecordTasksRequest::getStartTime() const
{
    return startTime_;
}

void ListScheduleRecordTasksRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListScheduleRecordTasksRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListScheduleRecordTasksRequest::getEndTime() const
{
    return endTime_;
}

void ListScheduleRecordTasksRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListScheduleRecordTasksRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListScheduleRecordTasksRequest::getDomain() const
{
    return domain_;
}

void ListScheduleRecordTasksRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListScheduleRecordTasksRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListScheduleRecordTasksRequest::getApp() const
{
    return app_;
}

void ListScheduleRecordTasksRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::appIsSet() const
{
    return appIsSet_;
}

void ListScheduleRecordTasksRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListScheduleRecordTasksRequest::getStream() const
{
    return stream_;
}

void ListScheduleRecordTasksRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListScheduleRecordTasksRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListScheduleRecordTasksRequest::getTaskId() const
{
    return taskId_;
}

void ListScheduleRecordTasksRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListScheduleRecordTasksRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListScheduleRecordTasksRequest::getOffset() const
{
    return offset_;
}

void ListScheduleRecordTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleRecordTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduleRecordTasksRequest::getLimit() const
{
    return limit_;
}

void ListScheduleRecordTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleRecordTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleRecordTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


