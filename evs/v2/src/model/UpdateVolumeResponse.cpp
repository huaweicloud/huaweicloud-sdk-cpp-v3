

#include "huaweicloud/evs/model/UpdateVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateVolumeResponse::UpdateVolumeResponse()
{
    attachmentsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    bootable_ = "";
    bootableIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    metadataIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    osVolHostAttrhost_ = "";
    osVolHostAttrhostIsSet_ = false;
    osVolTenantAttrtenantId_ = "";
    osVolTenantAttrtenantIdIsSet_ = false;
    shareable_ = "";
    shareableIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    sourceVolid_ = "";
    sourceVolidIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeImageMetadataIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    osVolumeReplicationextendedStatus_ = "";
    osVolumeReplicationextendedStatusIsSet_ = false;
}

UpdateVolumeResponse::~UpdateVolumeResponse() = default;

void UpdateVolumeResponse::validate()
{
}

web::json::value UpdateVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(bootableIsSet_) {
        val[utility::conversions::to_string_t("bootable")] = ModelBase::toJson(bootable_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(osVolHostAttrhostIsSet_) {
        val[utility::conversions::to_string_t("os-vol-host-attr:host")] = ModelBase::toJson(osVolHostAttrhost_);
    }
    if(osVolTenantAttrtenantIdIsSet_) {
        val[utility::conversions::to_string_t("os-vol-tenant-attr:tenant_id")] = ModelBase::toJson(osVolTenantAttrtenantId_);
    }
    if(shareableIsSet_) {
        val[utility::conversions::to_string_t("shareable")] = ModelBase::toJson(shareable_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(sourceVolidIsSet_) {
        val[utility::conversions::to_string_t("source_volid")] = ModelBase::toJson(sourceVolid_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeImageMetadataIsSet_) {
        val[utility::conversions::to_string_t("volume_image_metadata")] = ModelBase::toJson(volumeImageMetadata_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(osVolumeReplicationextendedStatusIsSet_) {
        val[utility::conversions::to_string_t("os-volume-replication:extended_status")] = ModelBase::toJson(osVolumeReplicationextendedStatus_);
    }

    return val;
}

bool UpdateVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachments"));
        if(!fieldValue.is_null())
        {
            std::vector<Attachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bootable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            VolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiattach"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiattach"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiattach(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os-vol-host-attr:host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-host-attr:host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolHostAttrhost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-vol-tenant-attr:tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-tenant-attr:tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolTenantAttrtenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shareable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_volid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_volid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVolid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_image_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_image_metadata"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeImageMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-volume-replication:extended_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-volume-replication:extended_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolumeReplicationextendedStatus(refVal);
        }
    }
    return ok;
}


std::vector<Attachment>& UpdateVolumeResponse::getAttachments()
{
    return attachments_;
}

void UpdateVolumeResponse::setAttachments(const std::vector<Attachment>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool UpdateVolumeResponse::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void UpdateVolumeResponse::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::string UpdateVolumeResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void UpdateVolumeResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool UpdateVolumeResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void UpdateVolumeResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string UpdateVolumeResponse::getBootable() const
{
    return bootable_;
}

void UpdateVolumeResponse::setBootable(const std::string& value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool UpdateVolumeResponse::bootableIsSet() const
{
    return bootableIsSet_;
}

void UpdateVolumeResponse::unsetbootable()
{
    bootableIsSet_ = false;
}

std::string UpdateVolumeResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateVolumeResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateVolumeResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateVolumeResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateVolumeResponse::getId() const
{
    return id_;
}

void UpdateVolumeResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateVolumeResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateVolumeResponse::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& UpdateVolumeResponse::getLinks()
{
    return links_;
}

void UpdateVolumeResponse::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool UpdateVolumeResponse::linksIsSet() const
{
    return linksIsSet_;
}

void UpdateVolumeResponse::unsetlinks()
{
    linksIsSet_ = false;
}

VolumeMetadata UpdateVolumeResponse::getMetadata() const
{
    return metadata_;
}

void UpdateVolumeResponse::setMetadata(const VolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateVolumeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateVolumeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

bool UpdateVolumeResponse::isMultiattach() const
{
    return multiattach_;
}

void UpdateVolumeResponse::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool UpdateVolumeResponse::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void UpdateVolumeResponse::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

std::string UpdateVolumeResponse::getName() const
{
    return name_;
}

void UpdateVolumeResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateVolumeResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateVolumeResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateVolumeResponse::getOsVolHostAttrhost() const
{
    return osVolHostAttrhost_;
}

void UpdateVolumeResponse::setOsVolHostAttrhost(const std::string& value)
{
    osVolHostAttrhost_ = value;
    osVolHostAttrhostIsSet_ = true;
}

bool UpdateVolumeResponse::osVolHostAttrhostIsSet() const
{
    return osVolHostAttrhostIsSet_;
}

void UpdateVolumeResponse::unsetosVolHostAttrhost()
{
    osVolHostAttrhostIsSet_ = false;
}

std::string UpdateVolumeResponse::getOsVolTenantAttrtenantId() const
{
    return osVolTenantAttrtenantId_;
}

void UpdateVolumeResponse::setOsVolTenantAttrtenantId(const std::string& value)
{
    osVolTenantAttrtenantId_ = value;
    osVolTenantAttrtenantIdIsSet_ = true;
}

bool UpdateVolumeResponse::osVolTenantAttrtenantIdIsSet() const
{
    return osVolTenantAttrtenantIdIsSet_;
}

void UpdateVolumeResponse::unsetosVolTenantAttrtenantId()
{
    osVolTenantAttrtenantIdIsSet_ = false;
}

std::string UpdateVolumeResponse::getShareable() const
{
    return shareable_;
}

void UpdateVolumeResponse::setShareable(const std::string& value)
{
    shareable_ = value;
    shareableIsSet_ = true;
}

bool UpdateVolumeResponse::shareableIsSet() const
{
    return shareableIsSet_;
}

void UpdateVolumeResponse::unsetshareable()
{
    shareableIsSet_ = false;
}

int32_t UpdateVolumeResponse::getSize() const
{
    return size_;
}

void UpdateVolumeResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdateVolumeResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdateVolumeResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string UpdateVolumeResponse::getSnapshotId() const
{
    return snapshotId_;
}

void UpdateVolumeResponse::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool UpdateVolumeResponse::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void UpdateVolumeResponse::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

std::string UpdateVolumeResponse::getSourceVolid() const
{
    return sourceVolid_;
}

void UpdateVolumeResponse::setSourceVolid(const std::string& value)
{
    sourceVolid_ = value;
    sourceVolidIsSet_ = true;
}

bool UpdateVolumeResponse::sourceVolidIsSet() const
{
    return sourceVolidIsSet_;
}

void UpdateVolumeResponse::unsetsourceVolid()
{
    sourceVolidIsSet_ = false;
}

std::string UpdateVolumeResponse::getStatus() const
{
    return status_;
}

void UpdateVolumeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateVolumeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateVolumeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object UpdateVolumeResponse::getVolumeImageMetadata() const
{
    return volumeImageMetadata_;
}

void UpdateVolumeResponse::setVolumeImageMetadata(const Object& value)
{
    volumeImageMetadata_ = value;
    volumeImageMetadataIsSet_ = true;
}

bool UpdateVolumeResponse::volumeImageMetadataIsSet() const
{
    return volumeImageMetadataIsSet_;
}

void UpdateVolumeResponse::unsetvolumeImageMetadata()
{
    volumeImageMetadataIsSet_ = false;
}

std::string UpdateVolumeResponse::getVolumeType() const
{
    return volumeType_;
}

void UpdateVolumeResponse::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool UpdateVolumeResponse::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void UpdateVolumeResponse::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string UpdateVolumeResponse::getDescription() const
{
    return description_;
}

void UpdateVolumeResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVolumeResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVolumeResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateVolumeResponse::getOsVolumeReplicationextendedStatus() const
{
    return osVolumeReplicationextendedStatus_;
}

void UpdateVolumeResponse::setOsVolumeReplicationextendedStatus(const std::string& value)
{
    osVolumeReplicationextendedStatus_ = value;
    osVolumeReplicationextendedStatusIsSet_ = true;
}

bool UpdateVolumeResponse::osVolumeReplicationextendedStatusIsSet() const
{
    return osVolumeReplicationextendedStatusIsSet_;
}

void UpdateVolumeResponse::unsetosVolumeReplicationextendedStatus()
{
    osVolumeReplicationextendedStatusIsSet_ = false;
}

}
}
}
}
}


