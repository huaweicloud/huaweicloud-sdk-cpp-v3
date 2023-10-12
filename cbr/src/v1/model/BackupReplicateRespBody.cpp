

#include "huaweicloud/cbr/v1/model/BackupReplicateRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupReplicateRespBody::BackupReplicateRespBody()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    providerId_ = "";
    providerIdIsSet_ = false;
    replicationRecordId_ = "";
    replicationRecordIdIsSet_ = false;
    sourceRegion_ = "";
    sourceRegionIsSet_ = false;
}

BackupReplicateRespBody::~BackupReplicateRespBody() = default;

void BackupReplicateRespBody::validate()
{
}

web::json::value BackupReplicateRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
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
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(providerIdIsSet_) {
        val[utility::conversions::to_string_t("provider_id")] = ModelBase::toJson(providerId_);
    }
    if(replicationRecordIdIsSet_) {
        val[utility::conversions::to_string_t("replication_record_id")] = ModelBase::toJson(replicationRecordId_);
    }
    if(sourceRegionIsSet_) {
        val[utility::conversions::to_string_t("source_region")] = ModelBase::toJson(sourceRegion_);
    }

    return val;
}
bool BackupReplicateRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationRecordId(refVal);
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
    return ok;
}


std::string BackupReplicateRespBody::getBackupId() const
{
    return backupId_;
}

void BackupReplicateRespBody::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool BackupReplicateRespBody::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void BackupReplicateRespBody::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void BackupReplicateRespBody::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool BackupReplicateRespBody::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void BackupReplicateRespBody::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getDestinationRegion() const
{
    return destinationRegion_;
}

void BackupReplicateRespBody::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool BackupReplicateRespBody::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void BackupReplicateRespBody::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string BackupReplicateRespBody::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void BackupReplicateRespBody::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool BackupReplicateRespBody::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void BackupReplicateRespBody::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getProjectId() const
{
    return projectId_;
}

void BackupReplicateRespBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BackupReplicateRespBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BackupReplicateRespBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getProviderId() const
{
    return providerId_;
}

void BackupReplicateRespBody::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool BackupReplicateRespBody::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void BackupReplicateRespBody::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getReplicationRecordId() const
{
    return replicationRecordId_;
}

void BackupReplicateRespBody::setReplicationRecordId(const std::string& value)
{
    replicationRecordId_ = value;
    replicationRecordIdIsSet_ = true;
}

bool BackupReplicateRespBody::replicationRecordIdIsSet() const
{
    return replicationRecordIdIsSet_;
}

void BackupReplicateRespBody::unsetreplicationRecordId()
{
    replicationRecordIdIsSet_ = false;
}

std::string BackupReplicateRespBody::getSourceRegion() const
{
    return sourceRegion_;
}

void BackupReplicateRespBody::setSourceRegion(const std::string& value)
{
    sourceRegion_ = value;
    sourceRegionIsSet_ = true;
}

bool BackupReplicateRespBody::sourceRegionIsSet() const
{
    return sourceRegionIsSet_;
}

void BackupReplicateRespBody::unsetsourceRegion()
{
    sourceRegionIsSet_ = false;
}

}
}
}
}
}


