

#include "huaweicloud/ecs/v2/model/NetworkAddresses.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NetworkAddresses::NetworkAddresses()
{
    addr_ = "";
    addrIsSet_ = false;
    version_ = 0;
    versionIsSet_ = false;
    oSEXTIPSPortId_ = "";
    oSEXTIPSPortIdIsSet_ = false;
    oSEXTIPSMACMacAddr_ = "";
    oSEXTIPSMACMacAddrIsSet_ = false;
    oSEXTIPSType_ = "";
    oSEXTIPSTypeIsSet_ = false;
}

NetworkAddresses::~NetworkAddresses() = default;

void NetworkAddresses::validate()
{
}

web::json::value NetworkAddresses::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addrIsSet_) {
        val[utility::conversions::to_string_t("addr")] = ModelBase::toJson(addr_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(oSEXTIPSPortIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:port_id")] = ModelBase::toJson(oSEXTIPSPortId_);
    }
    if(oSEXTIPSMACMacAddrIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr")] = ModelBase::toJson(oSEXTIPSMACMacAddr_);
    }
    if(oSEXTIPSTypeIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:type")] = ModelBase::toJson(oSEXTIPSType_);
    }

    return val;
}
bool NetworkAddresses::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-IPS:port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-IPS:port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTIPSPortId(refVal);
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


std::string NetworkAddresses::getAddr() const
{
    return addr_;
}

void NetworkAddresses::setAddr(const std::string& value)
{
    addr_ = value;
    addrIsSet_ = true;
}

bool NetworkAddresses::addrIsSet() const
{
    return addrIsSet_;
}

void NetworkAddresses::unsetaddr()
{
    addrIsSet_ = false;
}

int32_t NetworkAddresses::getVersion() const
{
    return version_;
}

void NetworkAddresses::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool NetworkAddresses::versionIsSet() const
{
    return versionIsSet_;
}

void NetworkAddresses::unsetversion()
{
    versionIsSet_ = false;
}

std::string NetworkAddresses::getOSEXTIPSPortId() const
{
    return oSEXTIPSPortId_;
}

void NetworkAddresses::setOSEXTIPSPortId(const std::string& value)
{
    oSEXTIPSPortId_ = value;
    oSEXTIPSPortIdIsSet_ = true;
}

bool NetworkAddresses::oSEXTIPSPortIdIsSet() const
{
    return oSEXTIPSPortIdIsSet_;
}

void NetworkAddresses::unsetoSEXTIPSPortId()
{
    oSEXTIPSPortIdIsSet_ = false;
}

std::string NetworkAddresses::getOSEXTIPSMACMacAddr() const
{
    return oSEXTIPSMACMacAddr_;
}

void NetworkAddresses::setOSEXTIPSMACMacAddr(const std::string& value)
{
    oSEXTIPSMACMacAddr_ = value;
    oSEXTIPSMACMacAddrIsSet_ = true;
}

bool NetworkAddresses::oSEXTIPSMACMacAddrIsSet() const
{
    return oSEXTIPSMACMacAddrIsSet_;
}

void NetworkAddresses::unsetoSEXTIPSMACMacAddr()
{
    oSEXTIPSMACMacAddrIsSet_ = false;
}

std::string NetworkAddresses::getOSEXTIPSType() const
{
    return oSEXTIPSType_;
}

void NetworkAddresses::setOSEXTIPSType(const std::string& value)
{
    oSEXTIPSType_ = value;
    oSEXTIPSTypeIsSet_ = true;
}

bool NetworkAddresses::oSEXTIPSTypeIsSet() const
{
    return oSEXTIPSTypeIsSet_;
}

void NetworkAddresses::unsetoSEXTIPSType()
{
    oSEXTIPSTypeIsSet_ = false;
}

}
}
}
}
}


