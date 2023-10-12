

#include "huaweicloud/gaussdb/v3/model/LtsLogSlowDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LtsLogSlowDetail::LtsLogSlowDetail()
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
}

LtsLogSlowDetail::~LtsLogSlowDetail() = default;

void LtsLogSlowDetail::validate()
{
}

web::json::value LtsLogSlowDetail::toJson() const
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

    return val;
}
bool LtsLogSlowDetail::fromJson(const web::json::value& val)
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
    return ok;
}


std::string LtsLogSlowDetail::getNodeId() const
{
    return nodeId_;
}

void LtsLogSlowDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool LtsLogSlowDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void LtsLogSlowDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string LtsLogSlowDetail::getCount() const
{
    return count_;
}

void LtsLogSlowDetail::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool LtsLogSlowDetail::countIsSet() const
{
    return countIsSet_;
}

void LtsLogSlowDetail::unsetcount()
{
    countIsSet_ = false;
}

std::string LtsLogSlowDetail::getTime() const
{
    return time_;
}

void LtsLogSlowDetail::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool LtsLogSlowDetail::timeIsSet() const
{
    return timeIsSet_;
}

void LtsLogSlowDetail::unsettime()
{
    timeIsSet_ = false;
}

std::string LtsLogSlowDetail::getLockTime() const
{
    return lockTime_;
}

void LtsLogSlowDetail::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool LtsLogSlowDetail::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void LtsLogSlowDetail::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string LtsLogSlowDetail::getRowsSent() const
{
    return rowsSent_;
}

void LtsLogSlowDetail::setRowsSent(const std::string& value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool LtsLogSlowDetail::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void LtsLogSlowDetail::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string LtsLogSlowDetail::getRowsExamined() const
{
    return rowsExamined_;
}

void LtsLogSlowDetail::setRowsExamined(const std::string& value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool LtsLogSlowDetail::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void LtsLogSlowDetail::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
}

std::string LtsLogSlowDetail::getDatabase() const
{
    return database_;
}

void LtsLogSlowDetail::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool LtsLogSlowDetail::databaseIsSet() const
{
    return databaseIsSet_;
}

void LtsLogSlowDetail::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string LtsLogSlowDetail::getUsers() const
{
    return users_;
}

void LtsLogSlowDetail::setUsers(const std::string& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool LtsLogSlowDetail::usersIsSet() const
{
    return usersIsSet_;
}

void LtsLogSlowDetail::unsetusers()
{
    usersIsSet_ = false;
}

std::string LtsLogSlowDetail::getQuerySample() const
{
    return querySample_;
}

void LtsLogSlowDetail::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool LtsLogSlowDetail::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void LtsLogSlowDetail::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string LtsLogSlowDetail::getType() const
{
    return type_;
}

void LtsLogSlowDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LtsLogSlowDetail::typeIsSet() const
{
    return typeIsSet_;
}

void LtsLogSlowDetail::unsettype()
{
    typeIsSet_ = false;
}

std::string LtsLogSlowDetail::getStartTime() const
{
    return startTime_;
}

void LtsLogSlowDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LtsLogSlowDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LtsLogSlowDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string LtsLogSlowDetail::getClientIp() const
{
    return clientIp_;
}

void LtsLogSlowDetail::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool LtsLogSlowDetail::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void LtsLogSlowDetail::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string LtsLogSlowDetail::getLineNum() const
{
    return lineNum_;
}

void LtsLogSlowDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool LtsLogSlowDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void LtsLogSlowDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


