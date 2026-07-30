

#include "huaweicloud/modelarts/v1/model/ShowPoolMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolMonitorResponse::ShowPoolMonitorResponse()
{
    metricsIsSet_ = false;
}

ShowPoolMonitorResponse::~ShowPoolMonitorResponse() = default;

void ShowPoolMonitorResponse::validate()
{
}

web::json::value ShowPoolMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool ShowPoolMonitorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolMonitor_metrics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::vector<PoolMonitor_metrics>& ShowPoolMonitorResponse::getMetrics()
{
    return metrics_;
}

void ShowPoolMonitorResponse::setMetrics(const std::vector<PoolMonitor_metrics>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool ShowPoolMonitorResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void ShowPoolMonitorResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


