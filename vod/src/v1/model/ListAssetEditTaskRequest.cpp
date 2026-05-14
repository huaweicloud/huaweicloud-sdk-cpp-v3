

#include "huaweicloud/vod/v1/model/ListAssetEditTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetEditTaskRequest::ListAssetEditTaskRequest()
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

ListAssetEditTaskRequest::~ListAssetEditTaskRequest() = default;

void ListAssetEditTaskRequest::validate()
{
}

web::json::value ListAssetEditTaskRequest::toJson() const
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
bool ListAssetEditTaskRequest::fromJson(const web::json::value& val)
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


std::string ListAssetEditTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetEditTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetEditTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetEditTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAssetEditTaskRequest::getTaskId() const
{
    return taskId_;
}

void ListAssetEditTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListAssetEditTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListAssetEditTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListAssetEditTaskRequest::getOffset() const
{
    return offset_;
}

void ListAssetEditTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssetEditTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssetEditTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAssetEditTaskRequest::getLimit() const
{
    return limit_;
}

void ListAssetEditTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetEditTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetEditTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


