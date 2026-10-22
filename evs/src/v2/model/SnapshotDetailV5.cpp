

#include "huaweicloud/evs/v2/model/SnapshotDetailV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotDetailV5::SnapshotDetailV5()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    encrypted_ = false;
    encryptedIsSet_ = false;
    cmkId_ = "";
    cmkIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    tagsIsSet_ = false;
    instantAccess_ = false;
    instantAccessIsSet_ = false;
    retentionAt_ = "";
    retentionAtIsSet_ = false;
    instantAccessRetentionAt_ = "";
    instantAccessRetentionAtIsSet_ = false;
    incremental_ = false;
    incrementalIsSet_ = false;
    snapshotType_ = "";
    snapshotTypeIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    encryptAlgorithm_ = "";
    encryptAlgorithmIsSet_ = false;
    snapshotChainsIsSet_ = false;
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
}

SnapshotDetailV5::~SnapshotDetailV5() = default;

void SnapshotDetailV5::validate()
{
}

web::json::value SnapshotDetailV5::toJson() const
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(encryptedIsSet_) {
        val[utility::conversions::to_string_t("encrypted")] = ModelBase::toJson(encrypted_);
    }
    if(cmkIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_id")] = ModelBase::toJson(cmkId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(instantAccessIsSet_) {
        val[utility::conversions::to_string_t("instant_access")] = ModelBase::toJson(instantAccess_);
    }
    if(retentionAtIsSet_) {
        val[utility::conversions::to_string_t("retention_at")] = ModelBase::toJson(retentionAt_);
    }
    if(instantAccessRetentionAtIsSet_) {
        val[utility::conversions::to_string_t("instant_access_retention_at")] = ModelBase::toJson(instantAccessRetentionAt_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }
    if(snapshotTypeIsSet_) {
        val[utility::conversions::to_string_t("snapshot_type")] = ModelBase::toJson(snapshotType_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(encryptAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("encrypt_algorithm")] = ModelBase::toJson(encryptAlgorithm_);
    }
    if(snapshotChainsIsSet_) {
        val[utility::conversions::to_string_t("snapshot_chains")] = ModelBase::toJson(snapshotChains_);
    }
    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }

    return val;
}
bool SnapshotDetailV5::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cmk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instant_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instant_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstantAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instant_access_retention_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instant_access_retention_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstantAccessRetentionAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incremental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncremental(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypt_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypt_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_chains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_chains"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotChains> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotChains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroupId(refVal);
        }
    }
    return ok;
}


std::string SnapshotDetailV5::getId() const
{
    return id_;
}

void SnapshotDetailV5::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotDetailV5::idIsSet() const
{
    return idIsSet_;
}

void SnapshotDetailV5::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotDetailV5::getName() const
{
    return name_;
}

void SnapshotDetailV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SnapshotDetailV5::nameIsSet() const
{
    return nameIsSet_;
}

void SnapshotDetailV5::unsetname()
{
    nameIsSet_ = false;
}

std::string SnapshotDetailV5::getDescription() const
{
    return description_;
}

void SnapshotDetailV5::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotDetailV5::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotDetailV5::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SnapshotDetailV5::getCreatedAt() const
{
    return createdAt_;
}

void SnapshotDetailV5::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SnapshotDetailV5::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SnapshotDetailV5::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SnapshotDetailV5::getUpdatedAt() const
{
    return updatedAt_;
}

void SnapshotDetailV5::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SnapshotDetailV5::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SnapshotDetailV5::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string SnapshotDetailV5::getVolumeId() const
{
    return volumeId_;
}

void SnapshotDetailV5::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool SnapshotDetailV5::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void SnapshotDetailV5::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

int32_t SnapshotDetailV5::getSize() const
{
    return size_;
}

void SnapshotDetailV5::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SnapshotDetailV5::sizeIsSet() const
{
    return sizeIsSet_;
}

void SnapshotDetailV5::unsetsize()
{
    sizeIsSet_ = false;
}

std::string SnapshotDetailV5::getStatus() const
{
    return status_;
}

void SnapshotDetailV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotDetailV5::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotDetailV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SnapshotDetailV5::getProjectId() const
{
    return projectId_;
}

void SnapshotDetailV5::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SnapshotDetailV5::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SnapshotDetailV5::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SnapshotDetailV5::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SnapshotDetailV5::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SnapshotDetailV5::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SnapshotDetailV5::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool SnapshotDetailV5::isEncrypted() const
{
    return encrypted_;
}

