

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryTableInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryTableInstance::PostgreSQLHistoryTableInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    databasesIsSet_ = false;
}

PostgreSQLHistoryTableInstance::~PostgreSQLHistoryTableInstance() = default;

void PostgreSQLHistoryTableInstance::validate()
{
}

web::json::value PostgreSQLHistoryTableInstance::toJson() const
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
bool PostgreSQLHistoryTableInstance::fromJson(const web::json::value& val)
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
            std::vector<PostgreSQLHistoryDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistoryTableInstance::getId() const
{
    return id_;
}

void PostgreSQLHistoryTableInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostgreSQLHistoryTableInstance::idIsSet() const
{
    return idIsSet_;
}

void PostgreSQLHistoryTableInstance::unsetid()
{
    idIsSet_ = false;
}

std::string PostgreSQLHistoryTableInstance::getName() const
{
    return name_;
}

void PostgreSQLHistoryTableInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistoryTableInstance::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistoryTableInstance::unsetname()
{
    nameIsSet_ = false;
}

int32_t PostgreSQLHistoryTableInstance::getTotalTables() const
{
    return totalTables_;
}

void PostgreSQLHistoryTableInstance::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool PostgreSQLHistoryTableInstance::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void PostgreSQLHistoryTableInstance::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<PostgreSQLHistoryDatabase>& PostgreSQLHistoryTableInstance::getDatabases()
{
    return databases_;
}

void PostgreSQLHistoryTableInstance::setDatabases(const std::vector<PostgreSQLHistoryDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool PostgreSQLHistoryTableInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void PostgreSQLHistoryTableInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


