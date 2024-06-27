

#include "huaweicloud/gaussdb/v3/model/CheckClickHouseDataBaseConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckClickHouseDataBaseConfigResponse::CheckClickHouseDataBaseConfigResponse()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    dbConfigCheckResultsIsSet_ = false;
}

CheckClickHouseDataBaseConfigResponse::~CheckClickHouseDataBaseConfigResponse() = default;

void CheckClickHouseDataBaseConfigResponse::validate()
{
}

web::json::value CheckClickHouseDataBaseConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(dbConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("db_config_check_results")] = ModelBase::toJson(dbConfigCheckResults_);
    }

    return val;
}
bool CheckClickHouseDataBaseConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbConfigCheckResults(refVal);
        }
    }
    return ok;
}


std::string CheckClickHouseDataBaseConfigResponse::getDatabaseName() const
{
    return databaseName_;
}

void CheckClickHouseDataBaseConfigResponse::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool CheckClickHouseDataBaseConfigResponse::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void CheckClickHouseDataBaseConfigResponse::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<ChDatabaseConfigCheckResult>& CheckClickHouseDataBaseConfigResponse::getDbConfigCheckResults()
{
    return dbConfigCheckResults_;
}

void CheckClickHouseDataBaseConfigResponse::setDbConfigCheckResults(const std::vector<ChDatabaseConfigCheckResult>& value)
{
    dbConfigCheckResults_ = value;
    dbConfigCheckResultsIsSet_ = true;
}

bool CheckClickHouseDataBaseConfigResponse::dbConfigCheckResultsIsSet() const
{
    return dbConfigCheckResultsIsSet_;
}

void CheckClickHouseDataBaseConfigResponse::unsetdbConfigCheckResults()
{
    dbConfigCheckResultsIsSet_ = false;
}

}
}
}
}
}


