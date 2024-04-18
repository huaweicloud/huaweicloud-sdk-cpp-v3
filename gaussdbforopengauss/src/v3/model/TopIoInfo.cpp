

#include "huaweicloud/gaussdbforopengauss/v3/model/TopIoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TopIoInfo::TopIoInfo()
{
    threadId_ = "";
    threadIdIsSet_ = false;
    threadType_ = "";
    threadTypeIsSet_ = false;
    diskReadRate_ = 0;
    diskReadRateIsSet_ = false;
    diskWriteRate_ = 0;
    diskWriteRateIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    uniqueSqlId_ = "";
    uniqueSqlIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    sqlStart_ = 0L;
    sqlStartIsSet_ = false;
}

TopIoInfo::~TopIoInfo() = default;

void TopIoInfo::validate()
{
}

web::json::value TopIoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(threadIdIsSet_) {
        val[utility::conversions::to_string_t("thread_id")] = ModelBase::toJson(threadId_);
    }
    if(threadTypeIsSet_) {
        val[utility::conversions::to_string_t("thread_type")] = ModelBase::toJson(threadType_);
    }
    if(diskReadRateIsSet_) {
        val[utility::conversions::to_string_t("disk_read_rate")] = ModelBase::toJson(diskReadRate_);
    }
    if(diskWriteRateIsSet_) {
        val[utility::conversions::to_string_t("disk_write_rate")] = ModelBase::toJson(diskWriteRate_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sqlStartIsSet_) {
        val[utility::conversions::to_string_t("sql_start")] = ModelBase::toJson(sqlStart_);
    }

    return val;
}
bool TopIoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("thread_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thread_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreadId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thread_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thread_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreadType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_read_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_read_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskReadRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_write_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_write_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskWriteRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unique_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueSqlId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_start"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStart(refVal);
        }
    }
    return ok;
}


std::string TopIoInfo::getThreadId() const
{
    return threadId_;
}

void TopIoInfo::setThreadId(const std::string& value)
{
    threadId_ = value;
    threadIdIsSet_ = true;
}

bool TopIoInfo::threadIdIsSet() const
{
    return threadIdIsSet_;
}

void TopIoInfo::unsetthreadId()
{
    threadIdIsSet_ = false;
}

std::string TopIoInfo::getThreadType() const
{
    return threadType_;
}

void TopIoInfo::setThreadType(const std::string& value)
{
    threadType_ = value;
    threadTypeIsSet_ = true;
}

bool TopIoInfo::threadTypeIsSet() const
{
    return threadTypeIsSet_;
}

void TopIoInfo::unsetthreadType()
{
    threadTypeIsSet_ = false;
}

int32_t TopIoInfo::getDiskReadRate() const
{
    return diskReadRate_;
}

void TopIoInfo::setDiskReadRate(int32_t value)
{
    diskReadRate_ = value;
    diskReadRateIsSet_ = true;
}

bool TopIoInfo::diskReadRateIsSet() const
{
    return diskReadRateIsSet_;
}

void TopIoInfo::unsetdiskReadRate()
{
    diskReadRateIsSet_ = false;
}

int32_t TopIoInfo::getDiskWriteRate() const
{
    return diskWriteRate_;
}

void TopIoInfo::setDiskWriteRate(int32_t value)
{
    diskWriteRate_ = value;
    diskWriteRateIsSet_ = true;
}

bool TopIoInfo::diskWriteRateIsSet() const
{
    return diskWriteRateIsSet_;
}

void TopIoInfo::unsetdiskWriteRate()
{
    diskWriteRateIsSet_ = false;
}

std::string TopIoInfo::getSessionId() const
{
    return sessionId_;
}

void TopIoInfo::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool TopIoInfo::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void TopIoInfo::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string TopIoInfo::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void TopIoInfo::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool TopIoInfo::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void TopIoInfo::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string TopIoInfo::getDatabaseName() const
{
    return databaseName_;
}

void TopIoInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool TopIoInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void TopIoInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string TopIoInfo::getClientIp() const
{
    return clientIp_;
}

void TopIoInfo::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool TopIoInfo::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void TopIoInfo::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string TopIoInfo::getUserName() const
{
    return userName_;
}

void TopIoInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TopIoInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void TopIoInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string TopIoInfo::getState() const
{
    return state_;
}

void TopIoInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TopIoInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TopIoInfo::unsetstate()
{
    stateIsSet_ = false;
}

int64_t TopIoInfo::getSqlStart() const
{
    return sqlStart_;
}

void TopIoInfo::setSqlStart(int64_t value)
{
    sqlStart_ = value;
    sqlStartIsSet_ = true;
}

bool TopIoInfo::sqlStartIsSet() const
{
    return sqlStartIsSet_;
}

void TopIoInfo::unsetsqlStart()
{
    sqlStartIsSet_ = false;
}

}
}
}
}
}


