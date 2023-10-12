

#include "huaweicloud/drs/v3/model/UpdateDatabaseObjectReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateDatabaseObjectReq::UpdateDatabaseObjectReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    selected_ = false;
    selectedIsSet_ = false;
    syncDatabase_ = false;
    syncDatabaseIsSet_ = false;
    jobIsSet_ = false;
}

UpdateDatabaseObjectReq::~UpdateDatabaseObjectReq() = default;

void UpdateDatabaseObjectReq::validate()
{
}

web::json::value UpdateDatabaseObjectReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(selectedIsSet_) {
        val[utility::conversions::to_string_t("selected")] = ModelBase::toJson(selected_);
    }
    if(syncDatabaseIsSet_) {
        val[utility::conversions::to_string_t("sync_database")] = ModelBase::toJson(syncDatabase_);
    }
    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool UpdateDatabaseObjectReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("selected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_database"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabaseObjectReq::getJobId() const
{
    return jobId_;
}

void UpdateDatabaseObjectReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateDatabaseObjectReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateDatabaseObjectReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateDatabaseObjectReq::isSelected() const
{
    return selected_;
}

void UpdateDatabaseObjectReq::setSelected(bool value)
{
    selected_ = value;
    selectedIsSet_ = true;
}

bool UpdateDatabaseObjectReq::selectedIsSet() const
{
    return selectedIsSet_;
}

void UpdateDatabaseObjectReq::unsetselected()
{
    selectedIsSet_ = false;
}

bool UpdateDatabaseObjectReq::isSyncDatabase() const
{
    return syncDatabase_;
}

void UpdateDatabaseObjectReq::setSyncDatabase(bool value)
{
    syncDatabase_ = value;
    syncDatabaseIsSet_ = true;
}

bool UpdateDatabaseObjectReq::syncDatabaseIsSet() const
{
    return syncDatabaseIsSet_;
}

void UpdateDatabaseObjectReq::unsetsyncDatabase()
{
    syncDatabaseIsSet_ = false;
}

std::vector<DatabaseInfo>& UpdateDatabaseObjectReq::getJob()
{
    return job_;
}

void UpdateDatabaseObjectReq::setJob(const std::vector<DatabaseInfo>& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool UpdateDatabaseObjectReq::jobIsSet() const
{
    return jobIsSet_;
}

void UpdateDatabaseObjectReq::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


