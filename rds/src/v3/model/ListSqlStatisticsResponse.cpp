

#include "huaweicloud/rds/v3/model/ListSqlStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlStatisticsResponse::ListSqlStatisticsResponse()
{
    resetViewLastTime_ = 0L;
    resetViewLastTimeIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    listIsSet_ = false;
}

ListSqlStatisticsResponse::~ListSqlStatisticsResponse() = default;

void ListSqlStatisticsResponse::validate()
{
}

web::json::value ListSqlStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resetViewLastTimeIsSet_) {
        val[utility::conversions::to_string_t("reset_view_last_time")] = ModelBase::toJson(resetViewLastTime_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool ListSqlStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reset_view_last_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_view_last_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetViewLastTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<Statistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int64_t ListSqlStatisticsResponse::getResetViewLastTime() const
{
    return resetViewLastTime_;
}

void ListSqlStatisticsResponse::setResetViewLastTime(int64_t value)
{
    resetViewLastTime_ = value;
    resetViewLastTimeIsSet_ = true;
}

bool ListSqlStatisticsResponse::resetViewLastTimeIsSet() const
{
    return resetViewLastTimeIsSet_;
}

void ListSqlStatisticsResponse::unsetresetViewLastTime()
{
    resetViewLastTimeIsSet_ = false;
}

int32_t ListSqlStatisticsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSqlStatisticsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSqlStatisticsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSqlStatisticsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Statistic>& ListSqlStatisticsResponse::getList()
{
    return list_;
}

void ListSqlStatisticsResponse::setList(const std::vector<Statistic>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListSqlStatisticsResponse::listIsSet() const
{
    return listIsSet_;
}

void ListSqlStatisticsResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


