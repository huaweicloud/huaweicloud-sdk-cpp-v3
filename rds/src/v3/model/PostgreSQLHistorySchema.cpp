

#include "huaweicloud/rds/v3/model/PostgreSQLHistorySchema.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistorySchema::PostgreSQLHistorySchema()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    tablesIsSet_ = false;
}

PostgreSQLHistorySchema::~PostgreSQLHistorySchema() = default;

void PostgreSQLHistorySchema::validate()
{
}

web::json::value PostgreSQLHistorySchema::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool PostgreSQLHistorySchema::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLHistoryTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistorySchema::getName() const
{
    return name_;
}

void PostgreSQLHistorySchema::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistorySchema::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistorySchema::unsetname()
{
    nameIsSet_ = false;
}

int32_t PostgreSQLHistorySchema::getTotalTables() const
{
    return totalTables_;
}

void PostgreSQLHistorySchema::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool PostgreSQLHistorySchema::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void PostgreSQLHistorySchema::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<PostgreSQLHistoryTable>& PostgreSQLHistorySchema::getTables()
{
    return tables_;
}

void PostgreSQLHistorySchema::setTables(const std::vector<PostgreSQLHistoryTable>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool PostgreSQLHistorySchema::tablesIsSet() const
{
    return tablesIsSet_;
}

void PostgreSQLHistorySchema::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


