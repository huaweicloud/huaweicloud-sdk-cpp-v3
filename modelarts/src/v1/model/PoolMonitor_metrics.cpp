

#include "huaweicloud/modelarts/v1/model/PoolMonitor_metrics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMonitor_metrics::PoolMonitor_metrics()
{
    metricIsSet_ = false;
    dataPointsIsSet_ = false;
}

PoolMonitor_metrics::~PoolMonitor_metrics() = default;

void PoolMonitor_metrics::validate()
{
}

web::json::value PoolMonitor_metrics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(dataPointsIsSet_) {
        val[utility::conversions::to_string_t("dataPoints")] = ModelBase::toJson(dataPoints_);
    }

    return val;
}
bool PoolMonitor_metrics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            PoolMonitor_metric refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataPoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataPoints"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolMonitor_dataPoints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataPoints(refVal);
        }
    }
    return ok;
}


PoolMonitor_metric PoolMonitor_metrics::getMetric() const
{
    return metric_;
}

void PoolMonitor_metrics::setMetric(const PoolMonitor_metric& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool PoolMonitor_metrics::metricIsSet() const
{
    return metricIsSet_;
}

void PoolMonitor_metrics::unsetmetric()
{
    metricIsSet_ = false;
}

std::vector<PoolMonitor_dataPoints>& PoolMonitor_metrics::getDataPoints()
{
    return dataPoints_;
}

void PoolMonitor_metrics::setDataPoints(const std::vector<PoolMonitor_dataPoints>& value)
{
    dataPoints_ = value;
    dataPointsIsSet_ = true;
}

bool PoolMonitor_metrics::dataPointsIsSet() const
{
    return dataPointsIsSet_;
}

void PoolMonitor_metrics::unsetdataPoints()
{
    dataPointsIsSet_ = false;
}

}
}
}
}
}


