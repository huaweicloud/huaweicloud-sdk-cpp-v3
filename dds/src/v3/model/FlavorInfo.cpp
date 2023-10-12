

#include "huaweicloud/dds/v3/model/FlavorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




FlavorInfo::FlavorInfo()
{
    engineName_ = "";
    engineNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    azStatusIsSet_ = false;
    engineVersionsIsSet_ = false;
}

FlavorInfo::~FlavorInfo() = default;

void FlavorInfo::validate()
{
}

web::json::value FlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(engineVersionsIsSet_) {
        val[utility::conversions::to_string_t("engine_versions")] = ModelBase::toJson(engineVersions_);
    }

    return val;
}
bool FlavorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersions(refVal);
        }
    }
    return ok;
}


std::string FlavorInfo::getEngineName() const
{
    return engineName_;
}

void FlavorInfo::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool FlavorInfo::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void FlavorInfo::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string FlavorInfo::getType() const
{
    return type_;
}

void FlavorInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FlavorInfo::typeIsSet() const
{
    return typeIsSet_;
}

void FlavorInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string FlavorInfo::getVcpus() const
{
    return vcpus_;
}

void FlavorInfo::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool FlavorInfo::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void FlavorInfo::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string FlavorInfo::getRam() const
{
    return ram_;
}

void FlavorInfo::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool FlavorInfo::ramIsSet() const
{
    return ramIsSet_;
}

void FlavorInfo::unsetram()
{
    ramIsSet_ = false;
}

std::string FlavorInfo::getSpecCode() const
{
    return specCode_;
}

void FlavorInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool FlavorInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void FlavorInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

Object FlavorInfo::getAzStatus() const
{
    return azStatus_;
}

void FlavorInfo::setAzStatus(const Object& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool FlavorInfo::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void FlavorInfo::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::vector<std::string>& FlavorInfo::getEngineVersions()
{
    return engineVersions_;
}

void FlavorInfo::setEngineVersions(const std::vector<std::string>& value)
{
    engineVersions_ = value;
    engineVersionsIsSet_ = true;
}

bool FlavorInfo::engineVersionsIsSet() const
{
    return engineVersionsIsSet_;
}

void FlavorInfo::unsetengineVersions()
{
    engineVersionsIsSet_ = false;
}

}
}
}
}
}


