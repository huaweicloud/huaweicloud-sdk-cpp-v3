

#include "huaweicloud/eip/v3/model/VnicInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




VnicInfo::VnicInfo()
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
    portProfile_ = "";
    portProfileIsSet_ = false;
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
}

VnicInfo::~VnicInfo() = default;

void VnicInfo::validate()
{
}

web::json::value VnicInfo::toJson() const
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
    if(portProfileIsSet_) {
        val[utility::conversions::to_string_t("port_profile")] = ModelBase::toJson(portProfile_);
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

    return val;
}

bool VnicInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("port_profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_profile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortProfile(refVal);
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
    return ok;
}

std::string VnicInfo::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void VnicInfo::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool VnicInfo::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void VnicInfo::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::string VnicInfo::getDeviceId() const
{
    return deviceId_;
}

void VnicInfo::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool VnicInfo::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void VnicInfo::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string VnicInfo::getDeviceOwner() const
{
    return deviceOwner_;
}

void VnicInfo::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool VnicInfo::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void VnicInfo::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string VnicInfo::getVpcId() const
{
    return vpcId_;
}

void VnicInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VnicInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VnicInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VnicInfo::getPortId() const
{
    return portId_;
}

void VnicInfo::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool VnicInfo::portIdIsSet() const
{
    return portIdIsSet_;
}

void VnicInfo::unsetportId()
{
    portIdIsSet_ = false;
}

std::string VnicInfo::getPortProfile() const
{
    return portProfile_;
}

void VnicInfo::setPortProfile(const std::string& value)
{
    portProfile_ = value;
    portProfileIsSet_ = true;
}

bool VnicInfo::portProfileIsSet() const
{
    return portProfileIsSet_;
}

void VnicInfo::unsetportProfile()
{
    portProfileIsSet_ = false;
}

std::string VnicInfo::getMac() const
{
    return mac_;
}

void VnicInfo::setMac(const std::string& value)
{
    mac_ = value;
    macIsSet_ = true;
}

bool VnicInfo::macIsSet() const
{
    return macIsSet_;
}

void VnicInfo::unsetmac()
{
    macIsSet_ = false;
}

std::string VnicInfo::getVtep() const
{
    return vtep_;
}

void VnicInfo::setVtep(const std::string& value)
{
    vtep_ = value;
    vtepIsSet_ = true;
}

bool VnicInfo::vtepIsSet() const
{
    return vtepIsSet_;
}

void VnicInfo::unsetvtep()
{
    vtepIsSet_ = false;
}

std::string VnicInfo::getVni() const
{
    return vni_;
}

void VnicInfo::setVni(const std::string& value)
{
    vni_ = value;
    vniIsSet_ = true;
}

bool VnicInfo::vniIsSet() const
{
    return vniIsSet_;
}

void VnicInfo::unsetvni()
{
    vniIsSet_ = false;
}

std::string VnicInfo::getInstanceId() const
{
    return instanceId_;
}

void VnicInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool VnicInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void VnicInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string VnicInfo::getInstanceType() const
{
    return instanceType_;
}

void VnicInfo::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool VnicInfo::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void VnicInfo::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

}
}
}
}
}


