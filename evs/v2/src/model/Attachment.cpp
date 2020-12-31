

#include "huaweicloud/evs/model/Attachment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Attachment::Attachment()
{
    attachedAt_ = "";
    attachedAtIsSet_ = false;
    attachmentId_ = "";
    attachmentIdIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

Attachment::~Attachment() = default;

void Attachment::validate()
{
}

web::json::value Attachment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachedAtIsSet_) {
        val[utility::conversions::to_string_t("attached_at")] = ModelBase::toJson(attachedAt_);
    }
    if(attachmentIdIsSet_) {
        val[utility::conversions::to_string_t("attachment_id")] = ModelBase::toJson(attachmentId_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool Attachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attached_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attached_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string Attachment::getAttachedAt() const
{
    return attachedAt_;
}

void Attachment::setAttachedAt(const std::string& value)
{
    attachedAt_ = value;
    attachedAtIsSet_ = true;
}

bool Attachment::attachedAtIsSet() const
{
    return attachedAtIsSet_;
}

void Attachment::unsetattachedAt()
{
    attachedAtIsSet_ = false;
}

std::string Attachment::getAttachmentId() const
{
    return attachmentId_;
}

void Attachment::setAttachmentId(const std::string& value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool Attachment::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void Attachment::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

std::string Attachment::getDevice() const
{
    return device_;
}

void Attachment::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool Attachment::deviceIsSet() const
{
    return deviceIsSet_;
}

void Attachment::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string Attachment::getHostName() const
{
    return hostName_;
}

void Attachment::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool Attachment::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void Attachment::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string Attachment::getId() const
{
    return id_;
}

void Attachment::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Attachment::idIsSet() const
{
    return idIsSet_;
}

void Attachment::unsetid()
{
    idIsSet_ = false;
}

std::string Attachment::getServerId() const
{
    return serverId_;
}

void Attachment::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool Attachment::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void Attachment::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string Attachment::getVolumeId() const
{
    return volumeId_;
}

void Attachment::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool Attachment::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void Attachment::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


