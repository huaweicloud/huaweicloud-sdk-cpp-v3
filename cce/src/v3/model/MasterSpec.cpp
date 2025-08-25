

#include "huaweicloud/cce/v3/model/MasterSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterSpec::MasterSpec()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    faultDomain_ = "";
    faultDomainIsSet_ = false;
}

MasterSpec::~MasterSpec() = default;

void MasterSpec::validate()
{
}

web::json::value MasterSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availabilityZone")] = ModelBase::toJson(availabilityZone_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(faultDomainIsSet_) {
        val[utility::conversions::to_string_t("faultDomain")] = ModelBase::toJson(faultDomain_);
    }

    return val;
}
bool MasterSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availabilityZone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availabilityZone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("faultDomain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faultDomain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaultDomain(refVal);
        }
    }
    return ok;
}


std::string MasterSpec::getAvailabilityZone() const
{
    return availabilityZone_;
}

void MasterSpec::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool MasterSpec::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void MasterSpec::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string MasterSpec::getFlavor() const
{
    return flavor_;
}

void MasterSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool MasterSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void MasterSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string MasterSpec::getFaultDomain() const
{
    return faultDomain_;
}

void MasterSpec::setFaultDomain(const std::string& value)
{
    faultDomain_ = value;
    faultDomainIsSet_ = true;
}

bool MasterSpec::faultDomainIsSet() const
{
    return faultDomainIsSet_;
}

void MasterSpec::unsetfaultDomain()
{
    faultDomainIsSet_ = false;
}

}
}
}
}
}


