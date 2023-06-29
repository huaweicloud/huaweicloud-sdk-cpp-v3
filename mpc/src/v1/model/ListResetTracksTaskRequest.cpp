

#include "huaweicloud/mpc/v1/model/ListResetTracksTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListResetTracksTaskRequest::ListResetTracksTaskRequest()
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

ListResetTracksTaskRequest::~ListResetTracksTaskRequest() = default;

void ListResetTracksTaskRequest::validate()
{
}

web::json::value ListResetTracksTaskRequest::toJson() const
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

bool ListResetTracksTaskRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListResetTracksTaskRequest::getTaskId()
{
    return taskId_;
}

void ListResetTracksTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListResetTracksTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListResetTracksTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListResetTracksTaskRequest::getStatus() const
{
    return status_;
}

void ListResetTracksTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListResetTracksTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListResetTracksTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListResetTracksTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListResetTracksTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListResetTracksTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListResetTracksTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListResetTracksTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListResetTracksTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListResetTracksTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListResetTracksTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListResetTracksTaskRequest::getPage() const
{
    return page_;
}

void ListResetTracksTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListResetTracksTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListResetTracksTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListResetTracksTaskRequest::getSize() const
{
    return size_;
}

void ListResetTracksTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListResetTracksTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListResetTracksTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


