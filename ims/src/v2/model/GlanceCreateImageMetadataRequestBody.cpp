

#include "huaweicloud/ims/v2/model/GlanceCreateImageMetadataRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceCreateImageMetadataRequestBody::GlanceCreateImageMetadataRequestBody()
{
    osVersion_ = "";
    osVersionIsSet_ = false;
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    minRam_ = 0;
    minRamIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    tagsIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
}

GlanceCreateImageMetadataRequestBody::~GlanceCreateImageMetadataRequestBody() = default;

void GlanceCreateImageMetadataRequestBody::validate()
{
}

web::json::value GlanceCreateImageMetadataRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("__os_version")] = ModelBase::toJson(osVersion_);
    }
    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(minRamIsSet_) {
        val[utility::conversions::to_string_t("min_ram")] = ModelBase::toJson(minRam_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protectedIsSet_) {
        val[utility::conversions::to_string_t("protected")] = ModelBase::toJson(protected_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }

    return val;
}

bool GlanceCreateImageMetadataRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("min_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    return ok;
}


std::string GlanceCreateImageMetadataRequestBody::getOsVersion() const
{
    return osVersion_;
}

void GlanceCreateImageMetadataRequestBody::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string GlanceCreateImageMetadataRequestBody::getContainerFormat() const
{
    return containerFormat_;
}

void GlanceCreateImageMetadataRequestBody::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string GlanceCreateImageMetadataRequestBody::getDiskFormat() const
{
    return diskFormat_;
}

void GlanceCreateImageMetadataRequestBody::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

int32_t GlanceCreateImageMetadataRequestBody::getMinDisk() const
{
    return minDisk_;
}

void GlanceCreateImageMetadataRequestBody::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t GlanceCreateImageMetadataRequestBody::getMinRam() const
{
    return minRam_;
}

void GlanceCreateImageMetadataRequestBody::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::minRamIsSet() const
{
    return minRamIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string GlanceCreateImageMetadataRequestBody::getName() const
{
    return name_;
}

void GlanceCreateImageMetadataRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetname()
{
    nameIsSet_ = false;
}

bool GlanceCreateImageMetadataRequestBody::isProtected() const
{
    return protected_;
}

void GlanceCreateImageMetadataRequestBody::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::protectedIsSet() const
{
    return protectedIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetprotected()
{
    protectedIsSet_ = false;
}

std::vector<std::string>& GlanceCreateImageMetadataRequestBody::getTags()
{
    return tags_;
}

void GlanceCreateImageMetadataRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string GlanceCreateImageMetadataRequestBody::getVisibility() const
{
    return visibility_;
}

void GlanceCreateImageMetadataRequestBody::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GlanceCreateImageMetadataRequestBody::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GlanceCreateImageMetadataRequestBody::unsetvisibility()
{
    visibilityIsSet_ = false;
}

}
}
}
}
}


