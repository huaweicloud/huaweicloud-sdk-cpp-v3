

#include "huaweicloud/ecs/v2/model/ServerAddress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerAddress::ServerAddress()
{
    version_ = "";
    versionIsSet_ = false;
    primary_ = false;
    primaryIsSet_ = false;
    addr_ = "";
    addrIsSet_ = false;
    oSEXTIPSType_ = "";
    oSEXTIPSTypeIsSet_ = false;
    oSEXTIPSMACMacAddr_ = "";
    oSEXTIPSMACMacAddrIsSet_ = false;
    oSEXTIPSPortId_ = "";
    oSEXTIPSPortIdIsSet_ = false;
}

ServerAddress::~ServerAddress() = default;

void ServerAddress::validate()
{
}

web::json::value ServerAddress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(primaryIsSet_) {
        val[utility::conversions::to_string_t("primary")] = ModelBase::toJson(primary_);
    }
    if(addrIsSet_) {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(addr_);
    }
    if(oSEXTIPSTypeIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:type")] = ModelBase::toJson(oSEXTIPSType_);
    }
    if(oSEXTIPSMACMacAddrIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr")] = ModelBase::toJson(oSEXTIPSMACMacAddr_);
    }
    if(oSEXTIPSPortIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:port_id")] = ModelBase::toJson(oSEXTIPSPortId_);
    }

    return val;
}
bool ServerAddress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSMACMacAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS:port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS:port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSPortId(refVal);
        }
    }
    return ok;
}


std::string ServerAddress::getVersion() const
{
    return version_;
}

void ServerAddress::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServerAddress::versionIsSet() const
{
    return versionIsSet_;
}

void ServerAddress::unsetversion()
{
    versionIsSet_ = false;
}

bool ServerAddress::isPrimary() const
{
    return primary_;
}

void ServerAddress::setPrimary(bool value)
{
    primary_ = value;
    primaryIsSet_ = true;
}

bool ServerAddress::primaryIsSet() const
{
    return primaryIsSet_;
}

void ServerAddress::unsetprimary()
{
    primaryIsSet_ = false;
}

std::string ServerAddress::getAddr() const
{
    return addr_;
}

void ServerAddress::setAddr(const std::string& value)
{
    addr_ = value;
    addrIsSet_ = true;
}

bool ServerAddress::addrIsSet() const
{
    return addrIsSet_;
}

void ServerAddress::unsetaddr()
{
    addrIsSet_ = false;
}

std::string ServerAddress::getOSEXTIPSType() const
{
    return oSEXTIPSType_;
}

void ServerAddress::setOSEXTIPSType(const std::string& value)
{
    oSEXTIPSType_ = value;
    oSEXTIPSTypeIsSet_ = true;
}

bool ServerAddress::oSEXTIPSTypeIsSet() const
{
    return oSEXTIPSTypeIsSet_;
}

void ServerAddress::unsetoSEXTIPSType()
{
    oSEXTIPSTypeIsSet_ = false;
}

std::string ServerAddress::getOSEXTIPSMACMacAddr() const
{
    return oSEXTIPSMACMacAddr_;
}

void ServerAddress::setOSEXTIPSMACMacAddr(const std::string& value)
{
    oSEXTIPSMACMacAddr_ = value;
    oSEXTIPSMACMacAddrIsSet_ = true;
}

bool ServerAddress::oSEXTIPSMACMacAddrIsSet() const
{
    return oSEXTIPSMACMacAddrIsSet_;
}

void ServerAddress::unsetoSEXTIPSMACMacAddr()
{
    oSEXTIPSMACMacAddrIsSet_ = false;
}

std::string ServerAddress::getOSEXTIPSPortId() const
{
    return oSEXTIPSPortId_;
}

void ServerAddress::setOSEXTIPSPortId(const std::string& value)
{
    oSEXTIPSPortId_ = value;
    oSEXTIPSPortIdIsSet_ = true;
}

bool ServerAddress::oSEXTIPSPortIdIsSet() const
{
    return oSEXTIPSPortIdIsSet_;
}

void ServerAddress::unsetoSEXTIPSPortId()
{
    oSEXTIPSPortIdIsSet_ = false;
}

}
}
}
}
}


