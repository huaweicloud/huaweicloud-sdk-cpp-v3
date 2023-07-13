

#include "huaweicloud/ecs/v2/model/ServerExtendVolumeAttachment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerExtendVolumeAttachment::ServerExtendVolumeAttachment()
{
    id_ = "";
    idIsSet_ = false;
    deleteOnTermination_ = "";
    deleteOnTerminationIsSet_ = false;
    bootIndex_ = "";
    bootIndexIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
}

ServerExtendVolumeAttachment::~ServerExtendVolumeAttachment() = default;

void ServerExtendVolumeAttachment::validate()
{
}

web::json::value ServerExtendVolumeAttachment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }
    if(bootIndexIsSet_) {
        val[utility::conversions::to_string_t("bootIndex")] = ModelBase::toJson(bootIndex_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }

    return val;
}

bool ServerExtendVolumeAttachment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bootIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootIndex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootIndex(refVal);
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
    return ok;
}

std::string ServerExtendVolumeAttachment::getId() const
{
    return id_;
}

void ServerExtendVolumeAttachment::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerExtendVolumeAttachment::idIsSet() const
{
    return idIsSet_;
}

void ServerExtendVolumeAttachment::unsetid()
{
    idIsSet_ = false;
}

std::string ServerExtendVolumeAttachment::getDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void ServerExtendVolumeAttachment::setDeleteOnTermination(const std::string& value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool ServerExtendVolumeAttachment::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void ServerExtendVolumeAttachment::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

std::string ServerExtendVolumeAttachment::getBootIndex() const
{
    return bootIndex_;
}

void ServerExtendVolumeAttachment::setBootIndex(const std::string& value)
{
    bootIndex_ = value;
    bootIndexIsSet_ = true;
}

bool ServerExtendVolumeAttachment::bootIndexIsSet() const
{
    return bootIndexIsSet_;
}

void ServerExtendVolumeAttachment::unsetbootIndex()
{
    bootIndexIsSet_ = false;
}

std::string ServerExtendVolumeAttachment::getDevice() const
{
    return device_;
}

void ServerExtendVolumeAttachment::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool ServerExtendVolumeAttachment::deviceIsSet() const
{
    return deviceIsSet_;
}

void ServerExtendVolumeAttachment::unsetdevice()
{
    deviceIsSet_ = false;
}

}
}
}
}
}


