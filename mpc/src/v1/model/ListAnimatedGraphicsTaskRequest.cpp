

#include "huaweicloud/mpc/v1/model/ListAnimatedGraphicsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListAnimatedGraphicsTaskRequest::ListAnimatedGraphicsTaskRequest()
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

ListAnimatedGraphicsTaskRequest::~ListAnimatedGraphicsTaskRequest() = default;

void ListAnimatedGraphicsTaskRequest::validate()
{
}

web::json::value ListAnimatedGraphicsTaskRequest::toJson() const
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

bool ListAnimatedGraphicsTaskRequest::fromJson(const web::json::value& val)
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


std::string ListAnimatedGraphicsTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAnimatedGraphicsTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::vector<std::string>& ListAnimatedGraphicsTaskRequest::getTaskId()
{
    return taskId_;
}

void ListAnimatedGraphicsTaskRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListAnimatedGraphicsTaskRequest::getStatus() const
{
    return status_;
}

void ListAnimatedGraphicsTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAnimatedGraphicsTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListAnimatedGraphicsTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAnimatedGraphicsTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListAnimatedGraphicsTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListAnimatedGraphicsTaskRequest::getPage() const
{
    return page_;
}

void ListAnimatedGraphicsTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAnimatedGraphicsTaskRequest::getSize() const
{
    return size_;
}

void ListAnimatedGraphicsTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAnimatedGraphicsTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAnimatedGraphicsTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


