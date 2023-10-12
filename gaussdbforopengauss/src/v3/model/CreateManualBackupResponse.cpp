

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateManualBackupResponse::CreateManualBackupResponse()
{
    backupIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateManualBackupResponse::~CreateManualBackupResponse() = default;

void CreateManualBackupResponse::validate()
{
}

web::json::value CreateManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            BackupInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


BackupInfo CreateManualBackupResponse::getBackup() const
{
    return backup_;
}

void CreateManualBackupResponse::setBackup(const BackupInfo& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool CreateManualBackupResponse::backupIsSet() const
{
    return backupIsSet_;
}

void CreateManualBackupResponse::unsetbackup()
{
    backupIsSet_ = false;
}

std::string CreateManualBackupResponse::getJobId() const
{
    return jobId_;
}

void CreateManualBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateManualBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateManualBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


