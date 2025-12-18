

#include "huaweicloud/gaussdbfornosql/v3/model/DatabaseTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DatabaseTable::DatabaseTable()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableNamesIsSet_ = false;
}

DatabaseTable::~DatabaseTable() = default;

void DatabaseTable::validate()
{
}

web::json::value DatabaseTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNamesIsSet_) {
        val[utility::conversions::to_string_t("table_names")] = ModelBase::toJson(tableNames_);
    }

    return val;
}
bool DatabaseTable::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("table_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNames(refVal);
        }
    }
    return ok;
}


std::string DatabaseTable::getDatabaseName() const
{
    return databaseName_;
}

void DatabaseTable::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DatabaseTable::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DatabaseTable::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<std::string>& DatabaseTable::getTableNames()
{
    return tableNames_;
}

void DatabaseTable::setTableNames(const std::vector<std::string>& value)
{
    tableNames_ = value;
    tableNamesIsSet_ = true;
}

bool DatabaseTable::tableNamesIsSet() const
{
    return tableNamesIsSet_;
}

void DatabaseTable::unsettableNames()
{
    tableNamesIsSet_ = false;
}

}
}
}
}
}


