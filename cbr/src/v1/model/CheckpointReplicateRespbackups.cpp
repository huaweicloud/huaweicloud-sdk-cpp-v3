

#include "huaweicloud/cbr/v1/model/CheckpointReplicateRespbackups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointReplicateRespbackups::CheckpointReplicateRespbackups()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    replicationRecordId_ = "";
    replicationRecordIdIsSet_ = false;
}

CheckpointReplicateRespbackups::~CheckpointReplicateRespbackups() = default;

void CheckpointReplicateRespbackups::validate()
{
}

web::json::value CheckpointReplicateRespbackups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(replicationRecordIdIsSet_) {
        val[utility::conversions::to_string_t("replication_record_id")] = ModelBase::toJson(replicationRecordId_);
    }

    return val;
}
bool CheckpointReplicateRespbackups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("replication_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationRecordId(refVal);
        }
    }
    return ok;
}


std::string CheckpointReplicateRespbackups::getBackupId() const
{
    return backupId_;
}

void CheckpointReplicateRespbackups::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CheckpointReplicateRespbackups::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CheckpointReplicateRespbackups::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string CheckpointReplicateRespbackups::getReplicationRecordId() const
{
    return replicationRecordId_;
}

void CheckpointReplicateRespbackups::setReplicationRecordId(const std::string& value)
{
    replicationRecordId_ = value;
    replicationRecordIdIsSet_ = true;
}

bool CheckpointReplicateRespbackups::replicationRecordIdIsSet() const
{
    return replicationRecordIdIsSet_;
}

void CheckpointReplicateRespbackups::unsetreplicationRecordId()
{
    replicationRecordIdIsSet_ = false;
}

}
}
}
}
}


