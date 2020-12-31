

#include "huaweicloud/evs/model/VolumeDetailForTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeDetailForTag::VolumeDetailForTag()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    attachmentsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    osVolHostAttrhost_ = "";
    osVolHostAttrhostIsSet_ = false;
    sourceVolid_ = "";
    sourceVolidIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    osVolTenantAttrtenantId_ = "";
    osVolTenantAttrtenantIdIsSet_ = false;
    volumeImageMetadataIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    consistencygroupId_ = "";
    consistencygroupIdIsSet_ = false;
    bootable_ = "";
    bootableIsSet_ = false;
    metadataIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    encrypted_ = false;
    encryptedIsSet_ = false;
    replicationStatus_ = "";
    replicationStatusIsSet_ = false;
    osVolumeReplicationextendedStatus_ = "";
    osVolumeReplicationextendedStatusIsSet_ = false;
    osVolMigStatusAttrmigstat_ = "";
    osVolMigStatusAttrmigstatIsSet_ = false;
    osVolMigStatusAttrnameId_ = "";
    osVolMigStatusAttrnameIdIsSet_ = false;
    shareable_ = false;
    shareableIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
    dedicatedStorageName_ = "";
    dedicatedStorageNameIsSet_ = false;
    tagsIsSet_ = false;
    wwn_ = "";
    wwnIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

VolumeDetailForTag::~VolumeDetailForTag() = default;

void VolumeDetailForTag::validate()
{
}

