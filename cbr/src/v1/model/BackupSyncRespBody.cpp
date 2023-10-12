

#include "huaweicloud/cbr/v1/model/BackupSyncRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupSyncRespBody::BackupSyncRespBody()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    operationLogId_ = "";
    operationLogIdIsSet_ = false;
}

BackupSyncRespBody::~BackupSyncRespBody() = default;

void BackupSyncRespBody::validate()
{
}

web::json::value BackupSyncRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(operationLogIdIsSet_) {
        val[utility::conversions::to_string_t("operation_log_id")] = ModelBase::toJson(operationLogId_);
    }

    return val;
}
bool BackupSyncRespBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogId(refVal);
        }
    }
    return ok;
}


std::string BackupSyncRespBody::getBackupId() const
{
    return backupId_;
}

void BackupSyncRespBody::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool BackupSyncRespBody::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void BackupSyncRespBody::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string BackupSyncRespBody::getOperationLogId() const
{
    return operationLogId_;
}

void BackupSyncRespBody::setOperationLogId(const std::string& value)
{
    operationLogId_ = value;
    operationLogIdIsSet_ = true;
}

bool BackupSyncRespBody::operationLogIdIsSet() const
{
    return operationLogIdIsSet_;
}

void BackupSyncRespBody::unsetoperationLogId()
{
    operationLogIdIsSet_ = false;
}

}
}
}
}
}


