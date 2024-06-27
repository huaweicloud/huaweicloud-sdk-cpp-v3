

#include "huaweicloud/gaussdb/v3/model/CheckClickHouseTableConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckClickHouseTableConfigResponse::CheckClickHouseTableConfigResponse()
{
    sourceDatabaseName_ = "";
    sourceDatabaseNameIsSet_ = false;
    tableConfigCheckResultsIsSet_ = false;
}

CheckClickHouseTableConfigResponse::~CheckClickHouseTableConfigResponse() = default;

void CheckClickHouseTableConfigResponse::validate()
{
}

web::json::value CheckClickHouseTableConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseNameIsSet_) {
        val[utility::conversions::to_string_t("source_database_name")] = ModelBase::toJson(sourceDatabaseName_);
    }
    if(tableConfigCheckResultsIsSet_) {
        val[utility::conversions::to_string_t("table_config_check_results")] = ModelBase::toJson(tableConfigCheckResults_);
    }

    return val;
}
bool CheckClickHouseTableConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("table_config_check_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_config_check_results"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseTableConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableConfigCheckResults(refVal);
        }
    }
    return ok;
}


std::string CheckClickHouseTableConfigResponse::getSourceDatabaseName() const
{
    return sourceDatabaseName_;
}

void CheckClickHouseTableConfigResponse::setSourceDatabaseName(const std::string& value)
{
    sourceDatabaseName_ = value;
    sourceDatabaseNameIsSet_ = true;
}

bool CheckClickHouseTableConfigResponse::sourceDatabaseNameIsSet() const
{
    return sourceDatabaseNameIsSet_;
}

void CheckClickHouseTableConfigResponse::unsetsourceDatabaseName()
{
    sourceDatabaseNameIsSet_ = false;
}

std::vector<ChDatabaseTableConfigCheckResult>& CheckClickHouseTableConfigResponse::getTableConfigCheckResults()
{
    return tableConfigCheckResults_;
}

void CheckClickHouseTableConfigResponse::setTableConfigCheckResults(const std::vector<ChDatabaseTableConfigCheckResult>& value)
{
    tableConfigCheckResults_ = value;
    tableConfigCheckResultsIsSet_ = true;
}

bool CheckClickHouseTableConfigResponse::tableConfigCheckResultsIsSet() const
{
    return tableConfigCheckResultsIsSet_;
}

void CheckClickHouseTableConfigResponse::unsettableConfigCheckResults()
{
    tableConfigCheckResultsIsSet_ = false;
}

}
}
}
}
}


