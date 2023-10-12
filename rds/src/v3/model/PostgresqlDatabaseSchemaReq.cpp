

#include "huaweicloud/rds/v3/model/PostgresqlDatabaseSchemaReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlDatabaseSchemaReq::PostgresqlDatabaseSchemaReq()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemasIsSet_ = false;
}

PostgresqlDatabaseSchemaReq::~PostgresqlDatabaseSchemaReq() = default;

void PostgresqlDatabaseSchemaReq::validate()
{
}

web::json::value PostgresqlDatabaseSchemaReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }

    return val;
}
bool PostgresqlDatabaseSchemaReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgresqlCreateSchemaReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    return ok;
}


std::string PostgresqlDatabaseSchemaReq::getDbName() const
{
    return dbName_;
}

void PostgresqlDatabaseSchemaReq::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool PostgresqlDatabaseSchemaReq::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void PostgresqlDatabaseSchemaReq::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<PostgresqlCreateSchemaReq>& PostgresqlDatabaseSchemaReq::getSchemas()
{
    return schemas_;
}

void PostgresqlDatabaseSchemaReq::setSchemas(const std::vector<PostgresqlCreateSchemaReq>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool PostgresqlDatabaseSchemaReq::schemasIsSet() const
{
    return schemasIsSet_;
}

void PostgresqlDatabaseSchemaReq::unsetschemas()
{
    schemasIsSet_ = false;
}

}
}
}
}
}


