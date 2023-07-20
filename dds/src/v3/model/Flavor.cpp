

#include "huaweicloud/dds/v3/model/Flavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




Flavor::Flavor()
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
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
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

    return val;
}

bool Flavor::fromJson(const web::json::value& val)
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
    return ok;
}

std::string Flavor::getEngineName() const
{
    return engineName_;
}

void Flavor::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool Flavor::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void Flavor::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string Flavor::getType() const
{
    return type_;
}

void Flavor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Flavor::typeIsSet() const
{
    return typeIsSet_;
}

void Flavor::unsettype()
{
    typeIsSet_ = false;
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

Object Flavor::getAzStatus() const
{
    return azStatus_;
}

void Flavor::setAzStatus(const Object& value)
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

}
}
}
}
}


