

#include "huaweicloud/ecs/v2/model/NovaNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaNetwork::NovaNetwork()
{
    addr_ = "";
    addrIsSet_ = false;
    version_ = 0;
    versionIsSet_ = false;
    oSEXTIPSMACMacAddr_ = "";
    oSEXTIPSMACMacAddrIsSet_ = false;
    oSEXTIPSType_ = "";
    oSEXTIPSTypeIsSet_ = false;
}

NovaNetwork::~NovaNetwork() = default;

void NovaNetwork::validate()
{
}

web::json::value NovaNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addrIsSet_) {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(addr_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(oSEXTIPSMACMacAddrIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr")] = ModelBase::toJson(oSEXTIPSMACMacAddr_);
    }
    if(oSEXTIPSTypeIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:type")] = ModelBase::toJson(oSEXTIPSType_);
    }

    return val;
}
bool NovaNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSMACMacAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS:type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS:type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSType(refVal);
        }
    }
    return ok;
}


std::string NovaNetwork::getAddr() const
{
    return addr_;
}

void NovaNetwork::setAddr(const std::string& value)
{
    addr_ = value;
    addrIsSet_ = true;
}

bool NovaNetwork::addrIsSet() const
{
    return addrIsSet_;
}

void NovaNetwork::unsetaddr()
{
    addrIsSet_ = false;
}

int32_t NovaNetwork::getVersion() const
{
    return version_;
}

void NovaNetwork::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NovaNetwork::versionIsSet() const
{
    return versionIsSet_;
}

void NovaNetwork::unsetversion()
{
    versionIsSet_ = false;
}

std::string NovaNetwork::getOSEXTIPSMACMacAddr() const
{
    return oSEXTIPSMACMacAddr_;
}

void NovaNetwork::setOSEXTIPSMACMacAddr(const std::string& value)
{
    oSEXTIPSMACMacAddr_ = value;
    oSEXTIPSMACMacAddrIsSet_ = true;
}

bool NovaNetwork::oSEXTIPSMACMacAddrIsSet() const
{
    return oSEXTIPSMACMacAddrIsSet_;
}

void NovaNetwork::unsetoSEXTIPSMACMacAddr()
{
    oSEXTIPSMACMacAddrIsSet_ = false;
}

std::string NovaNetwork::getOSEXTIPSType() const
{
    return oSEXTIPSType_;
}

void NovaNetwork::setOSEXTIPSType(const std::string& value)
{
    oSEXTIPSType_ = value;
    oSEXTIPSTypeIsSet_ = true;
}

bool NovaNetwork::oSEXTIPSTypeIsSet() const
{
    return oSEXTIPSTypeIsSet_;
}

void NovaNetwork::unsetoSEXTIPSType()
{
    oSEXTIPSTypeIsSet_ = false;
}

}
}
}
}
}


