

#include "huaweicloud/dbss/v1/model/SqlDetailBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SqlDetailBean::SqlDetailBean()
{
    auditResult_ = "";
    auditResultIsSet_ = false;
    clientPort_ = 0;
    clientPortIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    clientMac_ = "";
    clientMacIsSet_ = false;
    clientName_ = "";
    clientNameIsSet_ = false;
    clientOsName_ = "";
    clientOsNameIsSet_ = false;
    clientOsUser_ = "";
    clientOsUserIsSet_ = false;
    clientPortStr_ = "";
    clientPortStrIsSet_ = false;
    clientTool_ = "";
    clientToolIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    dbInstance_ = "";
    dbInstanceIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbMac_ = "";
    dbMacIsSet_ = false;
    dbPortStr_ = "";
    dbPortStrIsSet_ = false;
    dbServiceName_ = "";
    dbServiceNameIsSet_ = false;
    dbSessionId_ = "";
    dbSessionIdIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    executeTime_ = 0L;
    executeTimeIsSet_ = false;
    field_ = "";
    fieldIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    lines_ = "";
    linesIsSet_ = false;
    logResult_ = "";
    logResultIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    responseLength_ = 0;
    responseLengthIsSet_ = false;
    responseStatus_ = "";
    responseStatusIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    scopeId_ = "";
    scopeIdIsSet_ = false;
    scopeName_ = "";
    scopeNameIsSet_ = false;
    sqlResponse_ = "";
    sqlResponseIsSet_ = false;
    sqlResult_ = "";
    sqlResultIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    tcpSessionId_ = "";
    tcpSessionIdIsSet_ = false;
}

SqlDetailBean::~SqlDetailBean() = default;

void SqlDetailBean::validate()
{
}

