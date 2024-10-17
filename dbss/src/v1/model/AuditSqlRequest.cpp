

#include "huaweicloud/dbss/v1/model/AuditSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSqlRequest::AuditSqlRequest()
{
    timeIsSet_ = false;
    riskLevels_ = "";
    riskLevelsIsSet_ = false;
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
    ruleName_ = "";
    ruleNameIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    sqlResponse_ = "";
    sqlResponseIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    timeOrder_ = "";
    timeOrderIsSet_ = false;
}

AuditSqlRequest::~AuditSqlRequest() = default;

void AuditSqlRequest::validate()
{
}

web::json::value AuditSqlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(riskLevelsIsSet_) {
        val[utility::conversions::to_string_t("risk_levels")] = ModelBase::toJson(riskLevels_);
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
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(sqlResponseIsSet_) {
        val[utility::conversions::to_string_t("sql_response")] = ModelBase::toJson(sqlResponse_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(timeOrderIsSet_) {
        val[utility::conversions::to_string_t("time_order")] = ModelBase::toJson(timeOrder_);
    }

    return val;
}
bool AuditSqlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            AuditSqlRequest_time refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_levels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_levels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevels(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_response"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlResponse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeOrder(refVal);
        }
    }
    return ok;
}


AuditSqlRequest_time AuditSqlRequest::getTime() const
{
    return time_;
}

void AuditSqlRequest::setTime(const AuditSqlRequest_time& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool AuditSqlRequest::timeIsSet() const
{
    return timeIsSet_;
}

void AuditSqlRequest::unsettime()
{
    timeIsSet_ = false;
}

std::string AuditSqlRequest::getRiskLevels() const
{
    return riskLevels_;
}

void AuditSqlRequest::setRiskLevels(const std::string& value)
{
    riskLevels_ = value;
    riskLevelsIsSet_ = true;
}

bool AuditSqlRequest::riskLevelsIsSet() const
{
    return riskLevelsIsSet_;
}

void AuditSqlRequest::unsetriskLevels()
{
    riskLevelsIsSet_ = false;
}

std::string AuditSqlRequest::getClientIp() const
{
    return clientIp_;
}

void AuditSqlRequest::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool AuditSqlRequest::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void AuditSqlRequest::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string AuditSqlRequest::getClientName() const
{
    return clientName_;
}

void AuditSqlRequest::setClientName(const std::string& value)
{
    clientName_ = value;
    clientNameIsSet_ = true;
}

bool AuditSqlRequest::clientNameIsSet() const
{
    return clientNameIsSet_;
}

void AuditSqlRequest::unsetclientName()
{
    clientNameIsSet_ = false;
}

std::string AuditSqlRequest::getDbIp() const
{
    return dbIp_;
}

void AuditSqlRequest::setDbIp(const std::string& value)
{
    dbIp_ = value;
    dbIpIsSet_ = true;
}

bool AuditSqlRequest::dbIpIsSet() const
{
    return dbIpIsSet_;
}

void AuditSqlRequest::unsetdbIp()
{
    dbIpIsSet_ = false;
}

std::string AuditSqlRequest::getDbUser() const
{
    return dbUser_;
}

void AuditSqlRequest::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool AuditSqlRequest::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void AuditSqlRequest::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string AuditSqlRequest::getQueryType() const
{
    return queryType_;
}

void AuditSqlRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool AuditSqlRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void AuditSqlRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string AuditSqlRequest::getRuleName() const
{
    return ruleName_;
}

void AuditSqlRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AuditSqlRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AuditSqlRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string AuditSqlRequest::getSqlStatement() const
{
    return sqlStatement_;
}

void AuditSqlRequest::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool AuditSqlRequest::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void AuditSqlRequest::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string AuditSqlRequest::getSqlResponse() const
{
    return sqlResponse_;
}

void AuditSqlRequest::setSqlResponse(const std::string& value)
{
    sqlResponse_ = value;
    sqlResponseIsSet_ = true;
}

bool AuditSqlRequest::sqlResponseIsSet() const
{
    return sqlResponseIsSet_;
}

void AuditSqlRequest::unsetsqlResponse()
{
    sqlResponseIsSet_ = false;
}

int32_t AuditSqlRequest::getPage() const
{
    return page_;
}

void AuditSqlRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool AuditSqlRequest::pageIsSet() const
{
    return pageIsSet_;
}

void AuditSqlRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t AuditSqlRequest::getSize() const
{
    return size_;
}

void AuditSqlRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AuditSqlRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void AuditSqlRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string AuditSqlRequest::getTimeOrder() const
{
    return timeOrder_;
}

void AuditSqlRequest::setTimeOrder(const std::string& value)
{
    timeOrder_ = value;
    timeOrderIsSet_ = true;
}

bool AuditSqlRequest::timeOrderIsSet() const
{
    return timeOrderIsSet_;
}

void AuditSqlRequest::unsettimeOrder()
{
    timeOrderIsSet_ = false;
}

}
}
}
}
}


