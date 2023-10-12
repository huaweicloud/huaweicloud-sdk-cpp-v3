

#include "huaweicloud/mpc/v1/model/ListEncryptTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListEncryptTaskResponse::ListEncryptTaskResponse()
{
    taskArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListEncryptTaskResponse::~ListEncryptTaskResponse() = default;

void ListEncryptTaskResponse::validate()
{
}

web::json::value ListEncryptTaskResponse::toJson() const
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
bool ListEncryptTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<EachEncryptRsp> refVal;
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


std::vector<EachEncryptRsp>& ListEncryptTaskResponse::getTaskArray()
{
    return taskArray_;
}

void ListEncryptTaskResponse::setTaskArray(const std::vector<EachEncryptRsp>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListEncryptTaskResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListEncryptTaskResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListEncryptTaskResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ListEncryptTaskResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListEncryptTaskResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListEncryptTaskResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ListEncryptTaskResponse::getTotal() const
{
    return total_;
}

void ListEncryptTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListEncryptTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListEncryptTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


