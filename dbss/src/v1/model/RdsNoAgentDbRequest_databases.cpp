

#include "huaweicloud/dbss/v1/model/RdsNoAgentDbRequest_databases.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsNoAgentDbRequest_databases::RdsNoAgentDbRequest_databases()
{
    id_ = "";
    idIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    enterpriseId_ = "";
    enterpriseIdIsSet_ = false;
    enterpriseName_ = "";
    enterpriseNameIsSet_ = false;
}

RdsNoAgentDbRequest_databases::~RdsNoAgentDbRequest_databases() = default;

void RdsNoAgentDbRequest_databases::validate()
{
}

web::json::value RdsNoAgentDbRequest_databases::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enterpriseIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_id")] = ModelBase::toJson(enterpriseId_);
    }
    if(enterpriseNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_name")] = ModelBase::toJson(enterpriseName_);
    }

    return val;
}
bool RdsNoAgentDbRequest_databases::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseName(refVal);
        }
    }
    return ok;
}


std::string RdsNoAgentDbRequest_databases::getId() const
{
    return id_;
}

void RdsNoAgentDbRequest_databases::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::idIsSet() const
{
    return idIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetid()
{
    idIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getDbName() const
{
    return dbName_;
}

void RdsNoAgentDbRequest_databases::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getStatus() const
{
    return status_;
}

void RdsNoAgentDbRequest_databases::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::statusIsSet() const
{
    return statusIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getPort() const
{
    return port_;
}

void RdsNoAgentDbRequest_databases::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::portIsSet() const
{
    return portIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetport()
{
    portIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getIp() const
{
    return ip_;
}

void RdsNoAgentDbRequest_databases::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::ipIsSet() const
{
    return ipIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetip()
{
    ipIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getInstanceName() const
{
    return instanceName_;
}

void RdsNoAgentDbRequest_databases::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getVersion() const
{
    return version_;
}

void RdsNoAgentDbRequest_databases::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::versionIsSet() const
{
    return versionIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetversion()
{
    versionIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getType() const
{
    return type_;
}

void RdsNoAgentDbRequest_databases::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::typeIsSet() const
{
    return typeIsSet_;
}

void RdsNoAgentDbRequest_databases::unsettype()
{
    typeIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getEnterpriseId() const
{
    return enterpriseId_;
}

void RdsNoAgentDbRequest_databases::setEnterpriseId(const std::string& value)
{
    enterpriseId_ = value;
    enterpriseIdIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::enterpriseIdIsSet() const
{
    return enterpriseIdIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetenterpriseId()
{
    enterpriseIdIsSet_ = false;
}

std::string RdsNoAgentDbRequest_databases::getEnterpriseName() const
{
    return enterpriseName_;
}

void RdsNoAgentDbRequest_databases::setEnterpriseName(const std::string& value)
{
    enterpriseName_ = value;
    enterpriseNameIsSet_ = true;
}

bool RdsNoAgentDbRequest_databases::enterpriseNameIsSet() const
{
    return enterpriseNameIsSet_;
}

void RdsNoAgentDbRequest_databases::unsetenterpriseName()
{
    enterpriseNameIsSet_ = false;
}

}
}
}
}
}


