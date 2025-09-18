

#include "huaweicloud/projectman/v4/model/MetricRequest3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequest3::MetricRequest3()
{
    dateRange_ = "";
    dateRangeIsSet_ = false;
    metricType_ = "";
    metricTypeIsSet_ = false;
    sprintId_ = "";
    sprintIdIsSet_ = false;
    dividendIsSet_ = false;
    divisorIsSet_ = false;
}

MetricRequest3::~MetricRequest3() = default;

void MetricRequest3::validate()
{
}

web::json::value MetricRequest3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateRangeIsSet_) {
        val[utility::conversions::to_string_t("date_range")] = ModelBase::toJson(dateRange_);
    }
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
bool MetricRequest3::fromJson(const web::json::value& val)
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
            MetricRequest3_dividend refVal;
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


std::string MetricRequest3::getDateRange() const
{
    return dateRange_;
}

void MetricRequest3::setDateRange(const std::string& value)
{
    dateRange_ = value;
    dateRangeIsSet_ = true;
}

bool MetricRequest3::dateRangeIsSet() const
{
    return dateRangeIsSet_;
}

void MetricRequest3::unsetdateRange()
{
    dateRangeIsSet_ = false;
}

std::string MetricRequest3::getMetricType() const
{
    return metricType_;
}

void MetricRequest3::setMetricType(const std::string& value)
{
    metricType_ = value;
    metricTypeIsSet_ = true;
}

bool MetricRequest3::metricTypeIsSet() const
{
    return metricTypeIsSet_;
}

void MetricRequest3::unsetmetricType()
{
    metricTypeIsSet_ = false;
}

std::string MetricRequest3::getSprintId() const
{
    return sprintId_;
}

void MetricRequest3::setSprintId(const std::string& value)
{
    sprintId_ = value;
    sprintIdIsSet_ = true;
}

bool MetricRequest3::sprintIdIsSet() const
{
    return sprintIdIsSet_;
}

void MetricRequest3::unsetsprintId()
{
    sprintIdIsSet_ = false;
}

MetricRequest3_dividend MetricRequest3::getDividend() const
{
    return dividend_;
}

void MetricRequest3::setDividend(const MetricRequest3_dividend& value)
{
    dividend_ = value;
    dividendIsSet_ = true;
}

bool MetricRequest3::dividendIsSet() const
{
    return dividendIsSet_;
}

void MetricRequest3::unsetdividend()
{
    dividendIsSet_ = false;
}

Object MetricRequest3::getDivisor() const
{
    return divisor_;
}

void MetricRequest3::setDivisor(const Object& value)
{
    divisor_ = value;
    divisorIsSet_ = true;
}

bool MetricRequest3::divisorIsSet() const
{
    return divisorIsSet_;
}

void MetricRequest3::unsetdivisor()
{
    divisorIsSet_ = false;
}

}
}
}
}
}


