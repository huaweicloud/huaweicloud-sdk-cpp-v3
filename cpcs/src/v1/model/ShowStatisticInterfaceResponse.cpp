

#include "huaweicloud/cpcs/v1/model/ShowStatisticInterfaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticInterfaceResponse::ShowStatisticInterfaceResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    metricsIsSet_ = false;
}

ShowStatisticInterfaceResponse::~ShowStatisticInterfaceResponse() = default;

void ShowStatisticInterfaceResponse::validate()
{
}

web::json::value ShowStatisticInterfaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool ShowStatisticInterfaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatisticInterfaceResponseBody_metrics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::string ShowStatisticInterfaceResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatisticInterfaceResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatisticInterfaceResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatisticInterfaceResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowStatisticInterfaceResponseBody_metrics>& ShowStatisticInterfaceResponse::getMetrics()
{
    return metrics_;
}

void ShowStatisticInterfaceResponse::setMetrics(const std::vector<ShowStatisticInterfaceResponseBody_metrics>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool ShowStatisticInterfaceResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void ShowStatisticInterfaceResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


