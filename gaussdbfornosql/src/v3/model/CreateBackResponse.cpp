

#include "huaweicloud/gaussdbfornosql/v3/model/CreateBackResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateBackResponse::CreateBackResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

CreateBackResponse::~CreateBackResponse() = default;

void CreateBackResponse::validate()
{
}

web::json::value CreateBackResponse::toJson() const
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
bool CreateBackResponse::fromJson(const web::json::value& val)
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


std::string CreateBackResponse::getJobId() const
{
    return jobId_;
}

void CreateBackResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateBackResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateBackResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateBackResponse::getBackupId() const
{
    return backupId_;
}

void CreateBackResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CreateBackResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CreateBackResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


