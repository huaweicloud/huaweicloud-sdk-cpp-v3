

#include "huaweicloud/mpc/v1/model/ListRemuxTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListRemuxTaskRequest::ListRemuxTaskRequest()
{
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    inputBucket_ = "";
    inputBucketIsSet_ = false;
    inputObject_ = "";
    inputObjectIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListRemuxTaskRequest::~ListRemuxTaskRequest() = default;

void ListRemuxTaskRequest::validate()
{
}

web::json::value ListRemuxTaskRequest::toJson() const
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
    if(inputBucketIsSet_) {
        val[utility::conversions::to_string_t("input_bucket")] = ModelBase::toJson(inputBucket_);
    }
    if(inputObjectIsSet_) {
        val[utility::conversions::to_string_t("input_object")] = ModelBase::toJson(inputObject_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ListRemuxTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("input_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputObject(refVal);
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


std::vector<std::string>& ListRemuxTaskRequest::getTaskId()
{
    return taskId_;
}

void ListRemuxTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListRemuxTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListRemuxTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListRemuxTaskRequest::getStatus() const
{
    return status_;
}

void ListRemuxTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRemuxTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListRemuxTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListRemuxTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListRemuxTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRemuxTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRemuxTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRemuxTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListRemuxTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRemuxTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRemuxTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListRemuxTaskRequest::getInputBucket() const
{
    return inputBucket_;
}

void ListRemuxTaskRequest::setInputBucket(const std::string& value)
{
    inputBucket_ = value;
    inputBucketIsSet_ = true;
}

bool ListRemuxTaskRequest::inputBucketIsSet() const
{
    return inputBucketIsSet_;
}

void ListRemuxTaskRequest::unsetinputBucket()
{
    inputBucketIsSet_ = false;
}

std::string ListRemuxTaskRequest::getInputObject() const
{
    return inputObject_;
}

void ListRemuxTaskRequest::setInputObject(const std::string& value)
{
    inputObject_ = value;
    inputObjectIsSet_ = true;
}

bool ListRemuxTaskRequest::inputObjectIsSet() const
{
    return inputObjectIsSet_;
}

void ListRemuxTaskRequest::unsetinputObject()
{
    inputObjectIsSet_ = false;
}

int32_t ListRemuxTaskRequest::getPage() const
{
    return page_;
}

void ListRemuxTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListRemuxTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListRemuxTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListRemuxTaskRequest::getSize() const
{
    return size_;
}

void ListRemuxTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListRemuxTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListRemuxTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


