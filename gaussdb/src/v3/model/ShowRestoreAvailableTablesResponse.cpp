

#include "huaweicloud/gaussdb/v3/model/ShowRestoreAvailableTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowRestoreAvailableTablesResponse::ShowRestoreAvailableTablesResponse()
{
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    databasesIsSet_ = false;
}

ShowRestoreAvailableTablesResponse::~ShowRestoreAvailableTablesResponse() = default;

void ShowRestoreAvailableTablesResponse::validate()
{
}

web::json::value ShowRestoreAvailableTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool ShowRestoreAvailableTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_tables"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabaseInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int32_t ShowRestoreAvailableTablesResponse::getTotalTables() const
{
    return totalTables_;
}

void ShowRestoreAvailableTablesResponse::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool ShowRestoreAvailableTablesResponse::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void ShowRestoreAvailableTablesResponse::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<RestoreDatabaseInfos>& ShowRestoreAvailableTablesResponse::getDatabases()
{
    return databases_;
}

void ShowRestoreAvailableTablesResponse::setDatabases(const std::vector<RestoreDatabaseInfos>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ShowRestoreAvailableTablesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ShowRestoreAvailableTablesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


