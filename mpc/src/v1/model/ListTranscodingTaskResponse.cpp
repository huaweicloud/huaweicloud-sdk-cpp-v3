

#include "huaweicloud/mpc/v1/model/ListTranscodingTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTranscodingTaskResponse::ListTranscodingTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTranscodingTaskResponse::~ListTranscodingTaskResponse() = default;

void ListTranscodingTaskResponse::validate()
{
}

web::json::value ListTranscodingTaskResponse::toJson() const
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

bool ListTranscodingTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryTranscodingsTaskResponse> refVal;
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


std::vector<QueryTranscodingsTaskResponse>& ListTranscodingTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListTranscodingTaskResponse::setTaskArray(const std::vector<QueryTranscodingsTaskResponse>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListTranscodingTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListTranscodingTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListTranscodingTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListTranscodingTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListTranscodingTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListTranscodingTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListTranscodingTaskResponse::getTotal() const
{
    return total_;
}

void ListTranscodingTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTranscodingTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTranscodingTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


