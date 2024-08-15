

#include "huaweicloud/eip/v3/model/InstanceVnicResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




InstanceVnicResp::InstanceVnicResp()
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
    vtep_ = "";
    vtepIsSet_ = false;
    vni_ = "";
    vniIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    portProfile_ = "";
    portProfileIsSet_ = false;
}

InstanceVnicResp::~InstanceVnicResp() = default;

void InstanceVnicResp::validate()
{
}

web::json::value InstanceVnicResp::toJson() const
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
    if(vtepIsSet_) {
        val[utility::conversions::to_string_t("vtep")] = ModelBase::toJson(vtep_);
    }
    if(vniIsSet_) {
        val[utility::conversions::to_string_t("vni")] = ModelBase::toJson(vni_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(portProfileIsSet_) {
        val[utility::conversions::to_string_t("port_profile")] = ModelBase::toJson(portProfile_);
    }

    return val;
}
bool InstanceVnicResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vtep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vtep"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVtep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vni"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vni"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVni(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_profile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortProfile(refVal);
        }
    }
    return ok;
}


std::string InstanceVnicResp::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void InstanceVnicResp::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool InstanceVnicResp::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void InstanceVnicResp::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::string InstanceVnicResp::getDeviceId() const
{
    return deviceId_;
}

void InstanceVnicResp::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool InstanceVnicResp::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void InstanceVnicResp::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string InstanceVnicResp::getDeviceOwner() const
{
    return deviceOwner_;
}

void InstanceVnicResp::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool InstanceVnicResp::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void InstanceVnicResp::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string InstanceVnicResp::getVpcId() const
{
    return vpcId_;
}

void InstanceVnicResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool InstanceVnicResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void InstanceVnicResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string InstanceVnicResp::getPortId() const
{
    return portId_;
}

void InstanceVnicResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool InstanceVnicResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void InstanceVnicResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string InstanceVnicResp::getMac() const
{
    return mac_;
}

void InstanceVnicResp::setMac(const std::string& value)
{
    mac_ = value;
    macIsSet_ = true;
}

bool InstanceVnicResp::macIsSet() const
{
    return macIsSet_;
}

void InstanceVnicResp::unsetmac()
{
    macIsSet_ = false;
}

std::string InstanceVnicResp::getVtep() const
{
    return vtep_;
}

void InstanceVnicResp::setVtep(const std::string& value)
{
    vtep_ = value;
    vtepIsSet_ = true;
}

bool InstanceVnicResp::vtepIsSet() const
{
    return vtepIsSet_;
}

void InstanceVnicResp::unsetvtep()
{
    vtepIsSet_ = false;
}

std::string InstanceVnicResp::getVni() const
{
    return vni_;
}

void InstanceVnicResp::setVni(const std::string& value)
{
    vni_ = value;
    vniIsSet_ = true;
}

bool InstanceVnicResp::vniIsSet() const
{
    return vniIsSet_;
}

void InstanceVnicResp::unsetvni()
{
    vniIsSet_ = false;
}

std::string InstanceVnicResp::getInstanceId() const
{
    return instanceId_;
}

void InstanceVnicResp::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceVnicResp::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceVnicResp::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceVnicResp::getInstanceType() const
{
    return instanceType_;
}

void InstanceVnicResp::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool InstanceVnicResp::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void InstanceVnicResp::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string InstanceVnicResp::getPortProfile() const
{
    return portProfile_;
}

void InstanceVnicResp::setPortProfile(const std::string& value)
{
    portProfile_ = value;
    portProfileIsSet_ = true;
}

bool InstanceVnicResp::portProfileIsSet() const
{
    return portProfileIsSet_;
}

void InstanceVnicResp::unsetportProfile()
{
    portProfileIsSet_ = false;
}

}
}
}
}
}


