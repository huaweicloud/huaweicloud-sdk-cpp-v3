

#include "huaweicloud/mpc/v1/model/ListMergeChannelsTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListMergeChannelsTaskResponse::ListMergeChannelsTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListMergeChannelsTaskResponse::~ListMergeChannelsTaskResponse() = default;

void ListMergeChannelsTaskResponse::validate()
{
}

web::json::value ListMergeChannelsTaskResponse::toJson() const
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
bool ListMergeChannelsTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeChannelsTaskInfo> refVal;
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


std::vector<MergeChannelsTaskInfo>& ListMergeChannelsTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListMergeChannelsTaskResponse::setTaskArray(const std::vector<MergeChannelsTaskInfo>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListMergeChannelsTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListMergeChannelsTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListMergeChannelsTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListMergeChannelsTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListMergeChannelsTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListMergeChannelsTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListMergeChannelsTaskResponse::getTotal() const
{
    return total_;
}

void ListMergeChannelsTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListMergeChannelsTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListMergeChannelsTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


