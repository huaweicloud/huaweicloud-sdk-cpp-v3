

#include "huaweicloud/rds/v3/model/RestoreDatabasesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreDatabasesInfo::RestoreDatabasesInfo()
{
    database_ = "";
    databaseIsSet_ = false;
    tablesIsSet_ = false;
}

RestoreDatabasesInfo::~RestoreDatabasesInfo() = default;

void RestoreDatabasesInfo::validate()
{
}

web::json::value RestoreDatabasesInfo::toJson() const
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
bool RestoreDatabasesInfo::fromJson(const web::json::value& val)
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
            std::vector<RestoreTableInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string RestoreDatabasesInfo::getDatabase() const
{
    return database_;
}

void RestoreDatabasesInfo::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool RestoreDatabasesInfo::databaseIsSet() const
{
    return databaseIsSet_;
}

void RestoreDatabasesInfo::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::vector<RestoreTableInfo>& RestoreDatabasesInfo::getTables()
{
    return tables_;
}

void RestoreDatabasesInfo::setTables(const std::vector<RestoreTableInfo>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool RestoreDatabasesInfo::tablesIsSet() const
{
    return tablesIsSet_;
}

void RestoreDatabasesInfo::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


