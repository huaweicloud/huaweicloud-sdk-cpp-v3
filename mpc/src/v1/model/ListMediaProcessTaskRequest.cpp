

#include "huaweicloud/mpc/v1/model/ListMediaProcessTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListMediaProcessTaskRequest::ListMediaProcessTaskRequest()
{
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListMediaProcessTaskRequest::~ListMediaProcessTaskRequest() = default;

void ListMediaProcessTaskRequest::validate()
{
}

web::json::value ListMediaProcessTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
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
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListMediaProcessTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListMediaProcessTaskRequest::getTaskId()
{
    return taskId_;
}

void ListMediaProcessTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListMediaProcessTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListMediaProcessTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListMediaProcessTaskRequest::getStatus() const
{
    return status_;
}

void ListMediaProcessTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMediaProcessTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListMediaProcessTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListMediaProcessTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListMediaProcessTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListMediaProcessTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListMediaProcessTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListMediaProcessTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListMediaProcessTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListMediaProcessTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListMediaProcessTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListMediaProcessTaskRequest::getPage() const
{
    return page_;
}

void ListMediaProcessTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListMediaProcessTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListMediaProcessTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListMediaProcessTaskRequest::getSize() const
{
    return size_;
}

void ListMediaProcessTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListMediaProcessTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListMediaProcessTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


