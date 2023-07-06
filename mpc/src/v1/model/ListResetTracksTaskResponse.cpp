

#include "huaweicloud/mpc/v1/model/ListResetTracksTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListResetTracksTaskResponse::ListResetTracksTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListResetTracksTaskResponse::~ListResetTracksTaskResponse() = default;

void ListResetTracksTaskResponse::validate()
{
}

web::json::value ListResetTracksTaskResponse::toJson() const
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

bool ListResetTracksTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<ResetTracksTaskInfo> refVal;
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

std::vector<ResetTracksTaskInfo>& ListResetTracksTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListResetTracksTaskResponse::setTaskArray(const std::vector<ResetTracksTaskInfo>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListResetTracksTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListResetTracksTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListResetTracksTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListResetTracksTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListResetTracksTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListResetTracksTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListResetTracksTaskResponse::getTotal() const
{
    return total_;
}

void ListResetTracksTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListResetTracksTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListResetTracksTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


