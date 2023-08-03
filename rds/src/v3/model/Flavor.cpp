

#include "huaweicloud/rds/v3/model/Flavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Flavor::Flavor()
{
    id_ = "";
    idIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    azStatusIsSet_ = false;
    azDescIsSet_ = false;
    versionNameIsSet_ = false;
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

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(azDescIsSet_) {
        val[utility::conversions::to_string_t("az_desc")] = ModelBase::toJson(azDesc_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }

    return val;
}

bool Flavor::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("az_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_desc"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
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

std::string Flavor::getId() const
{
    return id_;
}

void Flavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Flavor::idIsSet() const
{
    return idIsSet_;
}

void Flavor::unsetid()
{
    idIsSet_ = false;
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

int32_t Flavor::getRam() const
{
    return ram_;
}

void Flavor::setRam(int32_t value)
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

std::string Flavor::getInstanceMode() const
{
    return instanceMode_;
}

void Flavor::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool Flavor::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void Flavor::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
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

std::map<std::string, std::string>& Flavor::getAzDesc()
{
    return azDesc_;
}

void Flavor::setAzDesc(const std::map<std::string, std::string>& value)
{
    azDesc_ = value;
    azDescIsSet_ = true;
}

bool Flavor::azDescIsSet() const
{
    return azDescIsSet_;
}

void Flavor::unsetazDesc()
{
    azDescIsSet_ = false;
}

std::vector<std::string>& Flavor::getVersionName()
{
    return versionName_;
}

void Flavor::setVersionName(const std::vector<std::string>& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool Flavor::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void Flavor::unsetversionName()
{
    versionNameIsSet_ = false;
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


