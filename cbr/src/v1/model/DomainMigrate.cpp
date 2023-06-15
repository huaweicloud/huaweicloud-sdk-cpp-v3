

#include "huaweicloud/cbr/v1/model/DomainMigrate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DomainMigrate::DomainMigrate()
{
    allRegions_ = false;
    allRegionsIsSet_ = false;
    reservation_ = 0.0f;
    reservationIsSet_ = false;
}

DomainMigrate::~DomainMigrate() = default;

void DomainMigrate::validate()
{
}

web::json::value DomainMigrate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allRegionsIsSet_) {
        val[utility::conversions::to_string_t("all_regions")] = ModelBase::toJson(allRegions_);
    }
    if(reservationIsSet_) {
        val[utility::conversions::to_string_t("reservation")] = ModelBase::toJson(reservation_);
    }

    return val;
}

bool DomainMigrate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_regions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllRegions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reservation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reservation"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservation(refVal);
        }
    }
    return ok;
}


bool DomainMigrate::isAllRegions() const
{
    return allRegions_;
}

void DomainMigrate::setAllRegions(bool value)
{
    allRegions_ = value;
    allRegionsIsSet_ = true;
}

bool DomainMigrate::allRegionsIsSet() const
{
    return allRegionsIsSet_;
}

void DomainMigrate::unsetallRegions()
{
    allRegionsIsSet_ = false;
}

float DomainMigrate::getReservation() const
{
    return reservation_;
}

void DomainMigrate::setReservation(float value)
{
    reservation_ = value;
    reservationIsSet_ = true;
}

bool DomainMigrate::reservationIsSet() const
{
    return reservationIsSet_;
}

void DomainMigrate::unsetreservation()
{
    reservationIsSet_ = false;
}

}
}
}
}
}