void SnapshotDetailV5::setEncrypted(bool value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool SnapshotDetailV5::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void SnapshotDetailV5::unsetencrypted()
{
    encryptedIsSet_ = false;
}

std::string SnapshotDetailV5::getCmkId() const
{
    return cmkId_;
}

void SnapshotDetailV5::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool SnapshotDetailV5::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void SnapshotDetailV5::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

std::string SnapshotDetailV5::getCategory() const
{
    return category_;
}

void SnapshotDetailV5::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SnapshotDetailV5::categoryIsSet() const
{
    return categoryIsSet_;
}

void SnapshotDetailV5::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string SnapshotDetailV5::getAvailabilityZone() const
{
    return availabilityZone_;
}

void SnapshotDetailV5::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool SnapshotDetailV5::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void SnapshotDetailV5::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::map<std::string, std::string>& SnapshotDetailV5::getTags()
{
    return tags_;
}

void SnapshotDetailV5::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SnapshotDetailV5::tagsIsSet() const
{
    return tagsIsSet_;
}

void SnapshotDetailV5::unsettags()
{
    tagsIsSet_ = false;
}

bool SnapshotDetailV5::isInstantAccess() const
{
    return instantAccess_;
}

void SnapshotDetailV5::setInstantAccess(bool value)
{
    instantAccess_ = value;
    instantAccessIsSet_ = true;
}

bool SnapshotDetailV5::instantAccessIsSet() const
{
    return instantAccessIsSet_;
}

void SnapshotDetailV5::unsetinstantAccess()
{
    instantAccessIsSet_ = false;
}

std::string SnapshotDetailV5::getRetentionAt() const
{
    return retentionAt_;
}

void SnapshotDetailV5::setRetentionAt(const std::string& value)
{
    retentionAt_ = value;
    retentionAtIsSet_ = true;
}

bool SnapshotDetailV5::retentionAtIsSet() const
{
    return retentionAtIsSet_;
}

void SnapshotDetailV5::unsetretentionAt()
{
    retentionAtIsSet_ = false;
}

std::string SnapshotDetailV5::getInstantAccessRetentionAt() const
{
    return instantAccessRetentionAt_;
}

void SnapshotDetailV5::setInstantAccessRetentionAt(const std::string& value)
{
    instantAccessRetentionAt_ = value;
    instantAccessRetentionAtIsSet_ = true;
}

bool SnapshotDetailV5::instantAccessRetentionAtIsSet() const
{
    return instantAccessRetentionAtIsSet_;
}

void SnapshotDetailV5::unsetinstantAccessRetentionAt()
{
    instantAccessRetentionAtIsSet_ = false;
}

bool SnapshotDetailV5::isIncremental() const
{
    return incremental_;
}

void SnapshotDetailV5::setIncremental(bool value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool SnapshotDetailV5::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void SnapshotDetailV5::unsetincremental()
{
    incrementalIsSet_ = false;
}

std::string SnapshotDetailV5::getSnapshotType() const
{
    return snapshotType_;
}

void SnapshotDetailV5::setSnapshotType(const std::string& value)
{
    snapshotType_ = value;
    snapshotTypeIsSet_ = true;
}

bool SnapshotDetailV5::snapshotTypeIsSet() const
{
    return snapshotTypeIsSet_;
}

void SnapshotDetailV5::unsetsnapshotType()
{
    snapshotTypeIsSet_ = false;
}

std::string SnapshotDetailV5::getProgress() const
{
    return progress_;
}

void SnapshotDetailV5::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool SnapshotDetailV5::progressIsSet() const
{
    return progressIsSet_;
}

void SnapshotDetailV5::unsetprogress()
{
    progressIsSet_ = false;
}

std::string SnapshotDetailV5::getEncryptAlgorithm() const
{
    return encryptAlgorithm_;
}

void SnapshotDetailV5::setEncryptAlgorithm(const std::string& value)
{
    encryptAlgorithm_ = value;
    encryptAlgorithmIsSet_ = true;
}

bool SnapshotDetailV5::encryptAlgorithmIsSet() const
{
    return encryptAlgorithmIsSet_;
}

void SnapshotDetailV5::unsetencryptAlgorithm()
{
    encryptAlgorithmIsSet_ = false;
}

std::vector<SnapshotChains>& SnapshotDetailV5::getSnapshotChains()
{
    return snapshotChains_;
}

void SnapshotDetailV5::setSnapshotChains(const std::vector<SnapshotChains>& value)
{
    snapshotChains_ = value;
    snapshotChainsIsSet_ = true;
}

bool SnapshotDetailV5::snapshotChainsIsSet() const
{
    return snapshotChainsIsSet_;
}

void SnapshotDetailV5::unsetsnapshotChains()
{
    snapshotChainsIsSet_ = false;
}

std::string SnapshotDetailV5::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void SnapshotDetailV5::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool SnapshotDetailV5::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void SnapshotDetailV5::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

}
}
}
}
}


