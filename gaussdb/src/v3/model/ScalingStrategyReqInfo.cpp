

#include "huaweicloud/gaussdb/v3/model/ScalingStrategyReqInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScalingStrategyReqInfo::ScalingStrategyReqInfo()
{
    flavorSwitch_ = "";
    flavorSwitchIsSet_ = false;
    readOnlySwitch_ = "";
    readOnlySwitchIsSet_ = false;
}

ScalingStrategyReqInfo::~ScalingStrategyReqInfo() = default;

void ScalingStrategyReqInfo::validate()
{
}

web::json::value ScalingStrategyReqInfo::toJson() const
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
bool ScalingStrategyReqInfo::fromJson(const web::json::value& val)
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


std::string ScalingStrategyReqInfo::getFlavorSwitch() const
{
    return flavorSwitch_;
}

void ScalingStrategyReqInfo::setFlavorSwitch(const std::string& value)
{
    flavorSwitch_ = value;
    flavorSwitchIsSet_ = true;
}

bool ScalingStrategyReqInfo::flavorSwitchIsSet() const
{
    return flavorSwitchIsSet_;
}

void ScalingStrategyReqInfo::unsetflavorSwitch()
{
    flavorSwitchIsSet_ = false;
}

std::string ScalingStrategyReqInfo::getReadOnlySwitch() const
{
    return readOnlySwitch_;
}

void ScalingStrategyReqInfo::setReadOnlySwitch(const std::string& value)
{
    readOnlySwitch_ = value;
    readOnlySwitchIsSet_ = true;
}

bool ScalingStrategyReqInfo::readOnlySwitchIsSet() const
{
    return readOnlySwitchIsSet_;
}

void ScalingStrategyReqInfo::unsetreadOnlySwitch()
{
    readOnlySwitchIsSet_ = false;
}

}
}
}
}
}


