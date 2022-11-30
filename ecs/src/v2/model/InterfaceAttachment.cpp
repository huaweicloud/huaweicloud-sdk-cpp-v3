

#include "huaweicloud/ecs/v2/model/InterfaceAttachment.h"

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
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
    driverMode_ = "";
    driverModeIsSet_ = false;
    minRate_ = 0;
    minRateIsSet_ = false;
    multiqueueNum_ = 0;
    multiqueueNumIsSet_ = false;
    pciAddress_ = "";
    pciAddressIsSet_ = false;
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
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }
    if(driverModeIsSet_) {
        val[utility::conversions::to_string_t("driver_mode")] = ModelBase::toJson(driverMode_);
    }
    if(minRateIsSet_) {
        val[utility::conversions::to_string_t("min_rate")] = ModelBase::toJson(minRate_);
    }
    if(multiqueueNumIsSet_) {
        val[utility::conversions::to_string_t("multiqueue_num")] = ModelBase::toJson(multiqueueNum_);
    }
    if(pciAddressIsSet_) {
        val[utility::conversions::to_string_t("pci_address")] = ModelBase::toJson(pciAddress_);
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
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driver_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiqueue_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiqueue_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiqueueNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciAddress(refVal);
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

bool InterfaceAttachment::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void InterfaceAttachment::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool InterfaceAttachment::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void InterfaceAttachment::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

std::string InterfaceAttachment::getDriverMode() const
{
    return driverMode_;
}

void InterfaceAttachment::setDriverMode(const std::string& value)
{
    driverMode_ = value;
    driverModeIsSet_ = true;
}

bool InterfaceAttachment::driverModeIsSet() const
{
    return driverModeIsSet_;
}

void InterfaceAttachment::unsetdriverMode()
{
    driverModeIsSet_ = false;
}

int32_t InterfaceAttachment::getMinRate() const
{
    return minRate_;
}

void InterfaceAttachment::setMinRate(int32_t value)
{
    minRate_ = value;
    minRateIsSet_ = true;
}

bool InterfaceAttachment::minRateIsSet() const
{
    return minRateIsSet_;
}

void InterfaceAttachment::unsetminRate()
{
    minRateIsSet_ = false;
}

int32_t InterfaceAttachment::getMultiqueueNum() const
{
    return multiqueueNum_;
}

void InterfaceAttachment::setMultiqueueNum(int32_t value)
{
    multiqueueNum_ = value;
    multiqueueNumIsSet_ = true;
}

bool InterfaceAttachment::multiqueueNumIsSet() const
{
    return multiqueueNumIsSet_;
}

void InterfaceAttachment::unsetmultiqueueNum()
{
    multiqueueNumIsSet_ = false;
}

std::string InterfaceAttachment::getPciAddress() const
{
    return pciAddress_;
}

void InterfaceAttachment::setPciAddress(const std::string& value)
{
    pciAddress_ = value;
    pciAddressIsSet_ = true;
}

bool InterfaceAttachment::pciAddressIsSet() const
{
    return pciAddressIsSet_;
}

void InterfaceAttachment::unsetpciAddress()
{
    pciAddressIsSet_ = false;
}

}
}
}
}
}


