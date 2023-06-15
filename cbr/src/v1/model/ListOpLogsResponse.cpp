

#include "huaweicloud/cbr/v1/model/ListOpLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOpLogsResponse::ListOpLogsResponse()
{
    operationLogsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOpLogsResponse::~ListOpLogsResponse() = default;

void ListOpLogsResponse::validate()
{
}

web::json::value ListOpLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationLogsIsSet_) {
        val[utility::conversions::to_string_t("operation_logs")] = ModelBase::toJson(operationLogs_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListOpLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<OperationLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    return ok;
}


std::vector<OperationLog>& ListOpLogsResponse::getOperationLogs()
{
    return operationLogs_;
}

void ListOpLogsResponse::setOperationLogs(const std::vector<OperationLog>& value)
{
    operationLogs_ = value;
    operationLogsIsSet_ = true;
}

bool ListOpLogsResponse::operationLogsIsSet() const
{
    return operationLogsIsSet_;
}

void ListOpLogsResponse::unsetoperationLogs()
{
    operationLogsIsSet_ = false;
}

int32_t ListOpLogsResponse::getCount() const
{
    return count_;
}

void ListOpLogsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListOpLogsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListOpLogsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListOpLogsResponse::getLimit() const
{
    return limit_;
}

void ListOpLogsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOpLogsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListOpLogsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOpLogsResponse::getOffset() const
{
    return offset_;
}

void ListOpLogsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOpLogsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOpLogsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


