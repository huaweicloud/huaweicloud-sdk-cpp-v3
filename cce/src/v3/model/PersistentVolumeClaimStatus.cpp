

#include "huaweicloud/cce/v3/model/PersistentVolumeClaimStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PersistentVolumeClaimStatus::PersistentVolumeClaimStatus()
{
    accessModesIsSet_ = false;
    capacity_ = "";
    capacityIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
}

PersistentVolumeClaimStatus::~PersistentVolumeClaimStatus() = default;

void PersistentVolumeClaimStatus::validate()
{
}

web::json::value PersistentVolumeClaimStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessModesIsSet_) {
        val[utility::conversions::to_string_t("accessModes")] = ModelBase::toJson(accessModes_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool PersistentVolumeClaimStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessModes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessModes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessModes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
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


std::vector<std::string>& PersistentVolumeClaimStatus::getAccessModes()
{
    return accessModes_;
}

void PersistentVolumeClaimStatus::setAccessModes(const std::vector<std::string>& value)
{
    accessModes_ = value;
    accessModesIsSet_ = true;
}

bool PersistentVolumeClaimStatus::accessModesIsSet() const
{
    return accessModesIsSet_;
}

void PersistentVolumeClaimStatus::unsetaccessModes()
{
    accessModesIsSet_ = false;
}

std::string PersistentVolumeClaimStatus::getCapacity() const
{
    return capacity_;
}

void PersistentVolumeClaimStatus::setCapacity(const std::string& value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool PersistentVolumeClaimStatus::capacityIsSet() const
{
    return capacityIsSet_;
}

void PersistentVolumeClaimStatus::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::string PersistentVolumeClaimStatus::getPhase() const
{
    return phase_;
}

void PersistentVolumeClaimStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PersistentVolumeClaimStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PersistentVolumeClaimStatus::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


