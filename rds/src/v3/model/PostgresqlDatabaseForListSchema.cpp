

#include "huaweicloud/rds/v3/model/PostgresqlDatabaseForListSchema.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlDatabaseForListSchema::PostgresqlDatabaseForListSchema()
{
    schemaName_ = "";
    schemaNameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

PostgresqlDatabaseForListSchema::~PostgresqlDatabaseForListSchema() = default;

void PostgresqlDatabaseForListSchema::validate()
{
}

web::json::value PostgresqlDatabaseForListSchema::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool PostgresqlDatabaseForListSchema::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string PostgresqlDatabaseForListSchema::getSchemaName() const
{
    return schemaName_;
}

void PostgresqlDatabaseForListSchema::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool PostgresqlDatabaseForListSchema::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void PostgresqlDatabaseForListSchema::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string PostgresqlDatabaseForListSchema::getOwner() const
{
    return owner_;
}

void PostgresqlDatabaseForListSchema::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PostgresqlDatabaseForListSchema::ownerIsSet() const
{
    return ownerIsSet_;
}

void PostgresqlDatabaseForListSchema::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


