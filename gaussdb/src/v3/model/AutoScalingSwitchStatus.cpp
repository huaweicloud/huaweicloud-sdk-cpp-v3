

#include "huaweicloud/gaussdb/v3/model/AutoScalingSwitchStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AutoScalingSwitchStatus::AutoScalingSwitchStatus()
{
    scalingSwitch_ = "";
    scalingSwitchIsSet_ = false;
    flavorSwitch_ = "";
    flavorSwitchIsSet_ = false;
    readOnlySwitch_ = "";
    readOnlySwitchIsSet_ = false;
}

AutoScalingSwitchStatus::~AutoScalingSwitchStatus() = default;

void AutoScalingSwitchStatus::validate()
{
}

web::json::value AutoScalingSwitchStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scalingSwitchIsSet_) {
        val[utility::conversions::to_string_t("scaling_switch")] = ModelBase::toJson(scalingSwitch_);
    }
    if(flavorSwitchIsSet_) {
        val[utility::conversions::to_string_t("flavor_switch")] = ModelBase::toJson(flavorSwitch_);
    }
    if(readOnlySwitchIsSet_) {
        val[utility::conversions::to_string_t("read_only_switch")] = ModelBase::toJson(readOnlySwitch_);
    }

    return val;
}
bool AutoScalingSwitchStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scaling_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaling_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalingSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlySwitch(refVal);
        }
    }
    return ok;
}


std::string AutoScalingSwitchStatus::getScalingSwitch() const
{
    return scalingSwitch_;
}

void AutoScalingSwitchStatus::setScalingSwitch(const std::string& value)
{
    scalingSwitch_ = value;
    scalingSwitchIsSet_ = true;
}

bool AutoScalingSwitchStatus::scalingSwitchIsSet() const
{
    return scalingSwitchIsSet_;
}

void AutoScalingSwitchStatus::unsetscalingSwitch()
{
    scalingSwitchIsSet_ = false;
}

std::string AutoScalingSwitchStatus::getFlavorSwitch() const
{
    return flavorSwitch_;
}

void AutoScalingSwitchStatus::setFlavorSwitch(const std::string& value)
{
    flavorSwitch_ = value;
    flavorSwitchIsSet_ = true;
}

bool AutoScalingSwitchStatus::flavorSwitchIsSet() const
{
    return flavorSwitchIsSet_;
}

void AutoScalingSwitchStatus::unsetflavorSwitch()
{
    flavorSwitchIsSet_ = false;
}

std::string AutoScalingSwitchStatus::getReadOnlySwitch() const
{
    return readOnlySwitch_;
}

void AutoScalingSwitchStatus::setReadOnlySwitch(const std::string& value)
{
    readOnlySwitch_ = value;
    readOnlySwitchIsSet_ = true;
}

bool AutoScalingSwitchStatus::readOnlySwitchIsSet() const
{
    return readOnlySwitchIsSet_;
}

void AutoScalingSwitchStatus::unsetreadOnlySwitch()
{
    readOnlySwitchIsSet_ = false;
}

}
}
}
}
}


