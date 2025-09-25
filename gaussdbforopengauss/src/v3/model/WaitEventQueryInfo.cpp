

#include "huaweicloud/gaussdbforopengauss/v3/model/WaitEventQueryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WaitEventQueryInfo::WaitEventQueryInfo()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    waiting_ = "";
    waitingIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    blockSessionId_ = "";
    blockSessionIdIsSet_ = false;
    blockCount_ = "";
    blockCountIsSet_ = false;
    uniqueSqlId_ = "";
    uniqueSqlIdIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    waitEvent_ = "";
    waitEventIsSet_ = false;
    waitStatus_ = "";
    waitStatusIsSet_ = false;
}

WaitEventQueryInfo::~WaitEventQueryInfo() = default;

void WaitEventQueryInfo::validate()
{
}

web::json::value WaitEventQueryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(waitingIsSet_) {
        val[utility::conversions::to_string_t("waiting")] = ModelBase::toJson(waiting_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(blockSessionIdIsSet_) {
        val[utility::conversions::to_string_t("block_session_id")] = ModelBase::toJson(blockSessionId_);
    }
    if(blockCountIsSet_) {
        val[utility::conversions::to_string_t("block_count")] = ModelBase::toJson(blockCount_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(waitEventIsSet_) {
        val[utility::conversions::to_string_t("wait_event")] = ModelBase::toJson(waitEvent_);
    }
    if(waitStatusIsSet_) {
        val[utility::conversions::to_string_t("wait_status")] = ModelBase::toJson(waitStatus_);
    }

    return val;
}
bool WaitEventQueryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("waiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waiting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaiting(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("block_session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("wait_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitStatus(refVal);
        }
    }
    return ok;
}


std::string WaitEventQueryInfo::getDatabaseName() const
{
    return databaseName_;
}

void WaitEventQueryInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool WaitEventQueryInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void WaitEventQueryInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string WaitEventQueryInfo::getUserName() const
{
    return userName_;
}

void WaitEventQueryInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool WaitEventQueryInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void WaitEventQueryInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string WaitEventQueryInfo::getWaiting() const
{
    return waiting_;
}

void WaitEventQueryInfo::setWaiting(const std::string& value)
{
    waiting_ = value;
    waitingIsSet_ = true;
}

bool WaitEventQueryInfo::waitingIsSet() const
{
    return waitingIsSet_;
}

void WaitEventQueryInfo::unsetwaiting()
{
    waitingIsSet_ = false;
}

std::string WaitEventQueryInfo::getSessionId() const
{
    return sessionId_;
}

void WaitEventQueryInfo::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool WaitEventQueryInfo::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void WaitEventQueryInfo::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string WaitEventQueryInfo::getBlockSessionId() const
{
    return blockSessionId_;
}

void WaitEventQueryInfo::setBlockSessionId(const std::string& value)
{
    blockSessionId_ = value;
    blockSessionIdIsSet_ = true;
}

bool WaitEventQueryInfo::blockSessionIdIsSet() const
{
    return blockSessionIdIsSet_;
}

void WaitEventQueryInfo::unsetblockSessionId()
{
    blockSessionIdIsSet_ = false;
}

std::string WaitEventQueryInfo::getBlockCount() const
{
    return blockCount_;
}

void WaitEventQueryInfo::setBlockCount(const std::string& value)
{
    blockCount_ = value;
    blockCountIsSet_ = true;
}

bool WaitEventQueryInfo::blockCountIsSet() const
{
    return blockCountIsSet_;
}

void WaitEventQueryInfo::unsetblockCount()
{
    blockCountIsSet_ = false;
}

std::string WaitEventQueryInfo::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void WaitEventQueryInfo::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool WaitEventQueryInfo::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void WaitEventQueryInfo::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string WaitEventQueryInfo::getQueryId() const
{
    return queryId_;
}

void WaitEventQueryInfo::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool WaitEventQueryInfo::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void WaitEventQueryInfo::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string WaitEventQueryInfo::getState() const
{
    return state_;
}

void WaitEventQueryInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool WaitEventQueryInfo::stateIsSet() const
{
    return stateIsSet_;
}

void WaitEventQueryInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string WaitEventQueryInfo::getWaitEvent() const
{
    return waitEvent_;
}

void WaitEventQueryInfo::setWaitEvent(const std::string& value)
{
    waitEvent_ = value;
    waitEventIsSet_ = true;
}

bool WaitEventQueryInfo::waitEventIsSet() const
{
    return waitEventIsSet_;
}

void WaitEventQueryInfo::unsetwaitEvent()
{
    waitEventIsSet_ = false;
}

std::string WaitEventQueryInfo::getWaitStatus() const
{
    return waitStatus_;
}

void WaitEventQueryInfo::setWaitStatus(const std::string& value)
{
    waitStatus_ = value;
    waitStatusIsSet_ = true;
}

bool WaitEventQueryInfo::waitStatusIsSet() const
{
    return waitStatusIsSet_;
}

void WaitEventQueryInfo::unsetwaitStatus()
{
    waitStatusIsSet_ = false;
}

}
}
}
}
}


