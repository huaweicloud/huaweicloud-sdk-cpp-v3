

#include "huaweicloud/evs/v2/model/RecycleBinVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RecycleBinVolume::RecycleBinVolume()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    attachmentsIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    metadataIsSet_ = false;
    bootable_ = "";
    bootableIsSet_ = false;
    tagsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    planDeleteAt_ = "";
    planDeleteAtIsSet_ = false;
    preDeletedAt_ = "";
    preDeletedAtIsSet_ = false;
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
    dedicatedStorageName_ = "";
    dedicatedStorageNameIsSet_ = false;
    volumeImageMetadataIsSet_ = false;
    wwn_ = "";
    wwnIsSet_ = false;
}

RecycleBinVolume::~RecycleBinVolume() = default;

void RecycleBinVolume::validate()
{
}

web::json::value RecycleBinVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(attachmentsIsSet_) {
        val[utility::conversions::to_string_t("attachments")] = ModelBase::toJson(attachments_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(bootableIsSet_) {
        val[utility::conversions::to_string_t("bootable")] = ModelBase::toJson(bootable_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(planDeleteAtIsSet_) {
        val[utility::conversions::to_string_t("plan_delete_at")] = ModelBase::toJson(planDeleteAt_);
    }
    if(preDeletedAtIsSet_) {
        val[utility::conversions::to_string_t("pre_deleted_at")] = ModelBase::toJson(preDeletedAt_);
    }
    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }
    if(dedicatedStorageNameIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_name")] = ModelBase::toJson(dedicatedStorageName_);
    }
    if(volumeImageMetadataIsSet_) {
        val[utility::conversions::to_string_t("volume_image_metadata")] = ModelBase::toJson(volumeImageMetadata_);
    }
    if(wwnIsSet_) {
        val[utility::conversions::to_string_t("wwn")] = ModelBase::toJson(wwn_);
    }

    return val;
}
bool RecycleBinVolume::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("multiattach"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiattach"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiattach(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_delete_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_delete_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanDeleteAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_deleted_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreDeletedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_image_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_image_metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeImageMetadata(refVal);
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
    return ok;
}


std::string RecycleBinVolume::getId() const
{
    return id_;
}

void RecycleBinVolume::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleBinVolume::idIsSet() const
{
    return idIsSet_;
}

void RecycleBinVolume::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleBinVolume::getName() const
{
    return name_;
}

void RecycleBinVolume::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleBinVolume::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleBinVolume::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleBinVolume::getDescription() const
{
    return description_;
}

void RecycleBinVolume::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RecycleBinVolume::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RecycleBinVolume::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RecycleBinVolume::getStatus() const
{
    return status_;
}

void RecycleBinVolume::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RecycleBinVolume::statusIsSet() const
{
    return statusIsSet_;
}

void RecycleBinVolume::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Attachment>& RecycleBinVolume::getAttachments()
{
    return attachments_;
}

void RecycleBinVolume::setAttachments(const std::vector<Attachment>& value)
{
    attachments_ = value;
    attachmentsIsSet_ = true;
}

bool RecycleBinVolume::attachmentsIsSet() const
{
    return attachmentsIsSet_;
}

void RecycleBinVolume::unsetattachments()
{
    attachmentsIsSet_ = false;
}

bool RecycleBinVolume::isMultiattach() const
{
    return multiattach_;
}

void RecycleBinVolume::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool RecycleBinVolume::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void RecycleBinVolume::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

int32_t RecycleBinVolume::getSize() const
{
    return size_;
}

void RecycleBinVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RecycleBinVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void RecycleBinVolume::unsetsize()
{
    sizeIsSet_ = false;
}

std::map<std::string, Object>& RecycleBinVolume::getMetadata()
{
    return metadata_;
}

void RecycleBinVolume::setMetadata(const std::map<std::string, Object>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool RecycleBinVolume::metadataIsSet() const
{
    return metadataIsSet_;
}

void RecycleBinVolume::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string RecycleBinVolume::getBootable() const
{
    return bootable_;
}

void RecycleBinVolume::setBootable(const std::string& value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool RecycleBinVolume::bootableIsSet() const
{
    return bootableIsSet_;
}

void RecycleBinVolume::unsetbootable()
{
    bootableIsSet_ = false;
}

std::map<std::string, std::string>& RecycleBinVolume::getTags()
{
    return tags_;
}

void RecycleBinVolume::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool RecycleBinVolume::tagsIsSet() const
{
    return tagsIsSet_;
}

void RecycleBinVolume::unsettags()
{
    tagsIsSet_ = false;
}

std::string RecycleBinVolume::getAvailabilityZone() const
{
    return availabilityZone_;
}

void RecycleBinVolume::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool RecycleBinVolume::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void RecycleBinVolume::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string RecycleBinVolume::getCreatedAt() const
{
    return createdAt_;
}

void RecycleBinVolume::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecycleBinVolume::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecycleBinVolume::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecycleBinVolume::getServiceType() const
{
    return serviceType_;
}

void RecycleBinVolume::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool RecycleBinVolume::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void RecycleBinVolume::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string RecycleBinVolume::getUpdatedAt() const
{
    return updatedAt_;
}

void RecycleBinVolume::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RecycleBinVolume::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RecycleBinVolume::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string RecycleBinVolume::getVolumeType() const
{
    return volumeType_;
}

void RecycleBinVolume::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RecycleBinVolume::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RecycleBinVolume::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string RecycleBinVolume::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleBinVolume::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleBinVolume::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleBinVolume::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleBinVolume::getPlanDeleteAt() const
{
    return planDeleteAt_;
}

void RecycleBinVolume::setPlanDeleteAt(const std::string& value)
{
    planDeleteAt_ = value;
    planDeleteAtIsSet_ = true;
}

bool RecycleBinVolume::planDeleteAtIsSet() const
{
    return planDeleteAtIsSet_;
}

void RecycleBinVolume::unsetplanDeleteAt()
{
    planDeleteAtIsSet_ = false;
}

std::string RecycleBinVolume::getPreDeletedAt() const
{
    return preDeletedAt_;
}

void RecycleBinVolume::setPreDeletedAt(const std::string& value)
{
    preDeletedAt_ = value;
    preDeletedAtIsSet_ = true;
}

bool RecycleBinVolume::preDeletedAtIsSet() const
{
    return preDeletedAtIsSet_;
}

void RecycleBinVolume::unsetpreDeletedAt()
{
    preDeletedAtIsSet_ = false;
}

std::string RecycleBinVolume::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void RecycleBinVolume::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool RecycleBinVolume::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void RecycleBinVolume::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string RecycleBinVolume::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void RecycleBinVolume::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool RecycleBinVolume::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void RecycleBinVolume::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::map<std::string, Object>& RecycleBinVolume::getVolumeImageMetadata()
{
    return volumeImageMetadata_;
}

void RecycleBinVolume::setVolumeImageMetadata(const std::map<std::string, Object>& value)
{
    volumeImageMetadata_ = value;
    volumeImageMetadataIsSet_ = true;
}

bool RecycleBinVolume::volumeImageMetadataIsSet() const
{
    return volumeImageMetadataIsSet_;
}

void RecycleBinVolume::unsetvolumeImageMetadata()
{
    volumeImageMetadataIsSet_ = false;
}

std::string RecycleBinVolume::getWwn() const
{
    return wwn_;
}

void RecycleBinVolume::setWwn(const std::string& value)
{
    wwn_ = value;
    wwnIsSet_ = true;
}

bool RecycleBinVolume::wwnIsSet() const
{
    return wwnIsSet_;
}

void RecycleBinVolume::unsetwwn()
{
    wwnIsSet_ = false;
}

}
}
}
}
}


