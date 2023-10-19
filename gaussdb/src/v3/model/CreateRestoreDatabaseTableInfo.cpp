

#include "huaweicloud/gaussdb/v3/model/CreateRestoreDatabaseTableInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateRestoreDatabaseTableInfo::CreateRestoreDatabaseTableInfo()
{
    database_ = "";
    databaseIsSet_ = false;
    tablesIsSet_ = false;
}

CreateRestoreDatabaseTableInfo::~CreateRestoreDatabaseTableInfo() = default;

void CreateRestoreDatabaseTableInfo::validate()
{
}

web::json::value CreateRestoreDatabaseTableInfo::toJson() const
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
bool CreateRestoreDatabaseTableInfo::fromJson(const web::json::value& val)
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
            std::vector<CreateRestoreTableInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string CreateRestoreDatabaseTableInfo::getDatabase() const
{
    return database_;
}

void CreateRestoreDatabaseTableInfo::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool CreateRestoreDatabaseTableInfo::databaseIsSet() const
{
    return databaseIsSet_;
}

void CreateRestoreDatabaseTableInfo::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::vector<CreateRestoreTableInfo>& CreateRestoreDatabaseTableInfo::getTables()
{
    return tables_;
}

void CreateRestoreDatabaseTableInfo::setTables(const std::vector<CreateRestoreTableInfo>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool CreateRestoreDatabaseTableInfo::tablesIsSet() const
{
    return tablesIsSet_;
}

void CreateRestoreDatabaseTableInfo::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


