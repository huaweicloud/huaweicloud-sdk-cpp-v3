

#include "huaweicloud/modelarts/v1/model/MetricObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MetricObject::MetricObject()
{
    metric_ = "";
    metricIsSet_ = false;
    valueIsSet_ = false;
}

MetricObject::~MetricObject() = default;

void MetricObject::validate()
{
}

web::json::value MetricObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool MetricObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string MetricObject::getMetric() const
{
    return metric_;
}

void MetricObject::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool MetricObject::metricIsSet() const
{
    return metricIsSet_;
}

void MetricObject::unsetmetric()
{
    metricIsSet_ = false;
}

std::vector<double>& MetricObject::getValue()
{
    return value_;
}

void MetricObject::setValue(std::vector<double> value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MetricObject::valueIsSet() const
{
    return valueIsSet_;
}

void MetricObject::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


