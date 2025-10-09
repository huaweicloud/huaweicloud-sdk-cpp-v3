

#include "huaweicloud/gaussdb/v3/model/MetricCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MetricCondition::MetricCondition()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    metricValue_ = 0;
    metricValueIsSet_ = false;
    compareMode_ = "";
    compareModeIsSet_ = false;
}

MetricCondition::~MetricCondition() = default;

void MetricCondition::validate()
{
}

web::json::value MetricCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(metricValueIsSet_) {
        val[utility::conversions::to_string_t("metric_value")] = ModelBase::toJson(metricValue_);
    }
    if(compareModeIsSet_) {
        val[utility::conversions::to_string_t("compare_mode")] = ModelBase::toJson(compareMode_);
    }

    return val;
}
bool MetricCondition::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metric_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareMode(refVal);
        }
    }
    return ok;
}


std::string MetricCondition::getMetricName() const
{
    return metricName_;
}

void MetricCondition::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool MetricCondition::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void MetricCondition::unsetmetricName()
{
    metricNameIsSet_ = false;
}

int32_t MetricCondition::getMetricValue() const
{
    return metricValue_;
}

void MetricCondition::setMetricValue(int32_t value)
{
    metricValue_ = value;
    metricValueIsSet_ = true;
}

bool MetricCondition::metricValueIsSet() const
{
    return metricValueIsSet_;
}

void MetricCondition::unsetmetricValue()
{
    metricValueIsSet_ = false;
}

std::string MetricCondition::getCompareMode() const
{
    return compareMode_;
}

void MetricCondition::setCompareMode(const std::string& value)
{
    compareMode_ = value;
    compareModeIsSet_ = true;
}

bool MetricCondition::compareModeIsSet() const
{
    return compareModeIsSet_;
}

void MetricCondition::unsetcompareMode()
{
    compareModeIsSet_ = false;
}

}
}
}
}
}


