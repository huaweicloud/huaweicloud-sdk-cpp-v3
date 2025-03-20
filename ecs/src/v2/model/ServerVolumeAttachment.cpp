

#include "huaweicloud/ecs/v2/model/ServerVolumeAttachment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerVolumeAttachment::ServerVolumeAttachment()
{
    device_ = "";
    deviceIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

ServerVolumeAttachment::~ServerVolumeAttachment() = default;

void ServerVolumeAttachment::validate()
{
}

web::json::value ServerVolumeAttachment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("serverId")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volumeId")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool ServerVolumeAttachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("serverId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
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
    return ok;
}


std::string ServerVolumeAttachment::getDevice() const
{
    return device_;
}

void ServerVolumeAttachment::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ServerVolumeAttachment::deviceIsSet() const
{
    return deviceIsSet_;
}

void ServerVolumeAttachment::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string ServerVolumeAttachment::getId() const
{
    return id_;
}

void ServerVolumeAttachment::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerVolumeAttachment::idIsSet() const
{
    return idIsSet_;
}

void ServerVolumeAttachment::unsetid()
{
    idIsSet_ = false;
}

std::string ServerVolumeAttachment::getServerId() const
{
    return serverId_;
}

void ServerVolumeAttachment::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ServerVolumeAttachment::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ServerVolumeAttachment::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string ServerVolumeAttachment::getVolumeId() const
{
    return volumeId_;
}

void ServerVolumeAttachment::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ServerVolumeAttachment::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ServerVolumeAttachment::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


