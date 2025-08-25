

#include "huaweicloud/cce/v3/model/UpgradePlanStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradePlanStatus::UpgradePlanStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
}

UpgradePlanStatus::~UpgradePlanStatus() = default;

void UpgradePlanStatus::validate()
{
}

web::json::value UpgradePlanStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool UpgradePlanStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    return ok;
}


std::string UpgradePlanStatus::getPhase() const
{
    return phase_;
}

void UpgradePlanStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool UpgradePlanStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void UpgradePlanStatus::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


