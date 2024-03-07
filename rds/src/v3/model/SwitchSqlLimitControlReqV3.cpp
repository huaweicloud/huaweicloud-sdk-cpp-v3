

#include "huaweicloud/rds/v3/model/SwitchSqlLimitControlReqV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSqlLimitControlReqV3::SwitchSqlLimitControlReqV3()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

SwitchSqlLimitControlReqV3::~SwitchSqlLimitControlReqV3() = default;

void SwitchSqlLimitControlReqV3::validate()
{
}

web::json::value SwitchSqlLimitControlReqV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool SwitchSqlLimitControlReqV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string SwitchSqlLimitControlReqV3::getDbName() const
{
    return dbName_;
}

void SwitchSqlLimitControlReqV3::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SwitchSqlLimitControlReqV3::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SwitchSqlLimitControlReqV3::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string SwitchSqlLimitControlReqV3::getId() const
{
    return id_;
}

void SwitchSqlLimitControlReqV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchSqlLimitControlReqV3::idIsSet() const
{
    return idIsSet_;
}

void SwitchSqlLimitControlReqV3::unsetid()
{
    idIsSet_ = false;
}

std::string SwitchSqlLimitControlReqV3::getAction() const
{
    return action_;
}

void SwitchSqlLimitControlReqV3::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SwitchSqlLimitControlReqV3::actionIsSet() const
{
    return actionIsSet_;
}

void SwitchSqlLimitControlReqV3::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


