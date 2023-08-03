

#include "huaweicloud/rds/v3/model/PostgresqlCreateSchemaReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlCreateSchemaReq::PostgresqlCreateSchemaReq()
{
    schemaName_ = "";
    schemaNameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

PostgresqlCreateSchemaReq::~PostgresqlCreateSchemaReq() = default;

void PostgresqlCreateSchemaReq::validate()
{
}

web::json::value PostgresqlCreateSchemaReq::toJson() const
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

bool PostgresqlCreateSchemaReq::fromJson(const web::json::value& val)
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

std::string PostgresqlCreateSchemaReq::getSchemaName() const
{
    return schemaName_;
}

void PostgresqlCreateSchemaReq::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool PostgresqlCreateSchemaReq::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void PostgresqlCreateSchemaReq::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string PostgresqlCreateSchemaReq::getOwner() const
{
    return owner_;
}

void PostgresqlCreateSchemaReq::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PostgresqlCreateSchemaReq::ownerIsSet() const
{
    return ownerIsSet_;
}

void PostgresqlCreateSchemaReq::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


