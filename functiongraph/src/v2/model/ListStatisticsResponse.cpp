

#include "huaweicloud/functiongraph/v2/model/ListStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListStatisticsResponse::ListStatisticsResponse()
{
    countIsSet_ = false;
    gbsIsSet_ = false;
    gpuGbsIsSet_ = false;
    statisticsIsSet_ = false;
}

ListStatisticsResponse::~ListStatisticsResponse() = default;

void ListStatisticsResponse::validate()
{
}

web::json::value ListStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(gbsIsSet_) {
        val[utility::conversions::to_string_t("gbs")] = ModelBase::toJson(gbs_);
    }
    if(gpuGbsIsSet_) {
        val[utility::conversions::to_string_t("gpu_gbs")] = ModelBase::toJson(gpuGbs_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ListStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::vector<MonthUsed> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gbs"));
        if(!fieldValue.is_null())
        {
            std::vector<MonthUsed> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_gbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_gbs"));
        if(!fieldValue.is_null())
        {
            std::vector<MonthUsed> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuGbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            ListFunctionStatisticsResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


std::vector<MonthUsed>& ListStatisticsResponse::getCount()
{
    return count_;
}

void ListStatisticsResponse::setCount(const std::vector<MonthUsed>& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListStatisticsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListStatisticsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<MonthUsed>& ListStatisticsResponse::getGbs()
{
    return gbs_;
}

void ListStatisticsResponse::setGbs(const std::vector<MonthUsed>& value)
{
    gbs_ = value;
    gbsIsSet_ = true;
}

bool ListStatisticsResponse::gbsIsSet() const
{
    return gbsIsSet_;
}

void ListStatisticsResponse::unsetgbs()
{
    gbsIsSet_ = false;
}

std::vector<MonthUsed>& ListStatisticsResponse::getGpuGbs()
{
    return gpuGbs_;
}

void ListStatisticsResponse::setGpuGbs(const std::vector<MonthUsed>& value)
{
    gpuGbs_ = value;
    gpuGbsIsSet_ = true;
}

bool ListStatisticsResponse::gpuGbsIsSet() const
{
    return gpuGbsIsSet_;
}

void ListStatisticsResponse::unsetgpuGbs()
{
    gpuGbsIsSet_ = false;
}

ListFunctionStatisticsResponseBody ListStatisticsResponse::getStatistics() const
{
    return statistics_;
}

void ListStatisticsResponse::setStatistics(const ListFunctionStatisticsResponseBody& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ListStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ListStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


