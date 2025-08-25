

#include "huaweicloud/cce/v3/model/AddonCheckStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonCheckStatus::AddonCheckStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    itemsStatusIsSet_ = false;
}

AddonCheckStatus::~AddonCheckStatus() = default;

void AddonCheckStatus::validate()
{
}

web::json::value AddonCheckStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(itemsStatusIsSet_) {
        val[utility::conversions::to_string_t("itemsStatus")] = ModelBase::toJson(itemsStatus_);
    }

    return val;
}
bool AddonCheckStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("itemsStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("itemsStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<PreCheckItemStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemsStatus(refVal);
        }
    }
    return ok;
}


std::string AddonCheckStatus::getPhase() const
{
    return phase_;
}

void AddonCheckStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool AddonCheckStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void AddonCheckStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<PreCheckItemStatus>& AddonCheckStatus::getItemsStatus()
{
    return itemsStatus_;
}

void AddonCheckStatus::setItemsStatus(const std::vector<PreCheckItemStatus>& value)
{
    itemsStatus_ = value;
    itemsStatusIsSet_ = true;
}

bool AddonCheckStatus::itemsStatusIsSet() const
{
    return itemsStatusIsSet_;
}

void AddonCheckStatus::unsetitemsStatus()
{
    itemsStatusIsSet_ = false;
}

}
}
}
}
}


