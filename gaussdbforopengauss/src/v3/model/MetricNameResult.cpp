

#include "huaweicloud/gaussdbforopengauss/v3/model/MetricNameResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




MetricNameResult::MetricNameResult()
{
    metric_ = "";
    metricIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

MetricNameResult::~MetricNameResult() = default;

void MetricNameResult::validate()
{
}

web::json::value MetricNameResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool MetricNameResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string MetricNameResult::getMetric() const
{
    return metric_;
}

void MetricNameResult::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool MetricNameResult::metricIsSet() const
{
    return metricIsSet_;
}

void MetricNameResult::unsetmetric()
{
    metricIsSet_ = false;
}

std::string MetricNameResult::getName() const
{
    return name_;
}

void MetricNameResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MetricNameResult::nameIsSet() const
{
    return nameIsSet_;
}

void MetricNameResult::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


