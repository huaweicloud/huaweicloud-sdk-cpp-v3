

#include "huaweicloud/ecs/v2/model/NovaServerBlockDeviceMapping.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerBlockDeviceMapping::NovaServerBlockDeviceMapping()
{
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    destinationType_ = "";
    destinationTypeIsSet_ = false;
    guestFormat_ = "";
    guestFormatIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
    bootIndex_ = "";
    bootIndexIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
}

NovaServerBlockDeviceMapping::~NovaServerBlockDeviceMapping() = default;

void NovaServerBlockDeviceMapping::validate()
{
}

web::json::value NovaServerBlockDeviceMapping::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(destinationTypeIsSet_) {
        val[utility::conversions::to_string_t("destination_type")] = ModelBase::toJson(destinationType_);
    }
    if(guestFormatIsSet_) {
        val[utility::conversions::to_string_t("guest_format")] = ModelBase::toJson(guestFormat_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }
    if(bootIndexIsSet_) {
        val[utility::conversions::to_string_t("boot_index")] = ModelBase::toJson(bootIndex_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }

    return val;
}

bool NovaServerBlockDeviceMapping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guest_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guest_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("boot_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("boot_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    return ok;
}


std::string NovaServerBlockDeviceMapping::getSourceType() const
{
    return sourceType_;
}

void NovaServerBlockDeviceMapping::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void NovaServerBlockDeviceMapping::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getDestinationType() const
{
    return destinationType_;
}

void NovaServerBlockDeviceMapping::setDestinationType(const std::string& value)
{
    destinationType_ = value;
    destinationTypeIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::destinationTypeIsSet() const
{
    return destinationTypeIsSet_;
}

void NovaServerBlockDeviceMapping::unsetdestinationType()
{
    destinationTypeIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getGuestFormat() const
{
    return guestFormat_;
}

void NovaServerBlockDeviceMapping::setGuestFormat(const std::string& value)
{
    guestFormat_ = value;
    guestFormatIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::guestFormatIsSet() const
{
    return guestFormatIsSet_;
}

void NovaServerBlockDeviceMapping::unsetguestFormat()
{
    guestFormatIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getDeviceName() const
{
    return deviceName_;
}

void NovaServerBlockDeviceMapping::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void NovaServerBlockDeviceMapping::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

bool NovaServerBlockDeviceMapping::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void NovaServerBlockDeviceMapping::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void NovaServerBlockDeviceMapping::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getBootIndex() const
{
    return bootIndex_;
}

void NovaServerBlockDeviceMapping::setBootIndex(const std::string& value)
{
    bootIndex_ = value;
    bootIndexIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::bootIndexIsSet() const
{
    return bootIndexIsSet_;
}

void NovaServerBlockDeviceMapping::unsetbootIndex()
{
    bootIndexIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getUuid() const
{
    return uuid_;
}

void NovaServerBlockDeviceMapping::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::uuidIsSet() const
{
    return uuidIsSet_;
}

void NovaServerBlockDeviceMapping::unsetuuid()
{
    uuidIsSet_ = false;
}

int32_t NovaServerBlockDeviceMapping::getVolumeSize() const
{
    return volumeSize_;
}

void NovaServerBlockDeviceMapping::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void NovaServerBlockDeviceMapping::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string NovaServerBlockDeviceMapping::getVolumeType() const
{
    return volumeType_;
}

void NovaServerBlockDeviceMapping::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool NovaServerBlockDeviceMapping::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void NovaServerBlockDeviceMapping::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

}
}
}
}
}


