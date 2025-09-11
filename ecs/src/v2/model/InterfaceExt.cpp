

#include "huaweicloud/ecs/v2/model/InterfaceExt.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




InterfaceExt::InterfaceExt()
{
    preserveOnDelete_ = false;
    preserveOnDeleteIsSet_ = false;
    portState_ = "";
    portStateIsSet_ = false;
    fixedIpsIsSet_ = false;
    netId_ = "";
    netIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    macAddr_ = "";
    macAddrIsSet_ = false;
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

InterfaceExt::~InterfaceExt() = default;

void InterfaceExt::validate()
{
}

web::json::value InterfaceExt::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preserveOnDeleteIsSet_) {
        val[utility::conversions::to_string_t("preserve_on_delete")] = ModelBase::toJson(preserveOnDelete_);
    }
    if(portStateIsSet_) {
        val[utility::conversions::to_string_t("port_state")] = ModelBase::toJson(portState_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixed_ips")] = ModelBase::toJson(fixedIps_);
    }
    if(netIdIsSet_) {
        val[utility::conversions::to_string_t("net_id")] = ModelBase::toJson(netId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(macAddrIsSet_) {
        val[utility::conversions::to_string_t("mac_addr")] = ModelBase::toJson(macAddr_);
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
bool InterfaceExt::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preserve_on_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preserve_on_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreserveOnDelete(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fixed_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<FixedIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddr(refVal);
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


bool InterfaceExt::isPreserveOnDelete() const
{
    return preserveOnDelete_;
}

void InterfaceExt::setPreserveOnDelete(bool value)
{
    preserveOnDelete_ = value;
    preserveOnDeleteIsSet_ = true;
}

bool InterfaceExt::preserveOnDeleteIsSet() const
{
    return preserveOnDeleteIsSet_;
}

void InterfaceExt::unsetpreserveOnDelete()
{
    preserveOnDeleteIsSet_ = false;
}

std::string InterfaceExt::getPortState() const
{
    return portState_;
}

void InterfaceExt::setPortState(const std::string& value)
{
    portState_ = value;
    portStateIsSet_ = true;
}

bool InterfaceExt::portStateIsSet() const
{
    return portStateIsSet_;
}

void InterfaceExt::unsetportState()
{
    portStateIsSet_ = false;
}

std::vector<FixedIp>& InterfaceExt::getFixedIps()
{
    return fixedIps_;
}

void InterfaceExt::setFixedIps(const std::vector<FixedIp>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool InterfaceExt::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void InterfaceExt::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string InterfaceExt::getNetId() const
{
    return netId_;
}

void InterfaceExt::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool InterfaceExt::netIdIsSet() const
{
    return netIdIsSet_;
}

void InterfaceExt::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string InterfaceExt::getPortId() const
{
    return portId_;
}

void InterfaceExt::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool InterfaceExt::portIdIsSet() const
{
    return portIdIsSet_;
}

void InterfaceExt::unsetportId()
{
    portIdIsSet_ = false;
}

std::string InterfaceExt::getMacAddr() const
{
    return macAddr_;
}

void InterfaceExt::setMacAddr(const std::string& value)
{
    macAddr_ = value;
    macAddrIsSet_ = true;
}

bool InterfaceExt::macAddrIsSet() const
{
    return macAddrIsSet_;
}

void InterfaceExt::unsetmacAddr()
{
    macAddrIsSet_ = false;
}

bool InterfaceExt::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void InterfaceExt::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool InterfaceExt::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void InterfaceExt::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

std::string InterfaceExt::getDriverMode() const
{
    return driverMode_;
}

void InterfaceExt::setDriverMode(const std::string& value)
{
    driverMode_ = value;
    driverModeIsSet_ = true;
}

bool InterfaceExt::driverModeIsSet() const
{
    return driverModeIsSet_;
}

void InterfaceExt::unsetdriverMode()
{
    driverModeIsSet_ = false;
}

int32_t InterfaceExt::getMinRate() const
{
    return minRate_;
}

void InterfaceExt::setMinRate(int32_t value)
{
    minRate_ = value;
    minRateIsSet_ = true;
}

bool InterfaceExt::minRateIsSet() const
{
    return minRateIsSet_;
}

void InterfaceExt::unsetminRate()
{
    minRateIsSet_ = false;
}

int32_t InterfaceExt::getMultiqueueNum() const
{
    return multiqueueNum_;
}

void InterfaceExt::setMultiqueueNum(int32_t value)
{
    multiqueueNum_ = value;
    multiqueueNumIsSet_ = true;
}

bool InterfaceExt::multiqueueNumIsSet() const
{
    return multiqueueNumIsSet_;
}

void InterfaceExt::unsetmultiqueueNum()
{
    multiqueueNumIsSet_ = false;
}

std::string InterfaceExt::getPciAddress() const
{
    return pciAddress_;
}

void InterfaceExt::setPciAddress(const std::string& value)
{
    pciAddress_ = value;
    pciAddressIsSet_ = true;
}

bool InterfaceExt::pciAddressIsSet() const
{
    return pciAddressIsSet_;
}

void InterfaceExt::unsetpciAddress()
{
    pciAddressIsSet_ = false;
}

}
}
}
}
}


