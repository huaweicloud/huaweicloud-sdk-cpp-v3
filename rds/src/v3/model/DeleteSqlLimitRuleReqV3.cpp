

#include "huaweicloud/rds/v3/model/DeleteSqlLimitRuleReqV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlLimitRuleReqV3::DeleteSqlLimitRuleReqV3()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteSqlLimitRuleReqV3::~DeleteSqlLimitRuleReqV3() = default;

void DeleteSqlLimitRuleReqV3::validate()
{
}

web::json::value DeleteSqlLimitRuleReqV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteSqlLimitRuleReqV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteSqlLimitRuleReqV3::getDbName() const
{
    return dbName_;
}

void DeleteSqlLimitRuleReqV3::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeleteSqlLimitRuleReqV3::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeleteSqlLimitRuleReqV3::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DeleteSqlLimitRuleReqV3::getId() const
{
    return id_;
}

void DeleteSqlLimitRuleReqV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteSqlLimitRuleReqV3::idIsSet() const
{
    return idIsSet_;
}

void DeleteSqlLimitRuleReqV3::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


