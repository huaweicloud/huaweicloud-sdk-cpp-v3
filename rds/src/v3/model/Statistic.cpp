

#include "huaweicloud/rds/v3/model/Statistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Statistic::Statistic()
{
    userName_ = "";
    userNameIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    queryId_ = 0L;
    queryIdIsSet_ = false;
    calls_ = 0L;
    callsIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    rows_ = 0L;
    rowsIsSet_ = false;
    canUse_ = 0.0;
    canUseIsSet_ = false;
}

Statistic::~Statistic() = default;

void Statistic::validate()
{
}

web::json::value Statistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(callsIsSet_) {
        val[utility::conversions::to_string_t("calls")] = ModelBase::toJson(calls_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(rowsIsSet_) {
        val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(rows_);
    }
    if(canUseIsSet_) {
        val[utility::conversions::to_string_t("can_use")] = ModelBase::toJson(canUse_);
    }

    return val;
}
bool Statistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("calls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("calls"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCalls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_use"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanUse(refVal);
        }
    }
    return ok;
}


std::string Statistic::getUserName() const
{
    return userName_;
}

void Statistic::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool Statistic::userNameIsSet() const
{
    return userNameIsSet_;
}

void Statistic::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string Statistic::getDatabase() const
{
    return database_;
}

void Statistic::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool Statistic::databaseIsSet() const
{
    return databaseIsSet_;
}

void Statistic::unsetdatabase()
{
    databaseIsSet_ = false;
}

int64_t Statistic::getQueryId() const
{
    return queryId_;
}

void Statistic::setQueryId(int64_t value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool Statistic::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void Statistic::unsetqueryId()
{
    queryIdIsSet_ = false;
}

int64_t Statistic::getCalls() const
{
    return calls_;
}

void Statistic::setCalls(int64_t value)
{
    calls_ = value;
    callsIsSet_ = true;
}

bool Statistic::callsIsSet() const
{
    return callsIsSet_;
}

void Statistic::unsetcalls()
{
    callsIsSet_ = false;
}

std::string Statistic::getQuery() const
{
    return query_;
}

void Statistic::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool Statistic::queryIsSet() const
{
    return queryIsSet_;
}

void Statistic::unsetquery()
{
    queryIsSet_ = false;
}

int64_t Statistic::getRows() const
{
    return rows_;
}

void Statistic::setRows(int64_t value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool Statistic::rowsIsSet() const
{
    return rowsIsSet_;
}

void Statistic::unsetrows()
{
    rowsIsSet_ = false;
}

double Statistic::getCanUse() const
{
    return canUse_;
}

void Statistic::setCanUse(double value)
{
    canUse_ = value;
    canUseIsSet_ = true;
}

bool Statistic::canUseIsSet() const
{
    return canUseIsSet_;
}

void Statistic::unsetcanUse()
{
    canUseIsSet_ = false;
}

}
}
}
}
}


