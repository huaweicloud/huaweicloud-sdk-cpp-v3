

#include "huaweicloud/drs/v3/model/ShowMonitoringDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ShowMonitoringDataResponse::ShowMonitoringDataResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowMonitoringDataResponse::~ShowMonitoringDataResponse() = default;

void ShowMonitoringDataResponse::validate()
{
}

web::json::value ShowMonitoringDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowMonitoringDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDataGuardMonitorAndChartResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
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
    return ok;
}


std::vector<QueryDataGuardMonitorAndChartResp>& ShowMonitoringDataResponse::getResults()
{
    return results_;
}

void ShowMonitoringDataResponse::setResults(const std::vector<QueryDataGuardMonitorAndChartResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ShowMonitoringDataResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ShowMonitoringDataResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t ShowMonitoringDataResponse::getCount() const
{
    return count_;
}

void ShowMonitoringDataResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowMonitoringDataResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowMonitoringDataResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


