

#include "huaweicloud/codeartscheck/v2/model/CheckRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRecordRequest::CheckRecordRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

CheckRecordRequest::~CheckRecordRequest() = default;

void CheckRecordRequest::validate()
{
}

web::json::value CheckRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool CheckRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


std::string CheckRecordRequest::getProjectId() const
{
    return projectId_;
}

void CheckRecordRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckRecordRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckRecordRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckRecordRequest::getTaskId() const
{
    return taskId_;
}

void CheckRecordRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CheckRecordRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CheckRecordRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t CheckRecordRequest::getOffset() const
{
    return offset_;
}

void CheckRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CheckRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void CheckRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t CheckRecordRequest::getLimit() const
{
    return limit_;
}

void CheckRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CheckRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void CheckRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string CheckRecordRequest::getStartTime() const
{
    return startTime_;
}

void CheckRecordRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CheckRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CheckRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CheckRecordRequest::getEndTime() const
{
    return endTime_;
}

void CheckRecordRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CheckRecordRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CheckRecordRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


