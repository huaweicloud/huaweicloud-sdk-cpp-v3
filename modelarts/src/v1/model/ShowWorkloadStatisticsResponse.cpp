

#include "huaweicloud/modelarts/v1/model/ShowWorkloadStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkloadStatisticsResponse::ShowWorkloadStatisticsResponse()
{
    statisticsIsSet_ = false;
}

ShowWorkloadStatisticsResponse::~ShowWorkloadStatisticsResponse() = default;

void ShowWorkloadStatisticsResponse::validate()
{
}

web::json::value ShowWorkloadStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ShowWorkloadStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            WorkloadListStatistics_statistics refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


WorkloadListStatistics_statistics ShowWorkloadStatisticsResponse::getStatistics() const
{
    return statistics_;
}

void ShowWorkloadStatisticsResponse::setStatistics(const WorkloadListStatistics_statistics& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowWorkloadStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowWorkloadStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


