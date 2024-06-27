

#include "huaweicloud/gaussdb/v3/model/ChDatabaseConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseConfigResponse::ChDatabaseConfigResponse()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    dbConfigCheckResultsIsSet_ = false;
}

ChDatabaseConfigResponse::~ChDatabaseConfigResponse() = default;

void ChDatabaseConfigResponse::validate()
{
}

web::json::value ChDatabaseConfigResponse::toJson() const
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
bool ChDatabaseConfigResponse::fromJson(const web::json::value& val)
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


std::string ChDatabaseConfigResponse::getDatabaseName() const
{
    return databaseName_;
}

void ChDatabaseConfigResponse::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ChDatabaseConfigResponse::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ChDatabaseConfigResponse::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<ChDatabaseConfigCheckResult>& ChDatabaseConfigResponse::getDbConfigCheckResults()
{
    return dbConfigCheckResults_;
}

void ChDatabaseConfigResponse::setDbConfigCheckResults(const std::vector<ChDatabaseConfigCheckResult>& value)
{
    dbConfigCheckResults_ = value;
    dbConfigCheckResultsIsSet_ = true;
}

bool ChDatabaseConfigResponse::dbConfigCheckResultsIsSet() const
{
    return dbConfigCheckResultsIsSet_;
}

void ChDatabaseConfigResponse::unsetdbConfigCheckResults()
{
    dbConfigCheckResultsIsSet_ = false;
}

}
}
}
}
}


