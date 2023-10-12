

#include "huaweicloud/rds/v3/model/MysqlSlowLogDetailsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlSlowLogDetailsItem::MysqlSlowLogDetailsItem()
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
    lineNum_ = "";
    lineNumIsSet_ = false;
}

MysqlSlowLogDetailsItem::~MysqlSlowLogDetailsItem() = default;

void MysqlSlowLogDetailsItem::validate()
{
}

web::json::value MysqlSlowLogDetailsItem::toJson() const
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
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool MysqlSlowLogDetailsItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    return ok;
}


std::string MysqlSlowLogDetailsItem::getCount() const
{
    return count_;
}

void MysqlSlowLogDetailsItem::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::countIsSet() const
{
    return countIsSet_;
}

void MysqlSlowLogDetailsItem::unsetcount()
{
    countIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getTime() const
{
    return time_;
}

void MysqlSlowLogDetailsItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::timeIsSet() const
{
    return timeIsSet_;
}

void MysqlSlowLogDetailsItem::unsettime()
{
    timeIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getLockTime() const
{
    return lockTime_;
}

void MysqlSlowLogDetailsItem::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void MysqlSlowLogDetailsItem::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getRowsSent() const
{
    return rowsSent_;
}

void MysqlSlowLogDetailsItem::setRowsSent(const std::string& value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void MysqlSlowLogDetailsItem::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getRowsExamined() const
{
    return rowsExamined_;
}

void MysqlSlowLogDetailsItem::setRowsExamined(const std::string& value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void MysqlSlowLogDetailsItem::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getDatabase() const
{
    return database_;
}

void MysqlSlowLogDetailsItem::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::databaseIsSet() const
{
    return databaseIsSet_;
}

void MysqlSlowLogDetailsItem::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getUsers() const
{
    return users_;
}

void MysqlSlowLogDetailsItem::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::usersIsSet() const
{
    return usersIsSet_;
}

void MysqlSlowLogDetailsItem::unsetusers()
{
    usersIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getQuerySample() const
{
    return querySample_;
}

void MysqlSlowLogDetailsItem::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void MysqlSlowLogDetailsItem::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getType() const
{
    return type_;
}

void MysqlSlowLogDetailsItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlSlowLogDetailsItem::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getStartTime() const
{
    return startTime_;
}

void MysqlSlowLogDetailsItem::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MysqlSlowLogDetailsItem::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getClientIp() const
{
    return clientIp_;
}

void MysqlSlowLogDetailsItem::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void MysqlSlowLogDetailsItem::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string MysqlSlowLogDetailsItem::getLineNum() const
{
    return lineNum_;
}

void MysqlSlowLogDetailsItem::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool MysqlSlowLogDetailsItem::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void MysqlSlowLogDetailsItem::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


