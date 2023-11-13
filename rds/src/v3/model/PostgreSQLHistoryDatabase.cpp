

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryDatabase::PostgreSQLHistoryDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    schemasIsSet_ = false;
}

PostgreSQLHistoryDatabase::~PostgreSQLHistoryDatabase() = default;

void PostgreSQLHistoryDatabase::validate()
{
}

web::json::value PostgreSQLHistoryDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }

    return val;
}
bool PostgreSQLHistoryDatabase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLHistorySchema> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistoryDatabase::getName() const
{
    return name_;
}

void PostgreSQLHistoryDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistoryDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistoryDatabase::unsetname()
{
    nameIsSet_ = false;
}

int32_t PostgreSQLHistoryDatabase::getTotalTables() const
{
    return totalTables_;
}

void PostgreSQLHistoryDatabase::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool PostgreSQLHistoryDatabase::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void PostgreSQLHistoryDatabase::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<PostgreSQLHistorySchema>& PostgreSQLHistoryDatabase::getSchemas()
{
    return schemas_;
}

void PostgreSQLHistoryDatabase::setSchemas(const std::vector<PostgreSQLHistorySchema>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool PostgreSQLHistoryDatabase::schemasIsSet() const
{
    return schemasIsSet_;
}

void PostgreSQLHistoryDatabase::unsetschemas()
{
    schemasIsSet_ = false;
}

}
}
}
}
}


