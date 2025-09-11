

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionReservedInstancesCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionReservedInstancesCountResponse::UpdateFunctionReservedInstancesCountResponse()
{
    count_ = 0;
    countIsSet_ = false;
    idleMode_ = false;
    idleModeIsSet_ = false;
    tacticsConfigIsSet_ = false;
}

UpdateFunctionReservedInstancesCountResponse::~UpdateFunctionReservedInstancesCountResponse() = default;

void UpdateFunctionReservedInstancesCountResponse::validate()
{
}

web::json::value UpdateFunctionReservedInstancesCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(idleModeIsSet_) {
        val[utility::conversions::to_string_t("idle_mode")] = ModelBase::toJson(idleMode_);
    }
    if(tacticsConfigIsSet_) {
        val[utility::conversions::to_string_t("tactics_config")] = ModelBase::toJson(tacticsConfig_);
    }

    return val;
}
bool UpdateFunctionReservedInstancesCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idle_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idle_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdleMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tactics_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tactics_config"));
        if(!fieldValue.is_null())
        {
            TacticsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTacticsConfig(refVal);
        }
    }
    return ok;
}


int32_t UpdateFunctionReservedInstancesCountResponse::getCount() const
{
    return count_;
}

void UpdateFunctionReservedInstancesCountResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountResponse::countIsSet() const
{
    return countIsSet_;
}

void UpdateFunctionReservedInstancesCountResponse::unsetcount()
{
    countIsSet_ = false;
}

bool UpdateFunctionReservedInstancesCountResponse::isIdleMode() const
{
    return idleMode_;
}

void UpdateFunctionReservedInstancesCountResponse::setIdleMode(bool value)
{
    idleMode_ = value;
    idleModeIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountResponse::idleModeIsSet() const
{
    return idleModeIsSet_;
}

void UpdateFunctionReservedInstancesCountResponse::unsetidleMode()
{
    idleModeIsSet_ = false;
}

TacticsConfig UpdateFunctionReservedInstancesCountResponse::getTacticsConfig() const
{
    return tacticsConfig_;
}

void UpdateFunctionReservedInstancesCountResponse::setTacticsConfig(const TacticsConfig& value)
{
    tacticsConfig_ = value;
    tacticsConfigIsSet_ = true;
}

bool UpdateFunctionReservedInstancesCountResponse::tacticsConfigIsSet() const
{
    return tacticsConfigIsSet_;
}

void UpdateFunctionReservedInstancesCountResponse::unsettacticsConfig()
{
    tacticsConfigIsSet_ = false;
}

}
}
}
}
}


