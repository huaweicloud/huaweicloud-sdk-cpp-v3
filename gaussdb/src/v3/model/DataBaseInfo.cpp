

#include "huaweicloud/gaussdb/v3/model/DataBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DataBaseInfo::DataBaseInfo()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    dbConfigCheckResultsIsSet_ = false;
}

DataBaseInfo::~DataBaseInfo() = default;

void DataBaseInfo::validate()
{
}

web::json::value DataBaseInfo::toJson() const
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
bool DataBaseInfo::fromJson(const web::json::value& val)
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
            std::vector<DbConfigCheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbConfigCheckResults(refVal);
        }
    }
    return ok;
}


std::string DataBaseInfo::getDatabaseName() const
{
    return databaseName_;
}

void DataBaseInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DataBaseInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DataBaseInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<DbConfigCheckResult>& DataBaseInfo::getDbConfigCheckResults()
{
    return dbConfigCheckResults_;
}

void DataBaseInfo::setDbConfigCheckResults(const std::vector<DbConfigCheckResult>& value)
{
    dbConfigCheckResults_ = value;
    dbConfigCheckResultsIsSet_ = true;
}

bool DataBaseInfo::dbConfigCheckResultsIsSet() const
{
    return dbConfigCheckResultsIsSet_;
}

void DataBaseInfo::unsetdbConfigCheckResults()
{
    dbConfigCheckResultsIsSet_ = false;
}

}
}
}
}
}


