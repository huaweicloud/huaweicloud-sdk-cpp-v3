

#include "huaweicloud/projectman/v4/model/MetricRequestV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequestV2::MetricRequestV2()
{
    dateRange_ = "";
    dateRangeIsSet_ = false;
    metricType_ = "";
    metricTypeIsSet_ = false;
    dividendIsSet_ = false;
    divisorIsSet_ = false;
}

MetricRequestV2::~MetricRequestV2() = default;

void MetricRequestV2::validate()
{
}

web::json::value MetricRequestV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateRangeIsSet_) {
        val[utility::conversions::to_string_t("date_range")] = ModelBase::toJson(dateRange_);
    }
    if(metricTypeIsSet_) {
        val[utility::conversions::to_string_t("metric_type")] = ModelBase::toJson(metricType_);
    }
    if(dividendIsSet_) {
        val[utility::conversions::to_string_t("dividend")] = ModelBase::toJson(dividend_);
    }
    if(divisorIsSet_) {
        val[utility::conversions::to_string_t("divisor")] = ModelBase::toJson(divisor_);
    }

    return val;
}
bool MetricRequestV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dividend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dividend"));
        if(!fieldValue.is_null())
        {
            MetricRequestV2_dividend refVal;
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


std::string MetricRequestV2::getDateRange() const
{
    return dateRange_;
}

void MetricRequestV2::setDateRange(const std::string& value)
{
    dateRange_ = value;
    dateRangeIsSet_ = true;
}

bool MetricRequestV2::dateRangeIsSet() const
{
    return dateRangeIsSet_;
}

void MetricRequestV2::unsetdateRange()
{
    dateRangeIsSet_ = false;
}

std::string MetricRequestV2::getMetricType() const
{
    return metricType_;
}

void MetricRequestV2::setMetricType(const std::string& value)
{
    metricType_ = value;
    metricTypeIsSet_ = true;
}

bool MetricRequestV2::metricTypeIsSet() const
{
    return metricTypeIsSet_;
}

void MetricRequestV2::unsetmetricType()
{
    metricTypeIsSet_ = false;
}

MetricRequestV2_dividend MetricRequestV2::getDividend() const
{
    return dividend_;
}

void MetricRequestV2::setDividend(const MetricRequestV2_dividend& value)
{
    dividend_ = value;
    dividendIsSet_ = true;
}

bool MetricRequestV2::dividendIsSet() const
{
    return dividendIsSet_;
}

void MetricRequestV2::unsetdividend()
{
    dividendIsSet_ = false;
}

Object MetricRequestV2::getDivisor() const
{
    return divisor_;
}

void MetricRequestV2::setDivisor(const Object& value)
{
    divisor_ = value;
    divisorIsSet_ = true;
}

bool MetricRequestV2::divisorIsSet() const
{
    return divisorIsSet_;
}

void MetricRequestV2::unsetdivisor()
{
    divisorIsSet_ = false;
}

}
}
}
}
}


