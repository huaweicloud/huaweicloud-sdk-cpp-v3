

#include "huaweicloud/gaussdb/v3/model/ModifyDataSyncResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyDataSyncResponse::ModifyDataSyncResponse()
{
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    sourceDbConfigCheckResultsIsSet_ = false;
    tblConfigCheckResultsIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyDataSyncResponse::~ModifyDataSyncResponse() = default;

void ModifyDataSyncResponse::validate()
{
}

web::json::value ModifyDataSyncResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("source_database_name")] = ModelBase::toJson(sourceDatabaseName_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(sourceDbConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("source_db_config_check_results")] = ModelBase::toJson(sourceDbConfigCheckResults_);
    }
    if(tblConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("tbl_config_check_results")] = ModelBase::toJson(tblConfigCheckResults_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyDataSyncResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<DbConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbConfigCheckResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tbl_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tbl_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<TableConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTblConfigCheckResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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


std::string ModifyDataSyncResponse::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void ModifyDataSyncResponse::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool ModifyDataSyncResponse::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void ModifyDataSyncResponse::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::string ModifyDataSyncResponse::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void ModifyDataSyncResponse::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool ModifyDataSyncResponse::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void ModifyDataSyncResponse::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

std::vector<DbConfigCheckResult>& ModifyDataSyncResponse::getSourceDbConfigCheckResults()
{
    return sourceDbConfigCheckResults_;
}

void ModifyDataSyncResponse::setSourceDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value)
{
    sourceDbConfigCheckResults_ = value;
    sourceDbConfigCheckResultsIsSet_ = true;
}

bool ModifyDataSyncResponse::sourceDbConfigCheckResultsIsSet() const
{
    return sourceDbConfigCheckResultsIsSet_;
}

void ModifyDataSyncResponse::unsetsourceDbConfigCheckResults()
{
    sourceDbConfigCheckResultsIsSet_ = false;
}

std::vector<TableConfigCheckResult>& ModifyDataSyncResponse::getTblConfigCheckResults()
{
    return tblConfigCheckResults_;
}

void ModifyDataSyncResponse::setTblConfigCheckResults(const std::vector<TableConfigCheckResult>& value)
{
    tblConfigCheckResults_ = value;
    tblConfigCheckResultsIsSet_ = true;
}

bool ModifyDataSyncResponse::tblConfigCheckResultsIsSet() const
{
    return tblConfigCheckResultsIsSet_;
}

void ModifyDataSyncResponse::unsettblConfigCheckResults()
{
    tblConfigCheckResultsIsSet_ = false;
}

std::string ModifyDataSyncResponse::getTaskName() const
{
    return taskName_;
}

void ModifyDataSyncResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ModifyDataSyncResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ModifyDataSyncResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ModifyDataSyncResponse::getJobId() const
{
    return jobId_;
}

void ModifyDataSyncResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyDataSyncResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyDataSyncResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


