

#include "huaweicloud/vod/v1/model/ShowTakeOverTaskDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTakeOverTaskDetailsRequest::ShowTakeOverTaskDetailsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ShowTakeOverTaskDetailsRequest::~ShowTakeOverTaskDetailsRequest() = default;

void ShowTakeOverTaskDetailsRequest::validate()
{
}

web::json::value ShowTakeOverTaskDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
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

bool ShowTakeOverTaskDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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


std::string ShowTakeOverTaskDetailsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTakeOverTaskDetailsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTakeOverTaskDetailsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTakeOverTaskDetailsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTakeOverTaskDetailsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTakeOverTaskDetailsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTakeOverTaskDetailsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTakeOverTaskDetailsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ShowTakeOverTaskDetailsRequest::getPage() const
{
    return page_;
}

void ShowTakeOverTaskDetailsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowTakeOverTaskDetailsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ShowTakeOverTaskDetailsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ShowTakeOverTaskDetailsRequest::getSize() const
{
    return size_;
}

void ShowTakeOverTaskDetailsRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowTakeOverTaskDetailsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowTakeOverTaskDetailsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


