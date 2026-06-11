

#include "huaweicloud/rds/v3/model/TopSql.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TopSql::TopSql()
{
    sampleTime_ = "";
    sampleTimeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
}

TopSql::~TopSql() = default;

void TopSql::validate()
{
}

web::json::value TopSql::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleTimeIsSet_) {
        val[utility::conversions::to_string_t("sample_time")] = ModelBase::toJson(sampleTime_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }

    return val;
}
bool TopSql::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    return ok;
}


std::string TopSql::getSampleTime() const
{
    return sampleTime_;
}

void TopSql::setSampleTime(const std::string& value)
{
    sampleTime_ = value;
    sampleTimeIsSet_ = true;
}

bool TopSql::sampleTimeIsSet() const
{
    return sampleTimeIsSet_;
}

void TopSql::unsetsampleTime()
{
    sampleTimeIsSet_ = false;
}

int32_t TopSql::getCount() const
{
    return count_;
}

void TopSql::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool TopSql::countIsSet() const
{
    return countIsSet_;
}

void TopSql::unsetcount()
{
    countIsSet_ = false;
}

std::string TopSql::getDatabaseName() const
{
    return databaseName_;
}

void TopSql::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool TopSql::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void TopSql::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string TopSql::getUserName() const
{
    return userName_;
}

void TopSql::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TopSql::userNameIsSet() const
{
    return userNameIsSet_;
}

void TopSql::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string TopSql::getSqlStatement() const
{
    return sqlStatement_;
}

void TopSql::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool TopSql::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void TopSql::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string TopSql::getQueryId() const
{
    return queryId_;
}

void TopSql::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool TopSql::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void TopSql::unsetqueryId()
{
    queryIdIsSet_ = false;
}

}
}
}
}
}


