

#include "huaweicloud/cbr/v1/model/CheckpointReplicateParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointReplicateParam::CheckpointReplicateParam()
{
    autoTrigger_ = false;
    autoTriggerIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    enableAcceleration_ = false;
    enableAccelerationIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

CheckpointReplicateParam::~CheckpointReplicateParam() = default;

void CheckpointReplicateParam::validate()
{
}

web::json::value CheckpointReplicateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTriggerIsSet_) {
        val[utility::conversions::to_string_t("auto_trigger")] = ModelBase::toJson(autoTrigger_);
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
    if(enableAccelerationIsSet_) {
        val[utility::conversions::to_string_t("enable_acceleration")] = ModelBase::toJson(enableAcceleration_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool CheckpointReplicateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_trigger"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTrigger(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_acceleration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_acceleration"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAcceleration(refVal);
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


bool CheckpointReplicateParam::isAutoTrigger() const
{
    return autoTrigger_;
}

void CheckpointReplicateParam::setAutoTrigger(bool value)
{
    autoTrigger_ = value;
    autoTriggerIsSet_ = true;
}

bool CheckpointReplicateParam::autoTriggerIsSet() const
{
    return autoTriggerIsSet_;
}

void CheckpointReplicateParam::unsetautoTrigger()
{
    autoTriggerIsSet_ = false;
}

std::string CheckpointReplicateParam::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void CheckpointReplicateParam::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool CheckpointReplicateParam::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void CheckpointReplicateParam::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string CheckpointReplicateParam::getDestinationRegion() const
{
    return destinationRegion_;
}

void CheckpointReplicateParam::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool CheckpointReplicateParam::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void CheckpointReplicateParam::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string CheckpointReplicateParam::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void CheckpointReplicateParam::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool CheckpointReplicateParam::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void CheckpointReplicateParam::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

bool CheckpointReplicateParam::isEnableAcceleration() const
{
    return enableAcceleration_;
}

void CheckpointReplicateParam::setEnableAcceleration(bool value)
{
    enableAcceleration_ = value;
    enableAccelerationIsSet_ = true;
}

bool CheckpointReplicateParam::enableAccelerationIsSet() const
{
    return enableAccelerationIsSet_;
}

void CheckpointReplicateParam::unsetenableAcceleration()
{
    enableAccelerationIsSet_ = false;
}

std::string CheckpointReplicateParam::getVaultId() const
{
    return vaultId_;
}

void CheckpointReplicateParam::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool CheckpointReplicateParam::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void CheckpointReplicateParam::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


