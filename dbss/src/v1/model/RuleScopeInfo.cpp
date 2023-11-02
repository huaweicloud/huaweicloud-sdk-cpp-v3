

#include "huaweicloud/dbss/v1/model/RuleScopeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleScopeInfo::RuleScopeInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    exceptionIps_ = "";
    exceptionIpsIsSet_ = false;
    sourceIps_ = "";
    sourceIpsIsSet_ = false;
    sourcePorts_ = "";
    sourcePortsIsSet_ = false;
    dbIds_ = "";
    dbIdsIsSet_ = false;
    dbNames_ = "";
    dbNamesIsSet_ = false;
    dbUsers_ = "";
    dbUsersIsSet_ = false;
    allAudit_ = false;
    allAuditIsSet_ = false;
}

RuleScopeInfo::~RuleScopeInfo() = default;

void RuleScopeInfo::validate()
{
}

web::json::value RuleScopeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(exceptionIpsIsSet_) {
        val[utility::conversions::to_string_t("exception_ips")] = ModelBase::toJson(exceptionIps_);
    }
    if(sourceIpsIsSet_) {
        val[utility::conversions::to_string_t("source_ips")] = ModelBase::toJson(sourceIps_);
    }
    if(sourcePortsIsSet_) {
        val[utility::conversions::to_string_t("source_ports")] = ModelBase::toJson(sourcePorts_);
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
    if(allAuditIsSet_) {
        val[utility::conversions::to_string_t("all_audit")] = ModelBase::toJson(allAudit_);
    }

    return val;
}
bool RuleScopeInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("all_audit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_audit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllAudit(refVal);
        }
    }
    return ok;
}


std::string RuleScopeInfo::getId() const
{
    return id_;
}

void RuleScopeInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleScopeInfo::idIsSet() const
{
    return idIsSet_;
}

void RuleScopeInfo::unsetid()
{
    idIsSet_ = false;
}

std::string RuleScopeInfo::getName() const
{
    return name_;
}

void RuleScopeInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleScopeInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RuleScopeInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleScopeInfo::getAction() const
{
    return action_;
}

void RuleScopeInfo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RuleScopeInfo::actionIsSet() const
{
    return actionIsSet_;
}

void RuleScopeInfo::unsetaction()
{
    actionIsSet_ = false;
}

std::string RuleScopeInfo::getStatus() const
{
    return status_;
}

void RuleScopeInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleScopeInfo::statusIsSet() const
{
    return statusIsSet_;
}

void RuleScopeInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RuleScopeInfo::getExceptionIps() const
{
    return exceptionIps_;
}

void RuleScopeInfo::setExceptionIps(const std::string& value)
{
    exceptionIps_ = value;
    exceptionIpsIsSet_ = true;
}

bool RuleScopeInfo::exceptionIpsIsSet() const
{
    return exceptionIpsIsSet_;
}

void RuleScopeInfo::unsetexceptionIps()
{
    exceptionIpsIsSet_ = false;
}

std::string RuleScopeInfo::getSourceIps() const
{
    return sourceIps_;
}

void RuleScopeInfo::setSourceIps(const std::string& value)
{
    sourceIps_ = value;
    sourceIpsIsSet_ = true;
}

bool RuleScopeInfo::sourceIpsIsSet() const
{
    return sourceIpsIsSet_;
}

void RuleScopeInfo::unsetsourceIps()
{
    sourceIpsIsSet_ = false;
}

std::string RuleScopeInfo::getSourcePorts() const
{
    return sourcePorts_;
}

void RuleScopeInfo::setSourcePorts(const std::string& value)
{
    sourcePorts_ = value;
    sourcePortsIsSet_ = true;
}

bool RuleScopeInfo::sourcePortsIsSet() const
{
    return sourcePortsIsSet_;
}

void RuleScopeInfo::unsetsourcePorts()
{
    sourcePortsIsSet_ = false;
}

std::string RuleScopeInfo::getDbIds() const
{
    return dbIds_;
}

void RuleScopeInfo::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool RuleScopeInfo::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void RuleScopeInfo::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string RuleScopeInfo::getDbNames() const
{
    return dbNames_;
}

void RuleScopeInfo::setDbNames(const std::string& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool RuleScopeInfo::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void RuleScopeInfo::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::string RuleScopeInfo::getDbUsers() const
{
    return dbUsers_;
}

void RuleScopeInfo::setDbUsers(const std::string& value)
{
    dbUsers_ = value;
    dbUsersIsSet_ = true;
}

bool RuleScopeInfo::dbUsersIsSet() const
{
    return dbUsersIsSet_;
}

void RuleScopeInfo::unsetdbUsers()
{
    dbUsersIsSet_ = false;
}

bool RuleScopeInfo::isAllAudit() const
{
    return allAudit_;
}

void RuleScopeInfo::setAllAudit(bool value)
{
    allAudit_ = value;
    allAuditIsSet_ = true;
}

bool RuleScopeInfo::allAuditIsSet() const
{
    return allAuditIsSet_;
}

void RuleScopeInfo::unsetallAudit()
{
    allAuditIsSet_ = false;
}

}
}
}
}
}


