

#include "huaweicloud/ecs/v2/model/VolumeAttach.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




VolumeAttach::VolumeAttach()
{
    id_ = "";
    idIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
    bootIndex_ = "";
    bootIndexIsSet_ = false;
}

VolumeAttach::~VolumeAttach() = default;

void VolumeAttach::validate()
{
}

web::json::value VolumeAttach::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(bootIndexIsSet_) {
        val[utility::conversions::to_string_t("bootIndex")] = ModelBase::toJson(bootIndex_);
    }

    return val;
}
bool VolumeAttach::fromJson(const web::json::value& val)
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bootIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootIndex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootIndex(refVal);
        }
    }
    return ok;
}


std::string VolumeAttach::getId() const
{
    return id_;
}

void VolumeAttach::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeAttach::idIsSet() const
{
    return idIsSet_;
}

void VolumeAttach::unsetid()
{
    idIsSet_ = false;
}

bool VolumeAttach::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void VolumeAttach::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool VolumeAttach::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void VolumeAttach::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

std::string VolumeAttach::getDevice() const
{
    return device_;
}

void VolumeAttach::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool VolumeAttach::deviceIsSet() const
{
    return deviceIsSet_;
}

void VolumeAttach::unsetdevice()
{
    deviceIsSet_ = false;
}

std::string VolumeAttach::getBootIndex() const
{
    return bootIndex_;
}

void VolumeAttach::setBootIndex(const std::string& value)
{
    bootIndex_ = value;
    bootIndexIsSet_ = true;
}

bool VolumeAttach::bootIndexIsSet() const
{
    return bootIndexIsSet_;
}

void VolumeAttach::unsetbootIndex()
{
    bootIndexIsSet_ = false;
}

}
}
}
}
}


