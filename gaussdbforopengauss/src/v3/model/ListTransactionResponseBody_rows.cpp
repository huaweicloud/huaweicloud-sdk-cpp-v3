

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionResponseBody_rows.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionResponseBody_rows::ListTransactionResponseBody_rows()
{
    sessionid_ = 0;
    sessionidIsSet_ = false;
    pid_ = 0;
    pidIsSet_ = false;
    queryId_ = 0;
    queryIdIsSet_ = false;
    datname_ = "";
    datnameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = 0;
    clientPortIsSet_ = false;
    usename_ = "";
    usenameIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    backendStart_ = "";
    backendStartIsSet_ = false;
    xactStart_ = "";
    xactStartIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    stateChange_ = "";
    stateChangeIsSet_ = false;
    queryStart_ = "";
    queryStartIsSet_ = false;
    waiting_ = "";
    waitingIsSet_ = false;
    uniqueSqlId_ = 0;
    uniqueSqlIdIsSet_ = false;
    topXid_ = "";
    topXidIsSet_ = false;
    currentXid_ = "";
    currentXidIsSet_ = false;
    execTime_ = "";
    execTimeIsSet_ = false;
    xlogQuantity_ = 0;
    xlogQuantityIsSet_ = false;
}

ListTransactionResponseBody_rows::~ListTransactionResponseBody_rows() = default;

void ListTransactionResponseBody_rows::validate()
{
}

