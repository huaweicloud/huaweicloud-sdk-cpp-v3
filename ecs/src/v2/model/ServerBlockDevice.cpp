

#include "huaweicloud/ecs/v2/model/ServerBlockDevice.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerBlockDevice::ServerBlockDevice()
{
    bootIndex_ = 0;
    bootIndexIsSet_ = false;
    pciAddress_ = "";
    pciAddressIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    bus_ = "";
    busIsSet_ = false;
}

ServerBlockDevice::~ServerBlockDevice() = default;

void ServerBlockDevice::validate()
{
}

web::json::value ServerBlockDevice::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bootIndexIsSet_) {
        val[utility::conversions::to_string_t("bootIndex")] = ModelBase::toJson(bootIndex_);
    }
    if(pciAddressIsSet_) {
        val[utility::conversions::to_string_t("pciAddress")] = ModelBase::toJson(pciAddress_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volumeId")] = ModelBase::toJson(volumeId_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("serverId")] = ModelBase::toJson(serverId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(busIsSet_) {
        val[utility::conversions::to_string_t("bus")] = ModelBase::toJson(bus_);
    }

    return val;
}

bool ServerBlockDevice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bootIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootIndex"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pciAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pciAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serverId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBus(refVal);
        }
    }
    return ok;
}


int32_t ServerBlockDevice::getBootIndex() const
{
    return bootIndex_;
}

void ServerBlockDevice::setBootIndex(int32_t value)
{
    bootIndex_ = value;
    bootIndexIsSet_ = true;
}

bool ServerBlockDevice::bootIndexIsSet() const
{
    return bootIndexIsSet_;
}

void ServerBlockDevice::unsetbootIndex()
{
    bootIndexIsSet_ = false;
}

std::string ServerBlockDevice::getPciAddress() const
{
    return pciAddress_;
}

void ServerBlockDevice::setPciAddress(const std::string& value)
{
    pciAddress_ = value;
    pciAddressIsSet_ = true;
}

bool ServerBlockDevice::pciAddressIsSet() const
{
    return pciAddressIsSet_;
}

void ServerBlockDevice::unsetpciAddress()
{
    pciAddressIsSet_ = false;
}

std::string ServerBlockDevice::getVolumeId() const
{
    return volumeId_;
}

void ServerBlockDevice::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ServerBlockDevice::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ServerBlockDevice::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string ServerBlockDevice::getDevice() const
{
    return device_;
}

void ServerBlockDevice::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ServerBlockDevice::deviceIsSet() const
{
    return deviceIsSet_;
}

void ServerBlockDevice::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string ServerBlockDevice::getServerId() const
{
    return serverId_;
}

void ServerBlockDevice::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ServerBlockDevice::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ServerBlockDevice::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string ServerBlockDevice::getId() const
{
    return id_;
}

void ServerBlockDevice::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerBlockDevice::idIsSet() const
{
    return idIsSet_;
}

void ServerBlockDevice::unsetid()
{
    idIsSet_ = false;
}

int32_t ServerBlockDevice::getSize() const
{
    return size_;
}

void ServerBlockDevice::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ServerBlockDevice::sizeIsSet() const
{
    return sizeIsSet_;
}

void ServerBlockDevice::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ServerBlockDevice::getBus() const
{
    return bus_;
}

void ServerBlockDevice::setBus(const std::string& value)
{
    bus_ = value;
    busIsSet_ = true;
}

bool ServerBlockDevice::busIsSet() const
{
    return busIsSet_;
}

void ServerBlockDevice::unsetbus()
{
    busIsSet_ = false;
}

}
}
}
}
}


