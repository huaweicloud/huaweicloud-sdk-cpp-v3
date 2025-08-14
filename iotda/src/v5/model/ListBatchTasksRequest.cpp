

#include "huaweicloud/iotda/v5/model/ListBatchTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListBatchTasksRequest::ListBatchTasksRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListBatchTasksRequest::~ListBatchTasksRequest() = default;

void ListBatchTasksRequest::validate()
{
}

web::json::value ListBatchTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListBatchTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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


std::string ListBatchTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBatchTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBatchTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBatchTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBatchTasksRequest::getAppId() const
{
    return appId_;
}

void ListBatchTasksRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListBatchTasksRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListBatchTasksRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListBatchTasksRequest::getTaskType() const
{
    return taskType_;
}

void ListBatchTasksRequest::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ListBatchTasksRequest::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ListBatchTasksRequest::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ListBatchTasksRequest::getStatus() const
{
    return status_;
}

void ListBatchTasksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBatchTasksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListBatchTasksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListBatchTasksRequest::getLimit() const
{
    return limit_;
}

void ListBatchTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBatchTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBatchTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBatchTasksRequest::getMarker() const
{
    return marker_;
}

void ListBatchTasksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBatchTasksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBatchTasksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListBatchTasksRequest::getOffset() const
{
    return offset_;
}

void ListBatchTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBatchTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBatchTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


