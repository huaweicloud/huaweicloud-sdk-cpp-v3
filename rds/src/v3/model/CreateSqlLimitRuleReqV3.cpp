

#include "huaweicloud/rds/v3/model/CreateSqlLimitRuleReqV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlLimitRuleReqV3::CreateSqlLimitRuleReqV3()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    queryId_ = 0L;
    queryIdIsSet_ = false;
    queryString_ = "";
    queryStringIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    maxWaiting_ = 0;
    maxWaitingIsSet_ = false;
    searchPath_ = "";
    searchPathIsSet_ = false;
}

CreateSqlLimitRuleReqV3::~CreateSqlLimitRuleReqV3() = default;

void CreateSqlLimitRuleReqV3::validate()
{
}

web::json::value CreateSqlLimitRuleReqV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(queryStringIsSet_) {
        val[utility::conversions::to_string_t("query_string")] = ModelBase::toJson(queryString_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(maxWaitingIsSet_) {
        val[utility::conversions::to_string_t("max_waiting")] = ModelBase::toJson(maxWaiting_);
    }
    if(searchPathIsSet_) {
        val[utility::conversions::to_string_t("search_path")] = ModelBase::toJson(searchPath_);
    }

    return val;
}
bool CreateSqlLimitRuleReqV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryString(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchPath(refVal);
        }
    }
    return ok;
}


std::string CreateSqlLimitRuleReqV3::getDbName() const
{
    return dbName_;
}

void CreateSqlLimitRuleReqV3::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetdbName()
{
    dbNameIsSet_ = false;
}

int64_t CreateSqlLimitRuleReqV3::getQueryId() const
{
    return queryId_;
}

void CreateSqlLimitRuleReqV3::setQueryId(int64_t value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string CreateSqlLimitRuleReqV3::getQueryString() const
{
    return queryString_;
}

void CreateSqlLimitRuleReqV3::setQueryString(const std::string& value)
{
    queryString_ = value;
    queryStringIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::queryStringIsSet() const
{
    return queryStringIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetqueryString()
{
    queryStringIsSet_ = false;
}

int32_t CreateSqlLimitRuleReqV3::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void CreateSqlLimitRuleReqV3::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int32_t CreateSqlLimitRuleReqV3::getMaxWaiting() const
{
    return maxWaiting_;
}

void CreateSqlLimitRuleReqV3::setMaxWaiting(int32_t value)
{
    maxWaiting_ = value;
    maxWaitingIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::maxWaitingIsSet() const
{
    return maxWaitingIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetmaxWaiting()
{
    maxWaitingIsSet_ = false;
}

std::string CreateSqlLimitRuleReqV3::getSearchPath() const
{
    return searchPath_;
}

void CreateSqlLimitRuleReqV3::setSearchPath(const std::string& value)
{
    searchPath_ = value;
    searchPathIsSet_ = true;
}

bool CreateSqlLimitRuleReqV3::searchPathIsSet() const
{
    return searchPathIsSet_;
}

void CreateSqlLimitRuleReqV3::unsetsearchPath()
{
    searchPathIsSet_ = false;
}

}
}
}
}
}


