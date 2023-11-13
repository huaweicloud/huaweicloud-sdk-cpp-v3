

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryDatabaseInstance::PostgreSQLHistoryDatabaseInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    databasesIsSet_ = false;
}

PostgreSQLHistoryDatabaseInstance::~PostgreSQLHistoryDatabaseInstance() = default;

void PostgreSQLHistoryDatabaseInstance::validate()
{
}

web::json::value PostgreSQLHistoryDatabaseInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool PostgreSQLHistoryDatabaseInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLHistoryDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistoryDatabaseInstance::getId() const
{
    return id_;
}

void PostgreSQLHistoryDatabaseInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInstance::idIsSet() const
{
    return idIsSet_;
}

void PostgreSQLHistoryDatabaseInstance::unsetid()
{
    idIsSet_ = false;
}

std::string PostgreSQLHistoryDatabaseInstance::getName() const
{
    return name_;
}

void PostgreSQLHistoryDatabaseInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInstance::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistoryDatabaseInstance::unsetname()
{
    nameIsSet_ = false;
}

int32_t PostgreSQLHistoryDatabaseInstance::getTotalTables() const
{
    return totalTables_;
}

void PostgreSQLHistoryDatabaseInstance::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInstance::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void PostgreSQLHistoryDatabaseInstance::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<PostgreSQLHistoryDatabaseInfo>& PostgreSQLHistoryDatabaseInstance::getDatabases()
{
    return databases_;
}

void PostgreSQLHistoryDatabaseInstance::setDatabases(const std::vector<PostgreSQLHistoryDatabaseInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void PostgreSQLHistoryDatabaseInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


