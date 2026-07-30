

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobMetricsResponse::ShowTrainingJobMetricsResponse()
{
    metricsIsSet_ = false;
}

ShowTrainingJobMetricsResponse::~ShowTrainingJobMetricsResponse() = default;

void ShowTrainingJobMetricsResponse::validate()
{
}

web::json::value ShowTrainingJobMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool ShowTrainingJobMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::vector<MetricObject>& ShowTrainingJobMetricsResponse::getMetrics()
{
    return metrics_;
}

void ShowTrainingJobMetricsResponse::setMetrics(const std::vector<MetricObject>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool ShowTrainingJobMetricsResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void ShowTrainingJobMetricsResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


