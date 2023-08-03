

#include "huaweicloud/rds/v3/model/SlowLog.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowLog::SlowLog()
{
    count_ = "";
    countIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    rowsSent_ = "";
    rowsSentIsSet_ = false;
    rowsExamined_ = "";
    rowsExaminedIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    users_ = "";
    usersIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
}

SlowLog::~SlowLog() = default;

void SlowLog::validate()
{
}

web::json::value SlowLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(rowsSentIsSet_) {
        val[utility::conversions::to_string_t("rows_sent")] = ModelBase::toJson(rowsSent_);
    }
    if(rowsExaminedIsSet_) {
        val[utility::conversions::to_string_t("rows_examined")] = ModelBase::toJson(rowsExamined_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(querySampleIsSet_) {
        val[utility::conversions::to_string_t("query_sample")] = ModelBase::toJson(querySample_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }

    return val;
}

bool SlowLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_sent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_examined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_examined"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsExamined(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_sample"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuerySample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    return ok;
}

std::string SlowLog::getCount() const
{
    return count_;
}

void SlowLog::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SlowLog::countIsSet() const
{
    return countIsSet_;
}

void SlowLog::unsetcount()
{
    countIsSet_ = false;
}

std::string SlowLog::getTime() const
{
    return time_;
}

void SlowLog::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SlowLog::timeIsSet() const
{
    return timeIsSet_;
}

void SlowLog::unsettime()
{
    timeIsSet_ = false;
}

std::string SlowLog::getLockTime() const
{
    return lockTime_;
}

void SlowLog::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool SlowLog::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void SlowLog::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string SlowLog::getRowsSent() const
{
    return rowsSent_;
}

void SlowLog::setRowsSent(const std::string& value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool SlowLog::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void SlowLog::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string SlowLog::getRowsExamined() const
{
    return rowsExamined_;
}

void SlowLog::setRowsExamined(const std::string& value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool SlowLog::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void SlowLog::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string SlowLog::getDatabase() const
{
    return database_;
}

void SlowLog::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowLog::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowLog::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string SlowLog::getUsers() const
{
    return users_;
}

void SlowLog::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool SlowLog::usersIsSet() const
{
    return usersIsSet_;
}

void SlowLog::unsetusers()
{
    usersIsSet_ = false;
}

std::string SlowLog::getQuerySample() const
{
    return querySample_;
}

void SlowLog::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool SlowLog::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void SlowLog::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string SlowLog::getType() const
{
    return type_;
}

void SlowLog::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SlowLog::typeIsSet() const
{
    return typeIsSet_;
}

void SlowLog::unsettype()
{
    typeIsSet_ = false;
}

std::string SlowLog::getStartTime() const
{
    return startTime_;
}

void SlowLog::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowLog::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowLog::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SlowLog::getClientIp() const
{
    return clientIp_;
}

void SlowLog::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool SlowLog::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void SlowLog::unsetclientIp()
{
    clientIpIsSet_ = false;
}

}
}
}
}
}


