

#include "huaweicloud/ecs/v2/model/NovaServerInterfaceDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerInterfaceDetail::NovaServerInterfaceDetail()
{
    fixedIpsIsSet_ = false;
    macAddr_ = "";
    macAddrIsSet_ = false;
    netId_ = "";
    netIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    portState_ = "";
    portStateIsSet_ = false;
}

NovaServerInterfaceDetail::~NovaServerInterfaceDetail() = default;

void NovaServerInterfaceDetail::validate()
{
}

web::json::value NovaServerInterfaceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(macAddrIsSet_) {
        val[utility::conversions::to_string_t("mac_addr")] = ModelBase::toJson(macAddr_);
    }
    if(netIdIsSet_) {
        val[utility::conversions::to_string_t("net_id")] = ModelBase::toJson(netId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(portStateIsSet_) {
        val[utility::conversions::to_string_t("port_state")] = ModelBase::toJson(portState_);
    }

    return val;
}

bool NovaServerInterfaceDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerInterfaceFixedIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortState(refVal);
        }
    }
    return ok;
}

std::vector<NovaServerInterfaceFixedIp>& NovaServerInterfaceDetail::getFixedIps()
{
    return fixedIps_;
}

void NovaServerInterfaceDetail::setFixedIps(const std::vector<NovaServerInterfaceFixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NovaServerInterfaceDetail::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NovaServerInterfaceDetail::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string NovaServerInterfaceDetail::getMacAddr() const
{
    return macAddr_;
}

void NovaServerInterfaceDetail::setMacAddr(const std::string& value)
{
    macAddr_ = value;
    macAddrIsSet_ = true;
}

bool NovaServerInterfaceDetail::macAddrIsSet() const
{
    return macAddrIsSet_;
}

void NovaServerInterfaceDetail::unsetmacAddr()
{
    macAddrIsSet_ = false;
}

std::string NovaServerInterfaceDetail::getNetId() const
{
    return netId_;
}

void NovaServerInterfaceDetail::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool NovaServerInterfaceDetail::netIdIsSet() const
{
    return netIdIsSet_;
}

void NovaServerInterfaceDetail::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string NovaServerInterfaceDetail::getPortId() const
{
    return portId_;
}

void NovaServerInterfaceDetail::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NovaServerInterfaceDetail::portIdIsSet() const
{
    return portIdIsSet_;
}

void NovaServerInterfaceDetail::unsetportId()
{
    portIdIsSet_ = false;
}

std::string NovaServerInterfaceDetail::getPortState() const
{
    return portState_;
}

void NovaServerInterfaceDetail::setPortState(const std::string& value)
{
    portState_ = value;
    portStateIsSet_ = true;
}

bool NovaServerInterfaceDetail::portStateIsSet() const
{
    return portStateIsSet_;
}

void NovaServerInterfaceDetail::unsetportState()
{
    portStateIsSet_ = false;
}

}
}
}
}
}


