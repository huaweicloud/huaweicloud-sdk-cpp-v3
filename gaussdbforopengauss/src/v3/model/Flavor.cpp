

#include "huaweicloud/gaussdbforopengauss/v3/model/Flavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Flavor::Flavor()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    availabilityZoneIsSet_ = false;
    azStatusIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }

    return val;
}

bool Flavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    return ok;
}

std::string Flavor::getVcpus() const
{
    return vcpus_;
}

void Flavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool Flavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void Flavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string Flavor::getRam() const
{
    return ram_;
}

void Flavor::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool Flavor::ramIsSet() const
{
    return ramIsSet_;
}

void Flavor::unsetram()
{
    ramIsSet_ = false;
}

std::string Flavor::getSpecCode() const
{
    return specCode_;
}

void Flavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool Flavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void Flavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::vector<std::string>& Flavor::getAvailabilityZone()
{
    return availabilityZone_;
}

void Flavor::setAvailabilityZone(const std::vector<std::string>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool Flavor::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void Flavor::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::map<std::string, std::string>& Flavor::getAzStatus()
{
    return azStatus_;
}

void Flavor::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool Flavor::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void Flavor::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::string Flavor::getVersion() const
{
    return version_;
}

void Flavor::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Flavor::versionIsSet() const
{
    return versionIsSet_;
}

void Flavor::unsetversion()
{
    versionIsSet_ = false;
}

std::string Flavor::getName() const
{
    return name_;
}

void Flavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Flavor::nameIsSet() const
{
    return nameIsSet_;
}

void Flavor::unsetname()
{
    nameIsSet_ = false;
}

std::string Flavor::getGroupType() const
{
    return groupType_;
}

void Flavor::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool Flavor::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void Flavor::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

}
}
}
}
}


