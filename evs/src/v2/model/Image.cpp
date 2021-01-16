

#include "huaweicloud/evs/v2/model/Image.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Image::Image()
{
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    displayDescription_ = "";
    displayDescriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    volumeTypeIsSet_ = false;
}

Image::~Image() = default;

void Image::validate()
{
}

web::json::value Image::toJson() const
{
    web::json::value val = web::json::value::object();

    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(displayDescriptionIsSet_) {
        val[utility::conversions::to_string_t("display_description")] = ModelBase::toJson(displayDescription_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }

    return val;
}

bool Image::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("container_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            VolumeType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    return ok;
}


std::string Image::getContainerFormat() const
{
    return containerFormat_;
}

void Image::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool Image::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void Image::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string Image::getDiskFormat() const
{
    return diskFormat_;
}

void Image::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool Image::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void Image::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string Image::getDisplayDescription() const
{
    return displayDescription_;
}

void Image::setDisplayDescription(const std::string& value)
{
    displayDescription_ = value;
    displayDescriptionIsSet_ = true;
}

bool Image::displayDescriptionIsSet() const
{
    return displayDescriptionIsSet_;
}

void Image::unsetdisplayDescription()
{
    displayDescriptionIsSet_ = false;
}

std::string Image::getId() const
{
    return id_;
}

void Image::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Image::idIsSet() const
{
    return idIsSet_;
}

void Image::unsetid()
{
    idIsSet_ = false;
}

std::string Image::getImageId() const
{
    return imageId_;
}

void Image::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool Image::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void Image::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string Image::getImageName() const
{
    return imageName_;
}

void Image::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool Image::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void Image::unsetimageName()
{
    imageNameIsSet_ = false;
}

int32_t Image::getSize() const
{
    return size_;
}

void Image::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Image::sizeIsSet() const
{
    return sizeIsSet_;
}

void Image::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Image::getStatus() const
{
    return status_;
}

void Image::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Image::statusIsSet() const
{
    return statusIsSet_;
}

void Image::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Image::getUpdatedAt() const
{
    return updatedAt_;
}

void Image::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool Image::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void Image::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

VolumeType Image::getVolumeType() const
{
    return volumeType_;
}

void Image::setVolumeType(const VolumeType& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool Image::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void Image::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

}
}
}
}
}


