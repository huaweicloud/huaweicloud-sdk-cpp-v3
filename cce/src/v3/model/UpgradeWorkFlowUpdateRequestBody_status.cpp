

#include "huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequestBody_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeWorkFlowUpdateRequestBody_status::UpgradeWorkFlowUpdateRequestBody_status()
{
    phaseIsSet_ = false;
}

UpgradeWorkFlowUpdateRequestBody_status::~UpgradeWorkFlowUpdateRequestBody_status() = default;

void UpgradeWorkFlowUpdateRequestBody_status::validate()
{
}

web::json::value UpgradeWorkFlowUpdateRequestBody_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool UpgradeWorkFlowUpdateRequestBody_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            WorkFlowPhase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    return ok;
}


WorkFlowPhase UpgradeWorkFlowUpdateRequestBody_status::getPhase() const
{
    return phase_;
}

void UpgradeWorkFlowUpdateRequestBody_status::setPhase(const WorkFlowPhase& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool UpgradeWorkFlowUpdateRequestBody_status::phaseIsSet() const
{
    return phaseIsSet_;
}

void UpgradeWorkFlowUpdateRequestBody_status::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


