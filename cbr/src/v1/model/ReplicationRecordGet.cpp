

#include "huaweicloud/cbr/v1/model/ReplicationRecordGet.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ReplicationRecordGet::ReplicationRecordGet()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    destinationBackupId_ = "";
    destinationBackupIdIsSet_ = false;
    destinationCheckpointId_ = "";
    destinationCheckpointIdIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    sourceBackupId_ = "";
    sourceBackupIdIsSet_ = false;
    sourceCheckpointId_ = "";
    sourceCheckpointIdIsSet_ = false;
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
    sourceRegion_ = "";
    sourceRegionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

ReplicationRecordGet::~ReplicationRecordGet() = default;

void ReplicationRecordGet::validate()
{
}

web::json::value ReplicationRecordGet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(destinationBackupIdIsSet_) {
        val[utility::conversions::to_string_t("destination_backup_id")] = ModelBase::toJson(destinationBackupId_);
    }
    if(destinationCheckpointIdIsSet_) {
        val[utility::conversions::to_string_t("destination_checkpoint_id")] = ModelBase::toJson(destinationCheckpointId_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sourceBackupIdIsSet_) {
        val[utility::conversions::to_string_t("source_backup_id")] = ModelBase::toJson(sourceBackupId_);
    }
    if(sourceCheckpointIdIsSet_) {
        val[utility::conversions::to_string_t("source_checkpoint_id")] = ModelBase::toJson(sourceCheckpointId_);
    }
    if(sourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("source_project_id")] = ModelBase::toJson(sourceProjectId_);
    }
    if(sourceRegionIsSet_) {
        val[utility::conversions::to_string_t("source_region")] = ModelBase::toJson(sourceRegion_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool ReplicationRecordGet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            ReplicationRecordsExtraInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}

std::string ReplicationRecordGet::getCreatedAt() const
{
    return createdAt_;
}

void ReplicationRecordGet::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ReplicationRecordGet::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ReplicationRecordGet::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ReplicationRecordGet::getDestinationBackupId() const
{
    return destinationBackupId_;
}

void ReplicationRecordGet::setDestinationBackupId(const std::string& value)
{
    destinationBackupId_ = value;
    destinationBackupIdIsSet_ = true;
}

bool ReplicationRecordGet::destinationBackupIdIsSet() const
{
    return destinationBackupIdIsSet_;
}

void ReplicationRecordGet::unsetdestinationBackupId()
{
    destinationBackupIdIsSet_ = false;
}

std::string ReplicationRecordGet::getDestinationCheckpointId() const
{
    return destinationCheckpointId_;
}

void ReplicationRecordGet::setDestinationCheckpointId(const std::string& value)
{
    destinationCheckpointId_ = value;
    destinationCheckpointIdIsSet_ = true;
}

bool ReplicationRecordGet::destinationCheckpointIdIsSet() const
{
    return destinationCheckpointIdIsSet_;
}

void ReplicationRecordGet::unsetdestinationCheckpointId()
{
    destinationCheckpointIdIsSet_ = false;
}

std::string ReplicationRecordGet::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void ReplicationRecordGet::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool ReplicationRecordGet::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void ReplicationRecordGet::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string ReplicationRecordGet::getDestinationRegion() const
{
    return destinationRegion_;
}

void ReplicationRecordGet::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool ReplicationRecordGet::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void ReplicationRecordGet::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string ReplicationRecordGet::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void ReplicationRecordGet::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool ReplicationRecordGet::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void ReplicationRecordGet::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

ReplicationRecordsExtraInfo ReplicationRecordGet::getExtraInfo() const
{
    return extraInfo_;
}

void ReplicationRecordGet::setExtraInfo(const ReplicationRecordsExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool ReplicationRecordGet::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void ReplicationRecordGet::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string ReplicationRecordGet::getId() const
{
    return id_;
}

void ReplicationRecordGet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReplicationRecordGet::idIsSet() const
{
    return idIsSet_;
}

void ReplicationRecordGet::unsetid()
{
    idIsSet_ = false;
}

std::string ReplicationRecordGet::getSourceBackupId() const
{
    return sourceBackupId_;
}

void ReplicationRecordGet::setSourceBackupId(const std::string& value)
{
    sourceBackupId_ = value;
    sourceBackupIdIsSet_ = true;
}

bool ReplicationRecordGet::sourceBackupIdIsSet() const
{
    return sourceBackupIdIsSet_;
}

void ReplicationRecordGet::unsetsourceBackupId()
{
    sourceBackupIdIsSet_ = false;
}

std::string ReplicationRecordGet::getSourceCheckpointId() const
{
    return sourceCheckpointId_;
}

void ReplicationRecordGet::setSourceCheckpointId(const std::string& value)
{
    sourceCheckpointId_ = value;
    sourceCheckpointIdIsSet_ = true;
}

bool ReplicationRecordGet::sourceCheckpointIdIsSet() const
{
    return sourceCheckpointIdIsSet_;
}

void ReplicationRecordGet::unsetsourceCheckpointId()
{
    sourceCheckpointIdIsSet_ = false;
}

std::string ReplicationRecordGet::getSourceProjectId() const
{
    return sourceProjectId_;
}

void ReplicationRecordGet::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool ReplicationRecordGet::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void ReplicationRecordGet::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string ReplicationRecordGet::getSourceRegion() const
{
    return sourceRegion_;
}

void ReplicationRecordGet::setSourceRegion(const std::string& value)
{
    sourceRegion_ = value;
    sourceRegionIsSet_ = true;
}

bool ReplicationRecordGet::sourceRegionIsSet() const
{
    return sourceRegionIsSet_;
}

void ReplicationRecordGet::unsetsourceRegion()
{
    sourceRegionIsSet_ = false;
}

std::string ReplicationRecordGet::getStatus() const
{
    return status_;
}

void ReplicationRecordGet::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReplicationRecordGet::statusIsSet() const
{
    return statusIsSet_;
}

void ReplicationRecordGet::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReplicationRecordGet::getVaultId() const
{
    return vaultId_;
}

void ReplicationRecordGet::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ReplicationRecordGet::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ReplicationRecordGet::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


