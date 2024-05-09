

#include "huaweicloud/gaussdb/v3/model/CheckTableConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckTableConfigResponse::CheckTableConfigResponse()
{
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    targetDatabaseName_ = "";
    targetDatabaseNameIsSet_ = false;
    tblConfigCheckResultsIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

CheckTableConfigResponse::~CheckTableConfigResponse() = default;

void CheckTableConfigResponse::validate()
{
}

web::json::value CheckTableConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("source_database_name")] = ModelBase::toJson(sourceDatabaseName_);
    }
    if(targetDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("target_database_name")] = ModelBase::toJson(targetDatabaseName_);
    }
    if(tblConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("tbl_config_check_results")] = ModelBase::toJson(tblConfigCheckResults_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool CheckTableConfigResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CheckTableConfigResponse::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void CheckTableConfigResponse::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool CheckTableConfigResponse::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void CheckTableConfigResponse::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::string CheckTableConfigResponse::getTargetDatabaseName() const
{
    return targetDatabaseName_;
}

void CheckTableConfigResponse::setTargetDatabaseName(const std::string& value)
{
    targetDatabaseName_ = value;
    targetDatabaseNameIsSet_ = true;
}

bool CheckTableConfigResponse::targetDatabaseNameIsSet() const
{
    return targetDatabaseNameIsSet_;
}

void CheckTableConfigResponse::unsettargetDatabaseName()
{
    targetDatabaseNameIsSet_ = false;
}

std::vector<TableConfigCheckResult>& CheckTableConfigResponse::getTblConfigCheckResults()
{
    return tblConfigCheckResults_;
}

void CheckTableConfigResponse::setTblConfigCheckResults(const std::vector<TableConfigCheckResult>& value)
{
    tblConfigCheckResults_ = value;
    tblConfigCheckResultsIsSet_ = true;
}

bool CheckTableConfigResponse::tblConfigCheckResultsIsSet() const
{
    return tblConfigCheckResultsIsSet_;
}

void CheckTableConfigResponse::unsettblConfigCheckResults()
{
    tblConfigCheckResultsIsSet_ = false;
}

std::string CheckTableConfigResponse::getTaskName() const
{
    return taskName_;
}

void CheckTableConfigResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CheckTableConfigResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CheckTableConfigResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