web::json::value VolumeDetailForTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(osVolHostAttrhostIsSet_) {
        val[utility::conversions::to_string_t("os-vol-host-attr:host")] = ModelBase::toJson(osVolHostAttrhost_);
    }
    if(sourceVolidIsSet_) {
        val[utility::conversions::to_string_t("source_volid")] = ModelBase::toJson(sourceVolid_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(osVolTenantAttrtenantIdIsSet_) {
        val[utility::conversions::to_string_t("os-vol-tenant-attr:tenant_id")] = ModelBase::toJson(osVolTenantAttrtenantId_);
    }
    if(volumeImageMetadataIsSet_) {
        val[utility::conversions::to_string_t("volume_image_metadata")] = ModelBase::toJson(volumeImageMetadata_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(consistencygroupIdIsSet_) {
        val[utility::conversions::to_string_t("consistencygroup_id")] = ModelBase::toJson(consistencygroupId_);
    }
    if(bootableIsSet_) {
        val[utility::conversions::to_string_t("bootable")] = ModelBase::toJson(bootable_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(encryptedIsSet_) {
        val[utility::conversions::to_string_t("encrypted")] = ModelBase::toJson(encrypted_);
    }
    if(replicationStatusIsSet_) {
        val[utility::conversions::to_string_t("replication_status")] = ModelBase::toJson(replicationStatus_);
    }
    if(osVolumeReplicationextendedStatusIsSet_) {
        val[utility::conversions::to_string_t("os-volume-replication:extended_status")] = ModelBase::toJson(osVolumeReplicationextendedStatus_);
    }
    if(osVolMigStatusAttrmigstatIsSet_) {
        val[utility::conversions::to_string_t("os-vol-mig-status-attr:migstat")] = ModelBase::toJson(osVolMigStatusAttrmigstat_);
    }
    if(osVolMigStatusAttrnameIdIsSet_) {
        val[utility::conversions::to_string_t("os-vol-mig-status-attr:name_id")] = ModelBase::toJson(osVolMigStatusAttrnameId_);
    }
    if(shareableIsSet_) {
        val[utility::conversions::to_string_t("shareable")] = ModelBase::toJson(shareable_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }
    if(dedicatedStorageNameIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_name")] = ModelBase::toJson(dedicatedStorageName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(wwnIsSet_) {
        val[utility::conversions::to_string_t("wwn")] = ModelBase::toJson(wwn_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool VolumeDetailForTag::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("os-vol-host-attr:host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-host-attr:host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolHostAttrhost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_image_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_image_metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistencygroup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistencygroup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistencygroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            VolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os-vol-mig-status-attr:migstat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-mig-status-attr:migstat"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolMigStatusAttrmigstat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-vol-mig-status-attr:name_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-mig-status-attr:name_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolMigStatusAttrnameId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shareable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wwn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wwn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWwn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string VolumeDetailForTag::getId() const
{
    return id_;
}

void VolumeDetailForTag::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeDetailForTag::idIsSet() const
{
    return idIsSet_;
}

void VolumeDetailForTag::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& VolumeDetailForTag::getLinks()
{
    return links_;
}

void VolumeDetailForTag::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VolumeDetailForTag::linksIsSet() const
{
    return linksIsSet_;
}

void VolumeDetailForTag::unsetlinks()
{
    linksIsSet_ = false;
}

std::string VolumeDetailForTag::getName() const
{
    return name_;
}

void VolumeDetailForTag::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VolumeDetailForTag::nameIsSet() const
{
    return nameIsSet_;
}

void VolumeDetailForTag::unsetname()
{
    nameIsSet_ = false;
}

std::string VolumeDetailForTag::getStatus() const
{
    return status_;
}

void VolumeDetailForTag::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VolumeDetailForTag::statusIsSet() const
{
    return statusIsSet_;
}

void VolumeDetailForTag::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Attachment>& VolumeDetailForTag::getAttachments()
{
    return attachments_;
}

void VolumeDetailForTag::setAttachments(const std::vector<Attachment>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool VolumeDetailForTag::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void VolumeDetailForTag::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::string VolumeDetailForTag::getAvailabilityZone() const
{
    return availabilityZone_;
}

void VolumeDetailForTag::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool VolumeDetailForTag::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void VolumeDetailForTag::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string VolumeDetailForTag::getOsVolHostAttrhost() const
{
    return osVolHostAttrhost_;
}

void VolumeDetailForTag::setOsVolHostAttrhost(const std::string& value)
{
    osVolHostAttrhost_ = value;
    osVolHostAttrhostIsSet_ = true;
}

bool VolumeDetailForTag::osVolHostAttrhostIsSet() const
{
    return osVolHostAttrhostIsSet_;
}

void VolumeDetailForTag::unsetosVolHostAttrhost()
{
    osVolHostAttrhostIsSet_ = false;
}

std::string VolumeDetailForTag::getSourceVolid() const
{
    return sourceVolid_;
}

void VolumeDetailForTag::setSourceVolid(const std::string& value)
{
    sourceVolid_ = value;
    sourceVolidIsSet_ = true;
}

bool VolumeDetailForTag::sourceVolidIsSet() const
{
    return sourceVolidIsSet_;
}

void VolumeDetailForTag::unsetsourceVolid()
{
    sourceVolidIsSet_ = false;
}

std::string VolumeDetailForTag::getSnapshotId() const
{
    return snapshotId_;
}

void VolumeDetailForTag::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool VolumeDetailForTag::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void VolumeDetailForTag::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

std::string VolumeDetailForTag::getDescription() const
{
    return description_;
}

void VolumeDetailForTag::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VolumeDetailForTag::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VolumeDetailForTag::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VolumeDetailForTag::getCreatedAt() const
{
    return createdAt_;
}

void VolumeDetailForTag::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VolumeDetailForTag::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VolumeDetailForTag::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string VolumeDetailForTag::getOsVolTenantAttrtenantId() const
{
    return osVolTenantAttrtenantId_;
}

void VolumeDetailForTag::setOsVolTenantAttrtenantId(const std::string& value)
{
    osVolTenantAttrtenantId_ = value;
    osVolTenantAttrtenantIdIsSet_ = true;
}

bool VolumeDetailForTag::osVolTenantAttrtenantIdIsSet() const
{
    return osVolTenantAttrtenantIdIsSet_;
}

void VolumeDetailForTag::unsetosVolTenantAttrtenantId()
{
    osVolTenantAttrtenantIdIsSet_ = false;
}

std::map<std::string, Object>& VolumeDetailForTag::getVolumeImageMetadata()
{
    return volumeImageMetadata_;
}

void VolumeDetailForTag::setVolumeImageMetadata(const std::map<std::string, Object>& value)
{
    volumeImageMetadata_ = value;
    volumeImageMetadataIsSet_ = true;
}

bool VolumeDetailForTag::volumeImageMetadataIsSet() const
{
    return volumeImageMetadataIsSet_;
}

void VolumeDetailForTag::unsetvolumeImageMetadata()
{
    volumeImageMetadataIsSet_ = false;
}

std::string VolumeDetailForTag::getVolumeType() const
{
    return volumeType_;
}

void VolumeDetailForTag::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool VolumeDetailForTag::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void VolumeDetailForTag::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t VolumeDetailForTag::getSize() const
{
    return size_;
}

void VolumeDetailForTag::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VolumeDetailForTag::sizeIsSet() const
{
    return sizeIsSet_;
}

void VolumeDetailForTag::unsetsize()
{
    sizeIsSet_ = false;
}

std::string VolumeDetailForTag::getConsistencygroupId() const
{
    return consistencygroupId_;
}

void VolumeDetailForTag::setConsistencygroupId(const std::string& value)
{
    consistencygroupId_ = value;
    consistencygroupIdIsSet_ = true;
}

bool VolumeDetailForTag::consistencygroupIdIsSet() const
{
    return consistencygroupIdIsSet_;
}

void VolumeDetailForTag::unsetconsistencygroupId()
{
    consistencygroupIdIsSet_ = false;
}

std::string VolumeDetailForTag::getBootable() const
{
    return bootable_;
}

void VolumeDetailForTag::setBootable(const std::string& value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool VolumeDetailForTag::bootableIsSet() const
{
    return bootableIsSet_;
}

void VolumeDetailForTag::unsetbootable()
{
    bootableIsSet_ = false;
}

VolumeMetadata VolumeDetailForTag::getMetadata() const
{
    return metadata_;
}

void VolumeDetailForTag::setMetadata(const VolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool VolumeDetailForTag::metadataIsSet() const
{
    return metadataIsSet_;
}

void VolumeDetailForTag::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string VolumeDetailForTag::getUpdatedAt() const
{
    return updatedAt_;
}

void VolumeDetailForTag::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VolumeDetailForTag::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VolumeDetailForTag::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool VolumeDetailForTag::isEncrypted() const
{
    return encrypted_;
}

void VolumeDetailForTag::setEncrypted(bool value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool VolumeDetailForTag::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void VolumeDetailForTag::unsetencrypted()
{
    encryptedIsSet_ = false;
}

std::string VolumeDetailForTag::getReplicationStatus() const
{
    return replicationStatus_;
}

void VolumeDetailForTag::setReplicationStatus(const std::string& value)
{
    replicationStatus_ = value;
    replicationStatusIsSet_ = true;
}

bool VolumeDetailForTag::replicationStatusIsSet() const
{
    return replicationStatusIsSet_;
}

void VolumeDetailForTag::unsetreplicationStatus()
{
    replicationStatusIsSet_ = false;
}

std::string VolumeDetailForTag::getOsVolumeReplicationextendedStatus() const
{
    return osVolumeReplicationextendedStatus_;
}

void VolumeDetailForTag::setOsVolumeReplicationextendedStatus(const std::string& value)
{
    osVolumeReplicationextendedStatus_ = value;
    osVolumeReplicationextendedStatusIsSet_ = true;
}

bool VolumeDetailForTag::osVolumeReplicationextendedStatusIsSet() const
{
    return osVolumeReplicationextendedStatusIsSet_;
}

void VolumeDetailForTag::unsetosVolumeReplicationextendedStatus()
{
    osVolumeReplicationextendedStatusIsSet_ = false;
}

std::string VolumeDetailForTag::getOsVolMigStatusAttrmigstat() const
{
    return osVolMigStatusAttrmigstat_;
}

void VolumeDetailForTag::setOsVolMigStatusAttrmigstat(const std::string& value)
{
    osVolMigStatusAttrmigstat_ = value;
    osVolMigStatusAttrmigstatIsSet_ = true;
}

bool VolumeDetailForTag::osVolMigStatusAttrmigstatIsSet() const
{
    return osVolMigStatusAttrmigstatIsSet_;
}

void VolumeDetailForTag::unsetosVolMigStatusAttrmigstat()
{
    osVolMigStatusAttrmigstatIsSet_ = false;
}

std::string VolumeDetailForTag::getOsVolMigStatusAttrnameId() const
{
    return osVolMigStatusAttrnameId_;
}

void VolumeDetailForTag::setOsVolMigStatusAttrnameId(const std::string& value)
{
    osVolMigStatusAttrnameId_ = value;
    osVolMigStatusAttrnameIdIsSet_ = true;
}

bool VolumeDetailForTag::osVolMigStatusAttrnameIdIsSet() const
{
    return osVolMigStatusAttrnameIdIsSet_;
}

void VolumeDetailForTag::unsetosVolMigStatusAttrnameId()
{
    osVolMigStatusAttrnameIdIsSet_ = false;
}

bool VolumeDetailForTag::isShareable() const
{
    return shareable_;
}

void VolumeDetailForTag::setShareable(bool value)
{
    shareable_ = value;
    shareableIsSet_ = true;
}

bool VolumeDetailForTag::shareableIsSet() const
{
    return shareableIsSet_;
}

void VolumeDetailForTag::unsetshareable()
{
    shareableIsSet_ = false;
}

std::string VolumeDetailForTag::getUserId() const
{
    return userId_;
}

void VolumeDetailForTag::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool VolumeDetailForTag::userIdIsSet() const
{
    return userIdIsSet_;
}

void VolumeDetailForTag::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string VolumeDetailForTag::getServiceType() const
{
    return serviceType_;
}

void VolumeDetailForTag::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool VolumeDetailForTag::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void VolumeDetailForTag::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

bool VolumeDetailForTag::isMultiattach() const
{
    return multiattach_;
}

void VolumeDetailForTag::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool VolumeDetailForTag::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void VolumeDetailForTag::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

std::string VolumeDetailForTag::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void VolumeDetailForTag::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool VolumeDetailForTag::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void VolumeDetailForTag::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string VolumeDetailForTag::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void VolumeDetailForTag::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool VolumeDetailForTag::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void VolumeDetailForTag::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::map<std::string, std::string>& VolumeDetailForTag::getTags()
{
    return tags_;
}

void VolumeDetailForTag::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VolumeDetailForTag::tagsIsSet() const
{
    return tagsIsSet_;
}

void VolumeDetailForTag::unsettags()
{
    tagsIsSet_ = false;
}

std::string VolumeDetailForTag::getWwn() const
{
    return wwn_;
}

void VolumeDetailForTag::setWwn(const std::string& value)
{
    wwn_ = value;
    wwnIsSet_ = true;
}

bool VolumeDetailForTag::wwnIsSet() const
{
    return wwnIsSet_;
}

void VolumeDetailForTag::unsetwwn()
{
    wwnIsSet_ = false;
}

std::string VolumeDetailForTag::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VolumeDetailForTag::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VolumeDetailForTag::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VolumeDetailForTag::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


