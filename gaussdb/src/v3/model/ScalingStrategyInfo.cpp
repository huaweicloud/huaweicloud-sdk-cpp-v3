

#include "huaweicloud/gaussdb/v3/model/ScalingStrategyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScalingStrategyInfo::ScalingStrategyInfo()
{
    flavorSwitch_ = "";
    flavorSwitchIsSet_ = false;
    readOnlySwitch_ = "";
    readOnlySwitchIsSet_ = false;
}

ScalingStrategyInfo::~ScalingStrategyInfo() = default;

void ScalingStrategyInfo::validate()
{
}

web::json::value ScalingStrategyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorSwitchIsSet_) {
        val[utility::conversions::to_string_t("flavor_switch")] = ModelBase::toJson(flavorSwitch_);
    }
    if(readOnlySwitchIsSet_) {
        val[utility::conversions::to_string_t("read_only_switch")] = ModelBase::toJson(readOnlySwitch_);
    }

    return val;
}
bool ScalingStrategyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ScalingStrategyInfo::getFlavorSwitch() const
{
    return flavorSwitch_;
}

void ScalingStrategyInfo::setFlavorSwitch(const std::string& value)
{
    flavorSwitch_ = value;
    flavorSwitchIsSet_ = true;
}

bool ScalingStrategyInfo::flavorSwitchIsSet() const
{
    return flavorSwitchIsSet_;
}

void ScalingStrategyInfo::unsetflavorSwitch()
{
    flavorSwitchIsSet_ = false;
}

std::string ScalingStrategyInfo::getReadOnlySwitch() const
{
    return readOnlySwitch_;
}

void ScalingStrategyInfo::setReadOnlySwitch(const std::string& value)
{
    readOnlySwitch_ = value;
    readOnlySwitchIsSet_ = true;
}

bool ScalingStrategyInfo::readOnlySwitchIsSet() const
{
    return readOnlySwitchIsSet_;
}

void ScalingStrategyInfo::unsetreadOnlySwitch()
{
    readOnlySwitchIsSet_ = false;
}

}
}
}
}
}


