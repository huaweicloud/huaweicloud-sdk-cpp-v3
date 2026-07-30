

#include "huaweicloud/modelarts/v1/model/PoolMonitor_statistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMonitor_statistics::PoolMonitor_statistics()
{
    statistic_ = "";
    statisticIsSet_ = false;
    value_ = 0.0f;
    valueIsSet_ = false;
}

PoolMonitor_statistics::~PoolMonitor_statistics() = default;

void PoolMonitor_statistics::validate()
{
}

web::json::value PoolMonitor_statistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statisticIsSet_) {
        val[utility::conversions::to_string_t("statistic")] = ModelBase::toJson(statistic_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool PoolMonitor_statistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("statistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string PoolMonitor_statistics::getStatistic() const
{
    return statistic_;
}

void PoolMonitor_statistics::setStatistic(const std::string& value)
{
    statistic_ = value;
    statisticIsSet_ = true;
}

bool PoolMonitor_statistics::statisticIsSet() const
{
    return statisticIsSet_;
}

void PoolMonitor_statistics::unsetstatistic()
{
    statisticIsSet_ = false;
}

float PoolMonitor_statistics::getValue() const
{
    return value_;
}

void PoolMonitor_statistics::setValue(float value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PoolMonitor_statistics::valueIsSet() const
{
    return valueIsSet_;
}

void PoolMonitor_statistics::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


