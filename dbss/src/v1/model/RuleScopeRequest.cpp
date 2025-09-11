

#include "huaweicloud/dbss/v1/model/RuleScopeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleScopeRequest::RuleScopeRequest()
{
    action_ = "";
    actionIsSet_ = false;
    dbIds_ = "";
    dbIdsIsSet_ = false;
    dbNames_ = "";
    dbNamesIsSet_ = false;
    dbUsers_ = "";
    dbUsersIsSet_ = false;
    exceptionIps_ = "";
    exceptionIpsIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    sourceIps_ = "";
    sourceIpsIsSet_ = false;
    sourcePorts_ = "";
    sourcePortsIsSet_ = false;
}

RuleScopeRequest::~RuleScopeRequest() = default;

void RuleScopeRequest::validate()
{
}

web::json::value RuleScopeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }
    if(dbUsersIsSet_) {
        val[utility::conversions::to_string_t("db_users")] = ModelBase::toJson(dbUsers_);
    }
    if(exceptionIpsIsSet_) {
        val[utility::conversions::to_string_t("exception_ips")] = ModelBase::toJson(exceptionIps_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(sourceIpsIsSet_) {
        val[utility::conversions::to_string_t("source_ips")] = ModelBase::toJson(sourceIps_);
    }
    if(sourcePortsIsSet_) {
        val[utility::conversions::to_string_t("source_ports")] = ModelBase::toJson(sourcePorts_);
    }

    return val;
}
bool RuleScopeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_users"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exception_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exception_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceptionIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ports"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePorts(refVal);
        }
    }
    return ok;
}


std::string RuleScopeRequest::getAction() const
{
    return action_;
}

void RuleScopeRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RuleScopeRequest::actionIsSet() const
{
    return actionIsSet_;
}

void RuleScopeRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string RuleScopeRequest::getDbIds() const
{
    return dbIds_;
}

void RuleScopeRequest::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool RuleScopeRequest::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void RuleScopeRequest::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string RuleScopeRequest::getDbNames() const
{
    return dbNames_;
}

void RuleScopeRequest::setDbNames(const std::string& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool RuleScopeRequest::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void RuleScopeRequest::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::string RuleScopeRequest::getDbUsers() const
{
    return dbUsers_;
}

void RuleScopeRequest::setDbUsers(const std::string& value)
{
    dbUsers_ = value;
    dbUsersIsSet_ = true;
}

bool RuleScopeRequest::dbUsersIsSet() const
{
    return dbUsersIsSet_;
}

void RuleScopeRequest::unsetdbUsers()
{
    dbUsersIsSet_ = false;
}

std::string RuleScopeRequest::getExceptionIps() const
{
    return exceptionIps_;
}

void RuleScopeRequest::setExceptionIps(const std::string& value)
{
    exceptionIps_ = value;
    exceptionIpsIsSet_ = true;
}

bool RuleScopeRequest::exceptionIpsIsSet() const
{
    return exceptionIpsIsSet_;
}

void RuleScopeRequest::unsetexceptionIps()
{
    exceptionIpsIsSet_ = false;
}

std::string RuleScopeRequest::getRuleName() const
{
    return ruleName_;
}

void RuleScopeRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleScopeRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleScopeRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string RuleScopeRequest::getSourceIps() const
{
    return sourceIps_;
}

void RuleScopeRequest::setSourceIps(const std::string& value)
{
    sourceIps_ = value;
    sourceIpsIsSet_ = true;
}

bool RuleScopeRequest::sourceIpsIsSet() const
{
    return sourceIpsIsSet_;
}

void RuleScopeRequest::unsetsourceIps()
{
    sourceIpsIsSet_ = false;
}

std::string RuleScopeRequest::getSourcePorts() const
{
    return sourcePorts_;
}

void RuleScopeRequest::setSourcePorts(const std::string& value)
{
    sourcePorts_ = value;
    sourcePortsIsSet_ = true;
}

bool RuleScopeRequest::sourcePortsIsSet() const
{
    return sourcePortsIsSet_;
}

void RuleScopeRequest::unsetsourcePorts()
{
    sourcePortsIsSet_ = false;
}

}
}
}
}
}


