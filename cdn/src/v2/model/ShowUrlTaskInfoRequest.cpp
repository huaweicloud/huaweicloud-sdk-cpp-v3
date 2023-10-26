

#include "huaweicloud/cdn/v2/model/ShowUrlTaskInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowUrlTaskInfoRequest::ShowUrlTaskInfoRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

ShowUrlTaskInfoRequest::~ShowUrlTaskInfoRequest() = default;

void ShowUrlTaskInfoRequest::validate()
{
}

web::json::value ShowUrlTaskInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}
bool ShowUrlTaskInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}


int64_t ShowUrlTaskInfoRequest::getStartTime() const
{
    return startTime_;
}

void ShowUrlTaskInfoRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowUrlTaskInfoRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowUrlTaskInfoRequest::getEndTime() const
{
    return endTime_;
}

void ShowUrlTaskInfoRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowUrlTaskInfoRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowUrlTaskInfoRequest::getOffset() const
{
    return offset_;
}

void ShowUrlTaskInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowUrlTaskInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowUrlTaskInfoRequest::getLimit() const
{
    return limit_;
}

void ShowUrlTaskInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowUrlTaskInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowUrlTaskInfoRequest::getUrl() const
{
    return url_;
}

void ShowUrlTaskInfoRequest::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::urlIsSet() const
{
    return urlIsSet_;
}

void ShowUrlTaskInfoRequest::unseturl()
{
    urlIsSet_ = false;
}

std::string ShowUrlTaskInfoRequest::getTaskType() const
{
    return taskType_;
}

void ShowUrlTaskInfoRequest::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ShowUrlTaskInfoRequest::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ShowUrlTaskInfoRequest::getStatus() const
{
    return status_;
}

void ShowUrlTaskInfoRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUrlTaskInfoRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowUrlTaskInfoRequest::getFileType() const
{
    return fileType_;
}

void ShowUrlTaskInfoRequest::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowUrlTaskInfoRequest::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowUrlTaskInfoRequest::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


