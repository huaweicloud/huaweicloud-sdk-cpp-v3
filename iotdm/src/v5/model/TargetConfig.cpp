

#include "huaweicloud/iotdm/v5/model/TargetConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




TargetConfig::TargetConfig()
{
    flavorIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

TargetConfig::~TargetConfig() = default;

void TargetConfig::validate()
{
}

web::json::value TargetConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}
bool TargetConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}


Flavor TargetConfig::getFlavor() const
{
    return flavor_;
}

void TargetConfig::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool TargetConfig::flavorIsSet() const
{
    return flavorIsSet_;
}

void TargetConfig::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string TargetConfig::getChargeMode() const
{
    return chargeMode_;
}

void TargetConfig::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool TargetConfig::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void TargetConfig::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


