

#include "huaweicloud/rds/v3/model/TransferBackupResponseBody_results.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferBackupResponseBody_results::TransferBackupResponseBody_results()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

TransferBackupResponseBody_results::~TransferBackupResponseBody_results() = default;

void TransferBackupResponseBody_results::validate()
{
}

web::json::value TransferBackupResponseBody_results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool TransferBackupResponseBody_results::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string TransferBackupResponseBody_results::getBackupId() const
{
    return backupId_;
}

void TransferBackupResponseBody_results::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool TransferBackupResponseBody_results::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void TransferBackupResponseBody_results::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string TransferBackupResponseBody_results::getStatus() const
{
    return status_;
}

void TransferBackupResponseBody_results::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TransferBackupResponseBody_results::statusIsSet() const
{
    return statusIsSet_;
}

void TransferBackupResponseBody_results::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TransferBackupResponseBody_results::getJobId() const
{
    return jobId_;
}

void TransferBackupResponseBody_results::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TransferBackupResponseBody_results::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TransferBackupResponseBody_results::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


