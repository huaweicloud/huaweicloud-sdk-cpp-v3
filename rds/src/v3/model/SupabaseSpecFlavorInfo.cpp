

#include "huaweicloud/rds/v3/model/SupabaseSpecFlavorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseSpecFlavorInfo::SupabaseSpecFlavorInfo()
{
    id_ = "";
    idIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    availabilityZonesIsSet_ = false;
}

SupabaseSpecFlavorInfo::~SupabaseSpecFlavorInfo() = default;

void SupabaseSpecFlavorInfo::validate()
{
}

web::json::value SupabaseSpecFlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(availabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("availability_zones")] = ModelBase::toJson(availabilityZones_);
    }

    return val;
}
bool SupabaseSpecFlavorInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zones"));
        if(!fieldValue.is_null())
        {
            std::vector<SupabaseSpecFlavorInfo_availability_zones> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZones(refVal);
        }
    }
    return ok;
}


std::string SupabaseSpecFlavorInfo::getId() const
{
    return id_;
}

void SupabaseSpecFlavorInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::idIsSet() const
{
    return idIsSet_;
}

void SupabaseSpecFlavorInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SupabaseSpecFlavorInfo::getMode() const
{
    return mode_;
}

void SupabaseSpecFlavorInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::modeIsSet() const
{
    return modeIsSet_;
}

void SupabaseSpecFlavorInfo::unsetmode()
{
    modeIsSet_ = false;
}

std::string SupabaseSpecFlavorInfo::getVersion() const
{
    return version_;
}

void SupabaseSpecFlavorInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::versionIsSet() const
{
    return versionIsSet_;
}

void SupabaseSpecFlavorInfo::unsetversion()
{
    versionIsSet_ = false;
}

int32_t SupabaseSpecFlavorInfo::getVcpus() const
{
    return vcpus_;
}

void SupabaseSpecFlavorInfo::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void SupabaseSpecFlavorInfo::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t SupabaseSpecFlavorInfo::getRam() const
{
    return ram_;
}

void SupabaseSpecFlavorInfo::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::ramIsSet() const
{
    return ramIsSet_;
}

void SupabaseSpecFlavorInfo::unsetram()
{
    ramIsSet_ = false;
}

std::string SupabaseSpecFlavorInfo::getSpecCode() const
{
    return specCode_;
}

void SupabaseSpecFlavorInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void SupabaseSpecFlavorInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string SupabaseSpecFlavorInfo::getGroupType() const
{
    return groupType_;
}

void SupabaseSpecFlavorInfo::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void SupabaseSpecFlavorInfo::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<SupabaseSpecFlavorInfo_availability_zones>& SupabaseSpecFlavorInfo::getAvailabilityZones()
{
    return availabilityZones_;
}

void SupabaseSpecFlavorInfo::setAvailabilityZones(const std::vector<SupabaseSpecFlavorInfo_availability_zones>& value)
{
    availabilityZones_ = value;
    availabilityZonesIsSet_ = true;
}

bool SupabaseSpecFlavorInfo::availabilityZonesIsSet() const
{
    return availabilityZonesIsSet_;
}

void SupabaseSpecFlavorInfo::unsetavailabilityZones()
{
    availabilityZonesIsSet_ = false;
}

}
}
}
}
}


