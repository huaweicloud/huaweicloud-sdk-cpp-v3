

#include "huaweicloud/rds/v3/model/SlowLogStatistics.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowLogStatistics::SlowLogStatistics()
{
    count_ = "";
    countIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    rowsSent_ = 0L;
    rowsSentIsSet_ = false;
    rowsExamined_ = 0L;
    rowsExaminedIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    users_ = "";
    usersIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    clientIP_ = "";
    clientIPIsSet_ = false;
}

SlowLogStatistics::~SlowLogStatistics() = default;

void SlowLogStatistics::validate()
{
}

web::json::value SlowLogStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lockTime")] = ModelBase::toJson(lockTime_);
    }
    if(rowsSentIsSet_) {
        val[utility::conversions::to_string_t("rowsSent")] = ModelBase::toJson(rowsSent_);
    }
    if(rowsExaminedIsSet_) {
        val[utility::conversions::to_string_t("rowsExamined")] = ModelBase::toJson(rowsExamined_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(querySampleIsSet_) {
        val[utility::conversions::to_string_t("querySample")] = ModelBase::toJson(querySample_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(clientIPIsSet_) {
        val[utility::conversions::to_string_t("clientIP")] = ModelBase::toJson(clientIP_);
    }

    return val;
}

bool SlowLogStatistics::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("lockTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rowsSent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rowsSent"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rowsExamined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rowsExamined"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("querySample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("querySample"));
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
    if(val.has_field(utility::conversions::to_string_t("clientIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIP(refVal);
        }
    }
    return ok;
}

std::string SlowLogStatistics::getCount() const
{
    return count_;
}

void SlowLogStatistics::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SlowLogStatistics::countIsSet() const
{
    return countIsSet_;
}

void SlowLogStatistics::unsetcount()
{
    countIsSet_ = false;
}

std::string SlowLogStatistics::getTime() const
{
    return time_;
}

void SlowLogStatistics::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SlowLogStatistics::timeIsSet() const
{
    return timeIsSet_;
}

void SlowLogStatistics::unsettime()
{
    timeIsSet_ = false;
}

std::string SlowLogStatistics::getLockTime() const
{
    return lockTime_;
}

void SlowLogStatistics::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool SlowLogStatistics::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void SlowLogStatistics::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

int64_t SlowLogStatistics::getRowsSent() const
{
    return rowsSent_;
}

void SlowLogStatistics::setRowsSent(int64_t value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool SlowLogStatistics::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void SlowLogStatistics::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

int64_t SlowLogStatistics::getRowsExamined() const
{
    return rowsExamined_;
}

void SlowLogStatistics::setRowsExamined(int64_t value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool SlowLogStatistics::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void SlowLogStatistics::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string SlowLogStatistics::getDatabase() const
{
    return database_;
}

void SlowLogStatistics::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowLogStatistics::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowLogStatistics::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string SlowLogStatistics::getUsers() const
{
    return users_;
}

void SlowLogStatistics::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool SlowLogStatistics::usersIsSet() const
{
    return usersIsSet_;
}

void SlowLogStatistics::unsetusers()
{
    usersIsSet_ = false;
}

std::string SlowLogStatistics::getQuerySample() const
{
    return querySample_;
}

void SlowLogStatistics::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool SlowLogStatistics::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void SlowLogStatistics::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string SlowLogStatistics::getType() const
{
    return type_;
}

void SlowLogStatistics::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SlowLogStatistics::typeIsSet() const
{
    return typeIsSet_;
}

void SlowLogStatistics::unsettype()
{
    typeIsSet_ = false;
}

std::string SlowLogStatistics::getClientIP() const
{
    return clientIP_;
}

void SlowLogStatistics::setClientIP(const std::string& value)
{
    clientIP_ = value;
    clientIPIsSet_ = true;
}

bool SlowLogStatistics::clientIPIsSet() const
{
    return clientIPIsSet_;
}

void SlowLogStatistics::unsetclientIP()
{
    clientIPIsSet_ = false;
}

}
}
}
}
}


