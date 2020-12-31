

#include "huaweicloud/evs/model/VolumeTypeExtraSpecs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeTypeExtraSpecs::VolumeTypeExtraSpecs()
{
    rESKEYavailabilityZones_ = "";
    rESKEYavailabilityZonesIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    osVendorExtendedsoldOutAvailabilityZones_ = "";
    osVendorExtendedsoldOutAvailabilityZonesIsSet_ = false;
    volumeBackendName_ = "";
    volumeBackendNameIsSet_ = false;
    hWavailabilityZone_ = "";
    hWavailabilityZoneIsSet_ = false;
}

VolumeTypeExtraSpecs::~VolumeTypeExtraSpecs() = default;

void VolumeTypeExtraSpecs::validate()
{
}

web::json::value VolumeTypeExtraSpecs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rESKEYavailabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("RESKEY:availability_zones")] = ModelBase::toJson(rESKEYavailabilityZones_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability-zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(osVendorExtendedsoldOutAvailabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("os-vendor-extended:sold_out_availability_zones")] = ModelBase::toJson(osVendorExtendedsoldOutAvailabilityZones_);
    }
    if(volumeBackendNameIsSet_) {
        val[utility::conversions::to_string_t("volume_backend_name")] = ModelBase::toJson(volumeBackendName_);
    }
    if(hWavailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("HW:availability_zone")] = ModelBase::toJson(hWavailabilityZone_);
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
            setRESKEYavailabilityZones(refVal);
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
            setOsVendorExtendedsoldOutAvailabilityZones(refVal);
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
            setHWavailabilityZone(refVal);
        }
    }
    return ok;
}


std::string VolumeTypeExtraSpecs::getRESKEYavailabilityZones() const
{
    return rESKEYavailabilityZones_;
}

void VolumeTypeExtraSpecs::setRESKEYavailabilityZones(const std::string& value)
{
    rESKEYavailabilityZones_ = value;
    rESKEYavailabilityZonesIsSet_ = true;
}

bool VolumeTypeExtraSpecs::rESKEYavailabilityZonesIsSet() const
{
    return rESKEYavailabilityZonesIsSet_;
}

void VolumeTypeExtraSpecs::unsetrESKEYavailabilityZones()
{
    rESKEYavailabilityZonesIsSet_ = false;
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

std::string VolumeTypeExtraSpecs::getOsVendorExtendedsoldOutAvailabilityZones() const
{
    return osVendorExtendedsoldOutAvailabilityZones_;
}

void VolumeTypeExtraSpecs::setOsVendorExtendedsoldOutAvailabilityZones(const std::string& value)
{
    osVendorExtendedsoldOutAvailabilityZones_ = value;
    osVendorExtendedsoldOutAvailabilityZonesIsSet_ = true;
}

bool VolumeTypeExtraSpecs::osVendorExtendedsoldOutAvailabilityZonesIsSet() const
{
    return osVendorExtendedsoldOutAvailabilityZonesIsSet_;
}

void VolumeTypeExtraSpecs::unsetosVendorExtendedsoldOutAvailabilityZones()
{
    osVendorExtendedsoldOutAvailabilityZonesIsSet_ = false;
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

std::string VolumeTypeExtraSpecs::getHWavailabilityZone() const
{
    return hWavailabilityZone_;
}

void VolumeTypeExtraSpecs::setHWavailabilityZone(const std::string& value)
{
    hWavailabilityZone_ = value;
    hWavailabilityZoneIsSet_ = true;
}

bool VolumeTypeExtraSpecs::hWavailabilityZoneIsSet() const
{
    return hWavailabilityZoneIsSet_;
}

void VolumeTypeExtraSpecs::unsethWavailabilityZone()
{
    hWavailabilityZoneIsSet_ = false;
}

}
}
}
}
}


