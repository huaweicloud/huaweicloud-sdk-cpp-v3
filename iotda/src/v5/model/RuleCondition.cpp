

#include "huaweicloud/iotda/v5/model/RuleCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RuleCondition::RuleCondition()
{
    type_ = "";
    typeIsSet_ = false;
    devicePropertyConditionIsSet_ = false;
    simpleTimerConditionIsSet_ = false;
    dailyTimerConditionIsSet_ = false;
    deviceLinkageStatusConditionIsSet_ = false;
}

RuleCondition::~RuleCondition() = default;

void RuleCondition::validate()
{
}

web::json::value RuleCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(devicePropertyConditionIsSet_) {
        val[utility::conversions::to_string_t("device_property_condition")] = ModelBase::toJson(devicePropertyCondition_);
    }
    if(simpleTimerConditionIsSet_) {
        val[utility::conversions::to_string_t("simple_timer_condition")] = ModelBase::toJson(simpleTimerCondition_);
    }
    if(dailyTimerConditionIsSet_) {
        val[utility::conversions::to_string_t("daily_timer_condition")] = ModelBase::toJson(dailyTimerCondition_);
    }
    if(deviceLinkageStatusConditionIsSet_) {
        val[utility::conversions::to_string_t("device_linkage_status_condition")] = ModelBase::toJson(deviceLinkageStatusCondition_);
    }

    return val;
}
bool RuleCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_property_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_property_condition"));
        if(!fieldValue.is_null())
        {
            DeviceDataCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevicePropertyCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("simple_timer_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("simple_timer_condition"));
        if(!fieldValue.is_null())
        {
            SimpleTimerType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimpleTimerCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_timer_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_timer_condition"));
        if(!fieldValue.is_null())
        {
            DailyTimerType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyTimerCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_linkage_status_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_linkage_status_condition"));
        if(!fieldValue.is_null())
        {
            DeviceLinkageStatusCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceLinkageStatusCondition(refVal);
        }
    }
    return ok;
}


std::string RuleCondition::getType() const
{
    return type_;
}

void RuleCondition::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleCondition::typeIsSet() const
{
    return typeIsSet_;
}

void RuleCondition::unsettype()
{
    typeIsSet_ = false;
}

DeviceDataCondition RuleCondition::getDevicePropertyCondition() const
{
    return devicePropertyCondition_;
}

void RuleCondition::setDevicePropertyCondition(const DeviceDataCondition& value)
{
    devicePropertyCondition_ = value;
    devicePropertyConditionIsSet_ = true;
}

bool RuleCondition::devicePropertyConditionIsSet() const
{
    return devicePropertyConditionIsSet_;
}

void RuleCondition::unsetdevicePropertyCondition()
{
    devicePropertyConditionIsSet_ = false;
}

SimpleTimerType RuleCondition::getSimpleTimerCondition() const
{
    return simpleTimerCondition_;
}

void RuleCondition::setSimpleTimerCondition(const SimpleTimerType& value)
{
    simpleTimerCondition_ = value;
    simpleTimerConditionIsSet_ = true;
}

bool RuleCondition::simpleTimerConditionIsSet() const
{
    return simpleTimerConditionIsSet_;
}

void RuleCondition::unsetsimpleTimerCondition()
{
    simpleTimerConditionIsSet_ = false;
}

DailyTimerType RuleCondition::getDailyTimerCondition() const
{
    return dailyTimerCondition_;
}

void RuleCondition::setDailyTimerCondition(const DailyTimerType& value)
{
    dailyTimerCondition_ = value;
    dailyTimerConditionIsSet_ = true;
}

bool RuleCondition::dailyTimerConditionIsSet() const
{
    return dailyTimerConditionIsSet_;
}

void RuleCondition::unsetdailyTimerCondition()
{
    dailyTimerConditionIsSet_ = false;
}

DeviceLinkageStatusCondition RuleCondition::getDeviceLinkageStatusCondition() const
{
    return deviceLinkageStatusCondition_;
}

void RuleCondition::setDeviceLinkageStatusCondition(const DeviceLinkageStatusCondition& value)
{
    deviceLinkageStatusCondition_ = value;
    deviceLinkageStatusConditionIsSet_ = true;
}

bool RuleCondition::deviceLinkageStatusConditionIsSet() const
{
    return deviceLinkageStatusConditionIsSet_;
}

void RuleCondition::unsetdeviceLinkageStatusCondition()
{
    deviceLinkageStatusConditionIsSet_ = false;
}

}
}
}
}
}


