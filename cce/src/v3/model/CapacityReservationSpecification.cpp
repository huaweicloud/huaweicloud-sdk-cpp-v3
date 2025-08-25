

#include "huaweicloud/cce/v3/model/CapacityReservationSpecification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CapacityReservationSpecification::CapacityReservationSpecification()
{
    id_ = "";
    idIsSet_ = false;
    preference_ = "";
    preferenceIsSet_ = false;
}

CapacityReservationSpecification::~CapacityReservationSpecification() = default;

void CapacityReservationSpecification::validate()
{
}

web::json::value CapacityReservationSpecification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(preferenceIsSet_) {
        val[utility::conversions::to_string_t("preference")] = ModelBase::toJson(preference_);
    }

    return val;
}
bool CapacityReservationSpecification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreference(refVal);
        }
    }
    return ok;
}


std::string CapacityReservationSpecification::getId() const
{
    return id_;
}

void CapacityReservationSpecification::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CapacityReservationSpecification::idIsSet() const
{
    return idIsSet_;
}

void CapacityReservationSpecification::unsetid()
{
    idIsSet_ = false;
}

std::string CapacityReservationSpecification::getPreference() const
{
    return preference_;
}

void CapacityReservationSpecification::setPreference(const std::string& value)
{
    preference_ = value;
    preferenceIsSet_ = true;
}

bool CapacityReservationSpecification::preferenceIsSet() const
{
    return preferenceIsSet_;
}

void CapacityReservationSpecification::unsetpreference()
{
    preferenceIsSet_ = false;
}

}
}
}
}
}


