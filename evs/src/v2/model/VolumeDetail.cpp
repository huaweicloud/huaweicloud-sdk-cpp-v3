

#include "huaweicloud/evs/v2/model/VolumeDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeDetail::VolumeDetail()
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
    osVolHostAttrHost_ = "";
    osVolHostAttrHostIsSet_ = false;
    sourceVolid_ = "";
    sourceVolidIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    osVolTenantAttrTenantId_ = "";
    osVolTenantAttrTenantIdIsSet_ = false;
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
    osVolumeReplicationExtendedStatus_ = "";
    osVolumeReplicationExtendedStatusIsSet_ = false;
    osVolMigStatusAttrMigstat_ = "";
    osVolMigStatusAttrMigstatIsSet_ = false;
    osVolMigStatusAttrNameId_ = "";
    osVolMigStatusAttrNameIdIsSet_ = false;
    shareable_ = "";
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
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    iopsIsSet_ = false;
    throughputIsSet_ = false;
}

VolumeDetail::~VolumeDetail() = default;

void VolumeDetail::validate()
{
}

web::json::value VolumeDetail::toJson() const
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
    if(osVolHostAttrHostIsSet_) {
        val[utility::conversions::to_string_t("os-vol-host-attr:host")] = ModelBase::toJson(osVolHostAttrHost_);
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
    if(osVolTenantAttrTenantIdIsSet_) {
        val[utility::conversions::to_string_t("os-vol-tenant-attr:tenant_id")] = ModelBase::toJson(osVolTenantAttrTenantId_);
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
    if(osVolumeReplicationExtendedStatusIsSet_) {
        val[utility::conversions::to_string_t("os-volume-replication:extended_status")] = ModelBase::toJson(osVolumeReplicationExtendedStatus_);
    }
    if(osVolMigStatusAttrMigstatIsSet_) {
        val[utility::conversions::to_string_t("os-vol-mig-status-attr:migstat")] = ModelBase::toJson(osVolMigStatusAttrMigstat_);
    }
    if(osVolMigStatusAttrNameIdIsSet_) {
        val[utility::conversions::to_string_t("os-vol-mig-status-attr:name_id")] = ModelBase::toJson(osVolMigStatusAttrNameId_);
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
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }

    return val;
}
bool VolumeDetail::fromJson(const web::json::value& val)
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
            setOsVolHostAttrHost(refVal);
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
            setOsVolTenantAttrTenantId(refVal);
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
            std::map<std::string, Object> refVal;
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
            setOsVolumeReplicationExtendedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-vol-mig-status-attr:migstat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-mig-status-attr:migstat"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolMigStatusAttrMigstat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-vol-mig-status-attr:name_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-vol-mig-status-attr:name_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolMigStatusAttrNameId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            Iops refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            Throughput refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    return ok;
}


std::string VolumeDetail::getId() const
{
    return id_;
}

void VolumeDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeDetail::idIsSet() const
{
    return idIsSet_;
}

void VolumeDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& VolumeDetail::getLinks()
{
    return links_;
}

void VolumeDetail::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VolumeDetail::linksIsSet() const
{
    return linksIsSet_;
}

void VolumeDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::string VolumeDetail::getName() const
{
    return name_;
}

void VolumeDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VolumeDetail::nameIsSet() const
{
    return nameIsSet_;
}

void VolumeDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string VolumeDetail::getStatus() const
{
    return status_;
}

void VolumeDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VolumeDetail::statusIsSet() const
{
    return statusIsSet_;
}

void VolumeDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Attachment>& VolumeDetail::getAttachments()
{
    return attachments_;
}

