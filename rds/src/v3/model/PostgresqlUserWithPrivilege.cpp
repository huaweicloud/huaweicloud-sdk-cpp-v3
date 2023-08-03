

#include "huaweicloud/rds/v3/model/PostgresqlUserWithPrivilege.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlUserWithPrivilege::PostgresqlUserWithPrivilege()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
}

PostgresqlUserWithPrivilege::~PostgresqlUserWithPrivilege() = default;

void PostgresqlUserWithPrivilege::validate()
{
}

web::json::value PostgresqlUserWithPrivilege::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }

    return val;
}

bool PostgresqlUserWithPrivilege::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    return ok;
}

std::string PostgresqlUserWithPrivilege::getName() const
{
    return name_;
}

void PostgresqlUserWithPrivilege::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgresqlUserWithPrivilege::nameIsSet() const
{
    return nameIsSet_;
}

void PostgresqlUserWithPrivilege::unsetname()
{
    nameIsSet_ = false;
}

bool PostgresqlUserWithPrivilege::isReadonly() const
{
    return readonly_;
}

void PostgresqlUserWithPrivilege::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool PostgresqlUserWithPrivilege::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void PostgresqlUserWithPrivilege::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string PostgresqlUserWithPrivilege::getSchemaName() const
{
    return schemaName_;
}

void PostgresqlUserWithPrivilege::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool PostgresqlUserWithPrivilege::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void PostgresqlUserWithPrivilege::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

}
}
}
}
}


