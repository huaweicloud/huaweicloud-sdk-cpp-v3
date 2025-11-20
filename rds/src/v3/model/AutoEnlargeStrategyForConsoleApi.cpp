

#include "huaweicloud/rds/v3/model/AutoEnlargeStrategyForConsoleApi.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AutoEnlargeStrategyForConsoleApi::AutoEnlargeStrategyForConsoleApi()
{
    option_ = false;
    optionIsSet_ = false;
    limitSize_ = 0L;
    limitSizeIsSet_ = false;
    triggerAvailablePercent_ = 0L;
    triggerAvailablePercentIsSet_ = false;
    stepPercent_ = 0L;
    stepPercentIsSet_ = false;
}

AutoEnlargeStrategyForConsoleApi::~AutoEnlargeStrategyForConsoleApi() = default;

void AutoEnlargeStrategyForConsoleApi::validate()
{
}

web::json::value AutoEnlargeStrategyForConsoleApi::toJson() const
{
    web::json::value val = web::json::value::object();

    if(optionIsSet_) {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(option_);
    }
    if(limitSizeIsSet_) {
        val[utility::conversions::to_string_t("limitSize")] = ModelBase::toJson(limitSize_);
    }
    if(triggerAvailablePercentIsSet_) {
        val[utility::conversions::to_string_t("triggerAvailablePercent")] = ModelBase::toJson(triggerAvailablePercent_);
    }
    if(stepPercentIsSet_) {
        val[utility::conversions::to_string_t("stepPercent")] = ModelBase::toJson(stepPercent_);
    }

    return val;
}
bool AutoEnlargeStrategyForConsoleApi::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limitSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limitSize"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggerAvailablePercent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggerAvailablePercent"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAvailablePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stepPercent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stepPercent"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepPercent(refVal);
        }
    }
    return ok;
}


bool AutoEnlargeStrategyForConsoleApi::isOption() const
{
    return option_;
}

void AutoEnlargeStrategyForConsoleApi::setOption(bool value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool AutoEnlargeStrategyForConsoleApi::optionIsSet() const
{
    return optionIsSet_;
}

void AutoEnlargeStrategyForConsoleApi::unsetoption()
{
    optionIsSet_ = false;
}

int64_t AutoEnlargeStrategyForConsoleApi::getLimitSize() const
{
    return limitSize_;
}

void AutoEnlargeStrategyForConsoleApi::setLimitSize(int64_t value)
{
    limitSize_ = value;
    limitSizeIsSet_ = true;
}

bool AutoEnlargeStrategyForConsoleApi::limitSizeIsSet() const
{
    return limitSizeIsSet_;
}

void AutoEnlargeStrategyForConsoleApi::unsetlimitSize()
{
    limitSizeIsSet_ = false;
}

int64_t AutoEnlargeStrategyForConsoleApi::getTriggerAvailablePercent() const
{
    return triggerAvailablePercent_;
}

void AutoEnlargeStrategyForConsoleApi::setTriggerAvailablePercent(int64_t value)
{
    triggerAvailablePercent_ = value;
    triggerAvailablePercentIsSet_ = true;
}

bool AutoEnlargeStrategyForConsoleApi::triggerAvailablePercentIsSet() const
{
    return triggerAvailablePercentIsSet_;
}

void AutoEnlargeStrategyForConsoleApi::unsettriggerAvailablePercent()
{
    triggerAvailablePercentIsSet_ = false;
}

int64_t AutoEnlargeStrategyForConsoleApi::getStepPercent() const
{
    return stepPercent_;
}

void AutoEnlargeStrategyForConsoleApi::setStepPercent(int64_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool AutoEnlargeStrategyForConsoleApi::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void AutoEnlargeStrategyForConsoleApi::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


