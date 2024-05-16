

#include "huaweicloud/gaussdb/v3/model/HtapFlavorInfo_flavors.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapFlavorInfo_flavors::HtapFlavorInfo_flavors()
{
    type_ = "";
    typeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    azStatusIsSet_ = false;
}

HtapFlavorInfo_flavors::~HtapFlavorInfo_flavors() = default;

void HtapFlavorInfo_flavors::validate()
{
}

web::json::value HtapFlavorInfo_flavors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }

    return val;
}
bool HtapFlavorInfo_flavors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
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
    return ok;
}


std::string HtapFlavorInfo_flavors::getType() const
{
    return type_;
}

void HtapFlavorInfo_flavors::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HtapFlavorInfo_flavors::typeIsSet() const
{
    return typeIsSet_;
}

void HtapFlavorInfo_flavors::unsettype()
{
    typeIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getVcpus() const
{
    return vcpus_;
}

void HtapFlavorInfo_flavors::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool HtapFlavorInfo_flavors::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void HtapFlavorInfo_flavors::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getRam() const
{
    return ram_;
}

void HtapFlavorInfo_flavors::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool HtapFlavorInfo_flavors::ramIsSet() const
{
    return ramIsSet_;
}

void HtapFlavorInfo_flavors::unsetram()
{
    ramIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getId() const
{
    return id_;
}

void HtapFlavorInfo_flavors::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HtapFlavorInfo_flavors::idIsSet() const
{
    return idIsSet_;
}

void HtapFlavorInfo_flavors::unsetid()
{
    idIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getSpecCode() const
{
    return specCode_;
}

void HtapFlavorInfo_flavors::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool HtapFlavorInfo_flavors::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void HtapFlavorInfo_flavors::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getVersionName() const
{
    return versionName_;
}

void HtapFlavorInfo_flavors::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool HtapFlavorInfo_flavors::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void HtapFlavorInfo_flavors::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string HtapFlavorInfo_flavors::getInstanceMode() const
{
    return instanceMode_;
}

void HtapFlavorInfo_flavors::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool HtapFlavorInfo_flavors::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void HtapFlavorInfo_flavors::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::map<std::string, std::string>& HtapFlavorInfo_flavors::getAzStatus()
{
    return azStatus_;
}

void HtapFlavorInfo_flavors::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool HtapFlavorInfo_flavors::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void HtapFlavorInfo_flavors::unsetazStatus()
{
    azStatusIsSet_ = false;
}

}
}
}
}
}


