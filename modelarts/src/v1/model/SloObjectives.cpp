

#include "huaweicloud/modelarts/v1/model/SloObjectives.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SloObjectives::SloObjectives()
{
    metricTtft_ = 0;
    metricTtftIsSet_ = false;
    metricTpot_ = 0;
    metricTpotIsSet_ = false;
    percental_ = 0;
    percentalIsSet_ = false;
}

SloObjectives::~SloObjectives() = default;

void SloObjectives::validate()
{
}

web::json::value SloObjectives::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricTtftIsSet_) {
        val[utility::conversions::to_string_t("metric_ttft")] = ModelBase::toJson(metricTtft_);
    }
    if(metricTpotIsSet_) {
        val[utility::conversions::to_string_t("metric_tpot")] = ModelBase::toJson(metricTpot_);
    }
    if(percentalIsSet_) {
        val[utility::conversions::to_string_t("percental")] = ModelBase::toJson(percental_);
    }

    return val;
}
bool SloObjectives::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_ttft"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_ttft"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricTtft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_tpot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_tpot"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricTpot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percental"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercental(refVal);
        }
    }
    return ok;
}


int32_t SloObjectives::getMetricTtft() const
{
    return metricTtft_;
}

void SloObjectives::setMetricTtft(int32_t value)
{
    metricTtft_ = value;
    metricTtftIsSet_ = true;
}

bool SloObjectives::metricTtftIsSet() const
{
    return metricTtftIsSet_;
}

void SloObjectives::unsetmetricTtft()
{
    metricTtftIsSet_ = false;
}

int32_t SloObjectives::getMetricTpot() const
{
    return metricTpot_;
}

void SloObjectives::setMetricTpot(int32_t value)
{
    metricTpot_ = value;
    metricTpotIsSet_ = true;
}

bool SloObjectives::metricTpotIsSet() const
{
    return metricTpotIsSet_;
}

void SloObjectives::unsetmetricTpot()
{
    metricTpotIsSet_ = false;
}

int32_t SloObjectives::getPercental() const
{
    return percental_;
}

void SloObjectives::setPercental(int32_t value)
{
    percental_ = value;
    percentalIsSet_ = true;
}

bool SloObjectives::percentalIsSet() const
{
    return percentalIsSet_;
}

void SloObjectives::unsetpercental()
{
    percentalIsSet_ = false;
}

}
}
}
}
}


