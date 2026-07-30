

#include "huaweicloud/modelarts/v1/model/PoolMonitor_metric.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMonitor_metric::PoolMonitor_metric()
{
    dimensionsIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
}

PoolMonitor_metric::~PoolMonitor_metric() = default;

void PoolMonitor_metric::validate()
{
}

web::json::value PoolMonitor_metric::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dimensionsIsSet_) {
        val[utility::conversions::to_string_t("dimensions")] = ModelBase::toJson(dimensions_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metricName")] = ModelBase::toJson(metricName_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }

    return val;
}
bool PoolMonitor_metric::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dimensions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dimensions"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolMonitor_metric_dimensions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDimensions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metricName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metricName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    return ok;
}


std::vector<PoolMonitor_metric_dimensions>& PoolMonitor_metric::getDimensions()
{
    return dimensions_;
}

void PoolMonitor_metric::setDimensions(const std::vector<PoolMonitor_metric_dimensions>& value)
{
    dimensions_ = value;
    dimensionsIsSet_ = true;
}

bool PoolMonitor_metric::dimensionsIsSet() const
{
    return dimensionsIsSet_;
}

void PoolMonitor_metric::unsetdimensions()
{
    dimensionsIsSet_ = false;
}

std::string PoolMonitor_metric::getMetricName() const
{
    return metricName_;
}

void PoolMonitor_metric::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool PoolMonitor_metric::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void PoolMonitor_metric::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string PoolMonitor_metric::getNamespace() const
{
    return namespace_;
}

void PoolMonitor_metric::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool PoolMonitor_metric::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void PoolMonitor_metric::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


