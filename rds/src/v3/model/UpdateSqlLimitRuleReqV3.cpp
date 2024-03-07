

#include "huaweicloud/rds/v3/model/UpdateSqlLimitRuleReqV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSqlLimitRuleReqV3::UpdateSqlLimitRuleReqV3()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    maxWaiting_ = 0;
    maxWaitingIsSet_ = false;
}

UpdateSqlLimitRuleReqV3::~UpdateSqlLimitRuleReqV3() = default;

void UpdateSqlLimitRuleReqV3::validate()
{
}

web::json::value UpdateSqlLimitRuleReqV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(maxWaitingIsSet_) {
        val[utility::conversions::to_string_t("max_waiting")] = ModelBase::toJson(maxWaiting_);
    }

    return val;
}
bool UpdateSqlLimitRuleReqV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_waiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_waiting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxWaiting(refVal);
        }
    }
    return ok;
}


std::string UpdateSqlLimitRuleReqV3::getDbName() const
{
    return dbName_;
}

void UpdateSqlLimitRuleReqV3::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool UpdateSqlLimitRuleReqV3::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void UpdateSqlLimitRuleReqV3::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string UpdateSqlLimitRuleReqV3::getId() const
{
    return id_;
}

void UpdateSqlLimitRuleReqV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateSqlLimitRuleReqV3::idIsSet() const
{
    return idIsSet_;
}

void UpdateSqlLimitRuleReqV3::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateSqlLimitRuleReqV3::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void UpdateSqlLimitRuleReqV3::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool UpdateSqlLimitRuleReqV3::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void UpdateSqlLimitRuleReqV3::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int32_t UpdateSqlLimitRuleReqV3::getMaxWaiting() const
{
    return maxWaiting_;
}

void UpdateSqlLimitRuleReqV3::setMaxWaiting(int32_t value)
{
    maxWaiting_ = value;
    maxWaitingIsSet_ = true;
}

bool UpdateSqlLimitRuleReqV3::maxWaitingIsSet() const
{
    return maxWaitingIsSet_;
}

void UpdateSqlLimitRuleReqV3::unsetmaxWaiting()
{
    maxWaitingIsSet_ = false;
}

}
}
}
}
}


