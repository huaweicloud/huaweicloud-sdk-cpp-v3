

#include "huaweicloud/evs/v2/model/VolumeTypeExtraSpecs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeTypeExtraSpecs::VolumeTypeExtraSpecs()
{
    rESKEYAvailabilityZones_ = "";
    rESKEYAvailabilityZonesIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    osVendorExtendedSoldOutAvailabilityZones_ = "";
    osVendorExtendedSoldOutAvailabilityZonesIsSet_ = false;
    volumeBackendName_ = "";
    volumeBackendNameIsSet_ = false;
    hWAvailabilityZone_ = "";
    hWAvailabilityZoneIsSet_ = false;
}

VolumeTypeExtraSpecs::~VolumeTypeExtraSpecs() = default;

void VolumeTypeExtraSpecs::validate()
{
}

web::json::value VolumeTypeExtraSpecs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rESKEYAvailabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("RESKEY:availability_zones")] = ModelBase::toJson(rESKEYAvailabilityZones_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability-zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(osVendorExtendedSoldOutAvailabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("os-vendor-extended:sold_out_availability_zones")] = ModelBase::toJson(osVendorExtendedSoldOutAvailabilityZones_);
    }
    if(volumeBackendNameIsSet_) {
        val[utility::conversions::to_string_t("volume_backend_name")] = ModelBase::toJson(volumeBackendName_);
    }
    if(hWAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("HW:availability_zone")] = ModelBase::toJson(hWAvailabilityZone_);
    }

    return val;
}
bool VolumeTypeExtraSpecs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("RESKEY:availability_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("RESKEY:availability_zones"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRESKEYAvailabilityZones(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability-zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability-zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-vendor-extended:sold_out_availability_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vendor-extended:sold_out_availability_zones"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVendorExtendedSoldOutAvailabilityZones(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_backend_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_backend_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeBackendName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HW:availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("HW:availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHWAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string VolumeTypeExtraSpecs::getRESKEYAvailabilityZones() const
{
    return rESKEYAvailabilityZones_;
}

void VolumeTypeExtraSpecs::setRESKEYAvailabilityZones(const std::string& value)
{
    rESKEYAvailabilityZones_ = value;
    rESKEYAvailabilityZonesIsSet_ = true;
}

bool VolumeTypeExtraSpecs::rESKEYAvailabilityZonesIsSet() const
{
    return rESKEYAvailabilityZonesIsSet_;
}

void VolumeTypeExtraSpecs::unsetrESKEYAvailabilityZones()
{
    rESKEYAvailabilityZonesIsSet_ = false;
}

std::string VolumeTypeExtraSpecs::getAvailabilityZone() const
{
    return availabilityZone_;
}

void VolumeTypeExtraSpecs::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool VolumeTypeExtraSpecs::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void VolumeTypeExtraSpecs::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string VolumeTypeExtraSpecs::getOsVendorExtendedSoldOutAvailabilityZones() const
{
    return osVendorExtendedSoldOutAvailabilityZones_;
}

void VolumeTypeExtraSpecs::setOsVendorExtendedSoldOutAvailabilityZones(const std::string& value)
{
    osVendorExtendedSoldOutAvailabilityZones_ = value;
    osVendorExtendedSoldOutAvailabilityZonesIsSet_ = true;
}

bool VolumeTypeExtraSpecs::osVendorExtendedSoldOutAvailabilityZonesIsSet() const
{
    return osVendorExtendedSoldOutAvailabilityZonesIsSet_;
}

void VolumeTypeExtraSpecs::unsetosVendorExtendedSoldOutAvailabilityZones()
{
    osVendorExtendedSoldOutAvailabilityZonesIsSet_ = false;
}

std::string VolumeTypeExtraSpecs::getVolumeBackendName() const
{
    return volumeBackendName_;
}

void VolumeTypeExtraSpecs::setVolumeBackendName(const std::string& value)
{
    volumeBackendName_ = value;
    volumeBackendNameIsSet_ = true;
}

bool VolumeTypeExtraSpecs::volumeBackendNameIsSet() const
{
    return volumeBackendNameIsSet_;
}

void VolumeTypeExtraSpecs::unsetvolumeBackendName()
{
    volumeBackendNameIsSet_ = false;
}

std::string VolumeTypeExtraSpecs::getHWAvailabilityZone() const
{
    return hWAvailabilityZone_;
}

void VolumeTypeExtraSpecs::setHWAvailabilityZone(const std::string& value)
{
    hWAvailabilityZone_ = value;
    hWAvailabilityZoneIsSet_ = true;
}

bool VolumeTypeExtraSpecs::hWAvailabilityZoneIsSet() const
{
    return hWAvailabilityZoneIsSet_;
}

void VolumeTypeExtraSpecs::unsethWAvailabilityZone()
{
    hWAvailabilityZoneIsSet_ = false;
}

}
}
}
}
}


