

#include "huaweicloud/dds/v3/model/DurationStrategies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DurationStrategies::DurationStrategies()
{
    strategy_ = "";
    strategyIsSet_ = false;
    estimatedUpgradeDuration_ = 0;
    estimatedUpgradeDurationIsSet_ = false;
}

DurationStrategies::~DurationStrategies() = default;

void DurationStrategies::validate()
{
}

web::json::value DurationStrategies::toJson() const
{
    web::json::value val = web::json::value::object();

    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(estimatedUpgradeDurationIsSet_) {
        val[utility::conversions::to_string_t("estimated_upgrade_duration")] = ModelBase::toJson(estimatedUpgradeDuration_);
    }

    return val;
}
bool DurationStrategies::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estimated_upgrade_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estimated_upgrade_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstimatedUpgradeDuration(refVal);
        }
    }
    return ok;
}


std::string DurationStrategies::getStrategy() const
{
    return strategy_;
}

void DurationStrategies::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool DurationStrategies::strategyIsSet() const
{
    return strategyIsSet_;
}

void DurationStrategies::unsetstrategy()
{
    strategyIsSet_ = false;
}

int32_t DurationStrategies::getEstimatedUpgradeDuration() const
{
    return estimatedUpgradeDuration_;
}

void DurationStrategies::setEstimatedUpgradeDuration(int32_t value)
{
    estimatedUpgradeDuration_ = value;
    estimatedUpgradeDurationIsSet_ = true;
}

bool DurationStrategies::estimatedUpgradeDurationIsSet() const
{
    return estimatedUpgradeDurationIsSet_;
}

void DurationStrategies::unsetestimatedUpgradeDuration()
{
    estimatedUpgradeDurationIsSet_ = false;
}

}
}
}
}
}


