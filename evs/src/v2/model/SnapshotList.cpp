

#include "huaweicloud/evs/v2/model/SnapshotList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotList::SnapshotList()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    metadataIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    osExtendedSnapshotAttributesprojectId_ = "";
    osExtendedSnapshotAttributesprojectIdIsSet_ = false;
    osExtendedSnapshotAttributesprogress_ = "";
    osExtendedSnapshotAttributesprogressIsSet_ = false;
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
    dedicatedStorageName_ = "";
    dedicatedStorageNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

SnapshotList::~SnapshotList() = default;

void SnapshotList::validate()
{
}

web::json::value SnapshotList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(osExtendedSnapshotAttributesprojectIdIsSet_) {
        val[utility::conversions::to_string_t("os-extended-snapshot-attributes:project_id")] = ModelBase::toJson(osExtendedSnapshotAttributesprojectId_);
    }
    if(osExtendedSnapshotAttributesprogressIsSet_) {
        val[utility::conversions::to_string_t("os-extended-snapshot-attributes:progress")] = ModelBase::toJson(osExtendedSnapshotAttributesprogress_);
    }
    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }
    if(dedicatedStorageNameIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_name")] = ModelBase::toJson(dedicatedStorageName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }

    return val;
}

bool SnapshotList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os-extended-snapshot-attributes:project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-extended-snapshot-attributes:project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtendedSnapshotAttributesprojectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-extended-snapshot-attributes:progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-extended-snapshot-attributes:progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtendedSnapshotAttributesprogress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    return ok;
}

std::string SnapshotList::getId() const
{
    return id_;
}

void SnapshotList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotList::idIsSet() const
{
    return idIsSet_;
}

void SnapshotList::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotList::getStatus() const
{
    return status_;
}

void SnapshotList::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotList::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotList::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SnapshotList::getName() const
{
    return name_;
}

void SnapshotList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SnapshotList::nameIsSet() const
{
    return nameIsSet_;
}

void SnapshotList::unsetname()
{
    nameIsSet_ = false;
}

std::string SnapshotList::getDescription() const
{
    return description_;
}

void SnapshotList::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotList::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotList::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SnapshotList::getCreatedAt() const
{
    return createdAt_;
}

void SnapshotList::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SnapshotList::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SnapshotList::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SnapshotList::getUpdatedAt() const
{
    return updatedAt_;
}

void SnapshotList::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SnapshotList::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SnapshotList::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::map<std::string, std::string>& SnapshotList::getMetadata()
{
    return metadata_;
}

void SnapshotList::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool SnapshotList::metadataIsSet() const
{
    return metadataIsSet_;
}

void SnapshotList::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string SnapshotList::getVolumeId() const
{
    return volumeId_;
}

void SnapshotList::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool SnapshotList::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void SnapshotList::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

int32_t SnapshotList::getSize() const
{
    return size_;
}

void SnapshotList::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SnapshotList::sizeIsSet() const
{
    return sizeIsSet_;
}

void SnapshotList::unsetsize()
{
    sizeIsSet_ = false;
}

std::string SnapshotList::getOsExtendedSnapshotAttributesprojectId() const
{
    return osExtendedSnapshotAttributesprojectId_;
}

void SnapshotList::setOsExtendedSnapshotAttributesprojectId(const std::string& value)
{
    osExtendedSnapshotAttributesprojectId_ = value;
    osExtendedSnapshotAttributesprojectIdIsSet_ = true;
}

bool SnapshotList::osExtendedSnapshotAttributesprojectIdIsSet() const
{
    return osExtendedSnapshotAttributesprojectIdIsSet_;
}

void SnapshotList::unsetosExtendedSnapshotAttributesprojectId()
{
    osExtendedSnapshotAttributesprojectIdIsSet_ = false;
}

std::string SnapshotList::getOsExtendedSnapshotAttributesprogress() const
{
    return osExtendedSnapshotAttributesprogress_;
}

void SnapshotList::setOsExtendedSnapshotAttributesprogress(const std::string& value)
{
    osExtendedSnapshotAttributesprogress_ = value;
    osExtendedSnapshotAttributesprogressIsSet_ = true;
}

bool SnapshotList::osExtendedSnapshotAttributesprogressIsSet() const
{
    return osExtendedSnapshotAttributesprogressIsSet_;
}

void SnapshotList::unsetosExtendedSnapshotAttributesprogress()
{
    osExtendedSnapshotAttributesprogressIsSet_ = false;
}

std::string SnapshotList::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void SnapshotList::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool SnapshotList::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void SnapshotList::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string SnapshotList::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void SnapshotList::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool SnapshotList::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void SnapshotList::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::string SnapshotList::getServiceType() const
{
    return serviceType_;
}

void SnapshotList::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool SnapshotList::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void SnapshotList::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


