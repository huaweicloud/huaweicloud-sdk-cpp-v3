

#include "huaweicloud/eip/v3/model/VnicResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




VnicResp::VnicResp()
{
    privateIpAddress_ = "";
    privateIpAddressIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    mac_ = "";
    macIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
}

VnicResp::~VnicResp() = default;

void VnicResp::validate()
{
}

web::json::value VnicResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("private_ip_address")] = ModelBase::toJson(privateIpAddress_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(macIsSet_) {
        val[utility::conversions::to_string_t("mac")] = ModelBase::toJson(mac_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }

    return val;
}

bool VnicResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mac"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMac(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    return ok;
}

std::string VnicResp::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void VnicResp::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool VnicResp::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void VnicResp::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::string VnicResp::getDeviceId() const
{
    return deviceId_;
}

void VnicResp::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool VnicResp::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void VnicResp::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string VnicResp::getDeviceOwner() const
{
    return deviceOwner_;
}

void VnicResp::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool VnicResp::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void VnicResp::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string VnicResp::getVpcId() const
{
    return vpcId_;
}

void VnicResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VnicResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VnicResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VnicResp::getPortId() const
{
    return portId_;
}

void VnicResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool VnicResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void VnicResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string VnicResp::getMac() const
{
    return mac_;
}

void VnicResp::setMac(const std::string& value)
{
    mac_ = value;
    macIsSet_ = true;
}

bool VnicResp::macIsSet() const
{
    return macIsSet_;
}

void VnicResp::unsetmac()
{
    macIsSet_ = false;
}

std::string VnicResp::getInstanceId() const
{
    return instanceId_;
}

void VnicResp::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool VnicResp::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void VnicResp::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string VnicResp::getInstanceType() const
{
    return instanceType_;
}

void VnicResp::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool VnicResp::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void VnicResp::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

}
}
}
}
}


