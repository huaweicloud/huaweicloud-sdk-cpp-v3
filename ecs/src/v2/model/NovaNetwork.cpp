

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
    oSEXTIPSMACmacAddr_ = "";
    oSEXTIPSMACmacAddrIsSet_ = false;
    oSEXTIPStype_ = "";
    oSEXTIPStypeIsSet_ = false;
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
    if(oSEXTIPSMACmacAddrIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS-MAC:mac_addr")] = ModelBase::toJson(oSEXTIPSMACmacAddr_);
    }
    if(oSEXTIPStypeIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-IPS:type")] = ModelBase::toJson(oSEXTIPStype_);
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
            setOSEXTIPSMACmacAddr(refVal);
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

std::string NovaNetwork::getOSEXTIPSMACmacAddr() const
{
    return oSEXTIPSMACmacAddr_;
}

void NovaNetwork::setOSEXTIPSMACmacAddr(const std::string& value)
{
    oSEXTIPSMACmacAddr_ = value;
    oSEXTIPSMACmacAddrIsSet_ = true;
}

bool NovaNetwork::oSEXTIPSMACmacAddrIsSet() const
{
    return oSEXTIPSMACmacAddrIsSet_;
}

void NovaNetwork::unsetoSEXTIPSMACmacAddr()
{
    oSEXTIPSMACmacAddrIsSet_ = false;
}

std::string NovaNetwork::getOSEXTIPStype() const
{
    return oSEXTIPStype_;
}

void NovaNetwork::setOSEXTIPStype(const std::string& value)
{
    oSEXTIPStype_ = value;
    oSEXTIPStypeIsSet_ = true;
}

bool NovaNetwork::oSEXTIPStypeIsSet() const
{
    return oSEXTIPStypeIsSet_;
}

void NovaNetwork::unsetoSEXTIPStype()
{
    oSEXTIPStypeIsSet_ = false;
}

}
}
}
}
}


