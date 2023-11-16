

#include "huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokePostgresqlDbPrivilegeUser::RevokePostgresqlDbPrivilegeUser()
{
    name_ = "";
    nameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
}

RevokePostgresqlDbPrivilegeUser::~RevokePostgresqlDbPrivilegeUser() = default;

void RevokePostgresqlDbPrivilegeUser::validate()
{
}

web::json::value RevokePostgresqlDbPrivilegeUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }

    return val;
}
bool RevokePostgresqlDbPrivilegeUser::fromJson(const web::json::value& val)
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


std::string RevokePostgresqlDbPrivilegeUser::getName() const
{
    return name_;
}

void RevokePostgresqlDbPrivilegeUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeUser::nameIsSet() const
{
    return nameIsSet_;
}

void RevokePostgresqlDbPrivilegeUser::unsetname()
{
    nameIsSet_ = false;
}

std::string RevokePostgresqlDbPrivilegeUser::getSchemaName() const
{
    return schemaName_;
}

void RevokePostgresqlDbPrivilegeUser::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeUser::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void RevokePostgresqlDbPrivilegeUser::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

}
}
}
}
}