web::json::value ListTransactionResponseBody_rows::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionidIsSet_) {
        val[utility::conversions::to_string_t("sessionid")] = ModelBase::toJson(sessionid_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(datnameIsSet_) {
        val[utility::conversions::to_string_t("datname")] = ModelBase::toJson(datname_);
    }
    if(clientAddrIsSet_) {
        val[utility::conversions::to_string_t("client_addr")] = ModelBase::toJson(clientAddr_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(usenameIsSet_) {
        val[utility::conversions::to_string_t("usename")] = ModelBase::toJson(usename_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(backendStartIsSet_) {
        val[utility::conversions::to_string_t("backend_start")] = ModelBase::toJson(backendStart_);
    }
    if(xactStartIsSet_) {
        val[utility::conversions::to_string_t("xact_start")] = ModelBase::toJson(xactStart_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(stateChangeIsSet_) {
        val[utility::conversions::to_string_t("state_change")] = ModelBase::toJson(stateChange_);
    }
    if(queryStartIsSet_) {
        val[utility::conversions::to_string_t("query_start")] = ModelBase::toJson(queryStart_);
    }
    if(waitingIsSet_) {
        val[utility::conversions::to_string_t("waiting")] = ModelBase::toJson(waiting_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(topXidIsSet_) {
        val[utility::conversions::to_string_t("top_xid")] = ModelBase::toJson(topXid_);
    }
    if(currentXidIsSet_) {
        val[utility::conversions::to_string_t("current_xid")] = ModelBase::toJson(currentXid_);
    }
    if(execTimeIsSet_) {
        val[utility::conversions::to_string_t("exec_time")] = ModelBase::toJson(execTime_);
    }
    if(xlogQuantityIsSet_) {
        val[utility::conversions::to_string_t("xlog_quantity")] = ModelBase::toJson(xlogQuantity_);
    }

    return val;
}
bool ListTransactionResponseBody_rows::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sessionid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessionid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xact_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xact_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXactStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryStart(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unique_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_sql_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_xid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_xid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopXid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_xid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_xid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentXid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xlog_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xlog_quantity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXlogQuantity(refVal);
        }
    }
    return ok;
}


int32_t ListTransactionResponseBody_rows::getSessionid() const
{
    return sessionid_;
}

void ListTransactionResponseBody_rows::setSessionid(int32_t value)
{
    sessionid_ = value;
    sessionidIsSet_ = true;
}

bool ListTransactionResponseBody_rows::sessionidIsSet() const
{
    return sessionidIsSet_;
}

void ListTransactionResponseBody_rows::unsetsessionid()
{
    sessionidIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows::getPid() const
{
    return pid_;
}

void ListTransactionResponseBody_rows::setPid(int32_t value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ListTransactionResponseBody_rows::pidIsSet() const
{
    return pidIsSet_;
}

void ListTransactionResponseBody_rows::unsetpid()
{
    pidIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows::getQueryId() const
{
    return queryId_;
}

void ListTransactionResponseBody_rows::setQueryId(int32_t value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ListTransactionResponseBody_rows::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ListTransactionResponseBody_rows::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getDatname() const
{
    return datname_;
}

void ListTransactionResponseBody_rows::setDatname(const std::string& value)
{
    datname_ = value;
    datnameIsSet_ = true;
}

bool ListTransactionResponseBody_rows::datnameIsSet() const
{
    return datnameIsSet_;
}

void ListTransactionResponseBody_rows::unsetdatname()
{
    datnameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getClientAddr() const
{
    return clientAddr_;
}

void ListTransactionResponseBody_rows::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool ListTransactionResponseBody_rows::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void ListTransactionResponseBody_rows::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows::getClientPort() const
{
    return clientPort_;
}

void ListTransactionResponseBody_rows::setClientPort(int32_t value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool ListTransactionResponseBody_rows::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void ListTransactionResponseBody_rows::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getUsename() const
{
    return usename_;
}

void ListTransactionResponseBody_rows::setUsename(const std::string& value)
{
    usename_ = value;
    usenameIsSet_ = true;
}

bool ListTransactionResponseBody_rows::usenameIsSet() const
{
    return usenameIsSet_;
}

void ListTransactionResponseBody_rows::unsetusename()
{
    usenameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getQuery() const
{
    return query_;
}

void ListTransactionResponseBody_rows::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListTransactionResponseBody_rows::queryIsSet() const
{
    return queryIsSet_;
}

void ListTransactionResponseBody_rows::unsetquery()
{
    queryIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getBackendStart() const
{
    return backendStart_;
}

void ListTransactionResponseBody_rows::setBackendStart(const std::string& value)
{
    backendStart_ = value;
    backendStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows::backendStartIsSet() const
{
    return backendStartIsSet_;
}

void ListTransactionResponseBody_rows::unsetbackendStart()
{
    backendStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getXactStart() const
{
    return xactStart_;
}

void ListTransactionResponseBody_rows::setXactStart(const std::string& value)
{
    xactStart_ = value;
    xactStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows::xactStartIsSet() const
{
    return xactStartIsSet_;
}

void ListTransactionResponseBody_rows::unsetxactStart()
{
    xactStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getApplicationName() const
{
    return applicationName_;
}

void ListTransactionResponseBody_rows::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool ListTransactionResponseBody_rows::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void ListTransactionResponseBody_rows::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getState() const
{
    return state_;
}

void ListTransactionResponseBody_rows::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListTransactionResponseBody_rows::stateIsSet() const
{
    return stateIsSet_;
}

void ListTransactionResponseBody_rows::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getStateChange() const
{
    return stateChange_;
}

void ListTransactionResponseBody_rows::setStateChange(const std::string& value)
{
    stateChange_ = value;
    stateChangeIsSet_ = true;
}

bool ListTransactionResponseBody_rows::stateChangeIsSet() const
{
    return stateChangeIsSet_;
}

void ListTransactionResponseBody_rows::unsetstateChange()
{
    stateChangeIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getQueryStart() const
{
    return queryStart_;
}

void ListTransactionResponseBody_rows::setQueryStart(const std::string& value)
{
    queryStart_ = value;
    queryStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows::queryStartIsSet() const
{
    return queryStartIsSet_;
}

void ListTransactionResponseBody_rows::unsetqueryStart()
{
    queryStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getWaiting() const
{
    return waiting_;
}

void ListTransactionResponseBody_rows::setWaiting(const std::string& value)
{
    waiting_ = value;
    waitingIsSet_ = true;
}

bool ListTransactionResponseBody_rows::waitingIsSet() const
{
    return waitingIsSet_;
}

void ListTransactionResponseBody_rows::unsetwaiting()
{
    waitingIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void ListTransactionResponseBody_rows::setUniqueSqlId(int32_t value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool ListTransactionResponseBody_rows::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void ListTransactionResponseBody_rows::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getTopXid() const
{
    return topXid_;
}

void ListTransactionResponseBody_rows::setTopXid(const std::string& value)
{
    topXid_ = value;
    topXidIsSet_ = true;
}

bool ListTransactionResponseBody_rows::topXidIsSet() const
{
    return topXidIsSet_;
}

void ListTransactionResponseBody_rows::unsettopXid()
{
    topXidIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getCurrentXid() const
{
    return currentXid_;
}

void ListTransactionResponseBody_rows::setCurrentXid(const std::string& value)
{
    currentXid_ = value;
    currentXidIsSet_ = true;
}

bool ListTransactionResponseBody_rows::currentXidIsSet() const
{
    return currentXidIsSet_;
}

void ListTransactionResponseBody_rows::unsetcurrentXid()
{
    currentXidIsSet_ = false;
}

std::string ListTransactionResponseBody_rows::getExecTime() const
{
    return execTime_;
}

void ListTransactionResponseBody_rows::setExecTime(const std::string& value)
{
    execTime_ = value;
    execTimeIsSet_ = true;
}

bool ListTransactionResponseBody_rows::execTimeIsSet() const
{
    return execTimeIsSet_;
}

void ListTransactionResponseBody_rows::unsetexecTime()
{
    execTimeIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows::getXlogQuantity() const
{
    return xlogQuantity_;
}

void ListTransactionResponseBody_rows::setXlogQuantity(int32_t value)
{
    xlogQuantity_ = value;
    xlogQuantityIsSet_ = true;
}

bool ListTransactionResponseBody_rows::xlogQuantityIsSet() const
{
    return xlogQuantityIsSet_;
}

void ListTransactionResponseBody_rows::unsetxlogQuantity()
{
    xlogQuantityIsSet_ = false;
}

}
}
}
}
}


