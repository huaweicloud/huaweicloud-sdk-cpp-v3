

#include "huaweicloud/gaussdbforopengauss/v3/model/MetricDataResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




MetricDataResult::MetricDataResult()
{
    metric_ = "";
    metricIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    datapointsIsSet_ = false;
    timestampsIsSet_ = false;
}

MetricDataResult::~MetricDataResult() = default;

void MetricDataResult::validate()
{
}

web::json::value MetricDataResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(datapointsIsSet_) {
        val[utility::conversions::to_string_t("datapoints")] = ModelBase::toJson(datapoints_);
    }
    if(timestampsIsSet_) {
        val[utility::conversions::to_string_t("timestamps")] = ModelBase::toJson(timestamps_);
    }

    return val;
}
bool MetricDataResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datapoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datapoints"));
        if(!fieldValue.is_null())
        {
            std::vector<DatapointResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatapoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamps(refVal);
        }
    }
    return ok;
}


std::string MetricDataResult::getMetric() const
{
    return metric_;
}

void MetricDataResult::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool MetricDataResult::metricIsSet() const
{
    return metricIsSet_;
}

void MetricDataResult::unsetmetric()
{
    metricIsSet_ = false;
}

std::string MetricDataResult::getType() const
{
    return type_;
}

void MetricDataResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MetricDataResult::typeIsSet() const
{
    return typeIsSet_;
}

void MetricDataResult::unsettype()
{
    typeIsSet_ = false;
}

std::string MetricDataResult::getUnit() const
{
    return unit_;
}

void MetricDataResult::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool MetricDataResult::unitIsSet() const
{
    return unitIsSet_;
}

void MetricDataResult::unsetunit()
{
    unitIsSet_ = false;
}

std::vector<DatapointResult>& MetricDataResult::getDatapoints()
{
    return datapoints_;
}

void MetricDataResult::setDatapoints(const std::vector<DatapointResult>& value)
{
    datapoints_ = value;
    datapointsIsSet_ = true;
}

bool MetricDataResult::datapointsIsSet() const
{
    return datapointsIsSet_;
}

void MetricDataResult::unsetdatapoints()
{
    datapointsIsSet_ = false;
}

std::vector<std::string>& MetricDataResult::getTimestamps()
{
    return timestamps_;
}

void MetricDataResult::setTimestamps(const std::vector<std::string>& value)
{
    timestamps_ = value;
    timestampsIsSet_ = true;
}

bool MetricDataResult::timestampsIsSet() const
{
    return timestampsIsSet_;
}

void MetricDataResult::unsettimestamps()
{
    timestampsIsSet_ = false;
}

}
}
}
}
}


