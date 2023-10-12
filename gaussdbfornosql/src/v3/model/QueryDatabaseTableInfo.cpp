

#include "huaweicloud/gaussdbfornosql/v3/model/QueryDatabaseTableInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryDatabaseTableInfo::QueryDatabaseTableInfo()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableNamesIsSet_ = false;
}

QueryDatabaseTableInfo::~QueryDatabaseTableInfo() = default;

void QueryDatabaseTableInfo::validate()
{
}

web::json::value QueryDatabaseTableInfo::toJson() const
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
bool QueryDatabaseTableInfo::fromJson(const web::json::value& val)
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


std::string QueryDatabaseTableInfo::getDatabaseName() const
{
    return databaseName_;
}

void QueryDatabaseTableInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool QueryDatabaseTableInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void QueryDatabaseTableInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<std::string>& QueryDatabaseTableInfo::getTableNames()
{
    return tableNames_;
}

void QueryDatabaseTableInfo::setTableNames(const std::vector<std::string>& value)
{
    tableNames_ = value;
    tableNamesIsSet_ = true;
}

bool QueryDatabaseTableInfo::tableNamesIsSet() const
{
    return tableNamesIsSet_;
}

void QueryDatabaseTableInfo::unsettableNames()
{
    tableNamesIsSet_ = false;
}

}
}
}
}
}


