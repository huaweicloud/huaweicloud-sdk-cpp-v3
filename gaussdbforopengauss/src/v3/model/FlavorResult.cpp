

#include "huaweicloud/gaussdbforopengauss/v3/model/FlavorResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FlavorResult::FlavorResult()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    azStatusIsSet_ = false;
    availabilityZoneIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
}

FlavorResult::~FlavorResult() = default;

void FlavorResult::validate()
{
}

web::json::value FlavorResult::toJson() const
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
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
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
bool FlavorResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
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


std::string FlavorResult::getVcpus() const
{
    return vcpus_;
}

void FlavorResult::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool FlavorResult::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void FlavorResult::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string FlavorResult::getRam() const
{
    return ram_;
}

void FlavorResult::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool FlavorResult::ramIsSet() const
{
    return ramIsSet_;
}

void FlavorResult::unsetram()
{
    ramIsSet_ = false;
}

std::string FlavorResult::getSpecCode() const
{
    return specCode_;
}

void FlavorResult::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool FlavorResult::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void FlavorResult::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::map<std::string, std::string>& FlavorResult::getAzStatus()
{
    return azStatus_;
}

void FlavorResult::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool FlavorResult::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void FlavorResult::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::vector<std::string>& FlavorResult::getAvailabilityZone()
{
    return availabilityZone_;
}

void FlavorResult::setAvailabilityZone(const std::vector<std::string>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool FlavorResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void FlavorResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string FlavorResult::getVersion() const
{
    return version_;
}

void FlavorResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool FlavorResult::versionIsSet() const
{
    return versionIsSet_;
}

void FlavorResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string FlavorResult::getName() const
{
    return name_;
}

void FlavorResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlavorResult::nameIsSet() const
{
    return nameIsSet_;
}

void FlavorResult::unsetname()
{
    nameIsSet_ = false;
}

std::string FlavorResult::getGroupType() const
{
    return groupType_;
}

void FlavorResult::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool FlavorResult::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void FlavorResult::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

}
}
}
}
}


