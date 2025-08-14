

#include "huaweicloud/iotda/v5/model/ShowBatchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowBatchTaskRequest::ShowBatchTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskDetailStatus_ = "";
    taskDetailStatusIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowBatchTaskRequest::~ShowBatchTaskRequest() = default;

void ShowBatchTaskRequest::validate()
{
}

web::json::value ShowBatchTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskDetailStatusIsSet_) {
        val[utility::conversions::to_string_t("task_detail_status")] = ModelBase::toJson(taskDetailStatus_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
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
bool ShowBatchTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_detail_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_detail_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDetailStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
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


std::string ShowBatchTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBatchTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBatchTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBatchTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowBatchTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowBatchTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowBatchTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowBatchTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowBatchTaskRequest::getTaskDetailStatus() const
{
    return taskDetailStatus_;
}

void ShowBatchTaskRequest::setTaskDetailStatus(const std::string& value)
{
    taskDetailStatus_ = value;
    taskDetailStatusIsSet_ = true;
}

bool ShowBatchTaskRequest::taskDetailStatusIsSet() const
{
    return taskDetailStatusIsSet_;
}

void ShowBatchTaskRequest::unsettaskDetailStatus()
{
    taskDetailStatusIsSet_ = false;
}

std::string ShowBatchTaskRequest::getTarget() const
{
    return target_;
}

void ShowBatchTaskRequest::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool ShowBatchTaskRequest::targetIsSet() const
{
    return targetIsSet_;
}

void ShowBatchTaskRequest::unsettarget()
{
    targetIsSet_ = false;
}

int32_t ShowBatchTaskRequest::getLimit() const
{
    return limit_;
}

void ShowBatchTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowBatchTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowBatchTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowBatchTaskRequest::getMarker() const
{
    return marker_;
}

void ShowBatchTaskRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowBatchTaskRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowBatchTaskRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowBatchTaskRequest::getOffset() const
{
    return offset_;
}

void ShowBatchTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowBatchTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowBatchTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


