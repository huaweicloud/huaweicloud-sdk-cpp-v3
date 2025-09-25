

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlTraceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlTraceRequest::ListSqlTraceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlExecId_ = "";
    sqlExecIdIsSet_ = false;
    transactionId_ = "";
    transactionIdIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListSqlTraceRequest::~ListSqlTraceRequest() = default;

void ListSqlTraceRequest::validate()
{
}

web::json::value ListSqlTraceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlExecIdIsSet_) {
        val[utility::conversions::to_string_t("sql_exec_id")] = ModelBase::toJson(sqlExecId_);
    }
    if(transactionIdIsSet_) {
        val[utility::conversions::to_string_t("transaction_id")] = ModelBase::toJson(transactionId_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListSqlTraceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_exec_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_exec_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlExecId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListSqlTraceRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlTraceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlTraceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlTraceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSqlTraceRequest::getSqlId() const
{
    return sqlId_;
}

void ListSqlTraceRequest::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListSqlTraceRequest::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListSqlTraceRequest::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListSqlTraceRequest::getSqlExecId() const
{
    return sqlExecId_;
}

void ListSqlTraceRequest::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool ListSqlTraceRequest::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void ListSqlTraceRequest::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string ListSqlTraceRequest::getTransactionId() const
{
    return transactionId_;
}

void ListSqlTraceRequest::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool ListSqlTraceRequest::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void ListSqlTraceRequest::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string ListSqlTraceRequest::getTraceId() const
{
    return traceId_;
}

void ListSqlTraceRequest::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListSqlTraceRequest::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListSqlTraceRequest::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ListSqlTraceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlTraceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlTraceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlTraceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


