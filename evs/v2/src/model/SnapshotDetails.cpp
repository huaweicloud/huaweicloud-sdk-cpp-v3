

#include "huaweicloud/evs/model/SnapshotDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotDetails::SnapshotDetails()
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
}

SnapshotDetails::~SnapshotDetails() = default;

void SnapshotDetails::validate()
{
}

web::json::value SnapshotDetails::toJson() const
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

    return val;
}

bool SnapshotDetails::fromJson(const web::json::value& val)
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
            Object refVal;
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
    return ok;
}


std::string SnapshotDetails::getId() const
{
    return id_;
}

void SnapshotDetails::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotDetails::idIsSet() const
{
    return idIsSet_;
}

void SnapshotDetails::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotDetails::getStatus() const
{
    return status_;
}

void SnapshotDetails::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotDetails::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotDetails::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SnapshotDetails::getName() const
{
    return name_;
}

void SnapshotDetails::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SnapshotDetails::nameIsSet() const
{
    return nameIsSet_;
}

void SnapshotDetails::unsetname()
{
    nameIsSet_ = false;
}

std::string SnapshotDetails::getDescription() const
{
    return description_;
}

void SnapshotDetails::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotDetails::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotDetails::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SnapshotDetails::getCreatedAt() const
{
    return createdAt_;
}

void SnapshotDetails::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SnapshotDetails::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SnapshotDetails::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SnapshotDetails::getUpdatedAt() const
{
    return updatedAt_;
}

void SnapshotDetails::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SnapshotDetails::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SnapshotDetails::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

Object SnapshotDetails::getMetadata() const
{
    return metadata_;
}

void SnapshotDetails::setMetadata(const Object& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool SnapshotDetails::metadataIsSet() const
{
    return metadataIsSet_;
}

void SnapshotDetails::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string SnapshotDetails::getVolumeId() const
{
    return volumeId_;
}

void SnapshotDetails::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool SnapshotDetails::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void SnapshotDetails::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

int32_t SnapshotDetails::getSize() const
{
    return size_;
}

void SnapshotDetails::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SnapshotDetails::sizeIsSet() const
{
    return sizeIsSet_;
}

void SnapshotDetails::unsetsize()
{
    sizeIsSet_ = false;
}

std::string SnapshotDetails::getOsExtendedSnapshotAttributesprojectId() const
{
    return osExtendedSnapshotAttributesprojectId_;
}

void SnapshotDetails::setOsExtendedSnapshotAttributesprojectId(const std::string& value)
{
    osExtendedSnapshotAttributesprojectId_ = value;
    osExtendedSnapshotAttributesprojectIdIsSet_ = true;
}

bool SnapshotDetails::osExtendedSnapshotAttributesprojectIdIsSet() const
{
    return osExtendedSnapshotAttributesprojectIdIsSet_;
}

void SnapshotDetails::unsetosExtendedSnapshotAttributesprojectId()
{
    osExtendedSnapshotAttributesprojectIdIsSet_ = false;
}

std::string SnapshotDetails::getOsExtendedSnapshotAttributesprogress() const
{
    return osExtendedSnapshotAttributesprogress_;
}

void SnapshotDetails::setOsExtendedSnapshotAttributesprogress(const std::string& value)
{
    osExtendedSnapshotAttributesprogress_ = value;
    osExtendedSnapshotAttributesprogressIsSet_ = true;
}

bool SnapshotDetails::osExtendedSnapshotAttributesprogressIsSet() const
{
    return osExtendedSnapshotAttributesprogressIsSet_;
}

void SnapshotDetails::unsetosExtendedSnapshotAttributesprogress()
{
    osExtendedSnapshotAttributesprogressIsSet_ = false;
}

}
}
}
}
}