void VolumeDetail::setAttachments(const std::vector<Attachment>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool VolumeDetail::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void VolumeDetail::unsetattachments()
{
    attachmentsIsSet_ = false;
}

std::string VolumeDetail::getAvailabilityZone() const
{
    return availabilityZone_;
}

void VolumeDetail::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool VolumeDetail::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void VolumeDetail::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string VolumeDetail::getOsVolHostAttrHost() const
{
    return osVolHostAttrHost_;
}

void VolumeDetail::setOsVolHostAttrHost(const std::string& value)
{
    osVolHostAttrHost_ = value;
    osVolHostAttrHostIsSet_ = true;
}

bool VolumeDetail::osVolHostAttrHostIsSet() const
{
    return osVolHostAttrHostIsSet_;
}

void VolumeDetail::unsetosVolHostAttrHost()
{
    osVolHostAttrHostIsSet_ = false;
}

std::string VolumeDetail::getSourceVolid() const
{
    return sourceVolid_;
}

void VolumeDetail::setSourceVolid(const std::string& value)
{
    sourceVolid_ = value;
    sourceVolidIsSet_ = true;
}

bool VolumeDetail::sourceVolidIsSet() const
{
    return sourceVolidIsSet_;
}

void VolumeDetail::unsetsourceVolid()
{
    sourceVolidIsSet_ = false;
}

std::string VolumeDetail::getSnapshotId() const
{
    return snapshotId_;
}

void VolumeDetail::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool VolumeDetail::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void VolumeDetail::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

std::string VolumeDetail::getDescription() const
{
    return description_;
}

void VolumeDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VolumeDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VolumeDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VolumeDetail::getCreatedAt() const
{
    return createdAt_;
}

void VolumeDetail::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VolumeDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VolumeDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string VolumeDetail::getOsVolTenantAttrTenantId() const
{
    return osVolTenantAttrTenantId_;
}

void VolumeDetail::setOsVolTenantAttrTenantId(const std::string& value)
{
    osVolTenantAttrTenantId_ = value;
    osVolTenantAttrTenantIdIsSet_ = true;
}

bool VolumeDetail::osVolTenantAttrTenantIdIsSet() const
{
    return osVolTenantAttrTenantIdIsSet_;
}

void VolumeDetail::unsetosVolTenantAttrTenantId()
{
    osVolTenantAttrTenantIdIsSet_ = false;
}

std::map<std::string, Object>& VolumeDetail::getVolumeImageMetadata()
{
    return volumeImageMetadata_;
}

void VolumeDetail::setVolumeImageMetadata(const std::map<std::string, Object>& value)
{
    volumeImageMetadata_ = value;
    volumeImageMetadataIsSet_ = true;
}

bool VolumeDetail::volumeImageMetadataIsSet() const
{
    return volumeImageMetadataIsSet_;
}

void VolumeDetail::unsetvolumeImageMetadata()
{
    volumeImageMetadataIsSet_ = false;
}

std::string VolumeDetail::getVolumeType() const
{
    return volumeType_;
}

void VolumeDetail::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool VolumeDetail::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void VolumeDetail::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t VolumeDetail::getSize() const
{
    return size_;
}

void VolumeDetail::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VolumeDetail::sizeIsSet() const
{
    return sizeIsSet_;
}

void VolumeDetail::unsetsize()
{
    sizeIsSet_ = false;
}

std::string VolumeDetail::getConsistencygroupId() const
{
    return consistencygroupId_;
}

void VolumeDetail::setConsistencygroupId(const std::string& value)
{
    consistencygroupId_ = value;
    consistencygroupIdIsSet_ = true;
}

bool VolumeDetail::consistencygroupIdIsSet() const
{
    return consistencygroupIdIsSet_;
}

void VolumeDetail::unsetconsistencygroupId()
{
    consistencygroupIdIsSet_ = false;
}

std::string VolumeDetail::getBootable() const
{
    return bootable_;
}

void VolumeDetail::setBootable(const std::string& value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool VolumeDetail::bootableIsSet() const
{
    return bootableIsSet_;
}

void VolumeDetail::unsetbootable()
{
    bootableIsSet_ = false;
}

std::map<std::string, Object>& VolumeDetail::getMetadata()
{
    return metadata_;
}

void VolumeDetail::setMetadata(const std::map<std::string, Object>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool VolumeDetail::metadataIsSet() const
{
    return metadataIsSet_;
}

void VolumeDetail::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string VolumeDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void VolumeDetail::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VolumeDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VolumeDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool VolumeDetail::isEncrypted() const
{
    return encrypted_;
}

void VolumeDetail::setEncrypted(bool value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool VolumeDetail::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void VolumeDetail::unsetencrypted()
{
    encryptedIsSet_ = false;
}

std::string VolumeDetail::getReplicationStatus() const
{
    return replicationStatus_;
}

void VolumeDetail::setReplicationStatus(const std::string& value)
{
    replicationStatus_ = value;
    replicationStatusIsSet_ = true;
}

bool VolumeDetail::replicationStatusIsSet() const
{
    return replicationStatusIsSet_;
}

void VolumeDetail::unsetreplicationStatus()
{
    replicationStatusIsSet_ = false;
}

std::string VolumeDetail::getOsVolumeReplicationExtendedStatus() const
{
    return osVolumeReplicationExtendedStatus_;
}

void VolumeDetail::setOsVolumeReplicationExtendedStatus(const std::string& value)
{
    osVolumeReplicationExtendedStatus_ = value;
    osVolumeReplicationExtendedStatusIsSet_ = true;
}

bool VolumeDetail::osVolumeReplicationExtendedStatusIsSet() const
{
    return osVolumeReplicationExtendedStatusIsSet_;
}

void VolumeDetail::unsetosVolumeReplicationExtendedStatus()
{
    osVolumeReplicationExtendedStatusIsSet_ = false;
}

std::string VolumeDetail::getOsVolMigStatusAttrMigstat() const
{
    return osVolMigStatusAttrMigstat_;
}

void VolumeDetail::setOsVolMigStatusAttrMigstat(const std::string& value)
{
    osVolMigStatusAttrMigstat_ = value;
    osVolMigStatusAttrMigstatIsSet_ = true;
}

bool VolumeDetail::osVolMigStatusAttrMigstatIsSet() const
{
    return osVolMigStatusAttrMigstatIsSet_;
}

void VolumeDetail::unsetosVolMigStatusAttrMigstat()
{
    osVolMigStatusAttrMigstatIsSet_ = false;
}

std::string VolumeDetail::getOsVolMigStatusAttrNameId() const
{
    return osVolMigStatusAttrNameId_;
}

void VolumeDetail::setOsVolMigStatusAttrNameId(const std::string& value)
{
    osVolMigStatusAttrNameId_ = value;
    osVolMigStatusAttrNameIdIsSet_ = true;
}

bool VolumeDetail::osVolMigStatusAttrNameIdIsSet() const
{
    return osVolMigStatusAttrNameIdIsSet_;
}

void VolumeDetail::unsetosVolMigStatusAttrNameId()
{
    osVolMigStatusAttrNameIdIsSet_ = false;
}

std::string VolumeDetail::getShareable() const
{
    return shareable_;
}

void VolumeDetail::setShareable(const std::string& value)
{
    shareable_ = value;
    shareableIsSet_ = true;
}

bool VolumeDetail::shareableIsSet() const
{
    return shareableIsSet_;
}

void VolumeDetail::unsetshareable()
{
    shareableIsSet_ = false;
}

std::string VolumeDetail::getUserId() const
{
    return userId_;
}

void VolumeDetail::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool VolumeDetail::userIdIsSet() const
{
    return userIdIsSet_;
}

void VolumeDetail::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string VolumeDetail::getServiceType() const
{
    return serviceType_;
}

void VolumeDetail::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool VolumeDetail::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void VolumeDetail::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

bool VolumeDetail::isMultiattach() const
{
    return multiattach_;
}

void VolumeDetail::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool VolumeDetail::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void VolumeDetail::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

std::string VolumeDetail::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void VolumeDetail::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool VolumeDetail::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void VolumeDetail::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string VolumeDetail::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void VolumeDetail::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool VolumeDetail::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void VolumeDetail::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::map<std::string, std::string>& VolumeDetail::getTags()
{
    return tags_;
}

void VolumeDetail::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VolumeDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void VolumeDetail::unsettags()
{
    tagsIsSet_ = false;
}

std::string VolumeDetail::getWwn() const
{
    return wwn_;
}

void VolumeDetail::setWwn(const std::string& value)
{
    wwn_ = value;
    wwnIsSet_ = true;
}

bool VolumeDetail::wwnIsSet() const
{
    return wwnIsSet_;
}

void VolumeDetail::unsetwwn()
{
    wwnIsSet_ = false;
}

std::string VolumeDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VolumeDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VolumeDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VolumeDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string VolumeDetail::getSerialNumber() const
{
    return serialNumber_;
}

void VolumeDetail::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool VolumeDetail::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void VolumeDetail::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

Iops VolumeDetail::getIops() const
{
    return iops_;
}

void VolumeDetail::setIops(const Iops& value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool VolumeDetail::iopsIsSet() const
{
    return iopsIsSet_;
}

void VolumeDetail::unsetiops()
{
    iopsIsSet_ = false;
}

Throughput VolumeDetail::getThroughput() const
{
    return throughput_;
}

void VolumeDetail::setThroughput(const Throughput& value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool VolumeDetail::throughputIsSet() const
{
    return throughputIsSet_;
}

void VolumeDetail::unsetthroughput()
{
    throughputIsSet_ = false;
}

}
}
}
}
}


