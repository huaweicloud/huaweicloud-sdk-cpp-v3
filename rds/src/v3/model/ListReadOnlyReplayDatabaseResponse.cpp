

#include "huaweicloud/rds/v3/model/ListReadOnlyReplayDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReadOnlyReplayDatabaseResponse::ListReadOnlyReplayDatabaseResponse()
{
    databaseLimit_ = 0;
    databaseLimitIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    tableLimit_ = 0;
    tableLimitIsSet_ = false;
    databasesIsSet_ = false;
}

ListReadOnlyReplayDatabaseResponse::~ListReadOnlyReplayDatabaseResponse() = default;

void ListReadOnlyReplayDatabaseResponse::validate()
{
}

web::json::value ListReadOnlyReplayDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseLimitIsSet_) {
        val[utility::conversions::to_string_t("database_limit")] = ModelBase::toJson(databaseLimit_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(tableLimitIsSet_) {
        val[utility::conversions::to_string_t("table_limit")] = ModelBase::toJson(tableLimit_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool ListReadOnlyReplayDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_tables"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DelayRestoreDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int32_t ListReadOnlyReplayDatabaseResponse::getDatabaseLimit() const
{
    return databaseLimit_;
}

void ListReadOnlyReplayDatabaseResponse::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool ListReadOnlyReplayDatabaseResponse::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void ListReadOnlyReplayDatabaseResponse::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

int32_t ListReadOnlyReplayDatabaseResponse::getTotalTables() const
{
    return totalTables_;
}

void ListReadOnlyReplayDatabaseResponse::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool ListReadOnlyReplayDatabaseResponse::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void ListReadOnlyReplayDatabaseResponse::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

int32_t ListReadOnlyReplayDatabaseResponse::getTableLimit() const
{
    return tableLimit_;
}

void ListReadOnlyReplayDatabaseResponse::setTableLimit(int32_t value)
{
    tableLimit_ = value;
    tableLimitIsSet_ = true;
}

bool ListReadOnlyReplayDatabaseResponse::tableLimitIsSet() const
{
    return tableLimitIsSet_;
}

void ListReadOnlyReplayDatabaseResponse::unsettableLimit()
{
    tableLimitIsSet_ = false;
}

std::vector<DelayRestoreDatabase>& ListReadOnlyReplayDatabaseResponse::getDatabases()
{
    return databases_;
}

void ListReadOnlyReplayDatabaseResponse::setDatabases(const std::vector<DelayRestoreDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListReadOnlyReplayDatabaseResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListReadOnlyReplayDatabaseResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


