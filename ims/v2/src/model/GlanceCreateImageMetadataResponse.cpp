

#include "huaweicloud/ims/model/GlanceCreateImageMetadataResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceCreateImageMetadataResponse::GlanceCreateImageMetadataResponse()
{
    visibility_ = "";
    visibilityIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    tagsIsSet_ = false;
    minRam_ = 0;
    minRamIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    self_ = "";
    selfIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    file_ = "";
    fileIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    imageSourceType_ = "";
    imageSourceTypeIsSet_ = false;
    imageSize_ = "";
    imageSizeIsSet_ = false;
    isregistered_ = "";
    isregisteredIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    osBit_ = "";
    osBitIsSet_ = false;
    imagetype_ = "";
    imagetypeIsSet_ = false;
    virtualEnvType_ = "";
    virtualEnvTypeIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    virtualSize_ = 0;
    virtualSizeIsSet_ = false;
    propertiesIsSet_ = false;
}

GlanceCreateImageMetadataResponse::~GlanceCreateImageMetadataResponse() = default;

void GlanceCreateImageMetadataResponse::validate()
{
}

web::json::value GlanceCreateImageMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protectedIsSet_) {
        val[utility::conversions::to_string_t("protected")] = ModelBase::toJson(protected_);
    }
    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(minRamIsSet_) {
        val[utility::conversions::to_string_t("min_ram")] = ModelBase::toJson(minRam_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(selfIsSet_) {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(self_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fileIsSet_) {
        val[utility::conversions::to_string_t("file")] = ModelBase::toJson(file_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(imageSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("__image_source_type")] = ModelBase::toJson(imageSourceType_);
    }
    if(imageSizeIsSet_) {
        val[utility::conversions::to_string_t("__image_size")] = ModelBase::toJson(imageSize_);
    }
    if(isregisteredIsSet_) {
        val[utility::conversions::to_string_t("__isregistered")] = ModelBase::toJson(isregistered_);
    }
    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("__os_version")] = ModelBase::toJson(osVersion_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("__os_type")] = ModelBase::toJson(osType_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("__platform")] = ModelBase::toJson(platform_);
    }
    if(osBitIsSet_) {
        val[utility::conversions::to_string_t("__os_bit")] = ModelBase::toJson(osBit_);
    }
    if(imagetypeIsSet_) {
        val[utility::conversions::to_string_t("__imagetype")] = ModelBase::toJson(imagetype_);
    }
    if(virtualEnvTypeIsSet_) {
        val[utility::conversions::to_string_t("virtual_env_type")] = ModelBase::toJson(virtualEnvType_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(virtualSizeIsSet_) {
        val[utility::conversions::to_string_t("virtual_size")] = ModelBase::toJson(virtualSize_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}

bool GlanceCreateImageMetadataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinDisk(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("self"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelf(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__image_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__isregistered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__isregistered"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsregistered(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_bit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_bit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsBit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__imagetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__imagetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_env_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualEnvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


std::string GlanceCreateImageMetadataResponse::getVisibility() const
{
    return visibility_;
}

void GlanceCreateImageMetadataResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getName() const
{
    return name_;
}

void GlanceCreateImageMetadataResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetname()
{
    nameIsSet_ = false;
}

bool GlanceCreateImageMetadataResponse::isProtected() const
{
    return protected_;
}

void GlanceCreateImageMetadataResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getContainerFormat() const
{
    return containerFormat_;
}

void GlanceCreateImageMetadataResponse::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getDiskFormat() const
{
    return diskFormat_;
}

void GlanceCreateImageMetadataResponse::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::vector<std::string>& GlanceCreateImageMetadataResponse::getTags()
{
    return tags_;
}

void GlanceCreateImageMetadataResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void GlanceCreateImageMetadataResponse::unsettags()
{
    tagsIsSet_ = false;
}

int32_t GlanceCreateImageMetadataResponse::getMinRam() const
{
    return minRam_;
}

void GlanceCreateImageMetadataResponse::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::minRamIsSet() const
{
    return minRamIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetminRam()
{
    minRamIsSet_ = false;
}

int32_t GlanceCreateImageMetadataResponse::getMinDisk() const
{
    return minDisk_;
}

void GlanceCreateImageMetadataResponse::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetminDisk()
{
    minDiskIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getStatus() const
{
    return status_;
}

void GlanceCreateImageMetadataResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getCreatedAt() const
{
    return createdAt_;
}

void GlanceCreateImageMetadataResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceCreateImageMetadataResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getSelf() const
{
    return self_;
}

void GlanceCreateImageMetadataResponse::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::selfIsSet() const
{
    return selfIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetself()
{
    selfIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getId() const
{
    return id_;
}

void GlanceCreateImageMetadataResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::idIsSet() const
{
    return idIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getFile() const
{
    return file_;
}

void GlanceCreateImageMetadataResponse::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::fileIsSet() const
{
    return fileIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetfile()
{
    fileIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getSchema() const
{
    return schema_;
}

void GlanceCreateImageMetadataResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getImageSourceType() const
{
    return imageSourceType_;
}

void GlanceCreateImageMetadataResponse::setImageSourceType(const std::string& value)
{
    imageSourceType_ = value;
    imageSourceTypeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::imageSourceTypeIsSet() const
{
    return imageSourceTypeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetimageSourceType()
{
    imageSourceTypeIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getImageSize() const
{
    return imageSize_;
}

void GlanceCreateImageMetadataResponse::setImageSize(const std::string& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getIsregistered() const
{
    return isregistered_;
}

void GlanceCreateImageMetadataResponse::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getOsVersion() const
{
    return osVersion_;
}

void GlanceCreateImageMetadataResponse::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getOsType() const
{
    return osType_;
}

void GlanceCreateImageMetadataResponse::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getPlatform() const
{
    return platform_;
}

void GlanceCreateImageMetadataResponse::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::platformIsSet() const
{
    return platformIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetplatform()
{
    platformIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getOsBit() const
{
    return osBit_;
}

void GlanceCreateImageMetadataResponse::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::osBitIsSet() const
{
    return osBitIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getImagetype() const
{
    return imagetype_;
}

void GlanceCreateImageMetadataResponse::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void GlanceCreateImageMetadataResponse::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

std::string GlanceCreateImageMetadataResponse::getOwner() const
{
    return owner_;
}

void GlanceCreateImageMetadataResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetowner()
{
    ownerIsSet_ = false;
}

int32_t GlanceCreateImageMetadataResponse::getVirtualSize() const
{
    return virtualSize_;
}

void GlanceCreateImageMetadataResponse::setVirtualSize(int32_t value)
{
    virtualSize_ = value;
    virtualSizeIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::virtualSizeIsSet() const
{
    return virtualSizeIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetvirtualSize()
{
    virtualSizeIsSet_ = false;
}

Object GlanceCreateImageMetadataResponse::getProperties() const
{
    return properties_;
}

void GlanceCreateImageMetadataResponse::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool GlanceCreateImageMetadataResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void GlanceCreateImageMetadataResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


