

#include "huaweicloud/gaussdb/v3/model/ShowSlowLogStatisticsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowLogStatisticsItem::ShowSlowLogStatisticsItem()
{
    clientIp_ = "";
    clientIpIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    rowsExamined_ = 0;
    rowsExaminedIsSet_ = false;
    rowsSent_ = 0;
    rowsSentIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    users_ = "";
    usersIsSet_ = false;
}

ShowSlowLogStatisticsItem::~ShowSlowLogStatisticsItem() = default;

void ShowSlowLogStatisticsItem::validate()
{
}

web::json::value ShowSlowLogStatisticsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(querySampleIsSet_) {
        val[utility::conversions::to_string_t("query_sample")] = ModelBase::toJson(querySample_);
    }
    if(rowsExaminedIsSet_) {
        val[utility::conversions::to_string_t("rows_examined")] = ModelBase::toJson(rowsExamined_);
    }
    if(rowsSentIsSet_) {
        val[utility::conversions::to_string_t("rows_sent")] = ModelBase::toJson(rowsSent_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ShowSlowLogStatisticsItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rows_examined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_examined"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsExamined(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_sent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ShowSlowLogStatisticsItem::getClientIp() const
{
    return clientIp_;
}

void ShowSlowLogStatisticsItem::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void ShowSlowLogStatisticsItem::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getCount() const
{
    return count_;
}

void ShowSlowLogStatisticsItem::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::countIsSet() const
{
    return countIsSet_;
}

void ShowSlowLogStatisticsItem::unsetcount()
{
    countIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getDatabase() const
{
    return database_;
}

void ShowSlowLogStatisticsItem::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::databaseIsSet() const
{
    return databaseIsSet_;
}

void ShowSlowLogStatisticsItem::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getLockTime() const
{
    return lockTime_;
}

void ShowSlowLogStatisticsItem::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void ShowSlowLogStatisticsItem::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getNodeId() const
{
    return nodeId_;
}

void ShowSlowLogStatisticsItem::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSlowLogStatisticsItem::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getQuerySample() const
{
    return querySample_;
}

void ShowSlowLogStatisticsItem::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void ShowSlowLogStatisticsItem::unsetquerySample()
{
    querySampleIsSet_ = false;
}

int32_t ShowSlowLogStatisticsItem::getRowsExamined() const
{
    return rowsExamined_;
}

void ShowSlowLogStatisticsItem::setRowsExamined(int32_t value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void ShowSlowLogStatisticsItem::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

int32_t ShowSlowLogStatisticsItem::getRowsSent() const
{
    return rowsSent_;
}

void ShowSlowLogStatisticsItem::setRowsSent(int32_t value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void ShowSlowLogStatisticsItem::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getTime() const
{
    return time_;
}

void ShowSlowLogStatisticsItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::timeIsSet() const
{
    return timeIsSet_;
}

void ShowSlowLogStatisticsItem::unsettime()
{
    timeIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getType() const
{
    return type_;
}

void ShowSlowLogStatisticsItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::typeIsSet() const
{
    return typeIsSet_;
}

void ShowSlowLogStatisticsItem::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowSlowLogStatisticsItem::getUsers() const
{
    return users_;
}

void ShowSlowLogStatisticsItem::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ShowSlowLogStatisticsItem::usersIsSet() const
{
    return usersIsSet_;
}

void ShowSlowLogStatisticsItem::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


