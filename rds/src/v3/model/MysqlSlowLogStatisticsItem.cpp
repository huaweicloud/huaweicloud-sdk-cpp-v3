

#include "huaweicloud/rds/v3/model/MysqlSlowLogStatisticsItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlSlowLogStatisticsItem::MysqlSlowLogStatisticsItem()
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
    clientIp_ = "";
    clientIpIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

MysqlSlowLogStatisticsItem::~MysqlSlowLogStatisticsItem() = default;

void MysqlSlowLogStatisticsItem::validate()
{
}

web::json::value MysqlSlowLogStatisticsItem::toJson() const
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
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool MysqlSlowLogStatisticsItem::fromJson(const web::json::value& val)
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_examined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_examined"));
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
    if(val.has_field(utility::conversions::to_string_t("query_sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_sample"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuerySample(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

std::string MysqlSlowLogStatisticsItem::getCount() const
{
    return count_;
}

void MysqlSlowLogStatisticsItem::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::countIsSet() const
{
    return countIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetcount()
{
    countIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getTime() const
{
    return time_;
}

void MysqlSlowLogStatisticsItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::timeIsSet() const
{
    return timeIsSet_;
}

void MysqlSlowLogStatisticsItem::unsettime()
{
    timeIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getLockTime() const
{
    return lockTime_;
}

void MysqlSlowLogStatisticsItem::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

int64_t MysqlSlowLogStatisticsItem::getRowsSent() const
{
    return rowsSent_;
}

void MysqlSlowLogStatisticsItem::setRowsSent(int64_t value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

int64_t MysqlSlowLogStatisticsItem::getRowsExamined() const
{
    return rowsExamined_;
}

void MysqlSlowLogStatisticsItem::setRowsExamined(int64_t value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getDatabase() const
{
    return database_;
}

void MysqlSlowLogStatisticsItem::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::databaseIsSet() const
{
    return databaseIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getUsers() const
{
    return users_;
}

void MysqlSlowLogStatisticsItem::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::usersIsSet() const
{
    return usersIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetusers()
{
    usersIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getQuerySample() const
{
    return querySample_;
}

void MysqlSlowLogStatisticsItem::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getClientIp() const
{
    return clientIp_;
}

void MysqlSlowLogStatisticsItem::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void MysqlSlowLogStatisticsItem::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string MysqlSlowLogStatisticsItem::getType() const
{
    return type_;
}

void MysqlSlowLogStatisticsItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlSlowLogStatisticsItem::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlSlowLogStatisticsItem::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


