

#include "huaweicloud/functiongraph/v2/model/TacticsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TacticsConfig::TacticsConfig()
{
    cronConfigsIsSet_ = false;
    metricConfigsIsSet_ = false;
}

TacticsConfig::~TacticsConfig() = default;

void TacticsConfig::validate()
{
}

web::json::value TacticsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cronConfigsIsSet_) {
        val[utility::conversions::to_string_t("cron_configs")] = ModelBase::toJson(cronConfigs_);
    }
    if(metricConfigsIsSet_) {
        val[utility::conversions::to_string_t("metric_configs")] = ModelBase::toJson(metricConfigs_);
    }

    return val;
}
bool TacticsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cron_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cron_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<CronConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCronConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricConfigs(refVal);
        }
    }
    return ok;
}


std::vector<CronConfig>& TacticsConfig::getCronConfigs()
{
    return cronConfigs_;
}

void TacticsConfig::setCronConfigs(const std::vector<CronConfig>& value)
{
    cronConfigs_ = value;
    cronConfigsIsSet_ = true;
}

bool TacticsConfig::cronConfigsIsSet() const
{
    return cronConfigsIsSet_;
}

void TacticsConfig::unsetcronConfigs()
{
    cronConfigsIsSet_ = false;
}

std::vector<MetricConfig>& TacticsConfig::getMetricConfigs()
{
    return metricConfigs_;
}

void TacticsConfig::setMetricConfigs(const std::vector<MetricConfig>& value)
{
    metricConfigs_ = value;
    metricConfigsIsSet_ = true;
}

bool TacticsConfig::metricConfigsIsSet() const
{
    return metricConfigsIsSet_;
}

void TacticsConfig::unsetmetricConfigs()
{
    metricConfigsIsSet_ = false;
}

}
}
}
}
}


