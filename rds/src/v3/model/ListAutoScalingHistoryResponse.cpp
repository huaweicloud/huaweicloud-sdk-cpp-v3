

#include "huaweicloud/rds/v3/model/ListAutoScalingHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAutoScalingHistoryResponse::ListAutoScalingHistoryResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    recordsIsSet_ = false;
}

ListAutoScalingHistoryResponse::~ListAutoScalingHistoryResponse() = default;

void ListAutoScalingHistoryResponse::validate()
{
}

web::json::value ListAutoScalingHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool ListAutoScalingHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlAutoScalingRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t ListAutoScalingHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAutoScalingHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAutoScalingHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAutoScalingHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<MysqlAutoScalingRecord>& ListAutoScalingHistoryResponse::getRecords()
{
    return records_;
}

void ListAutoScalingHistoryResponse::setRecords(const std::vector<MysqlAutoScalingRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListAutoScalingHistoryResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListAutoScalingHistoryResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


