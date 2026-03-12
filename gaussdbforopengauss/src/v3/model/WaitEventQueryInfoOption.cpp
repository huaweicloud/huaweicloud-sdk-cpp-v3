

#include "huaweicloud/gaussdbforopengauss/v3/model/WaitEventQueryInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WaitEventQueryInfoOption::WaitEventQueryInfoOption()
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
    blockCount_ = 0;
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

WaitEventQueryInfoOption::~WaitEventQueryInfoOption() = default;

void WaitEventQueryInfoOption::validate()
{
}

web::json::value WaitEventQueryInfoOption::toJson() const
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
bool WaitEventQueryInfoOption::fromJson(const web::json::value& val)
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
            int32_t refVal;
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


std::string WaitEventQueryInfoOption::getDatabaseName() const
{
    return databaseName_;
}

void WaitEventQueryInfoOption::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool WaitEventQueryInfoOption::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void WaitEventQueryInfoOption::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getUserName() const
{
    return userName_;
}

void WaitEventQueryInfoOption::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool WaitEventQueryInfoOption::userNameIsSet() const
{
    return userNameIsSet_;
}

void WaitEventQueryInfoOption::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getWaiting() const
{
    return waiting_;
}

void WaitEventQueryInfoOption::setWaiting(const std::string& value)
{
    waiting_ = value;
    waitingIsSet_ = true;
}

bool WaitEventQueryInfoOption::waitingIsSet() const
{
    return waitingIsSet_;
}

void WaitEventQueryInfoOption::unsetwaiting()
{
    waitingIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getSessionId() const
{
    return sessionId_;
}

void WaitEventQueryInfoOption::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool WaitEventQueryInfoOption::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void WaitEventQueryInfoOption::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getBlockSessionId() const
{
    return blockSessionId_;
}

void WaitEventQueryInfoOption::setBlockSessionId(const std::string& value)
{
    blockSessionId_ = value;
    blockSessionIdIsSet_ = true;
}

bool WaitEventQueryInfoOption::blockSessionIdIsSet() const
{
    return blockSessionIdIsSet_;
}

void WaitEventQueryInfoOption::unsetblockSessionId()
{
    blockSessionIdIsSet_ = false;
}

int32_t WaitEventQueryInfoOption::getBlockCount() const
{
    return blockCount_;
}

void WaitEventQueryInfoOption::setBlockCount(int32_t value)
{
    blockCount_ = value;
    blockCountIsSet_ = true;
}

bool WaitEventQueryInfoOption::blockCountIsSet() const
{
    return blockCountIsSet_;
}

void WaitEventQueryInfoOption::unsetblockCount()
{
    blockCountIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void WaitEventQueryInfoOption::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool WaitEventQueryInfoOption::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void WaitEventQueryInfoOption::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getQueryId() const
{
    return queryId_;
}

void WaitEventQueryInfoOption::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool WaitEventQueryInfoOption::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void WaitEventQueryInfoOption::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getState() const
{
    return state_;
}

void WaitEventQueryInfoOption::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool WaitEventQueryInfoOption::stateIsSet() const
{
    return stateIsSet_;
}

void WaitEventQueryInfoOption::unsetstate()
{
    stateIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getWaitEvent() const
{
    return waitEvent_;
}

void WaitEventQueryInfoOption::setWaitEvent(const std::string& value)
{
    waitEvent_ = value;
    waitEventIsSet_ = true;
}

bool WaitEventQueryInfoOption::waitEventIsSet() const
{
    return waitEventIsSet_;
}

void WaitEventQueryInfoOption::unsetwaitEvent()
{
    waitEventIsSet_ = false;
}

std::string WaitEventQueryInfoOption::getWaitStatus() const
{
    return waitStatus_;
}

void WaitEventQueryInfoOption::setWaitStatus(const std::string& value)
{
    waitStatus_ = value;
    waitStatusIsSet_ = true;
}

bool WaitEventQueryInfoOption::waitStatusIsSet() const
{
    return waitStatusIsSet_;
}

void WaitEventQueryInfoOption::unsetwaitStatus()
{
    waitStatusIsSet_ = false;
}

}
}
}
}
}


