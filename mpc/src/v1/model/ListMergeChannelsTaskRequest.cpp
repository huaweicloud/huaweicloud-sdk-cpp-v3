

#include "huaweicloud/mpc/v1/model/ListMergeChannelsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListMergeChannelsTaskRequest::ListMergeChannelsTaskRequest()
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

ListMergeChannelsTaskRequest::~ListMergeChannelsTaskRequest() = default;

void ListMergeChannelsTaskRequest::validate()
{
}

web::json::value ListMergeChannelsTaskRequest::toJson() const
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

bool ListMergeChannelsTaskRequest::fromJson(const web::json::value& val)
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

std::vector<std::string>& ListMergeChannelsTaskRequest::getTaskId()
{
    return taskId_;
}

void ListMergeChannelsTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListMergeChannelsTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListMergeChannelsTaskRequest::getStatus() const
{
    return status_;
}

void ListMergeChannelsTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListMergeChannelsTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListMergeChannelsTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListMergeChannelsTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListMergeChannelsTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListMergeChannelsTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListMergeChannelsTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListMergeChannelsTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListMergeChannelsTaskRequest::getPage() const
{
    return page_;
}

void ListMergeChannelsTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListMergeChannelsTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListMergeChannelsTaskRequest::getSize() const
{
    return size_;
}

void ListMergeChannelsTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListMergeChannelsTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListMergeChannelsTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


