

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
    oSEXTIPStype_ = "";
    oSEXTIPStypeIsSet_ = false;
    oSEXTIPSMACmacAddr_ = "";
    oSEXTIPSMACmacAddrIsSet_ = false;
    oSEXTIPSportId_ = "";
    oSEXTIPSportIdIsSet_ = false;
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
    if(oSEXTIPStypeIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:type")] = ModelBase::toJson(oSEXTIPStype_);
    }
    if(oSEXTIPSMACmacAddrIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr")] = ModelBase::toJson(oSEXTIPSMACmacAddr_);
    }
    if(oSEXTIPSportIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:port_id")] = ModelBase::toJson(oSEXTIPSportId_);
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
            setOSEXTIPStype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSMACmacAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS:port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS:port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSportId(refVal);
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

std::string ServerAddress::getOSEXTIPStype() const
{
    return oSEXTIPStype_;
}

void ServerAddress::setOSEXTIPStype(const std::string& value)
{
    oSEXTIPStype_ = value;
    oSEXTIPStypeIsSet_ = true;
}

bool ServerAddress::oSEXTIPStypeIsSet() const
{
    return oSEXTIPStypeIsSet_;
}

void ServerAddress::unsetoSEXTIPStype()
{
    oSEXTIPStypeIsSet_ = false;
}

std::string ServerAddress::getOSEXTIPSMACmacAddr() const
{
    return oSEXTIPSMACmacAddr_;
}

void ServerAddress::setOSEXTIPSMACmacAddr(const std::string& value)
{
    oSEXTIPSMACmacAddr_ = value;
    oSEXTIPSMACmacAddrIsSet_ = true;
}

bool ServerAddress::oSEXTIPSMACmacAddrIsSet() const
{
    return oSEXTIPSMACmacAddrIsSet_;
}

void ServerAddress::unsetoSEXTIPSMACmacAddr()
{
    oSEXTIPSMACmacAddrIsSet_ = false;
}

std::string ServerAddress::getOSEXTIPSportId() const
{
    return oSEXTIPSportId_;
}

void ServerAddress::setOSEXTIPSportId(const std::string& value)
{
    oSEXTIPSportId_ = value;
    oSEXTIPSportIdIsSet_ = true;
}

bool ServerAddress::oSEXTIPSportIdIsSet() const
{
    return oSEXTIPSportIdIsSet_;
}

void ServerAddress::unsetoSEXTIPSportId()
{
    oSEXTIPSportIdIsSet_ = false;
}

}
}
}
}
}


