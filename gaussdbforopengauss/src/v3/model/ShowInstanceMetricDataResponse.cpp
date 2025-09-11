

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceMetricDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceMetricDataResponse::ShowInstanceMetricDataResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    metricsIsSet_ = false;
}

ShowInstanceMetricDataResponse::~ShowInstanceMetricDataResponse() = default;

void ShowInstanceMetricDataResponse::validate()
{
}

web::json::value ShowInstanceMetricDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool ShowInstanceMetricDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricDataResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceMetricDataResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceMetricDataResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceMetricDataResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceMetricDataResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<MetricDataResult>& ShowInstanceMetricDataResponse::getMetrics()
{
    return metrics_;
}

void ShowInstanceMetricDataResponse::setMetrics(const std::vector<MetricDataResult>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool ShowInstanceMetricDataResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void ShowInstanceMetricDataResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


