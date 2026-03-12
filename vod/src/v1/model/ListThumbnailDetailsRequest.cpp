

#include "huaweicloud/vod/v1/model/ListThumbnailDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListThumbnailDetailsRequest::ListThumbnailDetailsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListThumbnailDetailsRequest::~ListThumbnailDetailsRequest() = default;

void ListThumbnailDetailsRequest::validate()
{
}

web::json::value ListThumbnailDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListThumbnailDetailsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListThumbnailDetailsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListThumbnailDetailsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListThumbnailDetailsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListThumbnailDetailsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListThumbnailDetailsRequest::getTaskId() const
{
    return taskId_;
}

void ListThumbnailDetailsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListThumbnailDetailsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListThumbnailDetailsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListThumbnailDetailsRequest::getOffset() const
{
    return offset_;
}

void ListThumbnailDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListThumbnailDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListThumbnailDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListThumbnailDetailsRequest::getLimit() const
{
    return limit_;
}

void ListThumbnailDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListThumbnailDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListThumbnailDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


