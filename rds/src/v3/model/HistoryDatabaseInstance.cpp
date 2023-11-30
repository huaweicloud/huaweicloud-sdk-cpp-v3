

#include "huaweicloud/rds/v3/model/HistoryDatabaseInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




HistoryDatabaseInstance::HistoryDatabaseInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    databasesIsSet_ = false;
}

HistoryDatabaseInstance::~HistoryDatabaseInstance() = default;

void HistoryDatabaseInstance::validate()
{
}

web::json::value HistoryDatabaseInstance::toJson() const
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
bool HistoryDatabaseInstance::fromJson(const web::json::value& val)
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
            std::vector<HistoryDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string HistoryDatabaseInstance::getId() const
{
    return id_;
}

void HistoryDatabaseInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HistoryDatabaseInstance::idIsSet() const
{
    return idIsSet_;
}

void HistoryDatabaseInstance::unsetid()
{
    idIsSet_ = false;
}

std::string HistoryDatabaseInstance::getName() const
{
    return name_;
}

void HistoryDatabaseInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HistoryDatabaseInstance::nameIsSet() const
{
    return nameIsSet_;
}

void HistoryDatabaseInstance::unsetname()
{
    nameIsSet_ = false;
}

int32_t HistoryDatabaseInstance::getTotalTables() const
{
    return totalTables_;
}

void HistoryDatabaseInstance::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool HistoryDatabaseInstance::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void HistoryDatabaseInstance::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<HistoryDatabaseInfo>& HistoryDatabaseInstance::getDatabases()
{
    return databases_;
}

void HistoryDatabaseInstance::setDatabases(const std::vector<HistoryDatabaseInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool HistoryDatabaseInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void HistoryDatabaseInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


