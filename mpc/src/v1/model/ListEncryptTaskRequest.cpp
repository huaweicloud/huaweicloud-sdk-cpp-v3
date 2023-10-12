

#include "huaweicloud/mpc/v1/model/ListEncryptTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListEncryptTaskRequest::ListEncryptTaskRequest()
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

ListEncryptTaskRequest::~ListEncryptTaskRequest() = default;

void ListEncryptTaskRequest::validate()
{
}

web::json::value ListEncryptTaskRequest::toJson() const
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
bool ListEncryptTaskRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListEncryptTaskRequest::getTaskId()
{
    return taskId_;
}

void ListEncryptTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListEncryptTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListEncryptTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListEncryptTaskRequest::getStatus() const
{
    return status_;
}

void ListEncryptTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEncryptTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEncryptTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListEncryptTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListEncryptTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListEncryptTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListEncryptTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListEncryptTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListEncryptTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListEncryptTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListEncryptTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListEncryptTaskRequest::getPage() const
{
    return page_;
}

void ListEncryptTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListEncryptTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListEncryptTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListEncryptTaskRequest::getSize() const
{
    return size_;
}

void ListEncryptTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListEncryptTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListEncryptTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


