

#include "huaweicloud/live/v1/model/ListScheduleRecordTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListScheduleRecordTasksResponse::ListScheduleRecordTasksResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    tasksIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListScheduleRecordTasksResponse::~ListScheduleRecordTasksResponse() = default;

void ListScheduleRecordTasksResponse::validate()
{
}

web::json::value ListScheduleRecordTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListScheduleRecordTasksResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleRecordTasks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListScheduleRecordTasksResponse::getTotal() const
{
    return total_;
}

void ListScheduleRecordTasksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListScheduleRecordTasksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListScheduleRecordTasksResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListScheduleRecordTasksResponse::getOffset() const
{
    return offset_;
}

void ListScheduleRecordTasksResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleRecordTasksResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleRecordTasksResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduleRecordTasksResponse::getLimit() const
{
    return limit_;
}

void ListScheduleRecordTasksResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleRecordTasksResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleRecordTasksResponse::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<ScheduleRecordTasks>& ListScheduleRecordTasksResponse::getTasks()
{
    return tasks_;
}

void ListScheduleRecordTasksResponse::setTasks(const std::vector<ScheduleRecordTasks>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListScheduleRecordTasksResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListScheduleRecordTasksResponse::unsettasks()
{
    tasksIsSet_ = false;
}

std::string ListScheduleRecordTasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListScheduleRecordTasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListScheduleRecordTasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListScheduleRecordTasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


