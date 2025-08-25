

#include "huaweicloud/cce/v3/model/ClusterCheckStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterCheckStatus::ClusterCheckStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    itemsStatusIsSet_ = false;
}

ClusterCheckStatus::~ClusterCheckStatus() = default;

void ClusterCheckStatus::validate()
{
}

web::json::value ClusterCheckStatus::toJson() const
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
bool ClusterCheckStatus::fromJson(const web::json::value& val)
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


std::string ClusterCheckStatus::getPhase() const
{
    return phase_;
}

void ClusterCheckStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool ClusterCheckStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void ClusterCheckStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<PreCheckItemStatus>& ClusterCheckStatus::getItemsStatus()
{
    return itemsStatus_;
}

void ClusterCheckStatus::setItemsStatus(const std::vector<PreCheckItemStatus>& value)
{
    itemsStatus_ = value;
    itemsStatusIsSet_ = true;
}

bool ClusterCheckStatus::itemsStatusIsSet() const
{
    return itemsStatusIsSet_;
}

void ClusterCheckStatus::unsetitemsStatus()
{
    itemsStatusIsSet_ = false;
}

}
}
}
}
}


