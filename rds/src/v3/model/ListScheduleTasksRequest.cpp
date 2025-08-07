

#include "huaweicloud/rds/v3/model/ListScheduleTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListScheduleTasksRequest::ListScheduleTasksRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListScheduleTasksRequest::~ListScheduleTasksRequest() = default;

void ListScheduleTasksRequest::validate()
{
}

web::json::value ListScheduleTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListScheduleTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


int32_t ListScheduleTasksRequest::getOffset() const
{
    return offset_;
}

void ListScheduleTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduleTasksRequest::getLimit() const
{
    return limit_;
}

void ListScheduleTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListScheduleTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListScheduleTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduleTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduleTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListScheduleTasksRequest::getInstanceName() const
{
    return instanceName_;
}

void ListScheduleTasksRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListScheduleTasksRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListScheduleTasksRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ListScheduleTasksRequest::getStatus() const
{
    return status_;
}

void ListScheduleTasksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListScheduleTasksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListScheduleTasksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListScheduleTasksRequest::getStartTime() const
{
    return startTime_;
}

void ListScheduleTasksRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListScheduleTasksRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListScheduleTasksRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListScheduleTasksRequest::getEndTime() const
{
    return endTime_;
}

void ListScheduleTasksRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListScheduleTasksRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListScheduleTasksRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


