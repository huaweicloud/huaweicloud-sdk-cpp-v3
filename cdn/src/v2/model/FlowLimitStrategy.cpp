

#include "huaweicloud/cdn/v2/model/FlowLimitStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




FlowLimitStrategy::FlowLimitStrategy()
{
    strategyType_ = "";
    strategyTypeIsSet_ = false;
    itemType_ = "";
    itemTypeIsSet_ = false;
    limitValue_ = "";
    limitValueIsSet_ = false;
    alarmPercentThreshold_ = "";
    alarmPercentThresholdIsSet_ = false;
    banTime_ = "";
    banTimeIsSet_ = false;
}

FlowLimitStrategy::~FlowLimitStrategy() = default;

void FlowLimitStrategy::validate()
{
}

web::json::value FlowLimitStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(strategyTypeIsSet_) {
        val[utility::conversions::to_string_t("strategy_type")] = ModelBase::toJson(strategyType_);
    }
    if(itemTypeIsSet_) {
        val[utility::conversions::to_string_t("item_type")] = ModelBase::toJson(itemType_);
    }
    if(limitValueIsSet_) {
        val[utility::conversions::to_string_t("limit_value")] = ModelBase::toJson(limitValue_);
    }
    if(alarmPercentThresholdIsSet_) {
        val[utility::conversions::to_string_t("alarm_percent_threshold")] = ModelBase::toJson(alarmPercentThreshold_);
    }
    if(banTimeIsSet_) {
        val[utility::conversions::to_string_t("ban_time")] = ModelBase::toJson(banTime_);
    }

    return val;
}
bool FlowLimitStrategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("strategy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_percent_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_percent_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmPercentThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ban_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ban_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBanTime(refVal);
        }
    }
    return ok;
}


std::string FlowLimitStrategy::getStrategyType() const
{
    return strategyType_;
}

void FlowLimitStrategy::setStrategyType(const std::string& value)
{
    strategyType_ = value;
    strategyTypeIsSet_ = true;
}

bool FlowLimitStrategy::strategyTypeIsSet() const
{
    return strategyTypeIsSet_;
}

void FlowLimitStrategy::unsetstrategyType()
{
    strategyTypeIsSet_ = false;
}

std::string FlowLimitStrategy::getItemType() const
{
    return itemType_;
}

void FlowLimitStrategy::setItemType(const std::string& value)
{
    itemType_ = value;
    itemTypeIsSet_ = true;
}

bool FlowLimitStrategy::itemTypeIsSet() const
{
    return itemTypeIsSet_;
}

void FlowLimitStrategy::unsetitemType()
{
    itemTypeIsSet_ = false;
}

std::string FlowLimitStrategy::getLimitValue() const
{
    return limitValue_;
}

void FlowLimitStrategy::setLimitValue(const std::string& value)
{
    limitValue_ = value;
    limitValueIsSet_ = true;
}

bool FlowLimitStrategy::limitValueIsSet() const
{
    return limitValueIsSet_;
}

void FlowLimitStrategy::unsetlimitValue()
{
    limitValueIsSet_ = false;
}

std::string FlowLimitStrategy::getAlarmPercentThreshold() const
{
    return alarmPercentThreshold_;
}

void FlowLimitStrategy::setAlarmPercentThreshold(const std::string& value)
{
    alarmPercentThreshold_ = value;
    alarmPercentThresholdIsSet_ = true;
}

bool FlowLimitStrategy::alarmPercentThresholdIsSet() const
{
    return alarmPercentThresholdIsSet_;
}

void FlowLimitStrategy::unsetalarmPercentThreshold()
{
    alarmPercentThresholdIsSet_ = false;
}

std::string FlowLimitStrategy::getBanTime() const
{
    return banTime_;
}

void FlowLimitStrategy::setBanTime(const std::string& value)
{
    banTime_ = value;
    banTimeIsSet_ = true;
}

bool FlowLimitStrategy::banTimeIsSet() const
{
    return banTimeIsSet_;
}

void FlowLimitStrategy::unsetbanTime()
{
    banTimeIsSet_ = false;
}

}
}
}
}
}


