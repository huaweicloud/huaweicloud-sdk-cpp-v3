

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionStatisticsResponse::ListSessionStatisticsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    statisticsIsSet_ = false;
}

ListSessionStatisticsResponse::~ListSessionStatisticsResponse() = default;

void ListSessionStatisticsResponse::validate()
{
}

web::json::value ListSessionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ListSessionStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<DimensionListResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


int32_t ListSessionStatisticsResponse::getTotal() const
{
    return total_;
}

void ListSessionStatisticsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSessionStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSessionStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DimensionListResult>& ListSessionStatisticsResponse::getStatistics()
{
    return statistics_;
}

void ListSessionStatisticsResponse::setStatistics(const std::vector<DimensionListResult>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ListSessionStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ListSessionStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


