

#include "huaweicloud/cdn/v2/model/ListExportTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListExportTasksRequest::ListExportTasksRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

ListExportTasksRequest::~ListExportTasksRequest() = default;

void ListExportTasksRequest::validate()
{
}

web::json::value ListExportTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool ListExportTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    return ok;
}


int32_t ListExportTasksRequest::getLimit() const
{
    return limit_;
}

void ListExportTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListExportTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListExportTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListExportTasksRequest::getOffset() const
{
    return offset_;
}

void ListExportTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListExportTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListExportTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListExportTasksRequest::getTaskId() const
{
    return taskId_;
}

void ListExportTasksRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListExportTasksRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListExportTasksRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListExportTasksRequest::getTaskName() const
{
    return taskName_;
}

void ListExportTasksRequest::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListExportTasksRequest::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListExportTasksRequest::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


