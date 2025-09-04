

#include "huaweicloud/gaussdb/v3/model/DatabaseTablesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DatabaseTablesInfo::DatabaseTablesInfo()
{
    database_ = "";
    databaseIsSet_ = false;
    tablesIsSet_ = false;
}

DatabaseTablesInfo::~DatabaseTablesInfo() = default;

void DatabaseTablesInfo::validate()
{
}

web::json::value DatabaseTablesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool DatabaseTablesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string DatabaseTablesInfo::getDatabase() const
{
    return database_;
}

void DatabaseTablesInfo::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool DatabaseTablesInfo::databaseIsSet() const
{
    return databaseIsSet_;
}

void DatabaseTablesInfo::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::vector<std::string>& DatabaseTablesInfo::getTables()
{
    return tables_;
}

void DatabaseTablesInfo::setTables(const std::vector<std::string>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool DatabaseTablesInfo::tablesIsSet() const
{
    return tablesIsSet_;
}

void DatabaseTablesInfo::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