web::json::value SqlDetailBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditResultIsSet_) {
        val[utility::conversions::to_string_t("audit_result")] = ModelBase::toJson(auditResult_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(clientMacIsSet_) {
        val[utility::conversions::to_string_t("client_mac")] = ModelBase::toJson(clientMac_);
    }
    if(clientNameIsSet_) {
        val[utility::conversions::to_string_t("client_name")] = ModelBase::toJson(clientName_);
    }
    if(clientOsNameIsSet_) {
        val[utility::conversions::to_string_t("client_os_name")] = ModelBase::toJson(clientOsName_);
    }
    if(clientOsUserIsSet_) {
        val[utility::conversions::to_string_t("client_os_user")] = ModelBase::toJson(clientOsUser_);
    }
    if(clientPortStrIsSet_) {
        val[utility::conversions::to_string_t("client_port_str")] = ModelBase::toJson(clientPortStr_);
    }
    if(clientToolIsSet_) {
        val[utility::conversions::to_string_t("client_tool")] = ModelBase::toJson(clientTool_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(dbInstanceIsSet_) {
        val[utility::conversions::to_string_t("db_instance")] = ModelBase::toJson(dbInstance_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbMacIsSet_) {
        val[utility::conversions::to_string_t("db_mac")] = ModelBase::toJson(dbMac_);
    }
    if(dbPortStrIsSet_) {
        val[utility::conversions::to_string_t("db_port_str")] = ModelBase::toJson(dbPortStr_);
    }
    if(dbServiceNameIsSet_) {
        val[utility::conversions::to_string_t("db_service_name")] = ModelBase::toJson(dbServiceName_);
    }
    if(dbSessionIdIsSet_) {
        val[utility::conversions::to_string_t("db_session_id")] = ModelBase::toJson(dbSessionId_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(executeTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_time")] = ModelBase::toJson(executeTime_);
    }
    if(fieldIsSet_) {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(field_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(linesIsSet_) {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(lines_);
    }
    if(logResultIsSet_) {
        val[utility::conversions::to_string_t("log_result")] = ModelBase::toJson(logResult_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(responseLengthIsSet_) {
        val[utility::conversions::to_string_t("response_length")] = ModelBase::toJson(responseLength_);
    }
    if(responseStatusIsSet_) {
        val[utility::conversions::to_string_t("response_status")] = ModelBase::toJson(responseStatus_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(scopeIdIsSet_) {
        val[utility::conversions::to_string_t("scope_id")] = ModelBase::toJson(scopeId_);
    }
    if(scopeNameIsSet_) {
        val[utility::conversions::to_string_t("scope_name")] = ModelBase::toJson(scopeName_);
    }
    if(sqlResponseIsSet_) {
        val[utility::conversions::to_string_t("sql_response")] = ModelBase::toJson(sqlResponse_);
    }
    if(sqlResultIsSet_) {
        val[utility::conversions::to_string_t("sql_result")] = ModelBase::toJson(sqlResult_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(tcpSessionIdIsSet_) {
        val[utility::conversions::to_string_t("tcp_session_id")] = ModelBase::toJson(tcpSessionId_);
    }

    return val;
}
bool SqlDetailBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_mac"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_mac"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientMac(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_os_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_os_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientOsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_os_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_os_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientOsUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_port_str"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_port_str"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPortStr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_tool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_tool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientTool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_instance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_mac"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_mac"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbMac(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port_str"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port_str"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPortStr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_response"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlResponse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tcp_session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tcp_session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTcpSessionId(refVal);
        }
    }
    return ok;
}


std::string SqlDetailBean::getAuditResult() const
{
    return auditResult_;
}

void SqlDetailBean::setAuditResult(const std::string& value)
{
    auditResult_ = value;
    auditResultIsSet_ = true;
}

bool SqlDetailBean::auditResultIsSet() const
{
    return auditResultIsSet_;
}

void SqlDetailBean::unsetauditResult()
{
    auditResultIsSet_ = false;
}

int32_t SqlDetailBean::getClientPort() const
{
    return clientPort_;
}

void SqlDetailBean::setClientPort(int32_t value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool SqlDetailBean::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void SqlDetailBean::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string SqlDetailBean::getClientIp() const
{
    return clientIp_;
}

void SqlDetailBean::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool SqlDetailBean::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void SqlDetailBean::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string SqlDetailBean::getClientMac() const
{
    return clientMac_;
}

void SqlDetailBean::setClientMac(const std::string& value)
{
    clientMac_ = value;
    clientMacIsSet_ = true;
}

bool SqlDetailBean::clientMacIsSet() const
{
    return clientMacIsSet_;
}

void SqlDetailBean::unsetclientMac()
{
    clientMacIsSet_ = false;
}

std::string SqlDetailBean::getClientName() const
{
    return clientName_;
}

void SqlDetailBean::setClientName(const std::string& value)
{
    clientName_ = value;
    clientNameIsSet_ = true;
}

bool SqlDetailBean::clientNameIsSet() const
{
    return clientNameIsSet_;
}

void SqlDetailBean::unsetclientName()
{
    clientNameIsSet_ = false;
}

std::string SqlDetailBean::getClientOsName() const
{
    return clientOsName_;
}

void SqlDetailBean::setClientOsName(const std::string& value)
{
    clientOsName_ = value;
    clientOsNameIsSet_ = true;
}

bool SqlDetailBean::clientOsNameIsSet() const
{
    return clientOsNameIsSet_;
}

void SqlDetailBean::unsetclientOsName()
{
    clientOsNameIsSet_ = false;
}

std::string SqlDetailBean::getClientOsUser() const
{
    return clientOsUser_;
}

void SqlDetailBean::setClientOsUser(const std::string& value)
{
    clientOsUser_ = value;
    clientOsUserIsSet_ = true;
}

bool SqlDetailBean::clientOsUserIsSet() const
{
    return clientOsUserIsSet_;
}

void SqlDetailBean::unsetclientOsUser()
{
    clientOsUserIsSet_ = false;
}

std::string SqlDetailBean::getClientPortStr() const
{
    return clientPortStr_;
}

void SqlDetailBean::setClientPortStr(const std::string& value)
{
    clientPortStr_ = value;
    clientPortStrIsSet_ = true;
}

bool SqlDetailBean::clientPortStrIsSet() const
{
    return clientPortStrIsSet_;
}

void SqlDetailBean::unsetclientPortStr()
{
    clientPortStrIsSet_ = false;
}

std::string SqlDetailBean::getClientTool() const
{
    return clientTool_;
}

void SqlDetailBean::setClientTool(const std::string& value)
{
    clientTool_ = value;
    clientToolIsSet_ = true;
}

bool SqlDetailBean::clientToolIsSet() const
{
    return clientToolIsSet_;
}

void SqlDetailBean::unsetclientTool()
{
    clientToolIsSet_ = false;
}

int32_t SqlDetailBean::getDbPort() const
{
    return dbPort_;
}

void SqlDetailBean::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool SqlDetailBean::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void SqlDetailBean::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string SqlDetailBean::getDbInstance() const
{
    return dbInstance_;
}

void SqlDetailBean::setDbInstance(const std::string& value)
{
    dbInstance_ = value;
    dbInstanceIsSet_ = true;
}

bool SqlDetailBean::dbInstanceIsSet() const
{
    return dbInstanceIsSet_;
}

void SqlDetailBean::unsetdbInstance()
{
    dbInstanceIsSet_ = false;
}

std::string SqlDetailBean::getDbIp() const
{
    return dbIp_;
}

void SqlDetailBean::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool SqlDetailBean::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void SqlDetailBean::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string SqlDetailBean::getDbMac() const
{
    return dbMac_;
}

void SqlDetailBean::setDbMac(const std::string& value)
{
    dbMac_ = value;
    dbMacIsSet_ = true;
}

bool SqlDetailBean::dbMacIsSet() const
{
    return dbMacIsSet_;
}

void SqlDetailBean::unsetdbMac()
{
    dbMacIsSet_ = false;
}

std::string SqlDetailBean::getDbPortStr() const
{
    return dbPortStr_;
}

void SqlDetailBean::setDbPortStr(const std::string& value)
{
    dbPortStr_ = value;
    dbPortStrIsSet_ = true;
}

bool SqlDetailBean::dbPortStrIsSet() const
{
    return dbPortStrIsSet_;
}

void SqlDetailBean::unsetdbPortStr()
{
    dbPortStrIsSet_ = false;
}

std::string SqlDetailBean::getDbServiceName() const
{
    return dbServiceName_;
}

void SqlDetailBean::setDbServiceName(const std::string& value)
{
    dbServiceName_ = value;
    dbServiceNameIsSet_ = true;
}

bool SqlDetailBean::dbServiceNameIsSet() const
{
    return dbServiceNameIsSet_;
}

void SqlDetailBean::unsetdbServiceName()
{
    dbServiceNameIsSet_ = false;
}

std::string SqlDetailBean::getDbSessionId() const
{
    return dbSessionId_;
}

void SqlDetailBean::setDbSessionId(const std::string& value)
{
    dbSessionId_ = value;
    dbSessionIdIsSet_ = true;
}

bool SqlDetailBean::dbSessionIdIsSet() const
{
    return dbSessionIdIsSet_;
}

void SqlDetailBean::unsetdbSessionId()
{
    dbSessionIdIsSet_ = false;
}

std::string SqlDetailBean::getDbType() const
{
    return dbType_;
}

void SqlDetailBean::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool SqlDetailBean::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void SqlDetailBean::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string SqlDetailBean::getDbUser() const
{
    return dbUser_;
}

void SqlDetailBean::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool SqlDetailBean::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void SqlDetailBean::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string SqlDetailBean::getEndTime() const
{
    return endTime_;
}

void SqlDetailBean::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SqlDetailBean::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SqlDetailBean::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t SqlDetailBean::getExecuteTime() const
{
    return executeTime_;
}

void SqlDetailBean::setExecuteTime(int64_t value)
{
    executeTime_ = value;
    executeTimeIsSet_ = true;
}

bool SqlDetailBean::executeTimeIsSet() const
{
    return executeTimeIsSet_;
}

void SqlDetailBean::unsetexecuteTime()
{
    executeTimeIsSet_ = false;
}

std::string SqlDetailBean::getField() const
{
    return field_;
}

void SqlDetailBean::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool SqlDetailBean::fieldIsSet() const
{
    return fieldIsSet_;
}

void SqlDetailBean::unsetfield()
{
    fieldIsSet_ = false;
}

std::string SqlDetailBean::getId() const
{
    return id_;
}

void SqlDetailBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SqlDetailBean::idIsSet() const
{
    return idIsSet_;
}

void SqlDetailBean::unsetid()
{
    idIsSet_ = false;
}

std::string SqlDetailBean::getLevel() const
{
    return level_;
}

void SqlDetailBean::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool SqlDetailBean::levelIsSet() const
{
    return levelIsSet_;
}

void SqlDetailBean::unsetlevel()
{
    levelIsSet_ = false;
}

std::string SqlDetailBean::getLines() const
{
    return lines_;
}

void SqlDetailBean::setLines(const std::string& value)
{
    lines_ = value;
    linesIsSet_ = true;
}

bool SqlDetailBean::linesIsSet() const
{
    return linesIsSet_;
}

void SqlDetailBean::unsetlines()
{
    linesIsSet_ = false;
}

std::string SqlDetailBean::getLogResult() const
{
    return logResult_;
}

void SqlDetailBean::setLogResult(const std::string& value)
{
    logResult_ = value;
    logResultIsSet_ = true;
}

bool SqlDetailBean::logResultIsSet() const
{
    return logResultIsSet_;
}

void SqlDetailBean::unsetlogResult()
{
    logResultIsSet_ = false;
}

std::string SqlDetailBean::getObject() const
{
    return object_;
}

void SqlDetailBean::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool SqlDetailBean::objectIsSet() const
{
    return objectIsSet_;
}

void SqlDetailBean::unsetobject()
{
    objectIsSet_ = false;
}

std::string SqlDetailBean::getObjectType() const
{
    return objectType_;
}

void SqlDetailBean::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool SqlDetailBean::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void SqlDetailBean::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string SqlDetailBean::getQueryId() const
{
    return queryId_;
}

void SqlDetailBean::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool SqlDetailBean::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void SqlDetailBean::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string SqlDetailBean::getQueryType() const
{
    return queryType_;
}

void SqlDetailBean::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool SqlDetailBean::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void SqlDetailBean::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

int32_t SqlDetailBean::getResponseLength() const
{
    return responseLength_;
}

void SqlDetailBean::setResponseLength(int32_t value)
{
    responseLength_ = value;
    responseLengthIsSet_ = true;
}

bool SqlDetailBean::responseLengthIsSet() const
{
    return responseLengthIsSet_;
}

void SqlDetailBean::unsetresponseLength()
{
    responseLengthIsSet_ = false;
}

std::string SqlDetailBean::getResponseStatus() const
{
    return responseStatus_;
}

void SqlDetailBean::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool SqlDetailBean::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void SqlDetailBean::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

std::string SqlDetailBean::getRuleId() const
{
    return ruleId_;
}

void SqlDetailBean::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool SqlDetailBean::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void SqlDetailBean::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string SqlDetailBean::getRuleName() const
{
    return ruleName_;
}

void SqlDetailBean::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool SqlDetailBean::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void SqlDetailBean::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string SqlDetailBean::getRuleType() const
{
    return ruleType_;
}

void SqlDetailBean::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool SqlDetailBean::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void SqlDetailBean::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string SqlDetailBean::getSchema() const
{
    return schema_;
}

void SqlDetailBean::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool SqlDetailBean::schemaIsSet() const
{
    return schemaIsSet_;
}

void SqlDetailBean::unsetschema()
{
    schemaIsSet_ = false;
}

std::string SqlDetailBean::getScopeId() const
{
    return scopeId_;
}

void SqlDetailBean::setScopeId(const std::string& value)
{
    scopeId_ = value;
    scopeIdIsSet_ = true;
}

bool SqlDetailBean::scopeIdIsSet() const
{
    return scopeIdIsSet_;
}

void SqlDetailBean::unsetscopeId()
{
    scopeIdIsSet_ = false;
}

std::string SqlDetailBean::getScopeName() const
{
    return scopeName_;
}

void SqlDetailBean::setScopeName(const std::string& value)
{
    scopeName_ = value;
    scopeNameIsSet_ = true;
}

bool SqlDetailBean::scopeNameIsSet() const
{
    return scopeNameIsSet_;
}

void SqlDetailBean::unsetscopeName()
{
    scopeNameIsSet_ = false;
}

std::string SqlDetailBean::getSqlResponse() const
{
    return sqlResponse_;
}

void SqlDetailBean::setSqlResponse(const std::string& value)
{
    sqlResponse_ = value;
    sqlResponseIsSet_ = true;
}

bool SqlDetailBean::sqlResponseIsSet() const
{
    return sqlResponseIsSet_;
}

void SqlDetailBean::unsetsqlResponse()
{
    sqlResponseIsSet_ = false;
}

std::string SqlDetailBean::getSqlResult() const
{
    return sqlResult_;
}

void SqlDetailBean::setSqlResult(const std::string& value)
{
    sqlResult_ = value;
    sqlResultIsSet_ = true;
}

bool SqlDetailBean::sqlResultIsSet() const
{
    return sqlResultIsSet_;
}

void SqlDetailBean::unsetsqlResult()
{
    sqlResultIsSet_ = false;
}

std::string SqlDetailBean::getSqlStatement() const
{
    return sqlStatement_;
}

void SqlDetailBean::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool SqlDetailBean::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void SqlDetailBean::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string SqlDetailBean::getStartTime() const
{
    return startTime_;
}

void SqlDetailBean::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SqlDetailBean::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SqlDetailBean::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SqlDetailBean::getTcpSessionId() const
{
    return tcpSessionId_;
}

void SqlDetailBean::setTcpSessionId(const std::string& value)
{
    tcpSessionId_ = value;
    tcpSessionIdIsSet_ = true;
}

bool SqlDetailBean::tcpSessionIdIsSet() const
{
    return tcpSessionIdIsSet_;
}

void SqlDetailBean::unsettcpSessionId()
{
    tcpSessionIdIsSet_ = false;
}

}
}
}
}
}


