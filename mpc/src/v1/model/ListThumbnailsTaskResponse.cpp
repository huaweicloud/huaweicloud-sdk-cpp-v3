

#include "huaweicloud/mpc/v1/model/ListThumbnailsTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListThumbnailsTaskResponse::ListThumbnailsTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListThumbnailsTaskResponse::~ListThumbnailsTaskResponse() = default;

void ListThumbnailsTaskResponse::validate()
{
}

web::json::value ListThumbnailsTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskArrayIsSet_) {
        val[utility::conversions::to_string_t("task_array")] = ModelBase::toJson(taskArray_);
    }
    if(isTruncatedIsSet_) {
        val[utility::conversions::to_string_t("is_truncated")] = ModelBase::toJson(isTruncated_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListThumbnailsTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<ThumbTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskArray(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_truncated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTruncated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ThumbTask>& ListThumbnailsTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListThumbnailsTaskResponse::setTaskArray(const std::vector<ThumbTask>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListThumbnailsTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListThumbnailsTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListThumbnailsTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListThumbnailsTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListThumbnailsTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListThumbnailsTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListThumbnailsTaskResponse::getTotal() const
{
    return total_;
}

void ListThumbnailsTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListThumbnailsTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListThumbnailsTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


