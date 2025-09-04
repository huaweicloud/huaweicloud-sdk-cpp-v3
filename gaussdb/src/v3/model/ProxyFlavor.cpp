

#include "huaweicloud/gaussdb/v3/model/ProxyFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyFlavor::ProxyFlavor()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    azStatusIsSet_ = false;
    supportedIpv6_ = false;
    supportedIpv6IsSet_ = false;
}

ProxyFlavor::~ProxyFlavor() = default;

void ProxyFlavor::validate()
{
}

web::json::value ProxyFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(supportedIpv6IsSet_) {
        val[utility::conversions::to_string_t("supported_ipv6")] = ModelBase::toJson(supportedIpv6_);
    }

    return val;
}
bool ProxyFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("supported_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedIpv6(refVal);
        }
    }
    return ok;
}


std::string ProxyFlavor::getSpecCode() const
{
    return specCode_;
}

void ProxyFlavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ProxyFlavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ProxyFlavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ProxyFlavor::getVcpus() const
{
    return vcpus_;
}

void ProxyFlavor::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool ProxyFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void ProxyFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string ProxyFlavor::getRam() const
{
    return ram_;
}

void ProxyFlavor::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ProxyFlavor::ramIsSet() const
{
    return ramIsSet_;
}

void ProxyFlavor::unsetram()
{
    ramIsSet_ = false;
}

std::string ProxyFlavor::getDbType() const
{
    return dbType_;
}

void ProxyFlavor::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ProxyFlavor::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ProxyFlavor::unsetdbType()
{
    dbTypeIsSet_ = false;
}

Object ProxyFlavor::getAzStatus() const
{
    return azStatus_;
}

void ProxyFlavor::setAzStatus(const Object& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool ProxyFlavor::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void ProxyFlavor::unsetazStatus()
{
    azStatusIsSet_ = false;
}

bool ProxyFlavor::isSupportedIpv6() const
{
    return supportedIpv6_;
}

void ProxyFlavor::setSupportedIpv6(bool value)
{
    supportedIpv6_ = value;
    supportedIpv6IsSet_ = true;
}

bool ProxyFlavor::supportedIpv6IsSet() const
{
    return supportedIpv6IsSet_;
}

void ProxyFlavor::unsetsupportedIpv6()
{
    supportedIpv6IsSet_ = false;
}

}
}
}
}
}


