

#include "huaweicloud/gaussdb/v3/model/ScalingCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScalingCondition::ScalingCondition()
{
    conditionId_ = "";
    conditionIdIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    metricConditionsIsSet_ = false;
}

ScalingCondition::~ScalingCondition() = default;

void ScalingCondition::validate()
{
}

web::json::value ScalingCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIdIsSet_) {
        val[utility::conversions::to_string_t("condition_id")] = ModelBase::toJson(conditionId_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(metricConditionsIsSet_) {
        val[utility::conversions::to_string_t("metric_conditions")] = ModelBase::toJson(metricConditions_);
    }

    return val;
}
bool ScalingCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricConditions(refVal);
        }
    }
    return ok;
}


std::string ScalingCondition::getConditionId() const
{
    return conditionId_;
}

void ScalingCondition::setConditionId(const std::string& value)
{
    conditionId_ = value;
    conditionIdIsSet_ = true;
}

bool ScalingCondition::conditionIdIsSet() const
{
    return conditionIdIsSet_;
}

void ScalingCondition::unsetconditionId()
{
    conditionIdIsSet_ = false;
}

int32_t ScalingCondition::getDuration() const
{
    return duration_;
}

void ScalingCondition::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ScalingCondition::durationIsSet() const
{
    return durationIsSet_;
}

void ScalingCondition::unsetduration()
{
    durationIsSet_ = false;
}

int32_t ScalingCondition::getInterval() const
{
    return interval_;
}

void ScalingCondition::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ScalingCondition::intervalIsSet() const
{
    return intervalIsSet_;
}

void ScalingCondition::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<MetricCondition>& ScalingCondition::getMetricConditions()
{
    return metricConditions_;
}

void ScalingCondition::setMetricConditions(const std::vector<MetricCondition>& value)
{
    metricConditions_ = value;
    metricConditionsIsSet_ = true;
}

bool ScalingCondition::metricConditionsIsSet() const
{
    return metricConditionsIsSet_;
}

void ScalingCondition::unsetmetricConditions()
{
    metricConditionsIsSet_ = false;
}

}
}
}
}
}


