

#include "huaweicloud/mpc/v1/model/ListExtractTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListExtractTaskRequest::ListExtractTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
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

ListExtractTaskRequest::~ListExtractTaskRequest() = default;

void ListExtractTaskRequest::validate()
{
}

web::json::value ListExtractTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("x-language")] = ModelBase::toJson(xLanguage_);
    }
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
bool ListExtractTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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


std::string ListExtractTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListExtractTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListExtractTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListExtractTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::vector<std::string>& ListExtractTaskRequest::getTaskId()
{
    return taskId_;
}

void ListExtractTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListExtractTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListExtractTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListExtractTaskRequest::getStatus() const
{
    return status_;
}

void ListExtractTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListExtractTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListExtractTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListExtractTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListExtractTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListExtractTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListExtractTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListExtractTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListExtractTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListExtractTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListExtractTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListExtractTaskRequest::getPage() const
{
    return page_;
}

void ListExtractTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListExtractTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListExtractTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListExtractTaskRequest::getSize() const
{
    return size_;
}

void ListExtractTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListExtractTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListExtractTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


