

#include "huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListLimitTaskResponse::ListLimitTaskResponse()
{
    limitTaskListIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListLimitTaskResponse::~ListLimitTaskResponse() = default;

void ListLimitTaskResponse::validate()
{
}

web::json::value ListLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitTaskListIsSet_) {
        val[utility::conversions::to_string_t("limit_task_list")] = ModelBase::toJson(limitTaskList_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListLimitTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit_task_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_task_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListLimitTaskResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitTaskList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListLimitTaskResponseResult>& ListLimitTaskResponse::getLimitTaskList()
{
    return limitTaskList_;
}

void ListLimitTaskResponse::setLimitTaskList(const std::vector<ListLimitTaskResponseResult>& value)
{
    limitTaskList_ = value;
    limitTaskListIsSet_ = true;
}

bool ListLimitTaskResponse::limitTaskListIsSet() const
{
    return limitTaskListIsSet_;
}

void ListLimitTaskResponse::unsetlimitTaskList()
{
    limitTaskListIsSet_ = false;
}

int32_t ListLimitTaskResponse::getLimit() const
{
    return limit_;
}

void ListLimitTaskResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLimitTaskResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListLimitTaskResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListLimitTaskResponse::getOffset() const
{
    return offset_;
}

void ListLimitTaskResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLimitTaskResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLimitTaskResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLimitTaskResponse::getTotalCount() const
{
    return totalCount_;
}

void ListLimitTaskResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListLimitTaskResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListLimitTaskResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


