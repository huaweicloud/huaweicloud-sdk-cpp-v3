

#include "huaweicloud/dbss/v1/model/AuditSqlResponse_sql.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSqlResponse_sql::AuditSqlResponse_sql()
{
    id_ = "";
    idIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    clientName_ = "";
    clientNameIsSet_ = false;
    dbIp_ = "";
    dbIpIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    operatedObjInfoIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    sqlResponse_ = "";
    sqlResponseIsSet_ = false;
    dbInstance_ = "";
    dbInstanceIsSet_ = false;
}

AuditSqlResponse_sql::~AuditSqlResponse_sql() = default;

void AuditSqlResponse_sql::validate()
{
}

web::json::value AuditSqlResponse_sql::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(clientNameIsSet_) {
        val[utility::conversions::to_string_t("client_name")] = ModelBase::toJson(clientName_);
    }
    if(dbIpIsSet_) {
        val[utility::conversions::to_string_t("db_ip")] = ModelBase::toJson(dbIp_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(operatedObjInfoIsSet_) {
        val[utility::conversions::to_string_t("operated_obj_info")] = ModelBase::toJson(operatedObjInfo_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(sqlResponseIsSet_) {
        val[utility::conversions::to_string_t("sql_response")] = ModelBase::toJson(sqlResponse_);
    }
    if(dbInstanceIsSet_) {
        val[utility::conversions::to_string_t("db_instance")] = ModelBase::toJson(dbInstance_);
    }

    return val;
}
bool AuditSqlResponse_sql::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operated_obj_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operated_obj_info"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditSqlResponse_sql_operated_obj_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatedObjInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("risk_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_response"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlResponse(refVal);
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
    return ok;
}


std::string AuditSqlResponse_sql::getId() const
{
    return id_;
}

void AuditSqlResponse_sql::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditSqlResponse_sql::idIsSet() const
{
    return idIsSet_;
}

void AuditSqlResponse_sql::unsetid()
{
    idIsSet_ = false;
}

std::string AuditSqlResponse_sql::getSqlStatement() const
{
    return sqlStatement_;
}

void AuditSqlResponse_sql::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool AuditSqlResponse_sql::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void AuditSqlResponse_sql::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string AuditSqlResponse_sql::getClientIp() const
{
    return clientIp_;
}

void AuditSqlResponse_sql::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool AuditSqlResponse_sql::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void AuditSqlResponse_sql::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string AuditSqlResponse_sql::getClientName() const
{
    return clientName_;
}

void AuditSqlResponse_sql::setClientName(const std::string& value)
{
    clientName_ = value;
    clientNameIsSet_ = true;
}

bool AuditSqlResponse_sql::clientNameIsSet() const
{
    return clientNameIsSet_;
}

void AuditSqlResponse_sql::unsetclientName()
{
    clientNameIsSet_ = false;
}

std::string AuditSqlResponse_sql::getDbIp() const
{
    return dbIp_;
}

void AuditSqlResponse_sql::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool AuditSqlResponse_sql::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void AuditSqlResponse_sql::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string AuditSqlResponse_sql::getDbUser() const
{
    return dbUser_;
}

void AuditSqlResponse_sql::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool AuditSqlResponse_sql::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void AuditSqlResponse_sql::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string AuditSqlResponse_sql::getQueryType() const
{
    return queryType_;
}

void AuditSqlResponse_sql::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool AuditSqlResponse_sql::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void AuditSqlResponse_sql::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::vector<AuditSqlResponse_sql_operated_obj_info>& AuditSqlResponse_sql::getOperatedObjInfo()
{
    return operatedObjInfo_;
}

void AuditSqlResponse_sql::setOperatedObjInfo(const std::vector<AuditSqlResponse_sql_operated_obj_info>& value)
{
    operatedObjInfo_ = value;
    operatedObjInfoIsSet_ = true;
}

bool AuditSqlResponse_sql::operatedObjInfoIsSet() const
{
    return operatedObjInfoIsSet_;
}

void AuditSqlResponse_sql::unsetoperatedObjInfo()
{
    operatedObjInfoIsSet_ = false;
}

std::string AuditSqlResponse_sql::getRuleName() const
{
    return ruleName_;
}

void AuditSqlResponse_sql::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AuditSqlResponse_sql::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AuditSqlResponse_sql::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string AuditSqlResponse_sql::getRiskLevel() const
{
    return riskLevel_;
}

void AuditSqlResponse_sql::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool AuditSqlResponse_sql::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void AuditSqlResponse_sql::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string AuditSqlResponse_sql::getStartTime() const
{
    return startTime_;
}

void AuditSqlResponse_sql::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AuditSqlResponse_sql::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AuditSqlResponse_sql::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AuditSqlResponse_sql::getSqlResponse() const
{
    return sqlResponse_;
}

void AuditSqlResponse_sql::setSqlResponse(const std::string& value)
{
    sqlResponse_ = value;
    sqlResponseIsSet_ = true;
}

bool AuditSqlResponse_sql::sqlResponseIsSet() const
{
    return sqlResponseIsSet_;
}

void AuditSqlResponse_sql::unsetsqlResponse()
{
    sqlResponseIsSet_ = false;
}

std::string AuditSqlResponse_sql::getDbInstance() const
{
    return dbInstance_;
}

void AuditSqlResponse_sql::setDbInstance(const std::string& value)
{
    dbInstance_ = value;
    dbInstanceIsSet_ = true;
}

bool AuditSqlResponse_sql::dbInstanceIsSet() const
{
    return dbInstanceIsSet_;
}

void AuditSqlResponse_sql::unsetdbInstance()
{
    dbInstanceIsSet_ = false;
}

}
}
}
}
}


