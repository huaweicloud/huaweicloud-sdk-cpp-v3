

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEnhanceFullSqlStatisticsResponse::ListEnhanceFullSqlStatisticsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    statisticsIsSet_ = false;
}

ListEnhanceFullSqlStatisticsResponse::~ListEnhanceFullSqlStatisticsResponse() = default;

void ListEnhanceFullSqlStatisticsResponse::validate()
{
}

web::json::value ListEnhanceFullSqlStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ListEnhanceFullSqlStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<FullSqlStatisticInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


int64_t ListEnhanceFullSqlStatisticsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEnhanceFullSqlStatisticsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEnhanceFullSqlStatisticsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FullSqlStatisticInfoResult>& ListEnhanceFullSqlStatisticsResponse::getStatistics()
{
    return statistics_;
}

void ListEnhanceFullSqlStatisticsResponse::setStatistics(const std::vector<FullSqlStatisticInfoResult>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ListEnhanceFullSqlStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


