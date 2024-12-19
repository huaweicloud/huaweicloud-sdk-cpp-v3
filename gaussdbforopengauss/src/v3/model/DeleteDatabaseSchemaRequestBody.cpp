

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseSchemaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteDatabaseSchemaRequestBody::DeleteDatabaseSchemaRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
}

DeleteDatabaseSchemaRequestBody::~DeleteDatabaseSchemaRequestBody() = default;

void DeleteDatabaseSchemaRequestBody::validate()
{
}

web::json::value DeleteDatabaseSchemaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }

    return val;
}
bool DeleteDatabaseSchemaRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    return ok;
}


std::string DeleteDatabaseSchemaRequestBody::getDbName() const
{
    return dbName_;
}

void DeleteDatabaseSchemaRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeleteDatabaseSchemaRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeleteDatabaseSchemaRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DeleteDatabaseSchemaRequestBody::getSchema() const
{
    return schema_;
}

void DeleteDatabaseSchemaRequestBody::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool DeleteDatabaseSchemaRequestBody::schemaIsSet() const
{
    return schemaIsSet_;
}

void DeleteDatabaseSchemaRequestBody::unsetschema()
{
    schemaIsSet_ = false;
}

}
}
}
}
}


