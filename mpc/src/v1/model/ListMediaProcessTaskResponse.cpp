

#include "huaweicloud/mpc/v1/model/ListMediaProcessTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListMediaProcessTaskResponse::ListMediaProcessTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListMediaProcessTaskResponse::~ListMediaProcessTaskResponse() = default;

void ListMediaProcessTaskResponse::validate()
{
}

web::json::value ListMediaProcessTaskResponse::toJson() const
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

bool ListMediaProcessTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<MediaProcessTaskInfo> refVal;
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


std::vector<MediaProcessTaskInfo>& ListMediaProcessTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListMediaProcessTaskResponse::setTaskArray(const std::vector<MediaProcessTaskInfo>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListMediaProcessTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListMediaProcessTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListMediaProcessTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListMediaProcessTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListMediaProcessTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListMediaProcessTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListMediaProcessTaskResponse::getTotal() const
{
    return total_;
}

void ListMediaProcessTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListMediaProcessTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListMediaProcessTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


