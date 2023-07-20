

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlBackupResponse::CreateGaussMySqlBackupResponse()
{
    backupIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGaussMySqlBackupResponse::~CreateGaussMySqlBackupResponse() = default;

void CreateGaussMySqlBackupResponse::validate()
{
}

web::json::value CreateGaussMySqlBackupResponse::toJson() const
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

bool CreateGaussMySqlBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            Backup refVal;
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

Backup CreateGaussMySqlBackupResponse::getBackup() const
{
    return backup_;
}

void CreateGaussMySqlBackupResponse::setBackup(const Backup& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool CreateGaussMySqlBackupResponse::backupIsSet() const
{
    return backupIsSet_;
}

void CreateGaussMySqlBackupResponse::unsetbackup()
{
    backupIsSet_ = false;
}

std::string CreateGaussMySqlBackupResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


