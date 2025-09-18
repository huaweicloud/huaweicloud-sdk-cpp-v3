

#include "huaweicloud/projectman/v4/model/MetricRequest2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequest2::MetricRequest2()
{
    metricType_ = "";
    metricTypeIsSet_ = false;
    sprintId_ = "";
    sprintIdIsSet_ = false;
    dividendIsSet_ = false;
    divisorIsSet_ = false;
}

MetricRequest2::~MetricRequest2() = default;

void MetricRequest2::validate()
{
}

web::json::value MetricRequest2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricTypeIsSet_) {
        val[utility::conversions::to_string_t("metric_type")] = ModelBase::toJson(metricType_);
    }
    if(sprintIdIsSet_) {
        val[utility::conversions::to_string_t("sprint_id")] = ModelBase::toJson(sprintId_);
    }
    if(dividendIsSet_) {
        val[utility::conversions::to_string_t("dividend")] = ModelBase::toJson(dividend_);
    }
    if(divisorIsSet_) {
        val[utility::conversions::to_string_t("divisor")] = ModelBase::toJson(divisor_);
    }

    return val;
}
bool MetricRequest2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sprint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sprint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSprintId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dividend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dividend"));
        if(!fieldValue.is_null())
        {
            MetricRequest2_dividend refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDividend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("divisor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("divisor"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDivisor(refVal);
        }
    }
    return ok;
}


std::string MetricRequest2::getMetricType() const
{
    return metricType_;
}

void MetricRequest2::setMetricType(const std::string& value)
{
    metricType_ = value;
    metricTypeIsSet_ = true;
}

bool MetricRequest2::metricTypeIsSet() const
{
    return metricTypeIsSet_;
}

void MetricRequest2::unsetmetricType()
{
    metricTypeIsSet_ = false;
}

std::string MetricRequest2::getSprintId() const
{
    return sprintId_;
}

void MetricRequest2::setSprintId(const std::string& value)
{
    sprintId_ = value;
    sprintIdIsSet_ = true;
}

bool MetricRequest2::sprintIdIsSet() const
{
    return sprintIdIsSet_;
}

void MetricRequest2::unsetsprintId()
{
    sprintIdIsSet_ = false;
}

MetricRequest2_dividend MetricRequest2::getDividend() const
{
    return dividend_;
}

void MetricRequest2::setDividend(const MetricRequest2_dividend& value)
{
    dividend_ = value;
    dividendIsSet_ = true;
}

bool MetricRequest2::dividendIsSet() const
{
    return dividendIsSet_;
}

void MetricRequest2::unsetdividend()
{
    dividendIsSet_ = false;
}

Object MetricRequest2::getDivisor() const
{
    return divisor_;
}

void MetricRequest2::setDivisor(const Object& value)
{
    divisor_ = value;
    divisorIsSet_ = true;
}

bool MetricRequest2::divisorIsSet() const
{
    return divisorIsSet_;
}

void MetricRequest2::unsetdivisor()
{
    divisorIsSet_ = false;
}

}
}
}
}
}


