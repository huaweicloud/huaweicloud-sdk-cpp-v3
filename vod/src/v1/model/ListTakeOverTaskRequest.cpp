

#include "huaweicloud/vod/v1/model/ListTakeOverTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTakeOverTaskRequest::ListTakeOverTaskRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListTakeOverTaskRequest::~ListTakeOverTaskRequest() = default;

void ListTakeOverTaskRequest::validate()
{
}

web::json::value ListTakeOverTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ListTakeOverTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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


std::string ListTakeOverTaskRequest::getAuthorization() const
{
    return authorization_;
}

void ListTakeOverTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTakeOverTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTakeOverTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTakeOverTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTakeOverTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTakeOverTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTakeOverTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTakeOverTaskRequest::getStatus() const
{
    return status_;
}

void ListTakeOverTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTakeOverTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTakeOverTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListTakeOverTaskRequest::getTaskId() const
{
    return taskId_;
}

void ListTakeOverTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTakeOverTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTakeOverTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListTakeOverTaskRequest::getPage() const
{
    return page_;
}

void ListTakeOverTaskRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListTakeOverTaskRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListTakeOverTaskRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListTakeOverTaskRequest::getSize() const
{
    return size_;
}

void ListTakeOverTaskRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListTakeOverTaskRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListTakeOverTaskRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


