

#include "huaweicloud/cbr/v1/model/OpExtendInfoReplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoReplication::OpExtendInfoReplication()
{
    destinationBackupId_ = "";
    destinationBackupIdIsSet_ = false;
    destinationCheckpointId_ = "";
    destinationCheckpointIdIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    sourceBackupId_ = "";
    sourceBackupIdIsSet_ = false;
    sourceCheckpointId_ = "";
    sourceCheckpointIdIsSet_ = false;
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
    sourceRegion_ = "";
    sourceRegionIsSet_ = false;
    sourceBackupName_ = "";
    sourceBackupNameIsSet_ = false;
    destinationBackupName_ = "";
    destinationBackupNameIsSet_ = false;
}

OpExtendInfoReplication::~OpExtendInfoReplication() = default;

void OpExtendInfoReplication::validate()
{
}

web::json::value OpExtendInfoReplication::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(sourceBackupNameIsSet_) {
        val[utility::conversions::to_string_t("source_backup_name")] = ModelBase::toJson(sourceBackupName_);
    }
    if(destinationBackupNameIsSet_) {
        val[utility::conversions::to_string_t("destination_backup_name")] = ModelBase::toJson(destinationBackupName_);
    }

    return val;
}
bool OpExtendInfoReplication::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("source_backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBackupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationBackupName(refVal);
        }
    }
    return ok;
}


std::string OpExtendInfoReplication::getDestinationBackupId() const
{
    return destinationBackupId_;
}

void OpExtendInfoReplication::setDestinationBackupId(const std::string& value)
{
    destinationBackupId_ = value;
    destinationBackupIdIsSet_ = true;
}

bool OpExtendInfoReplication::destinationBackupIdIsSet() const
{
    return destinationBackupIdIsSet_;
}

void OpExtendInfoReplication::unsetdestinationBackupId()
{
    destinationBackupIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getDestinationCheckpointId() const
{
    return destinationCheckpointId_;
}

void OpExtendInfoReplication::setDestinationCheckpointId(const std::string& value)
{
    destinationCheckpointId_ = value;
    destinationCheckpointIdIsSet_ = true;
}

bool OpExtendInfoReplication::destinationCheckpointIdIsSet() const
{
    return destinationCheckpointIdIsSet_;
}

void OpExtendInfoReplication::unsetdestinationCheckpointId()
{
    destinationCheckpointIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void OpExtendInfoReplication::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool OpExtendInfoReplication::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void OpExtendInfoReplication::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getDestinationRegion() const
{
    return destinationRegion_;
}

void OpExtendInfoReplication::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool OpExtendInfoReplication::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void OpExtendInfoReplication::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string OpExtendInfoReplication::getSourceBackupId() const
{
    return sourceBackupId_;
}

void OpExtendInfoReplication::setSourceBackupId(const std::string& value)
{
    sourceBackupId_ = value;
    sourceBackupIdIsSet_ = true;
}

bool OpExtendInfoReplication::sourceBackupIdIsSet() const
{
    return sourceBackupIdIsSet_;
}

void OpExtendInfoReplication::unsetsourceBackupId()
{
    sourceBackupIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getSourceCheckpointId() const
{
    return sourceCheckpointId_;
}

void OpExtendInfoReplication::setSourceCheckpointId(const std::string& value)
{
    sourceCheckpointId_ = value;
    sourceCheckpointIdIsSet_ = true;
}

bool OpExtendInfoReplication::sourceCheckpointIdIsSet() const
{
    return sourceCheckpointIdIsSet_;
}

void OpExtendInfoReplication::unsetsourceCheckpointId()
{
    sourceCheckpointIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getSourceProjectId() const
{
    return sourceProjectId_;
}

void OpExtendInfoReplication::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool OpExtendInfoReplication::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void OpExtendInfoReplication::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

std::string OpExtendInfoReplication::getSourceRegion() const
{
    return sourceRegion_;
}

void OpExtendInfoReplication::setSourceRegion(const std::string& value)
{
    sourceRegion_ = value;
    sourceRegionIsSet_ = true;
}

bool OpExtendInfoReplication::sourceRegionIsSet() const
{
    return sourceRegionIsSet_;
}

void OpExtendInfoReplication::unsetsourceRegion()
{
    sourceRegionIsSet_ = false;
}

std::string OpExtendInfoReplication::getSourceBackupName() const
{
    return sourceBackupName_;
}

void OpExtendInfoReplication::setSourceBackupName(const std::string& value)
{
    sourceBackupName_ = value;
    sourceBackupNameIsSet_ = true;
}

bool OpExtendInfoReplication::sourceBackupNameIsSet() const
{
    return sourceBackupNameIsSet_;
}

void OpExtendInfoReplication::unsetsourceBackupName()
{
    sourceBackupNameIsSet_ = false;
}

std::string OpExtendInfoReplication::getDestinationBackupName() const
{
    return destinationBackupName_;
}

void OpExtendInfoReplication::setDestinationBackupName(const std::string& value)
{
    destinationBackupName_ = value;
    destinationBackupNameIsSet_ = true;
}

bool OpExtendInfoReplication::destinationBackupNameIsSet() const
{
    return destinationBackupNameIsSet_;
}

void OpExtendInfoReplication::unsetdestinationBackupName()
{
    destinationBackupNameIsSet_ = false;
}

}
}
}
}
}


