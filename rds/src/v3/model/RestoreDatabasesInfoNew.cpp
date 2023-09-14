

#include "huaweicloud/rds/v3/model/RestoreDatabasesInfoNew.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreDatabasesInfoNew::RestoreDatabasesInfoNew()
{
    database_ = "";
    databaseIsSet_ = false;
    tablesIsSet_ = false;
}

RestoreDatabasesInfoNew::~RestoreDatabasesInfoNew() = default;

void RestoreDatabasesInfoNew::validate()
{
}

web::json::value RestoreDatabasesInfoNew::toJson() const
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

bool RestoreDatabasesInfoNew::fromJson(const web::json::value& val)
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
            std::vector<RestoreTableInfoNew> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}

std::string RestoreDatabasesInfoNew::getDatabase() const
{
    return database_;
}

void RestoreDatabasesInfoNew::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool RestoreDatabasesInfoNew::databaseIsSet() const
{
    return databaseIsSet_;
}

void RestoreDatabasesInfoNew::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::vector<RestoreTableInfoNew>& RestoreDatabasesInfoNew::getTables()
{
    return tables_;
}

void RestoreDatabasesInfoNew::setTables(const std::vector<RestoreTableInfoNew>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool RestoreDatabasesInfoNew::tablesIsSet() const
{
    return tablesIsSet_;
}

void RestoreDatabasesInfoNew::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


