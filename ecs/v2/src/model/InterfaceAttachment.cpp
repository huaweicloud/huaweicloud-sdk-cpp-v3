

#include "huaweicloud/ecs/model/InterfaceAttachment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




InterfaceAttachment::InterfaceAttachment()
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

InterfaceAttachment::~InterfaceAttachment() = default;

void InterfaceAttachment::validate()
{
}

web::json::value InterfaceAttachment::toJson() const
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

bool InterfaceAttachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerInterfaceFixedIp> refVal;
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


std::vector<ServerInterfaceFixedIp>& InterfaceAttachment::getFixedIps()
{
    return fixedIps_;
}

void InterfaceAttachment::setFixedIps(const std::vector<ServerInterfaceFixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool InterfaceAttachment::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void InterfaceAttachment::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string InterfaceAttachment::getMacAddr() const
{
    return macAddr_;
}

void InterfaceAttachment::setMacAddr(const std::string& value)
{
    macAddr_ = value;
    macAddrIsSet_ = true;
}

bool InterfaceAttachment::macAddrIsSet() const
{
    return macAddrIsSet_;
}

void InterfaceAttachment::unsetmacAddr()
{
    macAddrIsSet_ = false;
}

std::string InterfaceAttachment::getNetId() const
{
    return netId_;
}

void InterfaceAttachment::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool InterfaceAttachment::netIdIsSet() const
{
    return netIdIsSet_;
}

void InterfaceAttachment::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string InterfaceAttachment::getPortId() const
{
    return portId_;
}

void InterfaceAttachment::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool InterfaceAttachment::portIdIsSet() const
{
    return portIdIsSet_;
}

void InterfaceAttachment::unsetportId()
{
    portIdIsSet_ = false;
}

std::string InterfaceAttachment::getPortState() const
{
    return portState_;
}

void InterfaceAttachment::setPortState(const std::string& value)
{
    portState_ = value;
    portStateIsSet_ = true;
}

bool InterfaceAttachment::portStateIsSet() const
{
    return portStateIsSet_;
}

void InterfaceAttachment::unsetportState()
{
    portStateIsSet_ = false;
}

}
}
}
}
}


