

#include "huaweicloud/gaussdb/v3/model/ChSlowLogDetailResponse_slow_log_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChSlowLogDetailResponse_slow_log_list::ChSlowLogDetailResponse_slow_log_list()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    rowsSent_ = 0;
    rowsSentIsSet_ = false;
    rowsExamined_ = 0;
    rowsExaminedIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    users_ = "";
    usersIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
}

ChSlowLogDetailResponse_slow_log_list::~ChSlowLogDetailResponse_slow_log_list() = default;

void ChSlowLogDetailResponse_slow_log_list::validate()
{
}

web::json::value ChSlowLogDetailResponse_slow_log_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
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
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ChSlowLogDetailResponse_slow_log_list::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
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
    return ok;
}


std::string ChSlowLogDetailResponse_slow_log_list::getNodeId() const
{
    return nodeId_;
}

void ChSlowLogDetailResponse_slow_log_list::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getTime() const
{
    return time_;
}

void ChSlowLogDetailResponse_slow_log_list::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::timeIsSet() const
{
    return timeIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsettime()
{
    timeIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getLockTime() const
{
    return lockTime_;
}

void ChSlowLogDetailResponse_slow_log_list::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

int32_t ChSlowLogDetailResponse_slow_log_list::getRowsSent() const
{
    return rowsSent_;
}

void ChSlowLogDetailResponse_slow_log_list::setRowsSent(int32_t value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

int32_t ChSlowLogDetailResponse_slow_log_list::getRowsExamined() const
{
    return rowsExamined_;
}

void ChSlowLogDetailResponse_slow_log_list::setRowsExamined(int32_t value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getDatabase() const
{
    return database_;
}

void ChSlowLogDetailResponse_slow_log_list::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::databaseIsSet() const
{
    return databaseIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getUsers() const
{
    return users_;
}

void ChSlowLogDetailResponse_slow_log_list::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::usersIsSet() const
{
    return usersIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetusers()
{
    usersIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getQuerySample() const
{
    return querySample_;
}

void ChSlowLogDetailResponse_slow_log_list::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getType() const
{
    return type_;
}

void ChSlowLogDetailResponse_slow_log_list::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::typeIsSet() const
{
    return typeIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsettype()
{
    typeIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getClientIp() const
{
    return clientIp_;
}

void ChSlowLogDetailResponse_slow_log_list::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getStartTime() const
{
    return startTime_;
}

void ChSlowLogDetailResponse_slow_log_list::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getLineNum() const
{
    return lineNum_;
}

void ChSlowLogDetailResponse_slow_log_list::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ChSlowLogDetailResponse_slow_log_list::getCount() const
{
    return count_;
}

void ChSlowLogDetailResponse_slow_log_list::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ChSlowLogDetailResponse_slow_log_list::countIsSet() const
{
    return countIsSet_;
}

void ChSlowLogDetailResponse_slow_log_list::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


