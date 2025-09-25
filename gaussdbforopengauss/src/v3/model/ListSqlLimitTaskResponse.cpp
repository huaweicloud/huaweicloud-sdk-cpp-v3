

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlLimitTaskResponse::ListSqlLimitTaskResponse()
{
    limitTaskListIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSqlLimitTaskResponse::~ListSqlLimitTaskResponse() = default;

void ListSqlLimitTaskResponse::validate()
{
}

web::json::value ListSqlLimitTaskResponse::toJson() const
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
bool ListSqlLimitTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit_task_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_task_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSqlLimitTaskResponseResult> refVal;
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


std::vector<ListSqlLimitTaskResponseResult>& ListSqlLimitTaskResponse::getLimitTaskList()
{
    return limitTaskList_;
}

void ListSqlLimitTaskResponse::setLimitTaskList(const std::vector<ListSqlLimitTaskResponseResult>& value)
{
    limitTaskList_ = value;
    limitTaskListIsSet_ = true;
}

bool ListSqlLimitTaskResponse::limitTaskListIsSet() const
{
    return limitTaskListIsSet_;
}

void ListSqlLimitTaskResponse::unsetlimitTaskList()
{
    limitTaskListIsSet_ = false;
}

int32_t ListSqlLimitTaskResponse::getLimit() const
{
    return limit_;
}

void ListSqlLimitTaskResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlLimitTaskResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlLimitTaskResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSqlLimitTaskResponse::getOffset() const
{
    return offset_;
}

void ListSqlLimitTaskResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlLimitTaskResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlLimitTaskResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSqlLimitTaskResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSqlLimitTaskResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSqlLimitTaskResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSqlLimitTaskResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


