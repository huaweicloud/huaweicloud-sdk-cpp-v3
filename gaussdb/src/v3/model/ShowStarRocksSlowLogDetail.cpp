

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksSlowLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksSlowLogDetail::ShowStarRocksSlowLogDetail()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
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
    slowLogDate_ = 0L;
    slowLogDateIsSet_ = false;
}

ShowStarRocksSlowLogDetail::~ShowStarRocksSlowLogDetail() = default;

void ShowStarRocksSlowLogDetail::validate()
{
}

web::json::value ShowStarRocksSlowLogDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
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
    if(slowLogDateIsSet_) {
        val[utility::conversions::to_string_t("slow_log_date")] = ModelBase::toJson(slowLogDate_);
    }

    return val;
}
bool ShowStarRocksSlowLogDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("slow_log_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogDate(refVal);
        }
    }
    return ok;
}


std::string ShowStarRocksSlowLogDetail::getNodeId() const
{
    return nodeId_;
}

void ShowStarRocksSlowLogDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getCount() const
{
    return count_;
}

void ShowStarRocksSlowLogDetail::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::countIsSet() const
{
    return countIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetcount()
{
    countIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getTime() const
{
    return time_;
}

void ShowStarRocksSlowLogDetail::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::timeIsSet() const
{
    return timeIsSet_;
}

void ShowStarRocksSlowLogDetail::unsettime()
{
    timeIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getLockTime() const
{
    return lockTime_;
}

void ShowStarRocksSlowLogDetail::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getRowsSent() const
{
    return rowsSent_;
}

void ShowStarRocksSlowLogDetail::setRowsSent(const std::string& value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getRowsExamined() const
{
    return rowsExamined_;
}

void ShowStarRocksSlowLogDetail::setRowsExamined(const std::string& value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getDatabase() const
{
    return database_;
}

void ShowStarRocksSlowLogDetail::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::databaseIsSet() const
{
    return databaseIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getUsers() const
{
    return users_;
}

void ShowStarRocksSlowLogDetail::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::usersIsSet() const
{
    return usersIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetusers()
{
    usersIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getQuerySample() const
{
    return querySample_;
}

void ShowStarRocksSlowLogDetail::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getType() const
{
    return type_;
}

void ShowStarRocksSlowLogDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::typeIsSet() const
{
    return typeIsSet_;
}

void ShowStarRocksSlowLogDetail::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getStartTime() const
{
    return startTime_;
}

void ShowStarRocksSlowLogDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getClientIp() const
{
    return clientIp_;
}

void ShowStarRocksSlowLogDetail::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string ShowStarRocksSlowLogDetail::getLineNum() const
{
    return lineNum_;
}

void ShowStarRocksSlowLogDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

int64_t ShowStarRocksSlowLogDetail::getSlowLogDate() const
{
    return slowLogDate_;
}

void ShowStarRocksSlowLogDetail::setSlowLogDate(int64_t value)
{
    slowLogDate_ = value;
    slowLogDateIsSet_ = true;
}

bool ShowStarRocksSlowLogDetail::slowLogDateIsSet() const
{
    return slowLogDateIsSet_;
}

void ShowStarRocksSlowLogDetail::unsetslowLogDate()
{
    slowLogDateIsSet_ = false;
}

}
}
}
}
}


