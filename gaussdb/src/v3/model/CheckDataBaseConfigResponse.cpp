

#include "huaweicloud/gaussdb/v3/model/CheckDataBaseConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckDataBaseConfigResponse::CheckDataBaseConfigResponse()
{
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    sourceDbConfigCheckResultsIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    targetDbConfigCheckResultsIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

CheckDataBaseConfigResponse::~CheckDataBaseConfigResponse() = default;

void CheckDataBaseConfigResponse::validate()
{
}

web::json::value CheckDataBaseConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("source_database_name")] = ModelBase::toJson(sourceDatabaseName_);
    }
    if(sourceDbConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("source_db_config_check_results")] = ModelBase::toJson(sourceDbConfigCheckResults_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(targetDbConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("target_db_config_check_results")] = ModelBase::toJson(targetDbConfigCheckResults_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool CheckDataBaseConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_db_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<DbConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbConfigCheckResults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_db_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<DbConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbConfigCheckResults(refVal);
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
    return ok;
}


std::string CheckDataBaseConfigResponse::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void CheckDataBaseConfigResponse::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool CheckDataBaseConfigResponse::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void CheckDataBaseConfigResponse::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::vector<DbConfigCheckResult>& CheckDataBaseConfigResponse::getSourceDbConfigCheckResults()
{
    return sourceDbConfigCheckResults_;
}

void CheckDataBaseConfigResponse::setSourceDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value)
{
    sourceDbConfigCheckResults_ = value;
    sourceDbConfigCheckResultsIsSet_ = true;
}

bool CheckDataBaseConfigResponse::sourceDbConfigCheckResultsIsSet() const
{
    return sourceDbConfigCheckResultsIsSet_;
}

void CheckDataBaseConfigResponse::unsetsourceDbConfigCheckResults()
{
    sourceDbConfigCheckResultsIsSet_ = false;
}

std::string CheckDataBaseConfigResponse::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void CheckDataBaseConfigResponse::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool CheckDataBaseConfigResponse::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void CheckDataBaseConfigResponse::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

std::vector<DbConfigCheckResult>& CheckDataBaseConfigResponse::getTargetDbConfigCheckResults()
{
    return targetDbConfigCheckResults_;
}

void CheckDataBaseConfigResponse::setTargetDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value)
{
    targetDbConfigCheckResults_ = value;
    targetDbConfigCheckResultsIsSet_ = true;
}

bool CheckDataBaseConfigResponse::targetDbConfigCheckResultsIsSet() const
{
    return targetDbConfigCheckResultsIsSet_;
}

void CheckDataBaseConfigResponse::unsettargetDbConfigCheckResults()
{
    targetDbConfigCheckResultsIsSet_ = false;
}

std::string CheckDataBaseConfigResponse::getTaskName() const
{
    return taskName_;
}

void CheckDataBaseConfigResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CheckDataBaseConfigResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CheckDataBaseConfigResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


