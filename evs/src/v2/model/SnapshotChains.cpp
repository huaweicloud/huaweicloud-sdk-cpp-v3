

#include "huaweicloud/evs/v2/model/SnapshotChains.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotChains::SnapshotChains()
{
    id_ = "";
    idIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    snapshotCount_ = 0;
    snapshotCountIsSet_ = false;
    capacity_ = 0.0f;
    capacityIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

SnapshotChains::~SnapshotChains() = default;

void SnapshotChains::validate()
{
}

web::json::value SnapshotChains::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(snapshotCountIsSet_) {
        val[utility::conversions::to_string_t("snapshot_count")] = ModelBase::toJson(snapshotCount_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool SnapshotChains::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    return ok;
}


std::string SnapshotChains::getId() const
{
    return id_;
}

void SnapshotChains::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotChains::idIsSet() const
{
    return idIsSet_;
}

void SnapshotChains::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotChains::getAvailabilityZone() const
{
    return availabilityZone_;
}

void SnapshotChains::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool SnapshotChains::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void SnapshotChains::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

int32_t SnapshotChains::getSnapshotCount() const
{
    return snapshotCount_;
}

void SnapshotChains::setSnapshotCount(int32_t value)
{
    snapshotCount_ = value;
    snapshotCountIsSet_ = true;
}

bool SnapshotChains::snapshotCountIsSet() const
{
    return snapshotCountIsSet_;
}

void SnapshotChains::unsetsnapshotCount()
{
    snapshotCountIsSet_ = false;
}

float SnapshotChains::getCapacity() const
{
    return capacity_;
}

void SnapshotChains::setCapacity(float value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool SnapshotChains::capacityIsSet() const
{
    return capacityIsSet_;
}

void SnapshotChains::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::string SnapshotChains::getProjectId() const
{
    return projectId_;
}

void SnapshotChains::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SnapshotChains::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SnapshotChains::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SnapshotChains::getVolumeId() const
{
    return volumeId_;
}

void SnapshotChains::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool SnapshotChains::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void SnapshotChains::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string SnapshotChains::getCategory() const
{
    return category_;
}

void SnapshotChains::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SnapshotChains::categoryIsSet() const
{
    return categoryIsSet_;
}

void SnapshotChains::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string SnapshotChains::getCreatedAt() const
{
    return createdAt_;
}

void SnapshotChains::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SnapshotChains::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SnapshotChains::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SnapshotChains::getUpdatedAt() const
{
    return updatedAt_;
}

void SnapshotChains::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SnapshotChains::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SnapshotChains::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


