

#include "huaweicloud/dds/v3/model/CreateManualBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateManualBackupResponse::CreateManualBackupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

CreateManualBackupResponse::~CreateManualBackupResponse() = default;

void CreateManualBackupResponse::validate()
{
}

web::json::value CreateManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}

bool CreateManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    return ok;
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

std::string CreateManualBackupResponse::getBackupId() const
{
    return backupId_;
}

void CreateManualBackupResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CreateManualBackupResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CreateManualBackupResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


