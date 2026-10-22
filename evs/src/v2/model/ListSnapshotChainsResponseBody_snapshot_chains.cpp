

#include "huaweicloud/evs/v2/model/ListSnapshotChainsResponseBody_snapshot_chains.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotChainsResponseBody_snapshot_chains::ListSnapshotChainsResponseBody_snapshot_chains()
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

ListSnapshotChainsResponseBody_snapshot_chains::~ListSnapshotChainsResponseBody_snapshot_chains() = default;

void ListSnapshotChainsResponseBody_snapshot_chains::validate()
{
}

web::json::value ListSnapshotChainsResponseBody_snapshot_chains::toJson() const
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
bool ListSnapshotChainsResponseBody_snapshot_chains::fromJson(const web::json::value& val)
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


std::string ListSnapshotChainsResponseBody_snapshot_chains::getId() const
{
    return id_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::idIsSet() const
{
    return idIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetid()
{
    idIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

int32_t ListSnapshotChainsResponseBody_snapshot_chains::getSnapshotCount() const
{
    return snapshotCount_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setSnapshotCount(int32_t value)
{
    snapshotCount_ = value;
    snapshotCountIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::snapshotCountIsSet() const
{
    return snapshotCountIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetsnapshotCount()
{
    snapshotCountIsSet_ = false;
}

float ListSnapshotChainsResponseBody_snapshot_chains::getCapacity() const
{
    return capacity_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setCapacity(float value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::capacityIsSet() const
{
    return capacityIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getProjectId() const
{
    return projectId_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getVolumeId() const
{
    return volumeId_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getCategory() const
{
    return category_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getCreatedAt() const
{
    return createdAt_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ListSnapshotChainsResponseBody_snapshot_chains::getUpdatedAt() const
{
    return updatedAt_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListSnapshotChainsResponseBody_snapshot_chains::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListSnapshotChainsResponseBody_snapshot_chains::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


