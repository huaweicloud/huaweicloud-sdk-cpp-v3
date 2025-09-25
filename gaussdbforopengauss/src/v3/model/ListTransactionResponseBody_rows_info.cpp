

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionResponseBody_rows_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionResponseBody_rows_info::ListTransactionResponseBody_rows_info()
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

ListTransactionResponseBody_rows_info::~ListTransactionResponseBody_rows_info() = default;

void ListTransactionResponseBody_rows_info::validate()
{
}

web::json::value ListTransactionResponseBody_rows_info::toJson() const
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
bool ListTransactionResponseBody_rows_info::fromJson(const web::json::value& val)
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


int32_t ListTransactionResponseBody_rows_info::getSessionid() const
{
    return sessionid_;
}

void ListTransactionResponseBody_rows_info::setSessionid(int32_t value)
{
    sessionid_ = value;
    sessionidIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::sessionidIsSet() const
{
    return sessionidIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetsessionid()
{
    sessionidIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows_info::getPid() const
{
    return pid_;
}

void ListTransactionResponseBody_rows_info::setPid(int32_t value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::pidIsSet() const
{
    return pidIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetpid()
{
    pidIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows_info::getQueryId() const
{
    return queryId_;
}

void ListTransactionResponseBody_rows_info::setQueryId(int32_t value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getDatname() const
{
    return datname_;
}

void ListTransactionResponseBody_rows_info::setDatname(const std::string& value)
{
    datname_ = value;
    datnameIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::datnameIsSet() const
{
    return datnameIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetdatname()
{
    datnameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getClientAddr() const
{
    return clientAddr_;
}

void ListTransactionResponseBody_rows_info::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows_info::getClientPort() const
{
    return clientPort_;
}

void ListTransactionResponseBody_rows_info::setClientPort(int32_t value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getUsename() const
{
    return usename_;
}

void ListTransactionResponseBody_rows_info::setUsename(const std::string& value)
{
    usename_ = value;
    usenameIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::usenameIsSet() const
{
    return usenameIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetusename()
{
    usenameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getQuery() const
{
    return query_;
}

void ListTransactionResponseBody_rows_info::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::queryIsSet() const
{
    return queryIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetquery()
{
    queryIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getBackendStart() const
{
    return backendStart_;
}

void ListTransactionResponseBody_rows_info::setBackendStart(const std::string& value)
{
    backendStart_ = value;
    backendStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::backendStartIsSet() const
{
    return backendStartIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetbackendStart()
{
    backendStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getXactStart() const
{
    return xactStart_;
}

void ListTransactionResponseBody_rows_info::setXactStart(const std::string& value)
{
    xactStart_ = value;
    xactStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::xactStartIsSet() const
{
    return xactStartIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetxactStart()
{
    xactStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getApplicationName() const
{
    return applicationName_;
}

void ListTransactionResponseBody_rows_info::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getState() const
{
    return state_;
}

void ListTransactionResponseBody_rows_info::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::stateIsSet() const
{
    return stateIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getStateChange() const
{
    return stateChange_;
}

void ListTransactionResponseBody_rows_info::setStateChange(const std::string& value)
{
    stateChange_ = value;
    stateChangeIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::stateChangeIsSet() const
{
    return stateChangeIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetstateChange()
{
    stateChangeIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getQueryStart() const
{
    return queryStart_;
}

void ListTransactionResponseBody_rows_info::setQueryStart(const std::string& value)
{
    queryStart_ = value;
    queryStartIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::queryStartIsSet() const
{
    return queryStartIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetqueryStart()
{
    queryStartIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getWaiting() const
{
    return waiting_;
}

void ListTransactionResponseBody_rows_info::setWaiting(const std::string& value)
{
    waiting_ = value;
    waitingIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::waitingIsSet() const
{
    return waitingIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetwaiting()
{
    waitingIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows_info::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void ListTransactionResponseBody_rows_info::setUniqueSqlId(int32_t value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getTopXid() const
{
    return topXid_;
}

void ListTransactionResponseBody_rows_info::setTopXid(const std::string& value)
{
    topXid_ = value;
    topXidIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::topXidIsSet() const
{
    return topXidIsSet_;
}

void ListTransactionResponseBody_rows_info::unsettopXid()
{
    topXidIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getCurrentXid() const
{
    return currentXid_;
}

void ListTransactionResponseBody_rows_info::setCurrentXid(const std::string& value)
{
    currentXid_ = value;
    currentXidIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::currentXidIsSet() const
{
    return currentXidIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetcurrentXid()
{
    currentXidIsSet_ = false;
}

std::string ListTransactionResponseBody_rows_info::getExecTime() const
{
    return execTime_;
}

void ListTransactionResponseBody_rows_info::setExecTime(const std::string& value)
{
    execTime_ = value;
    execTimeIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::execTimeIsSet() const
{
    return execTimeIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetexecTime()
{
    execTimeIsSet_ = false;
}

int32_t ListTransactionResponseBody_rows_info::getXlogQuantity() const
{
    return xlogQuantity_;
}

void ListTransactionResponseBody_rows_info::setXlogQuantity(int32_t value)
{
    xlogQuantity_ = value;
    xlogQuantityIsSet_ = true;
}

bool ListTransactionResponseBody_rows_info::xlogQuantityIsSet() const
{
    return xlogQuantityIsSet_;
}

void ListTransactionResponseBody_rows_info::unsetxlogQuantity()
{
    xlogQuantityIsSet_ = false;
}

}
}
}
}
}


