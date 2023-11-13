

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreDatabase::PostgreSQLRestoreDatabase()
{
    database_ = "";
    databaseIsSet_ = false;
    schemasIsSet_ = false;
}

PostgreSQLRestoreDatabase::~PostgreSQLRestoreDatabase() = default;

void PostgreSQLRestoreDatabase::validate()
{
}

web::json::value PostgreSQLRestoreDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }

    return val;
}
bool PostgreSQLRestoreDatabase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLRestoreSchema> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLRestoreDatabase::getDatabase() const
{
    return database_;
}

void PostgreSQLRestoreDatabase::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool PostgreSQLRestoreDatabase::databaseIsSet() const
{
    return databaseIsSet_;
}

void PostgreSQLRestoreDatabase::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::vector<PostgreSQLRestoreSchema>& PostgreSQLRestoreDatabase::getSchemas()
{
    return schemas_;
}

void PostgreSQLRestoreDatabase::setSchemas(const std::vector<PostgreSQLRestoreSchema>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool PostgreSQLRestoreDatabase::schemasIsSet() const
{
    return schemasIsSet_;
}

void PostgreSQLRestoreDatabase::unsetschemas()
{
    schemasIsSet_ = false;
}

}
}
}
}
}


