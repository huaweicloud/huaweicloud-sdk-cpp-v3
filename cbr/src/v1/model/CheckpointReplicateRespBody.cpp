

#include "huaweicloud/cbr/v1/model/CheckpointReplicateRespBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointReplicateRespBody::CheckpointReplicateRespBody()
{
    backupsIsSet_ = false;
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
    sourceRegion_ = "";
    sourceRegionIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

CheckpointReplicateRespBody::~CheckpointReplicateRespBody() = default;

void CheckpointReplicateRespBody::validate()
{
}

web::json::value CheckpointReplicateRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
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
    if(sourceRegionIsSet_) {
        val[utility::conversions::to_string_t("source_region")] = ModelBase::toJson(sourceRegion_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool CheckpointReplicateRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckpointReplicateRespbackups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRegion(refVal);
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

std::vector<CheckpointReplicateRespbackups>& CheckpointReplicateRespBody::getBackups()
{
    return backups_;
}

void CheckpointReplicateRespBody::setBackups(const std::vector<CheckpointReplicateRespbackups>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool CheckpointReplicateRespBody::backupsIsSet() const
{
    return backupsIsSet_;
}

void CheckpointReplicateRespBody::unsetbackups()
{
    backupsIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void CheckpointReplicateRespBody::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool CheckpointReplicateRespBody::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void CheckpointReplicateRespBody::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getDestinationRegion() const
{
    return destinationRegion_;
}

void CheckpointReplicateRespBody::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool CheckpointReplicateRespBody::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void CheckpointReplicateRespBody::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void CheckpointReplicateRespBody::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool CheckpointReplicateRespBody::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void CheckpointReplicateRespBody::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getProjectId() const
{
    return projectId_;
}

void CheckpointReplicateRespBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckpointReplicateRespBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckpointReplicateRespBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getProviderId() const
{
    return providerId_;
}

void CheckpointReplicateRespBody::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool CheckpointReplicateRespBody::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void CheckpointReplicateRespBody::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getSourceRegion() const
{
    return sourceRegion_;
}

void CheckpointReplicateRespBody::setSourceRegion(const std::string& value)
{
    sourceRegion_ = value;
    sourceRegionIsSet_ = true;
}

bool CheckpointReplicateRespBody::sourceRegionIsSet() const
{
    return sourceRegionIsSet_;
}

void CheckpointReplicateRespBody::unsetsourceRegion()
{
    sourceRegionIsSet_ = false;
}

std::string CheckpointReplicateRespBody::getVaultId() const
{
    return vaultId_;
}

void CheckpointReplicateRespBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool CheckpointReplicateRespBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void CheckpointReplicateRespBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


